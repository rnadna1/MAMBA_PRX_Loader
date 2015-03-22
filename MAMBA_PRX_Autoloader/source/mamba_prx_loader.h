#ifndef _MAMBA_PRX_LOADER_H_
#define _MAMBA_PRX_LOADER_H_

#define SYSCALL_TABLE_355			0x8000000000346570ULL
#define SYSCALL_TABLE_355D			0x8000000000361578ULL
#define SYSCALL_TABLE_421			0x800000000035BCA8ULL
#define SYSCALL_TABLE_421D			0x800000000037A1B0ULL
#define SYSCALL_TABLE_430			0x800000000035DBE0ULL
#define SYSCALL_TABLE_430D			0x800000000037C068ULL
#define SYSCALL_TABLE_431			0x800000000035DBE0ULL
#define SYSCALL_TABLE_440			0x800000000035E260ULL
#define SYSCALL_TABLE_441			0x800000000035E260ULL
#define SYSCALL_TABLE_441D			0x800000000037C9E8ULL
#define SYSCALL_TABLE_446			0x800000000035E860ULL
#define SYSCALL_TABLE_446D			0x800000000037CFE8ULL
#define SYSCALL_TABLE_450			0x800000000035F0D0ULL
#define SYSCALL_TABLE_450D			0x8000000000383658ULL
#define SYSCALL_TABLE_453			0x800000000035F300ULL
#define SYSCALL_TABLE_453D			0x8000000000385108ULL 
#define SYSCALL_TABLE_455			0x8000000000362680ULL
#define SYSCALL_TABLE_455D			0x8000000000388480ULL
#define SYSCALL_TABLE_460			0x8000000000363A18ULL
#define SYSCALL_TABLE_465			0x8000000000363A18ULL
#define SYSCALL_TABLE_465D			0x800000000038A120ULL
#define SYSCALL_TABLE_470			0x8000000000363B60ULL

#define HV_START_OFFSET_355			0x0			
#define HV_START_OFFSET_355D		0x0
#define HV_START_OFFSET_421			0x370A28			
#define HV_START_OFFSET_421D		0x370A28
#define HV_START_OFFSET_430			0x370AA8
#define HV_START_OFFSET_430D		0x370AA8
#define HV_START_OFFSET_431			0x370AA8
#define HV_START_OFFSET_440			0x370AA8
#define HV_START_OFFSET_441			0x370AA8
#define HV_START_OFFSET_441D		0x370AA8
#define HV_START_OFFSET_446			0x370AA8
#define HV_START_OFFSET_446D		0x370AA8
#define HV_START_OFFSET_450			0x370AA8
#define HV_START_OFFSET_450D		0x370AA8
#define HV_START_OFFSET_453			0x370AA8
#define HV_START_OFFSET_453D		0x370AA8
#define HV_START_OFFSET_455			0x370F28
#define HV_START_OFFSET_455D		0x370F28
#define HV_START_OFFSET_460			0x370F28     
#define HV_START_OFFSET_465			0x370F28 
#define HV_START_OFFSET_465D		0x370F28
#define HV_START_OFFSET_470			0x370F28

#define OFFSET_FIX_355		0x055EA0
#define OFFSET_FIX_355D		0x05978C
#define OFFSET_FIX_421		0x057020
#define OFFSET_FIX_421D		0x05A938
#define OFFSET_FIX_430		0x057170
#define OFFSET_FIX_430D		0x05AA88
#define OFFSET_FIX_431		0x057174
#define OFFSET_FIX_440		0x0560BC
#define OFFSET_FIX_441		0x0560C0
#define OFFSET_FIX_441D		0x0599D8
#define OFFSET_FIX_446		0x0560C0
#define OFFSET_FIX_446D		0x0599D8
#define OFFSET_FIX_450		0x0560BC
#define OFFSET_FIX_450D		0x059A8C
#define OFFSET_FIX_453		0x0560C0
#define OFFSET_FIX_453D		0x059A90
#define OFFSET_FIX_455		0x056380
#define OFFSET_FIX_455D		0x059D50
#define OFFSET_FIX_460		0x056588
#define OFFSET_FIX_465		0x05658C
#define OFFSET_FIX_465D		0x059F5C
#define OFFSET_FIX_470		0x056588

