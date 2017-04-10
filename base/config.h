#ifndef CONFIG_H_
#define CONFIG_H_

#include "main.h"

#ifdef __cplusplus
extern "C" {
#endif

// Create configuration storage, initialize it with content from the
// configuration file, and apply eventual CLI overrides.
void caerConfigInit(const char *configFile, int argc, char *argv[]);
void caerConfigWriteBack(void);

#ifdef __cplusplus
}
#endif

#endif /* CONFIG_H_ */
