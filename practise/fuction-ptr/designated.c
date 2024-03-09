#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>

typedef struct
{
    uint8_t (*wifi_send)(char cmd[], int length, int retry);
    uint8_t (*wifi_receiver)(char *buffer);
} Esp32_opt_t;

uint8_t send(char cmd[], int length, int retry)
{
    printf("cmd:%s cmd_len:%d retry:%d\r\n", cmd, length, retry);
    return true;
}

uint8_t receive(char *buffer)
{
    strcpy(buffer, "OK\r");
    return true;
}

int main()
{
    static Esp32_opt_t Esp32_opt = {
        .wifi_send = send,
        .wifi_receiver = receive};

    char rx_buff[10];
    char tx_buff[] = "AT";
    Esp32_opt.wifi_send(tx_buff, strlen(tx_buff), 2);
    Esp32_opt.wifi_receiver(rx_buff);
    return 0;
}