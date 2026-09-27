#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/MultiColumnCollectionHeader_SortedColumnState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__SortDirection_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MultiColumnCollectionHeader_SortedColumnState)
namespace UnityEngine::UIElements {
class SortColumnDescription;
}
namespace UnityEngine::UIElements {
struct SortDirection;
}
// Forward declare root types
namespace GlobalNamespace {
struct MultiColumnCollectionHeader_SortedColumnState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiColumnCollectionHeader_SortedColumnState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiColumnCollectionHeader_SortedColumnState, "UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader/SortedColumnState");
// Dependencies UnityEngine.UIElements.SortDirection
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.Internal.MultiColumnCollectionHeader/SortedColumnState
struct CORDL_TYPE MultiColumnCollectionHeader_SortedColumnState {
public:
// Declarations
/// @brief Method .ctor, addr 0xb83cf94, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::SortColumnDescription*  desc, ::UnityEngine::UIElements::SortDirection  dir) ;

// Ctor Parameters []
// @brief default ctor
constexpr MultiColumnCollectionHeader_SortedColumnState() ;

// Ctor Parameters [CppParam { name: "columnDesc", ty: "::UnityEngine::UIElements::SortColumnDescription*", modifiers: "", def_value: None, comment: None }, CppParam { name: "direction", ty: "::UnityEngine::UIElements::SortDirection", modifiers: "", def_value: None, comment: None }]
constexpr MultiColumnCollectionHeader_SortedColumnState(::UnityEngine::UIElements::SortColumnDescription*  columnDesc, ::UnityEngine::UIElements::SortDirection  direction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8754};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field columnDesc, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::SortColumnDescription*  columnDesc;

/// @brief Field direction, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::UIElements::SortDirection  direction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiColumnCollectionHeader_SortedColumnState, columnDesc) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiColumnCollectionHeader_SortedColumnState, direction) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MultiColumnCollectionHeader_SortedColumnState) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
