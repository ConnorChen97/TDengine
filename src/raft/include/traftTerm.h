/*
 * Copyright (c) 2019 TAOS Data, Inc. <jhtao@taosdata.com>
 *
 * This program is free software: you can use, redistribute, and/or modify
 * it under the terms of the GNU Affero General Public License, version 3
 * or later ("AGPL"), as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _TD_TRAFT_TERM_H_
#define _TD_TRAFT_TERM_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef uint64_t raft_term_t;

#define RAFT_TERM_NONE ((raft_term_t)0)
#define RAFT_TERM_IS_VLD(term) ((term) != RAFT_TERM_NONE)

#ifdef __cplusplus
}
#endif

#endif /*_TD_TRAFT_TERM_H_*/