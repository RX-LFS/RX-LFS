#ifndef __CALCLOCK_H
#define __CALCLOCK_H
#include <linux/time.h>
#define BILLION 1000000000L
unsigned long long calclock(struct timespec64 *myclock, 
		    unsigned long long *total_time, unsigned long long *total_count);


#define STRIPE 0
#if STRIPE
#define STRIPE_CNT 32
#define NODE_STRIPE 0
#endif

#endif

