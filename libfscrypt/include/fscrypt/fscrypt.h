/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _FSCRYPT_H_
#define _FSCRYPT_H_

#include <sys/cdefs.h>
#include <stdbool.h>
#include <cutils/multiuser.h>

__BEGIN_DECLS

bool fscrypt_is_native();

int fscrypt_policy_ensure(const char *directory, const char *policy,
                          size_t policy_length,
                          const char *contents_encryption_mode,
                          const char *filenames_encryption_mode);

static const char* fscrypt_unencrypted_folder = "/unencrypted";
static const char* fscrypt_key_ref = "/unencrypted/ref";
static const char* fscrypt_key_mode = "/unencrypted/mode";

__END_DECLS

#endif // _FSCRYPT_H_
