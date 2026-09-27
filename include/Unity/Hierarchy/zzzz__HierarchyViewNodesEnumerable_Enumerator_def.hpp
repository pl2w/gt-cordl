#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyViewNodesEnumerable_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyViewNodesEnumerable_Enumerator)
namespace Unity::Hierarchy {
struct HierarchyFlattenedNode;
}
namespace Unity::Hierarchy {
class HierarchyFlattened;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace Unity::Hierarchy {
class HierarchyViewNodesEnumerable_Predicate;
}
namespace Unity::Hierarchy {
struct HierarchyViewNodesEnumerable;
}
// Forward declare root types
namespace GlobalNamespace {
struct HierarchyViewNodesEnumerable_Enumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator, "Unity.Hierarchy", "HierarchyViewNodesEnumerable/Enumerator");
// Dependencies Unity.Hierarchy.HierarchyNodeFlags
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyViewNodesEnumerable/Enumerator
struct CORDL_TYPE HierarchyViewNodesEnumerable_Enumerator {
public:
// Declarations
/// @brief [IsReadOnly]
 __declspec(property(get=get_Current)) ::Unity::Hierarchy::HierarchyNode  Current;

/// @brief Method MoveNext, addr 0xb634bcc, size 0xd4, virtual false, abstract: false, final false
inline bool MoveNext() ;

/// @brief Method ThrowIfVersionChanged, addr 0xb634ca0, size 0x70, virtual false, abstract: false, final false
inline void ThrowIfVersionChanged() ;

/// @brief Method .ctor, addr 0xb6349fc, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::Unity::Hierarchy::HierarchyViewNodesEnumerable  enumerable) ;

/// @brief Method get_Current, addr 0xb634b48, size 0x84, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Hierarchy::HierarchyNode> get_Current() ;

// Ctor Parameters []
// @brief default ctor
constexpr HierarchyViewNodesEnumerable_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Predicate", ty: "::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Flags", ty: "::Unity::Hierarchy::HierarchyNodeFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_NodesPtr", ty: "::Unity::Hierarchy::HierarchyFlattenedNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_NodesCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HierarchyViewNodesEnumerable_Enumerator(::Unity::Hierarchy::HierarchyFlattened*  m_HierarchyFlattened, ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*  m_Predicate, ::Unity::Hierarchy::HierarchyNodeFlags  m_Flags, ::Unity::Hierarchy::HierarchyFlattenedNode*  m_NodesPtr, int32_t  m_NodesCount, int32_t  m_Version, int32_t  m_Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31980};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_HierarchyFlattened, offset: 0x0, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyFlattened*  m_HierarchyFlattened;

/// @brief Field m_Predicate, offset: 0x8, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*  m_Predicate;

/// @brief Field m_Flags, offset: 0x10, size: 0x4, def value: None
 ::Unity::Hierarchy::HierarchyNodeFlags  m_Flags;

/// @brief Field m_NodesPtr, offset: 0x18, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyFlattenedNode*  m_NodesPtr;

/// @brief Field m_NodesCount, offset: 0x20, size: 0x4, def value: None
 int32_t  m_NodesCount;

/// @brief Field m_Version, offset: 0x24, size: 0x4, def value: None
 int32_t  m_Version;

/// @brief Field m_Index, offset: 0x28, size: 0x4, def value: None
 int32_t  m_Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator, m_HierarchyFlattened) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator, m_Predicate) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator, m_Flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator, m_NodesPtr) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator, m_NodesCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator, m_Version) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator, m_Index) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
