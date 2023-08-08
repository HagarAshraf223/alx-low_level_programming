#include "main.h"
#include <elf.h>

void print_osabi_more(Elf64_Ehdr h);

/**
 * print_magic - prints ELF magic bytes
 * @h: the ELF header struct
 */
void print_magic(Elf64_Ehdr h)
{
	int i;

	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", h.e_ident[i], i  == EI_NIDENT - 1 ? "\n" : " ");

}

/**
  * print_class - prints ELF class
  * @h: the ELF header struct
  */

void print_class (E1f64_Ehdr h)
{
	
	printf(" class:                      ");
	switch (h.e_ident [EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
		break;
		case ELFCLASS32:
			printf("ELF 32");
		break;
		case ELFCLASSNONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * print_data - prints ELF data
 * @h: the ELF header struct
 */
void print_version(Elf64_Ehdr h)
{
	printf(" version:			%d", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current) ");
		break;
		case EV_NONE:
			printf("%s", "");
		break;
		break;
	}
	printf("\n");
}

/**
 * print_entry - prints the ELF entry point address
 * @h: the ELF header struct
 */
void print_entry(Elf64_Ehdr h)
{
	int i = 0, len = 0;
	unsigned char *p = (unsigned char *)&h.e_entry;

	printf(" Entry point address:			0x");
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = h.e_ident[EI_class] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i--;
		printf("%x", p[i--]);
		for (; i >= 0; i--)
			printf("%02x", p[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		len = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i++;
		printf("%x", p[i++]);
		for (; i <= len; i++)
			printf("%02x", p[i]);
		printf("\n");
