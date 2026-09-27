#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutNodeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer2_1_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutHandle_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutList_1_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNodeData_FlexStatus_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutValue_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutNodeData)
namespace GlobalNamespace {
struct LayoutNodeData_FlexStatus;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutNodeData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutNodeData);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Layout::LayoutNodeData, "UnityEngine.UIElements.Layout", "LayoutNodeData");
// Dependencies UnityEngine.UIElements.Layout.FixedBuffer2`1<T>, UnityEngine.UIElements.Layout.LayoutHandle, UnityEngine.UIElements.Layout.LayoutList`1<T>, UnityEngine.UIElements.Layout.LayoutNodeData::FlexStatus, UnityEngine.UIElements.Layout.LayoutValue
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutNodeData
struct CORDL_TYPE LayoutNodeData {
public:
// Declarations
using FlexStatus = ::GlobalNamespace::LayoutNodeData_FlexStatus;

 __declspec(property(get=get_HasNewLayout, put=set_HasNewLayout)) bool  HasNewLayout;

 __declspec(property(get=get_IsDirty, put=set_IsDirty)) bool  IsDirty;

 __declspec(property(put=set_UsesBaseline)) bool  UsesBaseline;

 __declspec(property(get=get_UsesMeasure, put=set_UsesMeasure)) bool  UsesMeasure;

/// @brief Method get_HasNewLayout, addr 0xb80010c, size 0xc, virtual false, abstract: false, final false
inline bool get_HasNewLayout() ;

/// @brief Method get_IsDirty, addr 0xb800028, size 0xc, virtual false, abstract: false, final false
inline bool get_IsDirty() ;

/// @brief Method get_UsesMeasure, addr 0xb800210, size 0xc, virtual false, abstract: false, final false
inline bool get_UsesMeasure() ;

/// @brief Method set_HasNewLayout, addr 0xb800194, size 0x20, virtual false, abstract: false, final false
inline void set_HasNewLayout(bool  value) ;

/// @brief Method set_IsDirty, addr 0xb8000a0, size 0x10, virtual false, abstract: false, final false
inline void set_IsDirty(bool  value) ;

/// @brief Method set_UsesBaseline, addr 0xb7fe0b8, size 0x20, virtual false, abstract: false, final false
inline void set_UsesBaseline(bool  value) ;

/// @brief Method set_UsesMeasure, addr 0xb7fe098, size 0x20, virtual false, abstract: false, final false
inline void set_UsesMeasure(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LayoutNodeData() ;

// Ctor Parameters [CppParam { name: "ResolvedDimensions", ty: "::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TargetSize", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ManagedOwnerIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LineIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Config", ty: "::UnityEngine::UIElements::Layout::LayoutHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "Parent", ty: "::UnityEngine::UIElements::Layout::LayoutHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "NextChild", ty: "::UnityEngine::UIElements::Layout::LayoutHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "Children", ty: "::UnityEngine::UIElements::Layout::LayoutList_1<::UnityEngine::UIElements::Layout::LayoutHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Status", ty: "::GlobalNamespace::LayoutNodeData_FlexStatus", modifiers: "", def_value: None, comment: None }]
constexpr LayoutNodeData(::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue>  ResolvedDimensions, float_t  TargetSize, int32_t  ManagedOwnerIndex, int32_t  LineIndex, ::UnityEngine::UIElements::Layout::LayoutHandle  Config, ::UnityEngine::UIElements::Layout::LayoutHandle  Parent, ::UnityEngine::UIElements::Layout::LayoutHandle  NextChild, ::UnityEngine::UIElements::Layout::LayoutList_1<::UnityEngine::UIElements::Layout::LayoutHandle>  Children, ::GlobalNamespace::LayoutNodeData_FlexStatus  Status) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8654};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field ResolvedDimensions, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue>  ResolvedDimensions;

/// @brief Field TargetSize, offset: 0x10, size: 0x4, def value: None
 float_t  TargetSize;

/// @brief Field ManagedOwnerIndex, offset: 0x14, size: 0x4, def value: None
 int32_t  ManagedOwnerIndex;

/// @brief Field LineIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  LineIndex;

/// @brief Field Config, offset: 0x1c, size: 0x8, def value: None
 ::UnityEngine::UIElements::Layout::LayoutHandle  Config;

/// @brief Field Parent, offset: 0x24, size: 0x8, def value: None
 ::UnityEngine::UIElements::Layout::LayoutHandle  Parent;

/// @brief Field NextChild, offset: 0x2c, size: 0x8, def value: None
 ::UnityEngine::UIElements::Layout::LayoutHandle  NextChild;

/// @brief Field Children, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::UIElements::Layout::LayoutList_1<::UnityEngine::UIElements::Layout::LayoutHandle>  Children;

/// @brief Field Status, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::LayoutNodeData_FlexStatus  Status;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, ResolvedDimensions) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, TargetSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, ManagedOwnerIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, LineIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, Config) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, Parent) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, NextChild) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, Children) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutNodeData, Status) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Layout::LayoutNodeData) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::Layout
