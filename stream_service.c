// Code for Live-Streaming Camera Data

#include "stream_util.h"
#include <libavcodec/avcodec.h>
#include <stdio.h>

int main(){
	printf("FFmpeg version %s\n",  avcodec_configuration());
	init_codec();

	AVPacket *pkt = av_packet_alloc();
	if(avcodec_send_frame(codec_ctx, frame) == 0){
		while(avcodec_receive_packet(codec_ctx, pkt) == 0){
			fwrite(pkt->data, 1, pkt->size, output_file);
			av_packet(pkt);
		}
	}

	return 0;
};
