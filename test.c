#include <stdio.h>
#include <assert.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_printf.h"


// int main() {
//     close(1);
//     dprintf(0,"%d",ft_printf("dgk"));
//     return 0;
// }
// // Declare ft_printf function
//     // int ret_printf, ret_ft_printf;

//     // // Redirect stdout to an invalid file descriptor
//     // fflush(stdout);
//     // int saved_stdout = dup(1);
//     // close(1);
//     // int invalid_fd = open("/dev/null", O_WRONLY);
//     // dup2(invalid_fd, 1);
//     // close(invalid_fd);

//     // ret_printf = printf("This should fail\n");
//     // ret_ft_printf = ft_printf("This should fail\n");

//     // // Restore stdout
//     // fflush(stdout);
//     // dup2(saved_stdout, 1);
//     // close(saved_stdout);

//     // // Compare results
//     // assert(ret_printf == -1);
    // assert(ret_ft_printf == -1);
    
    
int main()
{
    fclose(stdout);
    int d = printf("lsadnasd\n");
    dprintf(2, "%d", d);
}