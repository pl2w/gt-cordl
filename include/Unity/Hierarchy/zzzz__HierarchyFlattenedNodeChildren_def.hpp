#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyFlattenedNodeChildren.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyFlattenedNodeChildren)
namespace GlobalNamespace {
struct HierarchyFlattenedNodeChildren_Enumerator;
}
namespace Unity::Hierarchy {
class HierarchyFlattened;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchyFlattenedNodeChildren;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchyFlattenedNodeChildren);
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyFlattenedNodeChildren, "Unity.Hierarchy", "HierarchyFlattenedNodeChildren");
// [IsReadOnly]
// [DefaultMember("Item")]
// Dependencies Unity.Hierarchy.HierarchyNode
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyFlattenedNodeChildren
struct CORDL_TYPE HierarchyFlattenedNodeChildren {
public:
// Declarations
using Enumerator = ::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator;

/// @brief Method GetEnumerator, addr 0xb6328f8, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator GetEnumerator() ;

/// @brief Method ThrowIfVersionChanged, addr 0xb6329c0, size 0x70, virtual false, abstract: false, final false
inline void ThrowIfVersionChanged() ;

/// @brief Method .ctor, addr 0xb632614, size 0x1c4, virtual false, abstract: false, final false
inline void _ctor(::Unity::Hierarchy::HierarchyFlattened*  hierarchyFlattened, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode>  node) ;

// Ctor Parameters []
// @brief default ctor
constexpr HierarchyFlattenedNodeChildren() ;

// Ctor Parameters [CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Node", ty: "::Unity::Hierarchy::HierarchyNode", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HierarchyFlattenedNodeChildren(::Unity::Hierarchy::HierarchyFlattened*  m_HierarchyFlattened, ::Unity::Hierarchy::HierarchyNode  m_Node, int32_t  m_Version, int32_t  m_Count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31966};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_HierarchyFlattened, offset: 0x0, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyFlattened*  m_HierarchyFlattened;

/// @brief Field m_Node, offset: 0x8, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyNode  m_Node;

/// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
 int32_t  m_Version;

/// @brief Field m_Count, offset: 0x14, size: 0x4, def value: None
 int32_t  m_Count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNodeChildren, m_HierarchyFlattened) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNodeChildren, m_Node) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNodeChildren, m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNodeChildren, m_Count) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchyFlattenedNodeChildren) == 0x18, "Size mismatch!");

} // namespace end def Unity::Hierarchy
