/*
 / _____)             _              | |
( (____  _____ ____ _| |_ _____  ____| |__
 \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 _____) ) ____| | | || |_| ____( (___| | | |
(______/|_____)_|_|_| \__)_____)\____)_| |_|
  (C)2013 Semtech-Cycleo

Description:
    LoRa concentrator : Packet Forwarder trace helpers

License: Revised BSD License, see LICENSE.TXT file include in the project
Maintainer: Michael Coracin
*/


#ifndef _LORA_PKTFWD_TRACE_H
#define _LORA_PKTFWD_TRACE_H

#define DEBUG_PKT_FWD   1
#define DEBUG_JIT       0
#define DEBUG_JIT_ERROR 0
#define DEBUG_TIMERSYNC 0
#define DEBUG_BEACON    0
#define DEBUG_LOG       0
#define DEBUG_FOLLOW    0


//#define MSG(args...) { printf(args) /* message that is destined to the user */; fflush(stdout); }

void logmessage(const char *, ...);
#define MSG(args...) logmessage(args)

#define MSG_DEBUG(FLAG, fmt, ...)                                                                         \
            do  {                                                                                         \
                if (FLAG)                                                                                 \
                    fprintf(stdout,  fmt, ##__VA_ARGS__); \
            } while (0)

//#define LOGGER(args...) do { if (logger_enabled == true) printf(args); } while (0)
#define LOGGER(args...) do { if (logger_enabled == true) logmessage(args); } while (0)


#endif
/* --- EOF ------------------------------------------------------------------ */
