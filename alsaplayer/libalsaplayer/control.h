/*  control.h
 *  Copyright (C) 2002 Andy Lo A Foe <andy@alsaplayer.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/ 
#ifndef __CONTROL_H__
#define __CONTROL_H__

#define AP_SESSION_MAX	256
#define AP_TITLE_MAX	256
#define AP_ARTIST_MAX	256
#define AP_ALBUM_MAX	256
#define AP_GENRE_MAX	256

#ifdef __cplusplus
extern "C" {
#endif

int ap_find_session(char *session_name, int *session);
int ap_session_running(int session);
int ap_version();

int ap_play(int session);
int ap_stop(int session);
int ap_pause(int session);
int ap_unpause(int session);
int ap_next(int session);
int ap_prev(int session);
int ap_ping(int session);
int ap_quit(int session);
int ap_clear_playlist(int session);
int ap_add_path(int session, char *path);

int ap_set_speed(int session, float speed);
int ap_get_speed(int session, float *val);

int ap_get_session_name(int session, char *str);

int ap_get_title(int session, char *str);
int ap_get_artist(int session, char *str);
int ap_get_album(int session, char *str);
int ap_get_genre(int session, char *str);

int ap_set_position(int session, int pos);
int ap_get_position(int session, int *val);
int ap_get_length(int session, int *length);
int ap_set_frame(int session, int frame);
int ap_get_frame(int session, int *val);
int ap_get_frames(int session, int *val);


#ifdef __cplusplus
}
#endif

#endif
