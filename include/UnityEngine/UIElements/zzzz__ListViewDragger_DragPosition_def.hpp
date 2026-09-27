#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ListViewDragger_DragPosition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__DragAndDropPosition_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ListViewDragger_DragPosition)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
// Forward declare root types
namespace GlobalNamespace {
struct ListViewDragger_DragPosition;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ListViewDragger_DragPosition);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ListViewDragger_DragPosition, "UnityEngine.UIElements", "ListViewDragger/DragPosition");
// Dependencies UnityEngine.UIElements.DragAndDropPosition
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.ListViewDragger/DragPosition
struct CORDL_TYPE ListViewDragger_DragPosition {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::ListViewDragger_DragPosition>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::ListViewDragger_DragPosition>*() ;

/// @brief Method Equals, addr 0xb887034, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb886fb4, size 0x80, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::ListViewDragger_DragPosition  other) ;

/// @brief Method GetHashCode, addr 0xb8870bc, size 0x64, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::ListViewDragger_DragPosition>"
constexpr ::System::IEquatable_1<::GlobalNamespace::ListViewDragger_DragPosition>* i___System__IEquatable_1___GlobalNamespace__ListViewDragger_DragPosition_() ;

// Ctor Parameters []
// @brief default ctor
constexpr ListViewDragger_DragPosition() ;

// Ctor Parameters [CppParam { name: "insertAtIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "childIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "recycledItem", ty: "::UnityEngine::UIElements::ReusableCollectionItem*", modifiers: "", def_value: None, comment: None }, CppParam { name: "dropPosition", ty: "::UnityEngine::UIElements::DragAndDropPosition", modifiers: "", def_value: None, comment: None }]
constexpr ListViewDragger_DragPosition(int32_t  insertAtIndex, int32_t  parentId, int32_t  childIndex, ::UnityEngine::UIElements::ReusableCollectionItem*  recycledItem, ::UnityEngine::UIElements::DragAndDropPosition  dropPosition) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7555};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field insertAtIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  insertAtIndex;

/// @brief Field parentId, offset: 0x4, size: 0x4, def value: None
 int32_t  parentId;

/// @brief Field childIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  childIndex;

/// @brief Field recycledItem, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::ReusableCollectionItem*  recycledItem;

/// @brief Field dropPosition, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::UIElements::DragAndDropPosition  dropPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListViewDragger_DragPosition, insertAtIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ListViewDragger_DragPosition, parentId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ListViewDragger_DragPosition, childIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ListViewDragger_DragPosition, recycledItem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ListViewDragger_DragPosition, dropPosition) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ListViewDragger_DragPosition) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
