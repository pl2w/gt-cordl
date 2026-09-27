#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ReadOnlyHierarchyViewModelList_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Hierarchy/zzzz__HierarchyViewModel_Enumerator_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ReadOnlyHierarchyViewModelList_Enumerator)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace Unity::Hierarchy {
class HierarchyViewModel;
}
// Forward declare root types
namespace GlobalNamespace {
struct ReadOnlyHierarchyViewModelList_Enumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator, "UnityEngine.UIElements", "ReadOnlyHierarchyViewModelList/Enumerator");
// Dependencies Unity.Hierarchy.HierarchyViewModel::Enumerator
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.ReadOnlyHierarchyViewModelList/Enumerator
struct CORDL_TYPE ReadOnlyHierarchyViewModelList_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Object*  Current;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Method MoveNext, addr 0xb7345f8, size 0x20, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0xb734618, size 0x54, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method .ctor, addr 0xb7343a0, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Unity::Hierarchy::HierarchyViewModel*  hierarchyViewModel) ;

/// @brief Method get_Current, addr 0xb734590, size 0x68, virtual true, abstract: false, final true
inline ::System::Object* get_Current() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlyHierarchyViewModelList_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_HierarchyViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Enumerator", ty: "::GlobalNamespace::HierarchyViewModel_Enumerator", modifiers: "", def_value: None, comment: None }]
constexpr ReadOnlyHierarchyViewModelList_Enumerator(::Unity::Hierarchy::HierarchyViewModel*  m_HierarchyViewModel, ::GlobalNamespace::HierarchyViewModel_Enumerator  m_Enumerator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7233};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_HierarchyViewModel, offset: 0x0, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyViewModel*  m_HierarchyViewModel;

/// @brief Field m_Enumerator, offset: 0x8, size: 0x28, def value: None
 ::GlobalNamespace::HierarchyViewModel_Enumerator  m_Enumerator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator, m_HierarchyViewModel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator, m_Enumerator) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ReadOnlyHierarchyViewModelList_Enumerator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
