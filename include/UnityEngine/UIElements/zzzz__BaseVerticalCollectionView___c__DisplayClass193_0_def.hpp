#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseVerticalCollectionView___c__DisplayClass193_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseVerticalCollectionView___c__DisplayClass193_0)
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
// Forward declare root types
namespace GlobalNamespace {
struct BaseVerticalCollectionView___c__DisplayClass193_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BaseVerticalCollectionView___c__DisplayClass193_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseVerticalCollectionView___c__DisplayClass193_0, "UnityEngine.UIElements", "BaseVerticalCollectionView/<>c__DisplayClass193_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.BaseVerticalCollectionView/<>c__DisplayClass193_0
struct CORDL_TYPE BaseVerticalCollectionView___c__DisplayClass193_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BaseVerticalCollectionView___c__DisplayClass193_0() ;

// Ctor Parameters [CppParam { name: "selectedIndicesChanged", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityEngine::UIElements::BaseVerticalCollectionView*", modifiers: "", def_value: None, comment: None }, CppParam { name: "previousSelectionCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BaseVerticalCollectionView___c__DisplayClass193_0(bool  selectedIndicesChanged, ::UnityEngine::UIElements::BaseVerticalCollectionView*  __4__this, int32_t  previousSelectionCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7290};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field selectedIndicesChanged, offset: 0x0, size: 0x1, def value: None
 bool  selectedIndicesChanged;

/// @brief Field <>4__this, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::UIElements::BaseVerticalCollectionView*  __4__this;

/// @brief Field previousSelectionCount, offset: 0x10, size: 0x4, def value: None
 int32_t  previousSelectionCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseVerticalCollectionView___c__DisplayClass193_0, selectedIndicesChanged) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseVerticalCollectionView___c__DisplayClass193_0, __4__this) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseVerticalCollectionView___c__DisplayClass193_0, previousSelectionCount) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseVerticalCollectionView___c__DisplayClass193_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
