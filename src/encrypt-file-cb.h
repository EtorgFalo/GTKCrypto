#ifndef  ENCRYPT_FILE_CB_H
#define ENCRYPT_FILE_CB_H

#define AVAILABLE_ALGO 6        // AES256, BLOWFISH, CAMELLIA256, CAST5, SERPENT256, TWOFISH
#define AVAILABLE_ALGO_MODE 2   // CBC, CTR

void encrypt_file (const gchar *, const gchar *, const gchar *, const gchar *);

#endif