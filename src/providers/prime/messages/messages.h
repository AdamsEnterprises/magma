
/**
 * @file /magma/providers/prime/messages/messages.h
 *
 * @brief DESCRIPTIONxxxGOESxxxHERE
 */

#ifndef PRIME_MESSAGES_H
#define PRIME_MESSAGES_H

/// messages.c
prime_message_t *  encrypted_message_alloc(void);
void               encrypted_message_cleanup(prime_message_t *object);
void               encrypted_message_free(prime_message_t *object);
stringer_t *       naked_message_get(stringer_t *message, prime_org_signet_t *org, prime_user_key_t *user);
prime_message_t *  naked_message_set(stringer_t *message, prime_org_key_t *destination, prime_user_signet_t *recipient);

#include "chunks/chunks.h"

#endif

