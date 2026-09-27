#pragma once
// IWYU pragma private; include "GlobalNamespace/Luau_lua_Types.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Luau_lua_Types)
// Forward declare root types
namespace GlobalNamespace {
struct Luau_lua_Types;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Luau_lua_Types);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Luau_lua_Types, "", "Luau/lua_Types");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Luau/lua_Types
struct CORDL_TYPE Luau_lua_Types {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Luau_lua_Types_Unwrapped
enum struct __Luau_lua_Types_Unwrapped : int32_t {
__E_LUA_TNIL = static_cast<int32_t>(0x0),
__E_LUA_TBOOLEAN = static_cast<int32_t>(0x1),
__E_LUA_TLIGHTUSERDATA = static_cast<int32_t>(0x2),
__E_LUA_TNUMBER = static_cast<int32_t>(0x3),
__E_LUA_TVECTOR = static_cast<int32_t>(0x4),
__E_LUA_TSTRING = static_cast<int32_t>(0x5),
__E_LUA_TTABLE = static_cast<int32_t>(0x6),
__E_LUA_TFUNCTION = static_cast<int32_t>(0x7),
__E_LUA_TUSERDATA = static_cast<int32_t>(0x8),
__E_LUA_TTHREAD = static_cast<int32_t>(0x9),
__E_LUA_TBUFFER = static_cast<int32_t>(0xa),
__E_LUA_TPROTO = static_cast<int32_t>(0xb),
__E_LUA_TUPVAL = static_cast<int32_t>(0xc),
__E_LUA_TDEADKEY = static_cast<int32_t>(0xd),
__E_LUA_T_COUNT = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Luau_lua_Types_Unwrapped () const noexcept {
return static_cast<__Luau_lua_Types_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Luau_lua_Types() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Luau_lua_Types(int32_t  value__) noexcept;

/// @brief Field LUA_TBOOLEAN value: I32(1)
static ::GlobalNamespace::Luau_lua_Types const LUA_TBOOLEAN;

/// @brief Field LUA_TBUFFER value: I32(10)
static ::GlobalNamespace::Luau_lua_Types const LUA_TBUFFER;

/// @brief Field LUA_TDEADKEY value: I32(13)
static ::GlobalNamespace::Luau_lua_Types const LUA_TDEADKEY;

/// @brief Field LUA_TFUNCTION value: I32(7)
static ::GlobalNamespace::Luau_lua_Types const LUA_TFUNCTION;

/// @brief Field LUA_TLIGHTUSERDATA value: I32(2)
static ::GlobalNamespace::Luau_lua_Types const LUA_TLIGHTUSERDATA;

/// @brief Field LUA_TNIL value: I32(0)
static ::GlobalNamespace::Luau_lua_Types const LUA_TNIL;

/// @brief Field LUA_TNUMBER value: I32(3)
static ::GlobalNamespace::Luau_lua_Types const LUA_TNUMBER;

/// @brief Field LUA_TPROTO value: I32(11)
static ::GlobalNamespace::Luau_lua_Types const LUA_TPROTO;

/// @brief Field LUA_TSTRING value: I32(5)
static ::GlobalNamespace::Luau_lua_Types const LUA_TSTRING;

/// @brief Field LUA_TTABLE value: I32(6)
static ::GlobalNamespace::Luau_lua_Types const LUA_TTABLE;

/// @brief Field LUA_TTHREAD value: I32(9)
static ::GlobalNamespace::Luau_lua_Types const LUA_TTHREAD;

/// @brief Field LUA_TUPVAL value: I32(12)
static ::GlobalNamespace::Luau_lua_Types const LUA_TUPVAL;

/// @brief Field LUA_TUSERDATA value: I32(8)
static ::GlobalNamespace::Luau_lua_Types const LUA_TUSERDATA;

/// @brief Field LUA_TVECTOR value: I32(4)
static ::GlobalNamespace::Luau_lua_Types const LUA_TVECTOR;

/// @brief Field LUA_T_COUNT value: I32(11)
static ::GlobalNamespace::Luau_lua_Types const LUA_T_COUNT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3222};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Luau_lua_Types, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Luau_lua_Types) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
