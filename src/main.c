#include <stdio.h>
#include <stdlib.h>

static void usage()
{
  FILE *out = stdout;
  fputs("Spanner for Kernel Development.\n", out);

  fputs("-h, --h         Show this help info.\n"
	"-v, --version   Show version info.\n",
	out);

  exit(0);
}

int main()
{
  /* printf("Hello spanner\n"); */
  usage();
  return 0;
}
