#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyViewModel_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyViewModel_Enumerator)
namespace Unity::Hierarchy {
class HierarchyFlattened;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace Unity::Hierarchy {
class HierarchyViewModel;
}
// Forward declare root types
namespace GlobalNamespace {
struct HierarchyViewModel_Enumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HierarchyViewModel_Enumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HierarchyViewModel_Enumerator, "Unity.Hierarchy", "HierarchyViewModel/Enumerator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyViewModel/Enumerator
struct CORDL_TYPE HierarchyViewModel_Enumerator {
public:
// Declarations
/// @brief [IsReadOnly]
 __declspec(property(get=get_Current)) ::Unity::Hierarchy::HierarchyNode  Current;

/// @brief Method MoveNext, addr 0xb639274, size 0x9cc, virtual false, abstract: false, final false
inline bool MoveNext() ;

/// @brief Method .ctor, addr 0xb638c94, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Hierarchy::HierarchyViewModel*  hierarchyViewModel) ;

/// @brief Method get_Current, addr 0xb639190, size 0xe4, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Hierarchy::HierarchyNode> get_Current() ;

// Ctor Parameters []
// @brief default ctor
constexpr HierarchyViewModel_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_ViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_NodesPtr", ty: "int32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_NodesCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HierarchyViewModel_Enumerator(::Unity::Hierarchy::HierarchyViewModel*  m_ViewModel, ::Unity::Hierarchy::HierarchyFlattened*  m_HierarchyFlattened, int32_t*  m_NodesPtr, int32_t  m_NodesCount, int32_t  m_Version, int32_t  m_Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32002};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ViewModel, offset: 0x0, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyViewModel*  m_ViewModel;

/// @brief Field m_HierarchyFlattened, offset: 0x8, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyFlattened*  m_HierarchyFlattened;

/// @brief Field m_NodesPtr, offset: 0x10, size: 0x8, def value: None
 int32_t*  m_NodesPtr;

/// @brief Field m_NodesCount, offset: 0x18, size: 0x4, def value: None
 int32_t  m_NodesCount;

/// @brief Field m_Version, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_Version;

/// @brief Field m_Index, offset: 0x20, size: 0x4, def value: None
 int32_t  m_Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HierarchyViewModel_Enumerator, m_ViewModel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyViewModel_Enumerator, m_HierarchyFlattened) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyViewModel_Enumerator, m_NodesPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyViewModel_Enumerator, m_NodesCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyViewModel_Enumerator, m_Version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyViewModel_Enumerator, m_Index) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HierarchyViewModel_Enumerator) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
