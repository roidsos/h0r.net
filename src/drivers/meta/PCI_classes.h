#ifndef __PCI_CLASSES_H__
#define __PCI_CLASSES_H__

enum pci_class {
    PCI_CLASS_NOT_DEFINED = 0x00,
    PCI_CLASS_MASS_STORAGE = 0x01,
    PCI_CLASS_NETWORK = 0x02,
    PCI_CLASS_DISPLAY = 0x03,
    PCI_CLASS_MULTIMEDIA = 0x04,
    PCI_CLASS_MEMORY = 0x05,
    PCI_CLASS_BRIDGE = 0x06,
    PCI_CLASS_COMMUNICATIONS = 0x07,
    PCI_CLASS_SYSTEM = 0x08,
    PCI_CLASS_INPUT = 0x09,
    PCI_CLASS_DOCKING = 0x0A,
    PCI_CLASS_PROCESSOR = 0x0B,
    PCI_CLASS_SERIAL = 0x0C,
    PCI_CLASS_WIRELESS = 0x0D,
    PCI_CLASS_INTELLIGENT_IO = 0x0E,
    PCI_CLASS_SATELLITE = 0x0F,
    PCI_CLASS_CRYPTO = 0x10,
    PCI_CLASS_SIGNAL_PROCESSING = 0x11,
    PCI_CLASS_ACCELERATOR = 0x12,
    PCI_CLASS_NON_ESSENTIAL = 0x13,
    PCI_CLASS_COPROCESSOR = 0x40,
    PCI_CLASS_OTHER = 0xFF
};
enum pci_subclass_undef {
    PCI_SUBCLASS_UNDEF_NO_VGA = 0x00,
    PCI_SUBCLASS_UNDEF_VGA = 0x01
};
enum pci_subclass_mass_storage {
    PCI_SUBCLASS_MASS_STORAGE_SCSI = 0x00,
    PCI_SUBCLASS_MASS_STORAGE_IDE = 0x01,
    PCI_SUBCLASS_MASS_STORAGE_FLOPPY = 0x02,
    PCI_SUBCLASS_MASS_STORAGE_IPI = 0x03,
    PCI_SUBCLASS_MASS_STORAGE_RAID = 0x04,
    PCI_SUBCLASS_MASS_STORAGE_ATA = 0x05,
    PCI_SUBCLASS_MASS_STORAGE_SATA = 0x06,
    PCI_SUBCLASS_MASS_STORAGE_SAS = 0x07,
    PCI_SUBCLASS_MASS_STORAGE_NVM = 0x08,
    PCI_SUBCLASS_MASS_STORAGE_OTHER = 0x80
};
enum pci_subclass_network {
    PCI_SUBCLASS_NETWORK_ETHERNET = 0x00,
    PCI_SUBCLASS_NETWORK_TOKEN_RING = 0x01,
    PCI_SUBCLASS_NETWORK_FDDI = 0x02,
    PCI_SUBCLASS_NETWORK_ATM = 0x03,
    PCI_SUBCLASS_NETWORK_ISDN = 0x04,
    PCI_SUBCLASS_NETWORK_WORLDFIP = 0x05,
    PCI_SUBCLASS_NETWORK_PICMG214 = 0x06,
    PCI_SUBCLASS_NETWORK_INFINIBAND = 0x07,
    PCI_SUBCLASS_NETWORK_FABRIC = 0x08,
    PCI_SUBCLASS_NETWORK_OTHER = 0x80
};
enum pci_subclass_display {
    PCI_SUBCLASS_DISPLAY_VGA = 0x00,
    PCI_SUBCLASS_DISPLAY_XGA = 0x01,
    PCI_SUBCLASS_DISPLAY_3D = 0x02,
    PCI_SUBCLASS_DISPLAY_OTHER = 0x80
};
enum pci_subclass_multimedia {
    PCI_SUBCLASS_MULTIMEDIA_VIDEO = 0x00,
    PCI_SUBCLASS_MULTIMEDIA_AUDIO = 0x01,
    PCI_SUBCLASS_MULTIMEDIA_TELEPHONY = 0x02,
    PCI_SUBCLASS_MULTIMEDIA_OTHER = 0x80
};
enum pci_subclass_memory {
    PCI_SUBCLASS_MEMORY_RAM = 0x00,
    PCI_SUBCLASS_MEMORY_FLASH = 0x01,
    PCI_SUBCLASS_MEMORY_OTHER = 0x80
};
enum pci_subclass_bridge {
    PCI_SUBCLASS_BRIDGE_HOST = 0x00,
    PCI_SUBCLASS_BRIDGE_ISA = 0x01,
    PCI_SUBCLASS_BRIDGE_EISA = 0x02,
    PCI_SUBCLASS_BRIDGE_MCA = 0x03,
    PCI_SUBCLASS_BRIDGE_PCI = 0x04,
    PCI_SUBCLASS_BRIDGE_PCMCIA = 0x05,
    PCI_SUBCLASS_BRIDGE_NUBUS = 0x06,
    PCI_SUBCLASS_BRIDGE_CARDBUS = 0x07,
    PCI_SUBCLASS_BRIDGE_RACEWAY = 0x08,
    PCI_SUBCLASS_BRIDGE_OTHER_PCI = 0x09,
    PCI_SUBCLASS_BRIDGE_INFINIBAND_TO_PCI = 0x0A,
    PCI_SUBCLASS_BRIDGE_OTHER = 0x80
};
enum pci_subclass_communication {
    PCI_SUBCLASS_COMMUNICATIONS_SERIAL = 0x00,
    PCI_SUBCLASS_COMMUNICATIONS_PARALLEL = 0x01,
    PCI_SUBCLASS_COMMUNICATIONS_MULTIPORT_SERIAL = 0x02,
    PCI_SUBCLASS_COMMUNICATIONS_MODEM = 0x03,
    PCI_SUBCLASS_COMMUNICATIONS_IEEE_488 = 0x04,
    PCI_SUBCLASS_COMMUNICATIONS_SMART_CARD = 0x05,
    PCI_SUBCLASS_COMMUNICATIONS_OTHER = 0x80
};
enum pci_subclass_system {
    PCI_SUBCLASS_SYSTEM_PIC = 0x00,
    PCI_SUBCLASS_SYSTEM_DMA = 0x01,
    PCI_SUBCLASS_SYSTEM_TIMER = 0x02,
    PCI_SUBCLASS_SYSTEM_RTC = 0x03,
    PCI_SUBCLASS_SYSTEM_HOTPLUG = 0x04,
    PCI_SUBCLASS_SYSTEM_SD_HOST = 0x05,
    PCI_SUBCLASS_SYSTEM_IOMMU = 0x06,
    PCI_SUBCLASS_SYSTEM_OTHER = 0x80
};
enum pci_subclass_input {
    PCI_SUBCLASS_INPUT_KEYBOARD = 0x00,
    PCI_SUBCLASS_INPUT_PEN = 0x01,
    PCI_SUBCLASS_INPUT_MOUSE = 0x02,
    PCI_SUBCLASS_INPUT_SCANNER = 0x03,
    PCI_SUBCLASS_INPUT_GAMEPORT = 0x04,
    PCI_SUBCLASS_INPUT_OTHER = 0x80
};
enum pci_subclass_docking {
    PCI_SUBCLASS_DOCKING_GENERIC = 0x00,
    PCI_SUBCLASS_DOCKING_OTHER = 0x80
};
enum pci_subclass_processor {
    PCI_SUBCLASS_PROCESSOR_386 = 0x00,
    PCI_SUBCLASS_PROCESSOR_486 = 0x01,
    PCI_SUBCLASS_PROCESSOR_PENTIUM = 0x02,
    PCI_SUBCLASS_PROCESSOR_ALPHA = 0x03,
    PCI_SUBCLASS_PROCESSOR_POWERPC = 0x04,
    PCI_SUBCLASS_PROCESSOR_MIPS = 0x05,
    PCI_SUBCLASS_PROCESSOR_COPROCESSOR = 0x06,
    PCI_SUBCLASS_PROCESSOR_OTHER = 0x80
};
enum pci_subclass_serial {
    PCI_SUBCLASS_SERIAL_FIREWIRE = 0x00,
    PCI_SUBCLASS_SERIAL_ACCESSBUS = 0x01,
    PCI_SUBCLASS_SERIAL_SSA = 0x02,
    PCI_SUBCLASS_SERIAL_USB = 0x03,
    PCI_SUBCLASS_SERIAL_FIBRE = 0x04,
    PCI_SUBCLASS_SERIAL_SMBUS = 0x05,
    PCI_SUBCLASS_SERIAL_INFINIBAND = 0x06,
    PCI_SUBCLASS_SERIAL_IPMI = 0x07,
    PCI_SUBCLASS_SERIAL_SERCOS = 0x08,
    PCI_SUBCLASS_SERIAL_CANBUS = 0x09,
    PCI_SUBCLASS_SERIAL_OTHER = 0x80
};
enum pci_subclass_wireless {
    PCI_SUBCLASS_WIRELESS_IRDA = 0x00,
    PCI_SUBCLASS_WIRELESS_IR = 0x01,
    PCI_SUBCLASS_WIRELESS_RF = 0x02,
    PCI_SUBCLASS_WIRELESS_BLUETOOTH = 0x03,
    PCI_SUBCLASS_WIRELESS_BROADBAND = 0x04,
    PCI_SUBCLASS_WIRELESS_8021A = 0x05,
    PCI_SUBCLASS_WIRELESS_8021B = 0x06,
    PCI_SUBCLASS_WIRELESS_OTHER = 0x80
};
enum pci_subclass_intelligent_io {
    PCI_SUBCLASS_INTELLIGENT_IO_I2O = 0x00,
};
enum pci_subclass_satellite {
    PCI_SUBCLASS_SATELLITE_TV = 0x00,
    PCI_SUBCLASS_SATELLITE_AUDIO = 0x01,
    PCI_SUBCLASS_SATELLITE_VOICE = 0x02,
    PCI_SUBCLASS_SATELLITE_DATA = 0x03,
};
enum pci_subclass_crypto {
    PCI_SUBCLASS_CRYPTO_NET = 0x04,
    PCI_SUBCLASS_CRYPTO_ENTERTAINMENT = 0x05, //entertainment ctrypto??????????????
    PCI_SUBCLASS_CRYPTO_OTHER = 0x80
};
enum pci_subclass_signal_processing {
    PCI_SUBCLASS_SIGNAL_PROCESSING_DPIO = 0x00,
    PCI_SUBCLASS_SIGNAL_PROCESSING_PERF_COUNTER = 0x01,
    PCI_SUBCLASS_SIGNAL_PROCESSING_SYNCHRONIZER = 0x02,
    PCI_SUBCLASS_SIGNAL_PROCESSING_MANAGEMENT = 0x03,
    PCI_SUBCLASS_SIGNAL_PROCESSING_OTHER = 0x80
};
enum pci_progif_storage_IDE {
    PCI_PROGIF_STORAGE_IDE_COMPAT = 0x00,
    PCI_PROGIF_STORAGE_IDE_NATIVE = 0x05,
    PCI_PROGIF_STORAGE_IDE_COMPAT_PLUS = 0x0A,
    PCI_PROGIF_STORAGE_IDE_NATIVE_PLUS = 0x0F,
    PCI_PROGIF_STORAGE_IDE_COMPAT_MASTERING = 0x80,
    PCI_PROGIF_STORAGE_IDE_NATIVE_MASTERING = 0x85,
    PCI_PROGIF_STORAGE_IDE_COMPAT_PLUS_MASTERING = 0x8A,
    PCI_PROGIF_STORAGE_IDE_NATIVE_PLUS_MASTERING = 0x8F
};
enum pci_progif_storage_ATA {
    PCI_PROGIF_STORAGE_ATA_SINGLE_DMA = 0x00,
    PCI_PROGIF_STORAGE_ATA_CHAIN_DMA = 0x01,
};
enum pci_progif_storage_SATA {
    PCI_PROGIF_STORAGE_SATA_VENDOR_SPECIFIC = 0x00,
    PCI_PROGIF_STORAGE_SATA_AHCI1 = 0x01,
    PCI_PROGIF_STORAGE_SATA_SSB = 0x02,
};
enum pci_progif_storage_SAS {
    PCI_PROGIF_STORAGE_SCSI_SAS = 0x00,
    PCI_PROGIF_STORAGE_SCSI_SSB = 0x01
};
enum pci_progif_storage_NVM {
    PCI_PROGIF_STORAGE_NVMHCI = 0x01,
    PCI_PROGIF_STORAGE_NVME = 0x02
};
enum pci_progif_display_VGA {
    PCI_PROGIF_DISPLAY_VGA_VGA = 0x00,
    PCI_PROGIF_DISPLAY_VGA_8514 = 0x01
};
enum pci_progif_bridge_PCI {
    PCI_PROGIF_BRIDGE_PCI_NORMAL_DECODE = 0x00,
    PCI_PROGIF_BRIDGE_PCI_SUBTRACTIVE_DECODE = 0x01
};
enum pci_progif_bridge_raceway {
    PCI_PROGIF_BRIDGE_RACEWAY_TRANSPARENT = 0x00,
    PCI_PROGIF_BRIDGE_RACEWAY_ENDPOINT = 0x01
};
enum pci_progif_bridge_other_pci {
    PCI_PROGIF_BRIDGE_OTHER_PCI_PRIMARY = 0x00,
    PCI_PROGIF_BRIDGE_OTHER_PCI_SECONDARY = 0x01
};
enum pci_progif_communications_serial {
    PCI_PROGIF_COMMUNICATIONS_SERIAL_8250 = 0x00,
    PCI_PROGIF_COMMUNICATIONS_SERIAL_16450 = 0x01,
    PCI_PROGIF_COMMUNICATIONS_SERIAL_16550 = 0x02,
    PCI_PROGIF_COMMUNICATIONS_SERIAL_16650 = 0x03,
    PCI_PROGIF_COMMUNICATIONS_SERIAL_16750 = 0x04,
    PCI_PROGIF_COMMUNICATIONS_SERIAL_16850 = 0x05,
    PCI_PROGIF_COMMUNICATIONS_SERIAL_16950 = 0x06
};
enum pci_progif_communications_parallel {
    PCI_PROGIF_COMMUNICATIONS_PARALLEL_STANDARD = 0x00,
    PCI_PROGIF_COMMUNICATIONS_PARALLEL_BIDIRECTION = 0x01,
    PCI_PROGIF_COMMUNICATIONS_PARALLEL_ECP1X = 0x02,
    PCI_PROGIF_COMMUNICATIONS_PARALLEL_IEEE_1284_CONTROLLER = 0x03,
    PCI_PROGIF_COMMUNICATIONS_PARALLEL_IEEE_1284_DEVICE = 0x04
};
enum pci_progif_communications_modem {
    PCI_PROGIF_COMMUNICATIONS_MODEM_GENERIC = 0x00,
    PCI_PROGIF_COMMUNICATIONS_MODEM_HAYES_16450 = 0x01,
    PCI_PROGIF_COMMUNICATIONS_MODEM_HAYES_16550 = 0x02,
    PCI_PROGIF_COMMUNICATIONS_MODEM_HAYES_16650 = 0x03,
    PCI_PROGIF_COMMUNICATIONS_MODEM_HAYES_16750 = 0x04,
};
enum pci_progif_system_PIC {
    PCI_PROGIF_SYSTEM_PIC_8259 = 0x00,
    PCI_PROGIF_SYSTEM_PIC_ISA = 0x01,
    PCI_PROGIF_SYSTEM_PIC_EISA = 0x02,
    PCI_PROGIF_SYSTEM_PIC_IOAPIC = 0x03,
    PCI_PROGIF_SYSTEM_PIC_IOXAPIC = 0x04
};
enum pci_progif_system_DMA {
    PCI_PROGIF_SYSTEM_DMA_8237 = 0x00,
    PCI_PROGIF_SYSTEM_DMA_ISA = 0x01,
    PCI_PROGIF_SYSTEM_DMA_EISA = 0x02
};
enum pci_progif_system_timer {
    PCI_PROGIF_SYSTEM_TIMER_8254 = 0x00,
    PCI_PROGIF_SYSTEM_TIMER_ISA = 0x01,
    PCI_PROGIF_SYSTEM_TIMER_EISA = 0x02,
    PCI_PROGIF_SYSTEM_TIMER_HPET = 0x03
};
enum pci_progif_system_RTC {
    PCI_PROGIF_SYSTEM_RTC_GENERIC = 0x00,
    PCI_PROGIF_SYSTEM_RTC_ISA = 0x01,
};
enum pci_progif_serial_firewire {
    PCI_PROGIF_SERIAL_FIREWIRE_GENERIC = 0x00,
    PCI_PROGIF_SERIAL_FIREWIRE_OHCI = 0x01
};
enum pci_progif_serial_USB {
    PCI_PROGIF_SERIAL_USB_UHCI = 0x00,
    PCI_PROGIF_SERIAL_USB_OHCI = 0x01,
    PCI_PROGIF_SERIAL_USB_EHCI = 0x02,
    PCI_PROGIF_SERIAL_USB_XHCI = 0x03,
    PCI_PROGIF_SERIAL_USB_UNKNOWN = 0x80,
    PCI_PROGIF_SERIAL_USB_DEVICE = 0xFE
};
enum pci_progif_serial_IPMI {
    PCI_PROGIF_SERIAL_IPMI_SMIC = 0x00,
    PCI_PROGIF_SERIAL_IPMI_KEYBOARD = 0x01,
    PCI_PROGIF_SERIAL_IPMI_BLOCK_TRANSFER = 0x02
};
#endif // __PCI_CLASSES_H__