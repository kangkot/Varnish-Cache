/*-
 * Copyright (c) 2006 Verdens Gang AS
 * Copyright (c) 2006-2011 Varnish Software AS
 * All rights reserved.
 *
 * Author: Poul-Henning Kamp <phk@phk.freebsd.dk>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 */

/*lint -save -e525 -e539 */
SESS_STEP(wait,		WAIT,		(sp, sp->wrk, sp->req))
SESS_STEP(restart,	RESTART,	(wrk, req))
SESS_STEP(recv,		RECV,		(wrk, req))
SESS_STEP(start,	START,		(wrk, req))
SESS_STEP(pipe,		PIPE,		(wrk, req))
SESS_STEP(pass,		PASS,		(wrk, req))
SESS_STEP(lookup,	LOOKUP,		(wrk, req))
SESS_STEP(miss,		MISS,		(wrk, req))
SESS_STEP(hit,		HIT,		(wrk, req))
SESS_STEP(fetch,	FETCH,		(wrk, req))
SESS_STEP(fetchbody,	FETCHBODY,	(wrk, req))
SESS_STEP(prepresp,	PREPRESP,	(wrk, req))
SESS_STEP(deliver,	DELIVER,	(wrk, req))
SESS_STEP(error,	ERROR,		(wrk, req))
/*lint -restore */
