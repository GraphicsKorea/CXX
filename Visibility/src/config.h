
#ifndef VISIBILITY_CONFIG_H
#define VISIBILITY_CONFIG_H

#if 0
#define SYMBOL_BINDING __attribute__((weak))
#else
#define SYMBOL_BINDING
#endif

#if 0
#define SYMBOL_VISIBILITY __attribute__((visibility("hidden")))
#else
#define SYMBOL_VISIBILITY
#endif

#endif //VISIBILITY_CONFIG_H
