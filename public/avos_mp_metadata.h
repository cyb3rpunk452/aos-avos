/*
 * Copyright 2017 Archos SA
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef AVOS_MP_METADATA_H
#define AVOS_MP_METADATA_H

#include "avos_common.h"

// in sync with mydroid/frameworks/base/include/media/Metadata.h
enum {
	AVOS_MP_METADATA_ANY				= 0,

	// Playback capabilities.
	AVOS_MP_METADATA_PAUSE_AVAILABLE		= 1, // Boolean
	AVOS_MP_METADATA_SEEK_BACKWARD_AVAILABLE	= 2, // Boolean
	AVOS_MP_METADATA_SEEK_FORWARD_AVAILABLE		= 3, // Boolean
	AVOS_MP_METADATA_SEEK_AVAILABLE			= 4, // Boolean

	// keep in sync with android/media/metadata.java
	AVOS_MP_METADATA_TITLE				= 5, // String
	AVOS_MP_METADATA_COMMENT			= 6, // String
	AVOS_MP_METADATA_COPYRIGHT			= 7, // String
	AVOS_MP_METADATA_ALBUM				= 8, // String
	AVOS_MP_METADATA_ARTIST				= 9, // String
	AVOS_MP_METADATA_AUTHOR				= 10, // String
	AVOS_MP_METADATA_COMPOSER			= 11, // String
	AVOS_MP_METADATA_GENRE				= 12, // String
	AVOS_MP_METADATA_DATE				= 13, // Date
	AVOS_MP_METADATA_DURATION			= 14, // Integer(ms)
	AVOS_MP_METADATA_CD_TRACK_NUM			= 15, // Integer 1-Based
	AVOS_MP_METADATA_CD_TRACK_MAX			= 16, // Integer
	AVOS_MP_METADATA_RATING				= 17, // String
	AVOS_MP_METADATA_ALBUM_ART			= 18, // Byte[]
	AVOS_MP_METADATA_VIDEO_FRAME			= 19, // Bitmap

	AVOS_MP_METADATA_BIT_RATE			= 20, // Integer, bps

	AVOS_MP_METADATA_AUDIO_BIT_RATE			= 21, // Integer, bps
	AVOS_MP_METADATA_VIDEO_BIT_RATE			= 22, // Integer, bps
	AVOS_MP_METADATA_AUDIO_SAMPLE_RATE		= 23, // Integer, hz
	AVOS_MP_METADATA_VIDEOFRAME_RATE		= 24, // Integer, hz

	// SEE RFC2046 AND RFC4281.
	AVOS_MP_METADATA_MIME_TYPE			= 25, // String
	AVOS_MP_METADATA_AUDIO_CODEC			= 26, // String
	AVOS_MP_METADATA_VIDEO_CODEC			= 27, // String

	AVOS_MP_METADATA_VIDEO_HEIGHT			= 28, // Integer
	AVOS_MP_METADATA_VIDEO_WIDTH			= 29, // Integer
	AVOS_MP_METADATA_NUM_TRACKS			= 30, // Integer
	AVOS_MP_METADATA_DRM_CRIPPLED			= 31, // Boolean
	// LAST_SYSTEM_ID = 31
	// FIRST_CUSTOM_ID = 8192
	AVOS_MP_METADATA_FILE_SIZE			= 8200, // Integer64
	AVOS_MP_METADATA_CURRENT_AUDIO_TRACK		= 8201, // Integer
	AVOS_MP_METADATA_CURRENT_SUBTITLE_TRACK		= 8202, // Integer

	AVOS_MP_METADATA_NB_VIDEO_TRACK			= 9000,
	AVOS_MP_METADATA_NB_AUDIO_TRACK			= 9001,
	AVOS_MP_METADATA_NB_SUBTITLE_TRACK		= 9002,

	AVOS_MP_METADATA_VIDEO_TRACK			= 10000,
	AVOS_MP_METADATA_VIDEO_TRACK_FORMAT		= 0,
	AVOS_MP_METADATA_VIDEO_TRACK_WIDTH		= 1,
	AVOS_MP_METADATA_VIDEO_TRACK_HEIGHT		= 2,
	AVOS_MP_METADATA_VIDEO_TRACK_ASPECT_N		= 3,
	AVOS_MP_METADATA_VIDEO_TRACK_ASPECT_D		= 4,
	AVOS_MP_METADATA_VIDEO_TRACK_PIXEL_FORMAT	= 5,
	AVOS_MP_METADATA_VIDEO_TRACK_PROFILE		= 6,
	AVOS_MP_METADATA_VIDEO_TRACK_LEVEL		= 7,
	AVOS_MP_METADATA_VIDEO_TRACK_BIT_RATE		= 8,
	AVOS_MP_METADATA_VIDEO_TRACK_FPS		= 9,
	AVOS_MP_METADATA_VIDEO_TRACK_S3DMODE            = 10,
	AVOS_MP_METADATA_VIDEO_TRACK_DECODER		= 11,
	AVOS_MP_METADATA_VIDEO_TRACK_FPS_RATE		= 12,
	AVOS_MP_METADATA_VIDEO_TRACK_FPS_SCALE		= 13,
	AVOS_MP_METADATA_VIDEO_TRACK_MAX		= 14,

	AVOS_MP_METADATA_AUDIO_TRACK			= 20000,
	// handle multiple audio track attributes:
	// metadata_id		= k_audio_track + (track_id * k_audio_trackmax) + kaudiotrackname
	AVOS_MP_METADATA_AUDIO_TRACK_NAME		= 0,
	AVOS_MP_METADATA_AUDIO_TRACK_FORMAT		= 1,
	AVOS_MP_METADATA_AUDIO_TRACK_BIT_RATE		= 2,
	AVOS_MP_METADATA_AUDIO_TRACK_SAMPLE_RATE	= 3,
	AVOS_MP_METADATA_AUDIO_TRACK_CHANNELS		= 4,
	AVOS_MP_METADATA_AUDIO_TRACK_VBR		= 5,
	AVOS_MP_METADATA_AUDIO_TRACK_SUPPORTED		= 6,
	AVOS_MP_METADATA_AUDIO_TRACK_MAX		= 7,

	AVOS_MP_METADATA_SUBTITLE_TRACK			= 30000,
	AVOS_MP_METADATA_SUBTITLE_TRACK_NAME		= 0,
	AVOS_MP_METADATA_SUBTITLE_TRACK_PATH		= 1,
	AVOS_MP_METADATA_SUBTITLE_TRACK_MAX		= 2,
};

#endif // AVOS_MP_METADATA_H
