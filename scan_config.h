#ifndef SCAN_CONFIG_H
#define SCAN_CONFIG_H

#include <stdlib.h>
#include <pcap.h>
#include <stdbool.h>
#include <getopt.h>
#include <string.h>

#include "scan_config.h"
#include "synscan.h"
#include "timer.h"

#define SCAN_CONFIG_H_INCLUDED
#define	CHAR_BUFFER_LEN	64
#define PORT_NUM	65535

typedef struct{
	int port[PORT_NUM];	//array for ports: 0 = do not scan; 1 = scan
	int port_num;		//number of ports
} scan_opt_t;

#endif
