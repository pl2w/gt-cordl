#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutNodeData_FlexStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutNodeData_FlexStatus)
// Forward declare root types
namespace GlobalNamespace {
struct LayoutNodeData_FlexStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LayoutNodeData_FlexStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LayoutNodeData_FlexStatus, "UnityEngine.UIElements.Layout", "LayoutNodeData/FlexStatus");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutNodeData/FlexStatus
struct CORDL_TYPE LayoutNodeData_FlexStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LayoutNodeData_FlexStatus_Unwrapped
enum struct __LayoutNodeData_FlexStatus_Unwrapped : int32_t {
__E_IsDirty = static_cast<int32_t>(0x1),
__E_HasNewLayout = static_cast<int32_t>(0x4),
__E_DependsOnParentSize = static_cast<int32_t>(0x40),
__E_UsesMeasure = static_cast<int32_t>(0x80),
__E_UsesBaseline = static_cast<int32_t>(0x100),
__E_Fixed = static_cast<int32_t>(0x8),
__E_MinViolation = static_cast<int32_t>(0x10),
__E_MaxViolation = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LayoutNodeData_FlexStatus_Unwrapped () const noexcept {
return static_cast<__LayoutNodeData_FlexStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LayoutNodeData_FlexStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LayoutNodeData_FlexStatus(int32_t  value__) noexcept;

/// @brief Field DependsOnParentSize value: I32(64)
static ::GlobalNamespace::LayoutNodeData_FlexStatus const DependsOnParentSize;

/// @brief Field Fixed value: I32(8)
static ::GlobalNamespace::LayoutNodeData_FlexStatus const Fixed;

/// @brief Field HasNewLayout value: I32(4)
static ::GlobalNamespace::LayoutNodeData_FlexStatus const HasNewLayout;

/// @brief Field IsDirty value: I32(1)
static ::GlobalNamespace::LayoutNodeData_FlexStatus const IsDirty;

/// @brief Field MaxViolation value: I32(32)
static ::GlobalNamespace::LayoutNodeData_FlexStatus const MaxViolation;

/// @brief Field MinViolation value: I32(16)
static ::GlobalNamespace::LayoutNodeData_FlexStatus const MinViolation;

/// @brief Field UsesBaseline value: I32(256)
static ::GlobalNamespace::LayoutNodeData_FlexStatus const UsesBaseline;

/// @brief Field UsesMeasure value: I32(128)
static ::GlobalNamespace::LayoutNodeData_FlexStatus const UsesMeasure;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8653};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LayoutNodeData_FlexStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LayoutNodeData_FlexStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
