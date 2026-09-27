#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DynamicHeightVirtualizationController`1_ScrollDirection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicHeightVirtualizationController`1_ScrollDirection)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct DynamicHeightVirtualizationController_1_ScrollDirection;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::DynamicHeightVirtualizationController_1_ScrollDirection);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::DynamicHeightVirtualizationController_1_ScrollDirection, "UnityEngine.UIElements", "DynamicHeightVirtualizationController`1/ScrollDirection");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.DynamicHeightVirtualizationController`1/ScrollDirection<T>
struct CORDL_TYPE DynamicHeightVirtualizationController_1_ScrollDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DynamicHeightVirtualizationController_1_ScrollDirection_Unwrapped
enum struct __DynamicHeightVirtualizationController_1_ScrollDirection_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Up = static_cast<int32_t>(0x1),
__E_Down = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DynamicHeightVirtualizationController_1_ScrollDirection_Unwrapped () const noexcept {
return static_cast<__DynamicHeightVirtualizationController_1_ScrollDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeightVirtualizationController_1_ScrollDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DynamicHeightVirtualizationController_1_ScrollDirection(int32_t  value__) noexcept;

/// @brief Field Down value: I32(2)
static ::GlobalNamespace::DynamicHeightVirtualizationController_1_ScrollDirection<T> const Down;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::DynamicHeightVirtualizationController_1_ScrollDirection<T> const Idle;

/// @brief Field Up value: I32(1)
static ::GlobalNamespace::DynamicHeightVirtualizationController_1_ScrollDirection<T> const Up;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7250};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
