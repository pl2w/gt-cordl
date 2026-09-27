#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ScrollView_NestedInteractionKind.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScrollView_NestedInteractionKind)
// Forward declare root types
namespace GlobalNamespace {
struct ScrollView_NestedInteractionKind;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScrollView_NestedInteractionKind);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScrollView_NestedInteractionKind, "UnityEngine.UIElements", "ScrollView/NestedInteractionKind");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.ScrollView/NestedInteractionKind
struct CORDL_TYPE ScrollView_NestedInteractionKind {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScrollView_NestedInteractionKind_Unwrapped
enum struct __ScrollView_NestedInteractionKind_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_StopScrolling = static_cast<int32_t>(0x1),
__E_ForwardScrolling = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScrollView_NestedInteractionKind_Unwrapped () const noexcept {
return static_cast<__ScrollView_NestedInteractionKind_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScrollView_NestedInteractionKind() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScrollView_NestedInteractionKind(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::ScrollView_NestedInteractionKind const Default;

/// @brief Field ForwardScrolling value: I32(2)
static ::GlobalNamespace::ScrollView_NestedInteractionKind const ForwardScrolling;

/// @brief Field StopScrolling value: I32(1)
static ::GlobalNamespace::ScrollView_NestedInteractionKind const StopScrolling;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7468};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScrollView_NestedInteractionKind, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScrollView_NestedInteractionKind) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
