#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/time.h>
#include <errno.h>

#include <switch.h>
#include "udp_input.h"

int poll_udp_input(struct input_msg *buf)
{
    struct input_msg tmp_msg;
    
    tmp_msg.magic = INPUT_MSG_MAGIC;
    tmp_msg.keys = KEY_B;
    tmp_msg.joy_l_x = 0;
    tmp_msg.joy_l_y = 0;
    tmp_msg.joy_r_x = 0;
    tmp_msg.joy_r_y = 0;
    
    *buf = tmp_msg;

    return 0;
}