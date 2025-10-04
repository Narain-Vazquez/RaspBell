
#include "stream_util.h"

AVCodec *codec = NULL;
AVCodecContext *codec_ctx = NULL;

void init_codec() {
    av_register_all();
    avcodec_register_all();

    codec = avcodec_find_encoder(AV_CODEC_ID_H264);
    codec_ctx = avcodec_alloc_context3(codec);
    codec_ctx->bit_rate = 400000;
    codec_ctx->width = 1280;
    codec_ctx->height = 720;
    codec_ctx->time_base = (AVRational){1, 30};
    codec_ctx->gop_size = 10;
    codec_ctx->max_b_frames = 1;
    codec_ctx->pix_fmt = AV_PIX_FMT_YUV420P;
}

