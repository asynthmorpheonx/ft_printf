#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "ft_printf.h"

int main(void)
{
    // Close the standard output (stdout)
    fclose(stdout); 

    // Redirect stderr to a file to verify error handling
    int error_fd = open("errors.log", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (error_fd == -1)
    {
        perror("Failed to open errors.log");
        return (1);
    }
    if (dup2(error_fd, STDERR_FILENO) == -1)
    {
        perror("Failed to redirect stderr");
        close(error_fd);
        return (1);
    }

    // Test ft_printf with stdout closed
    int ret = ft_printf("Testing %s with closed stdout\n", "output");

    // Check the return value of ft_printf
    if (ret == -1)
        dprintf(STDERR_FILENO, "ft_printf returned -1: Output is closed\n");

    // Clean up
    close(error_fd);

    // Inform user about the results
    printf("Check the errors.log file for the output.\n");
    return (0);
}