#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/MultiColumnCollectionHeader_ViewState_ColumnState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiColumnCollectionHeader_ViewState_ColumnState)
// Forward declare root types
namespace GlobalNamespace {
struct ViewState_MultiColumnCollectionHeader_ColumnState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ViewState_MultiColumnCollectionHeader_ColumnState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ViewState_MultiColumnCollectionHeader_ColumnState, "UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader/ViewState/ColumnState");
// Dependencies UnityEngine.UIElements.Length
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.Internal.MultiColumnCollectionHeader/ViewState/ColumnState
struct CORDL_TYPE ViewState_MultiColumnCollectionHeader_ColumnState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ViewState_MultiColumnCollectionHeader_ColumnState() ;

// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "actualWidth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "width", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment: None }, CppParam { name: "visible", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr ViewState_MultiColumnCollectionHeader_ColumnState(int32_t  index, ::StringW  name, float_t  actualWidth, ::UnityEngine::UIElements::Length  width, bool  visible) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8751};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field index, offset: 0x0, size: 0x4, def value: None
 int32_t  index;

/// @brief Field name, offset: 0x8, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field actualWidth, offset: 0x10, size: 0x4, def value: None
 float_t  actualWidth;

/// @brief Field width, offset: 0x14, size: 0x8, def value: None
 ::UnityEngine::UIElements::Length  width;

/// @brief Field visible, offset: 0x1c, size: 0x1, def value: None
 bool  visible;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ViewState_MultiColumnCollectionHeader_ColumnState, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ViewState_MultiColumnCollectionHeader_ColumnState, name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ViewState_MultiColumnCollectionHeader_ColumnState, actualWidth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ViewState_MultiColumnCollectionHeader_ColumnState, width) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ViewState_MultiColumnCollectionHeader_ColumnState, visible) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ViewState_MultiColumnCollectionHeader_ColumnState) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
