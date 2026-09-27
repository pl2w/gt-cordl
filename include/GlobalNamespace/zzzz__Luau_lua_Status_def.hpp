#pragma once
// IWYU pragma private; include "GlobalNamespace/Luau_lua_Status.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Luau_lua_Status)
// Forward declare root types
namespace GlobalNamespace {
struct Luau_lua_Status;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Luau_lua_Status);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Luau_lua_Status, "", "Luau/lua_Status");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Luau/lua_Status
struct CORDL_TYPE Luau_lua_Status {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Luau_lua_Status_Unwrapped
enum struct __Luau_lua_Status_Unwrapped : int32_t {
__E_LUA_OK = static_cast<int32_t>(0x0),
__E_LUA_YIELD = static_cast<int32_t>(0x1),
__E_LUA_ERRRUN = static_cast<int32_t>(0x2),
__E_LUA_ERRSYNTAX = static_cast<int32_t>(0x3),
__E_LUA_ERRMEM = static_cast<int32_t>(0x4),
__E_LUA_ERRERR = static_cast<int32_t>(0x5),
__E_LUA_BREAK = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Luau_lua_Status_Unwrapped () const noexcept {
return static_cast<__Luau_lua_Status_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Luau_lua_Status() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Luau_lua_Status(int32_t  value__) noexcept;

/// @brief Field LUA_BREAK value: I32(6)
static ::GlobalNamespace::Luau_lua_Status const LUA_BREAK;

/// @brief Field LUA_ERRERR value: I32(5)
static ::GlobalNamespace::Luau_lua_Status const LUA_ERRERR;

/// @brief Field LUA_ERRMEM value: I32(4)
static ::GlobalNamespace::Luau_lua_Status const LUA_ERRMEM;

/// @brief Field LUA_ERRRUN value: I32(2)
static ::GlobalNamespace::Luau_lua_Status const LUA_ERRRUN;

/// @brief Field LUA_ERRSYNTAX value: I32(3)
static ::GlobalNamespace::Luau_lua_Status const LUA_ERRSYNTAX;

/// @brief Field LUA_OK value: I32(0)
static ::GlobalNamespace::Luau_lua_Status const LUA_OK;

/// @brief Field LUA_YIELD value: I32(1)
static ::GlobalNamespace::Luau_lua_Status const LUA_YIELD;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3223};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Luau_lua_Status, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Luau_lua_Status) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
