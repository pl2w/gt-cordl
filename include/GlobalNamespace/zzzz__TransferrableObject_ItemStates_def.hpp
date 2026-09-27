#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObject_ItemStates.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransferrableObject_ItemStates)
// Forward declare root types
namespace GlobalNamespace {
struct TransferrableObject_ItemStates;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TransferrableObject_ItemStates);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferrableObject_ItemStates, "", "TransferrableObject/ItemStates");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TransferrableObject/ItemStates
struct CORDL_TYPE TransferrableObject_ItemStates {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TransferrableObject_ItemStates_Unwrapped
enum struct __TransferrableObject_ItemStates_Unwrapped : int32_t {
__E_State0 = static_cast<int32_t>(0x1),
__E_State1 = static_cast<int32_t>(0x2),
__E_State2 = static_cast<int32_t>(0x4),
__E_State3 = static_cast<int32_t>(0x8),
__E_State4 = static_cast<int32_t>(0x10),
__E_State5 = static_cast<int32_t>(0x20),
__E_Part0Held = static_cast<int32_t>(0x40),
__E_Part1Held = static_cast<int32_t>(0x80),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TransferrableObject_ItemStates_Unwrapped () const noexcept {
return static_cast<__TransferrableObject_ItemStates_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TransferrableObject_ItemStates() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TransferrableObject_ItemStates(int32_t  value__) noexcept;

/// @brief Field Part0Held value: I32(64)
static ::GlobalNamespace::TransferrableObject_ItemStates const Part0Held;

/// @brief Field Part1Held value: I32(128)
static ::GlobalNamespace::TransferrableObject_ItemStates const Part1Held;

/// @brief Field State0 value: I32(1)
static ::GlobalNamespace::TransferrableObject_ItemStates const State0;

/// @brief Field State1 value: I32(2)
static ::GlobalNamespace::TransferrableObject_ItemStates const State1;

/// @brief Field State2 value: I32(4)
static ::GlobalNamespace::TransferrableObject_ItemStates const State2;

/// @brief Field State3 value: I32(8)
static ::GlobalNamespace::TransferrableObject_ItemStates const State3;

/// @brief Field State4 value: I32(16)
static ::GlobalNamespace::TransferrableObject_ItemStates const State4;

/// @brief Field State5 value: I32(32)
static ::GlobalNamespace::TransferrableObject_ItemStates const State5;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1361};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransferrableObject_ItemStates, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransferrableObject_ItemStates) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
