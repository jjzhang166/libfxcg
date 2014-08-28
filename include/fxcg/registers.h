#define P00CR 0xA4050100
#define P00DR (P00CR+0x20)
#define P01CR (P00CR+2)
#define P01DR (P01CR+0x20)
#define P02CR (P01CR+2)
#define P02DR (P02CR+0x20)
#define P03CR (P02CR+2)
#define P03DR (P03CR+0x20)
#define P04CR (P03CR+2)
#define P04DR (P04CR+0x20)
#define P05CR (P04CR+2)
#define P05DR (P05CR+0x20)
#define P06CR (P05CR+2)
#define P06DR (P06CR+0x20)
#define P07CR (P06CR+2)
#define P07DR (P07CR+0x20)
#define P08CR (P07CR+2)
#define P08DR (P08CR+0x20)
#define P09CR (P08CR+2)
#define P09DR (P09CR+0x20)
#define P0ACR (P09CR+2)
#define P0ADR (P0ACR+0x20)
#define P0BCR (P0ACR+2)
#define P0BDR (P0BCR+0x20)
#define P0CCR (P0BCR+2)
#define P0CDR (P0CCR+0x20)
#define P0DCR (P0CCR+2)
#define P0DDR (P0DCR+0x20)
#define P0ECR (P0DCR+2)
#define P0EDR (P0ECR+0x20)
#define P0FCR (P0ECR+2)
#define P0FDR (P0FCR+0x20)

#define P10CR 0xA4050140
#define P10DR (P10CR+0x20)
#define P11CR (P10CR+2)
#define P11DR (P11CR+0x20)
#define P12CR (P11CR+2)
#define P12DR (P12CR+0x20)
#define P13CR (P12CR+2)
#define P13DR (P13CR+0x20)
#define P14CR (P13CR+2)
#define P14DR (P14CR+0x20)
#define P15CR (P14CR+2)
#define P15DR (P15CR+0x20)
#define P16CR (P15CR+2)
#define P16DR (P16CR+0x20)
#define P17CR (P16CR+2)
#define P17DR (P17CR+0x20)
#define P18CR (P17CR+2)
#define P18DR (P18CR+0x20)
#define P19CR (P18CR+2)
#define P19DR (P19CR+0x20)
#define P1ACR (P19CR+2)
#define P1ADR (P1ACR+0x20)
#define P1BCR (P1ACR+2)
#define P1BDR (P1BCR+0x20)
#define P1CCR (P1BCR+2)
#define P1CDR (P1CCR+0x20)
#define P1DCR (P1CCR+2)
#define P1DDR (P1DCR+0x20)
#define P1ECR (P1DCR+2)
#define P1EDR (P1ECR+0x20)
#define P1FCR (P1ECR+2)
#define P1FDR (P1FCR+0x20)

//
#define P7305_SERIAL_DIRECT_PORTCR P08CR
#define P7305_SERIAL_DIRECT_PORTDR P08DR
#define P7305_SERIAL_TXD_BIT 2
#define P7305_SERIAL_RXD_BIT 3

//
#define P7305_ALT_SERIAL_DIRECT_PORTCR P0ACR
#define P7305_ALT_SERIAL_DIRECT_PORTDR P0ADR
#define P7305_ALT_SERIAL_RXD_BIT 2
#define P7305_ALT_SERIAL_TXD_BIT 3

//  0 0 0 0  1 1 0 0
#define P11DR_ENABLE_SERIAL 0x0C
// 00000000 01000000
#define P11CR_ENABLE_SERIAL 0x0040
// 00000000 11000000
#define P11CR_ENABLE_SERIAL_MASK 0x00C0

#define HIZCRE 0xA4050128
#define HIZE0 1

#define MSTPCR0 0xA4150030
#define MSTP007 0xFFFFFF7F	// SCIF0
#define MSTP017 0xFFFDFFFF	// UBC
#define MSTP024 0xFEFFFFFF	// FPU
// 1111 1111 1111 1111 1111 1111 1111 1111

#define P7305_EXTRA_TMU0_START 0xA44D0030
#define P7305_EXTRA_TMU0_CONSTANT 0xA44D0034
#define P7305_EXTRA_TMU0_COUNT 0xA44D0038
#define P7305_EXTRA_TMU0_CONTROL 0xA44D003C

#define P7305_EXTRA_TMU1_START 0xA44D0050
#define P7305_EXTRA_TMU1_CONSTANT 0xA44D0054
#define P7305_EXTRA_TMU1_COUNT 0xA44D0058
#define P7305_EXTRA_TMU1_CONTROL 0xA44D005C

#define P7305_EXTRA_TMU2_START 0xA44D0070
#define P7305_EXTRA_TMU2_CONSTANT 0xA44D0074
#define P7305_EXTRA_TMU2_COUNT 0xA44D0078
#define P7305_EXTRA_TMU2_CONTROL 0xA44D007C

#define P7305_EXTRA_TMU3_START 0xA44D0090
#define P7305_EXTRA_TMU3_CONSTANT 0xA44D0094
#define P7305_EXTRA_TMU3_COUNT 0xA44D0098
#define P7305_EXTRA_TMU3_CONTROL 0xA44D009C

#define P7305_EXTRA_TMU4_START 0xA44D00B0
#define P7305_EXTRA_TMU4_CONSTANT 0xA44D00B4
#define P7305_EXTRA_TMU4_COUNT 0xA44D00B8
#define P7305_EXTRA_TMU4_CONTROL 0xA44D00BC

#define P7305_EXTRA_TMU5_START 0xA44D00D0
#define P7305_EXTRA_TMU5_CONSTANT 0xA44D00D4
#define P7305_EXTRA_TMU5_COUNT 0xA44D00D8
#define P7305_EXTRA_TMU5_CONTROL 0xA44D00DC

#define RTC_port 0xA413FEC0

// 7305 User Break Controller
#define CBR0 0xFF200000
#define CRR0 0xFF200004
#define CAR0 0xFF200008
#define CAMR0 0xFF20000C
#define CBR1 0xFF200020
#define CRR1 0xFF200024
#define CAR1 0xFF200028
#define CAMR1 0xFF20002C
#define CDR1 0xFF200030
#define CDMR1 0xFF200034
#define CETR1 0xFF200038
#define CCMFR 0xFF200600
#define CBCR 0xFF200620
