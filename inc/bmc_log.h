#ifndef __LOG_H__
#define __LOG_H__

#include <stdio.h>
#include <syslog.h>

typedef enum LOG_TYPE
{
	SYSTEM_LOG = 0,	// 系统操作
	CONFIG_LOG,		// 配置操作
	ALARM_LOG,			// 报警事件
	RECORD_LOG,		// 录像操作
	USER_LOG,			// 用户管理
}LOG_TYPE;

char *bmc_log_read(FILE *fp, char *buff, int buf_len);

FILE *bmc_log_read_start();

void bmc_log_read_stop(FILE *fp);

int bmc_log_write(int log_level, LOG_TYPE log_type, const char *fmt, ...);

int bmc_log_init();

void bmc_log_uninit();

void bmc_log_delete();



#endif

