#pragma once

/* ��Կ���� */
int public_key_decrypt(unsigned char *enc_data, int data_len, unsigned char *key, unsigned char *decrypted);

/* ˽Կ���� */
int private_key_encrypt(unsigned char *data, int data_len, unsigned char *key, unsigned char *encrypted);

/* ��Կ���� */
int public_key_encrypt(unsigned char *data, int data_len, unsigned char *key, unsigned char *encrypted);

/* ˽Կ���� */
int private_key_decrypt(unsigned char *enc_data, int data_len, unsigned char *key, unsigned char *decrypted);
