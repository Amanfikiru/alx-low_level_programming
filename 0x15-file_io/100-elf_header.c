#include "main.h"
#include <stdio.h>
#include <elf.h>
#include <inttypes.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#define ELF32_HEADER_SIZE (sizeof(Elf32_Ehdr))
#define ELF64_HEADER_SIZE (sizeof(Elf64_Ehdr))

/**
 * ensure_endianness - ensures endianness
 * @little_e: whether data is little endian
 * @data: data to ensure
 * @len: lenth of data
 *
 * Return: void
 */

void ensure_endianness(char little_e, void *data, unsigned int len)
{
	unsigned long num = 1, i = 0;
	char _little_e = ((num >> 8) << 8 != num), tmp, *_data = data;

	if (little_e != _little_e)
		for (i = 0; i < len / 2; i++)
			tmp = _data[i], _data[i] = _data[len - i - 1], _data[len - i - 1] = tmp;
}

/**
 * put_err - prints a string to the standard error file
 * @str: string to print
 *
 * Return: void
 */

void put_err(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	write(STDERR_FILENO, str, len);
}

/**
 * print_elf_header - prints the contents of an elf header (first half)
 * @h: elf header
 *
 * Return: void
 */

void print_elf_header(void *h)
{
	Elf32_Ehdr *header = h;
	unsigned char c, i;

	printf("ELF Header:\n");
	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf(" %02x", header->e_ident[(int)i]);
	printf("\n");

	printf("  Class:                             ");
	c = header->e_ident[EI_CLASS];
	printf(c == ELFCLASS32 ? "ELF32"
			: c == ELFCLASS64 ? "ELF64"
			: c == ELFCLASSNONE ? "none" : "<unknown: %x>", c);
	printf("\n");

