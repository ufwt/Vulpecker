

static av_cold int roq_decode_init(AVCodecContext *avctx)
{
    RoqContext *s = avctx->priv_data;

    s->avctx = avctx;
    s->width = avctx->width;
    s->height = avctx->height;
    s->last_frame    = &s->frames[0];
    s->current_frame = &s->frames[1];
    avctx->pix_fmt = PIX_FMT_YUV444P;

    return 0;
}