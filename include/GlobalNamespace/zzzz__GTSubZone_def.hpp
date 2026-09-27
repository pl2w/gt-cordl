#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSubZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTSubZone)
// Forward declare root types
namespace GlobalNamespace {
struct GTSubZone;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTSubZone);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTSubZone, "", "GTSubZone");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTSubZone
struct CORDL_TYPE GTSubZone {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTSubZone_Unwrapped
enum struct __GTSubZone_Unwrapped : int32_t {
__E_none = static_cast<int32_t>(0x0),
__E_store = static_cast<int32_t>(0x1),
__E_store_dress_room = static_cast<int32_t>(0x2),
__E_store_mirror = static_cast<int32_t>(0x3),
__E_store_f1 = static_cast<int32_t>(0x4),
__E_store_f2 = static_cast<int32_t>(0x5),
__E_store_f3 = static_cast<int32_t>(0x6),
__E_store_register = static_cast<int32_t>(0x7),
__E_tree_room = static_cast<int32_t>(0x8),
__E_entrance_tunnel = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTSubZone_Unwrapped () const noexcept {
return static_cast<__GTSubZone_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTSubZone() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTSubZone(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{956};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field entrance_tunnel value: I32(9)
static ::GlobalNamespace::GTSubZone const entrance_tunnel;

/// @brief Field none value: I32(0)
static ::GlobalNamespace::GTSubZone const none;

/// @brief Field store value: I32(1)
static ::GlobalNamespace::GTSubZone const store;

/// @brief Field store_dress_room value: I32(2)
static ::GlobalNamespace::GTSubZone const store_dress_room;

/// @brief Field store_f1 value: I32(4)
static ::GlobalNamespace::GTSubZone const store_f1;

/// @brief Field store_f2 value: I32(5)
static ::GlobalNamespace::GTSubZone const store_f2;

/// @brief Field store_f3 value: I32(6)
static ::GlobalNamespace::GTSubZone const store_f3;

/// @brief Field store_mirror value: I32(3)
static ::GlobalNamespace::GTSubZone const store_mirror;

/// @brief Field store_register value: I32(7)
static ::GlobalNamespace::GTSubZone const store_register;

/// @brief Field tree_room value: I32(8)
static ::GlobalNamespace::GTSubZone const tree_room;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTSubZone, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTSubZone) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
