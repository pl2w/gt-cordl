#pragma once
// IWYU pragma private; include "GlobalNamespace/Luau_gc_status.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Luau_gc_status)
// Forward declare root types
namespace GlobalNamespace {
struct Luau_gc_status;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Luau_gc_status);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Luau_gc_status, "", "Luau/gc_status");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Luau/gc_status
struct CORDL_TYPE Luau_gc_status {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Luau_gc_status_Unwrapped
enum struct __Luau_gc_status_Unwrapped : int32_t {
__E_LUA_GCSTOP = static_cast<int32_t>(0x0),
__E_LUA_GCRESTART = static_cast<int32_t>(0x1),
__E_LUA_GCCOLLECT = static_cast<int32_t>(0x2),
__E_LUA_GCCOUNT = static_cast<int32_t>(0x3),
__E_LUA_GCISRUNNING = static_cast<int32_t>(0x4),
__E_LUA_GCSTEP = static_cast<int32_t>(0x5),
__E_LUA_GCSETGOAL = static_cast<int32_t>(0x6),
__E_LUA_GCSETSTEPMUL = static_cast<int32_t>(0x7),
__E_LUA_GCSETSTEPSIZE = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Luau_gc_status_Unwrapped () const noexcept {
return static_cast<__Luau_gc_status_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Luau_gc_status() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Luau_gc_status(int32_t  value__) noexcept;

/// @brief Field LUA_GCCOLLECT value: I32(2)
static ::GlobalNamespace::Luau_gc_status const LUA_GCCOLLECT;

/// @brief Field LUA_GCCOUNT value: I32(3)
static ::GlobalNamespace::Luau_gc_status const LUA_GCCOUNT;

/// @brief Field LUA_GCISRUNNING value: I32(4)
static ::GlobalNamespace::Luau_gc_status const LUA_GCISRUNNING;

/// @brief Field LUA_GCRESTART value: I32(1)
static ::GlobalNamespace::Luau_gc_status const LUA_GCRESTART;

/// @brief Field LUA_GCSETGOAL value: I32(6)
static ::GlobalNamespace::Luau_gc_status const LUA_GCSETGOAL;

/// @brief Field LUA_GCSETSTEPMUL value: I32(7)
static ::GlobalNamespace::Luau_gc_status const LUA_GCSETSTEPMUL;

/// @brief Field LUA_GCSETSTEPSIZE value: I32(8)
static ::GlobalNamespace::Luau_gc_status const LUA_GCSETSTEPSIZE;

/// @brief Field LUA_GCSTEP value: I32(5)
static ::GlobalNamespace::Luau_gc_status const LUA_GCSTEP;

/// @brief Field LUA_GCSTOP value: I32(0)
static ::GlobalNamespace::Luau_gc_status const LUA_GCSTOP;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3224};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Luau_gc_status, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Luau_gc_status) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
