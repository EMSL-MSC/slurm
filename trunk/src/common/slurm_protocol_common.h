#ifndef _SLURM_PROTOCOL_COMMON_H
#define _SLURM_PROTOCOL_COMMON_H

/* LINUX SPECIFIC */
/* this is the slurm equivalent of the operating system file descriptor, which in linux is just an int */
typedef uint32_t slurm_fd ;
/* this is the slurm equivalent of the BSD sockets sockaddr */
typedef struct sockaddr_in slurm_addr ;


/* SLURM datatypes */
/* this is a custom data type to describe the slurm message type type that is placed in the slurm protocol header
 * while just an short now, it may change in the future */
typedef uint16_t slurm_message_type_t ;

#endif
