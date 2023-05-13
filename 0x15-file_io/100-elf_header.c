#include "main.h"

/**
 * elf_checker - checks elf
 * @e_ident: e_ident
 */
void elf_checker(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127)
			if (e_ident[i] != 'E')
				if (e_ident[i] != 'L')
					if (e_ident[i] != 'F')
					{
						dprintf(STDERR_FILENO, "Error, the format not elf format\n");
						exit(98);
					}
	}
}

/**
 * get_magic - gets the magic
 * @e_ident: e_ident
 */
void get_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i != EI_NIDENT - 1)
			printf(" ");
		else
			printf("\n");
	}
}

/**
 * get_class - gets class
 * @e_ident: e_ident
 */
void get_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
}

/**
 * get_data - gets data
 * @e_ident: e_ident
 */
void get_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	if (e_ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
}

/**
 * get_version - gets the version
 * @e_ident: e_ident
 */
void get_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
			e_ident[EI_VERSION]);
	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * get_osabi - gets the OS or ABI
 * @e_ident: e_ident
 */
void get_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	if (e_ident[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}

/**
 * get_abiversion
 * @e_ident: e_ident
 */
void get_abiversion(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * get_type - gets type
 * @e_ident: e_ident
 * @type: type
 */
void get_type(unsigned char *e_ident, unsigned int type)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

	if (type == ET_NONE)
		printf("NONE (None)\n");
	else if (type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}
/**
 * get_entry - gets entry
 * @e_ident: e_ident
 * @entry: entry
 */
void get_entry(unsigned char *e_ident, unsigned long int entry)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		entry = (entry << 8) & 0xFF00FF00;
		entry = entry | ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);
	else
		printf("%#lx\n", entry);
}

/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fl, read_var, cls;
	Elf64_Ehdr *hd;

	(void)(argc);
	fl = open(argv[1], O_RDONLY);
	if (fl == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot open or read file\n");
		exit(98);
	}
	hd = malloc(sizeof(Elf64_Ehdr));
	if (!hd)
	{
		close(fl);
		dprintf(STDERR_FILENO, "Error: cannot open or read file\n");
		exit(98);
	}
	read_var = read(fl, hd, sizeof(Elf64_Ehdr));
	if (read_var == -1)
	{
		close(fl);
		free(hd);
		dprintf(STDERR_FILENO, "Error: cannot open or read file\n");
		exit(98);
	}
	elf_checker(hd->e_ident);
	printf("ELF Header:\n");
	get_magic(hd->e_ident);
	get_class(hd->e_ident);
	get_data(hd->e_ident);
	get_version(hd->e_ident);
	get_osabi(hd->e_ident);
	get_abiversion(hd->e_ident);
	get_type(hd->e_ident, hd->e_type);
	get_entry(hd->e_ident, hd->e_entry);
	free(hd);
	cls = close(fl);
	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot close %d\n", fl);
		exit(98);
	}
	return (0);
}
