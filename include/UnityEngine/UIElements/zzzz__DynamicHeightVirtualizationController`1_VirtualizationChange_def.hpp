#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DynamicHeightVirtualizationController`1_VirtualizationChange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicHeightVirtualizationController`1_VirtualizationChange)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct DynamicHeightVirtualizationController_1_VirtualizationChange;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::DynamicHeightVirtualizationController_1_VirtualizationChange);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::DynamicHeightVirtualizationController_1_VirtualizationChange, "UnityEngine.UIElements", "DynamicHeightVirtualizationController`1/VirtualizationChange");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.DynamicHeightVirtualizationController`1/VirtualizationChange<T>
struct CORDL_TYPE DynamicHeightVirtualizationController_1_VirtualizationChange {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DynamicHeightVirtualizationController_1_VirtualizationChange_Unwrapped
enum struct __DynamicHeightVirtualizationController_1_VirtualizationChange_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Resize = static_cast<int32_t>(0x1),
__E_Scroll = static_cast<int32_t>(0x2),
__E_ForcedScroll = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DynamicHeightVirtualizationController_1_VirtualizationChange_Unwrapped () const noexcept {
return static_cast<__DynamicHeightVirtualizationController_1_VirtualizationChange_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeightVirtualizationController_1_VirtualizationChange() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DynamicHeightVirtualizationController_1_VirtualizationChange(int32_t  value__) noexcept;

/// @brief Field ForcedScroll value: I32(3)
static ::GlobalNamespace::DynamicHeightVirtualizationController_1_VirtualizationChange<T> const ForcedScroll;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::DynamicHeightVirtualizationController_1_VirtualizationChange<T> const None;

/// @brief Field Resize value: I32(1)
static ::GlobalNamespace::DynamicHeightVirtualizationController_1_VirtualizationChange<T> const Resize;

/// @brief Field Scroll value: I32(2)
static ::GlobalNamespace::DynamicHeightVirtualizationController_1_VirtualizationChange<T> const Scroll;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7249};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
