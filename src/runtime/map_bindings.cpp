#include "map_impl.hpp"
#include "array_impl.hpp"
#include "string_impl.hpp"
#include <cstring>
#include <vector>

extern "C" {

// Map class bindings
void* pryst_core_Map_new(const char* keyType, const char* valueType);
void pryst_core_Map_set(void* map_ptr, const char* key, void* value);
void* pryst_core_Map_get(void* map_ptr, const char* key);
bool pryst_core_Map_has(void* map_ptr, const char* key);
void pryst_core_Map_delete(void* map_ptr, const char* key);
void pryst_core_Map_clear(void* map_ptr);
char** pryst_core_Map_keys(void* map_ptr);
void** pryst_core_Map_values(void* map_ptr);
int pryst_core_Map_size(void* map_ptr);
void pryst_core_Map_destroy(void* map_ptr);

// Implementations
void* pryst_core_Map_new(const char* keyType, const char* valueType) {
    return new pryst::core::MapImpl(keyType, valueType);
}

void pryst_core_Map_set(void* map_ptr, const char* key, void* value) {
    auto* map = static_cast<pryst::core::MapImpl*>(map_ptr);
    map->set(key, value);
}

void* pryst_core_Map_get(void* map_ptr, const char* key) {
    auto* map = static_cast<pryst::core::MapImpl*>(map_ptr);
    return map->get(key);
}

bool pryst_core_Map_has(void* map_ptr, const char* key) {
    auto* map = static_cast<pryst::core::MapImpl*>(map_ptr);
    return map->has(key);
}

void pryst_core_Map_delete(void* map_ptr, const char* key) {
    auto* map = static_cast<pryst::core::MapImpl*>(map_ptr);
    map->remove(key);
}

void pryst_core_Map_clear(void* map_ptr) {
    auto* map = static_cast<pryst::core::MapImpl*>(map_ptr);
    map->clear();
}

char** pryst_core_Map_keys(void* map_ptr) {
    auto* map = static_cast<pryst::core::MapImpl*>(map_ptr);
    auto keys = map->keys();
    char** result = new char*[keys.size() + 1];
    for (size_t i = 0; i < keys.size(); ++i) {
        result[i] = strdup(keys[i].c_str());
    }
    result[keys.size()] = nullptr;
    return result;
}

void** pryst_core_Map_values(void* map_ptr) {
    auto* map = static_cast<pryst::core::MapImpl*>(map_ptr);
    auto values = map->values();
    void** result = new void*[values.size() + 1];
    std::copy(values.begin(), values.end(), result);
    result[values.size()] = nullptr;
    return result;
}

int pryst_core_Map_size(void* map_ptr) {
    auto* map = static_cast<pryst::core::MapImpl*>(map_ptr);
    return static_cast<int>(map->size());
}

void pryst_core_Map_destroy(void* map_ptr) {
    auto* map = static_cast<pryst::core::MapImpl*>(map_ptr);
    delete map;
}

} // extern "C"
