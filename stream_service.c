// Code for Live-Streaming Camera Data

#include "stream_util.h"
#include <libavcodec/avcodec.h>
#include <stdio.h>

int main(){
	printf("FFmpeg version %s\n",  avcodec_configuration());
	return 0;
};
