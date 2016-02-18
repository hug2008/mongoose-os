#ifndef _ESP_SJ_UART_H_
#define _ESP_SJ_UART_H_

#include <string.h>

#include "v7/v7.h"

struct v7;
void esp_sj_uart_init(struct v7 *v7);
void esp_sj_uart_set_prompt(int uart_no);
v7_val_t esp_sj_uart_get_recv_handler(int uart_no);

size_t esp_sj_uart_write(int uart_no, const void *buf, size_t len);

struct esp_uart_config;
struct esp_uart_config *esp_sj_uart_default_config(int uart_no);

#endif /* _ESP_SJ_UART_H_ */
