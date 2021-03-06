/*
 * (C) Copyright 2017 Jackie Dinh <jackiedinh8@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef _SNOW_RTP_RTMP_H_
#define _SNOW_RTP_RTMP_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "rtp/rtp.h"

int snw_rtp_rtmp_init(void *ctx);
int snw_rtp_rtmp_handle_pkg_in(void *ctx, char *buffer, int len);
int snw_rtp_rtmp_handle_pkg_out(void *ctx, char *buffer, int len);
int snw_rtp_rtmp_fini();

extern snw_rtp_module_t g_rtp_rtmp_module;

#ifdef __cplusplus
}
#endif

#endif //_SNOW_RTP_RTMP_H_