#define OFFSET_2_FIX_355		0x07af68
#define OFFSET_2_FIX_355D		0x07EF60
#define OFFSET_2_FIX_421		0x05AA58
#define OFFSET_2_FIX_421D		0x05E370
#define OFFSET_2_FIX_430		0x05ABA8
#define OFFSET_2_FIX_430D		0x05E4C0
#define OFFSET_2_FIX_431		0x05ABAC
#define OFFSET_2_FIX_440		0x059AF4
#define OFFSET_2_FIX_441		0x059AF8
#define OFFSET_2_FIX_441D		0x05D410
#define OFFSET_2_FIX_446		0x059AF8
#define OFFSET_2_FIX_446D		0x05D410
#define OFFSET_2_FIX_450		0x059AF4
#define OFFSET_2_FIX_450D		0x05D4C4
#define OFFSET_2_FIX_453		0x059AF8
#define OFFSET_2_FIX_453D		0x05D4C8
#define OFFSET_2_FIX_455		0x05A2F0
#define OFFSET_2_FIX_455D		0x05DCC0
#define OFFSET_2_FIX_460		0x05A658
#define OFFSET_2_FIX_465		0x05A65C
#define OFFSET_2_FIX_465D		0x05E02C
#define OFFSET_2_FIX_470		0x05A6E0

//**HABIB**//
#define OFFSET_FIX_17_355			0x0
#define OFFSET_FIX_17_355D			0x0
#define OFFSET_FIX_17_421			0x0
#define OFFSET_FIX_17_421D			0x0
#define OFFSET_FIX_17_430			0x0
#define OFFSET_FIX_17_430D			0x0
#define OFFSET_FIX_17_431			0x0
#define OFFSET_FIX_17_440			0x0
#define OFFSET_FIX_17_441			0x0
#define OFFSET_FIX_17_441D			0x0
#define OFFSET_FIX_17_446			0x0
#define OFFSET_FIX_17_446D			0x0
#define OFFSET_FIX_17_450			0x0
#define OFFSET_FIX_17_450D			0x0
#define OFFSET_FIX_17_453			0x0
#define OFFSET_FIX_17_453D			0x0
#define OFFSET_FIX_17_455			0x0
#define OFFSET_FIX_17_455D			0x0
#define OFFSET_FIX_17_460			0x058DAC
#define OFFSET_FIX_17_465			0x058DB0
#define OFFSET_FIX_17_465D			0x05C780
#define OFFSET_FIX_17_470			0x058E18

#define OFFSET_FIX_2B_355			0x0
#define OFFSET_FIX_2B_355D			0x0
#define OFFSET_FIX_2B_421			0x0
#define OFFSET_FIX_2B_421D			0x0
#define OFFSET_FIX_2B_430			0x0
#define OFFSET_FIX_2B_430D			0x0
#define OFFSET_FIX_2B_431			0x0
#define OFFSET_FIX_2B_440			0x0
#define OFFSET_FIX_2B_441			0x0
#define OFFSET_FIX_2B_441D			0x0
#define OFFSET_FIX_2B_446			0x0
#define OFFSET_FIX_2B_446D			0x0
#define OFFSET_FIX_2B_450			0x0
#define OFFSET_FIX_2B_450D			0x0
#define OFFSET_FIX_2B_453			0x0
#define OFFSET_FIX_2B_453D			0x0
#define OFFSET_FIX_2B_455			0x0
#define OFFSET_FIX_2B_455D			0x0
#define OFFSET_FIX_2B_460			0x055C58
#define OFFSET_FIX_2B_465			0x055C5C
#define OFFSET_FIX_2B_465D			0x05962C
#define OFFSET_FIX_2B_470			0x055C58

