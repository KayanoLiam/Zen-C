#ifndef PLUGIN_MANAGER_H
#define PLUGIN_MANAGER_H

#include "../../plugins/zprep_plugin.h"

// Initialize the plugin system.
void zptr_plugin_mgr_init(void);

// Register a plugin directly (for built-ins).
void zptr_register_plugin(ZPlugin *plugin);

// Load a plugin from a shared object file (.so).
// Returns 1 on success, 0 on failure.
// Yeah, for now, I'm sorry Windows guys.
int zptr_load_plugin(const char *path);

// Find a registered plugin by name.
ZPlugin *zptr_find_plugin(const char *name);

// Cleanup.
void zptr_plugin_mgr_cleanup(void);

#endif
