#include "tar.h"
#include "libk/vector.h"
#include <libk/macros.h>

u32 parse_size(u8 *in) {

    u32 size = 0;
    u32 j;
    u32 count = 1;

    for (j = 11; j > 0; j--, count *= 8)
        size += ((in[j - 1] - '0') * count);

    return size;
}
vector_static(struct tar_header *, headers);

struct tar_contents parse_tar(struct tar_header *header, UNUSED u64 file_size) {
    vector_init(&headers);

    u32 i = 0;

    struct tar_header *_header = header;

    while (1) {
        u64 traversed_size = (u64)_header - (u64)header;
        if (_header->filename[0] == 0 || traversed_size >= file_size) {
            struct tar_contents contents;
            contents.hdr_num = i;
            contents.headers = headers.data;
            return contents;
        }

        u64 size = parse_size(_header->size);

        vector_push_back(&headers, _header);

        _header =
            (struct tar_header *)((u64)_header + ((size / 512) + 1) * 512);

        if (size % 512)
            _header = (struct tar_header *)((u64)_header + 512);

        i++;
    }
}
struct tar_header *find_file(struct tar_contents *findin, char *name) {
    for (usize i = 0; i < findin->hdr_num; i++) {
        struct tar_header *hdr = findin->headers[i];
        if (strcmp((char *)hdr->filename, name) == 0) {
            return hdr;
        }
    }
    return 0;
}