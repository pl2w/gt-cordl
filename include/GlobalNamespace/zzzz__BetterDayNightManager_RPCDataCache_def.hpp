#pragma once
// IWYU pragma private; include "GlobalNamespace/BetterDayNightManager_RPCDataCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BetterDayNightManager_RPCDataCache)
// Forward declare root types
namespace GlobalNamespace {
struct BetterDayNightManager_RPCDataCache;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BetterDayNightManager_RPCDataCache);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BetterDayNightManager_RPCDataCache, "", "BetterDayNightManager/RPCDataCache");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BetterDayNightManager/RPCDataCache
struct CORDL_TYPE BetterDayNightManager_RPCDataCache {
public:
// Declarations
/// @brief Method Reset, addr 0x5992258, size 0xc, virtual false, abstract: false, final false
inline void Reset() ;

// Ctor Parameters []
// @brief default ctor
constexpr BetterDayNightManager_RPCDataCache() ;

// Ctor Parameters [CppParam { name: "Pending", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Value", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BetterDayNightManager_RPCDataCache(bool  Pending, int32_t  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2579};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Pending, offset: 0x0, size: 0x1, def value: None
 bool  Pending;

/// @brief Field Value, offset: 0x4, size: 0x4, def value: None
 int32_t  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BetterDayNightManager_RPCDataCache, Pending) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager_RPCDataCache, Value) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BetterDayNightManager_RPCDataCache) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
