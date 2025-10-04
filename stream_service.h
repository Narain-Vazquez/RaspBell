
// Streaming Service Header File

#ifndef STREAM_UTIL_H
#define STREAM_UTIL_H

#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>

extern AVCodec *codec;
extern AVCodecContext *codec_ctx;

void init_codec();

#endif