//***Dean***
#define OFFSET_FIX_2B17_355			0x0
#define OFFSET_FIX_2B17_355D		0x0
#define OFFSET_FIX_2B17_421			0x0
#define OFFSET_FIX_2B17_421D		0x0
#define OFFSET_FIX_2B17_430			0x0
#define OFFSET_FIX_2B17_430D		0x0
#define OFFSET_FIX_2B17_431			0x0
#define OFFSET_FIX_2B17_440			0x0
#define OFFSET_FIX_2B17_441			0x0
#define OFFSET_FIX_2B17_441D		0x0
#define OFFSET_FIX_2B17_446			0x0
#define OFFSET_FIX_2B17_446D		0x0
#define OFFSET_FIX_2B17_450			0x0
#define OFFSET_FIX_2B17_450D		0x0
#define OFFSET_FIX_2B17_453			0x0
#define OFFSET_FIX_2B17_453D		0x0
#define OFFSET_FIX_2B17_455			0x0
#define OFFSET_FIX_2B17_455D		0x0
#define OFFSET_FIX_2B17_460			0x0
#define OFFSET_FIX_2B17_465			0x2302F0
#define OFFSET_FIX_2B17_465D		0x2367CC
#define OFFSET_FIX_2B17_470			0x2275EC

//***Dean***
#define OFFSET_FIX_LIC_355			0x0
#define OFFSET_FIX_LIC_355D			0x0
#define OFFSET_FIX_LIC_421			0x0
#define OFFSET_FIX_LIC_421D			0x0
#define OFFSET_FIX_LIC_430			0x0
#define OFFSET_FIX_LIC_430D			0x0
#define OFFSET_FIX_LIC_431			0x0
#define OFFSET_FIX_LIC_440			0x0
#define OFFSET_FIX_LIC_441			0x0
#define OFFSET_FIX_LIC_441D			0x0
#define OFFSET_FIX_LIC_446			0x0
#define OFFSET_FIX_LIC_446D			0x0
#define OFFSET_FIX_LIC_450			0x0
#define OFFSET_FIX_LIC_450D			0x0
#define OFFSET_FIX_LIC_453			0x0
#define OFFSET_FIX_LIC_453D			0x0
#define OFFSET_FIX_LIC_455			0x0
#define OFFSET_FIX_LIC_455D			0x0
#define OFFSET_FIX_LIC_460			0x0
#define OFFSET_FIX_LIC_465			0x056230
#define OFFSET_FIX_LIC_465D			0x059C00
#define OFFSET_FIX_LIC_470			0x05622C

#define OFFSET_FIX_3C_355		0x28A404
#define OFFSET_FIX_3C_355D		0x2909E8
#define OFFSET_FIX_3C_421		0x296268
#define OFFSET_FIX_3C_421D		0x29C8C4
#define OFFSET_FIX_3C_430		0x2979DC
#define OFFSET_FIX_3C_430D		0x29E038
#define OFFSET_FIX_3C_431		0x2979E4
#define OFFSET_FIX_3C_440		0x296DEC
#define OFFSET_FIX_3C_441		0x296DF4
#define OFFSET_FIX_3C_441D		0x29D450
#define OFFSET_FIX_3C_446		0x297314
#define OFFSET_FIX_3C_446D		0x29D970
#define OFFSET_FIX_3C_450		0x26F620
#define OFFSET_FIX_3C_450D		0x275D3C
#define OFFSET_FIX_3C_453		0x26F7F4
#define OFFSET_FIX_3C_453D		0x275F10
#define OFFSET_FIX_3C_455		0x271040
#define OFFSET_FIX_3C_455D		0x27775C 
#define OFFSET_FIX_3C_460		0x26FDD8
#define OFFSET_FIX_3C_465		0x26FDE0
#define OFFSET_FIX_3C_465D		0x2764FC
#define OFFSET_FIX_3C_470		0x2670DC


int mamba_prx_loader(int mamba_off, int noplugins);

#endif