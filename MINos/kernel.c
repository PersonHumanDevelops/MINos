#include "include/kb.h"
#include "include/isr.h"
#include "include/idt.h"
#include "include/shell.h"
int kmain()
{
       isr_install();
       clearScreen();
       launchShell();
}
