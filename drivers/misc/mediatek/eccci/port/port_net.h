/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2016 MediaTek Inc.
 */
#ifndef __PORT_NET_H__
#define __PORT_NET_H__
#include "ccmni.h"
#include "port_t.h"
extern struct ccmni_dev_ops ccmni_ops;

extern int mbim_start_xmit(struct sk_buff *skb, int ifid);
extern int mtk_ccci_request_port(char *name);
extern int hif_empty_query(int qno);
#endif /*__PORT_NET_H__*/
