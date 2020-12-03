#include "super_random.h"

#include <stdio.h>
#include <time.h>

#define abs(x) (x < 0 ? -x : x)

unsigned long long milliseconds() {
	struct timespec now;
	clock_gettime(CLOCK_MONOTONIC_RAW, &now);
	return (now.tv_sec * 1000) + (now.tv_nsec / 1000);
}

unsigned char random_char() {
	int i = 0;
	unsigned long long tmp = milliseconds() + 1000;
	while(milliseconds() < tmp) {
		i++;
	}
	return (unsigned char) (i % 256);
}

long long random_long(){
	long long l = 0;
	for(int i = 0; i < 8; i++) {
		l <<= 8;
		l += random_char();
	}
	return l;
}

long random_range(long long a, long long b) {
	long rand = random_long();
	//if(rand < a) {
		return (abs(rand) & (b - a)) + a;
	//}

	
}

char to_letter(unsigned char ch) {
	if(ch < 32)
		return ch | 32;
	if(ch > 127)
		return to_letter(ch & 127);
	return ch;
}