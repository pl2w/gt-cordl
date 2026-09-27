#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyFlattenedNodeChildren_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNodeChildren_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyFlattenedNodeChildren_Enumerator)
namespace Unity::Hierarchy {
struct HierarchyFlattenedNodeChildren;
}
namespace Unity::Hierarchy {
class HierarchyFlattened;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
// Forward declare root types
namespace GlobalNamespace {
struct HierarchyFlattenedNodeChildren_Enumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator, "Unity.Hierarchy", "HierarchyFlattenedNodeChildren/Enumerator");
// Dependencies Unity.Hierarchy.HierarchyFlattenedNodeChildren, Unity.Hierarchy.HierarchyNode
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyFlattenedNodeChildren/Enumerator
struct CORDL_TYPE HierarchyFlattenedNodeChildren_Enumerator {
public:
// Declarations
/// @brief [IsReadOnly]
 __declspec(property(get=get_Current)) ::Unity::Hierarchy::HierarchyNode  Current;

/// @brief Method MoveNext, addr 0xb632b0c, size 0x1e4, virtual false, abstract: false, final false
inline bool MoveNext() ;

/// @brief Method .ctor, addr 0xb632968, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Unity::Hierarchy::HierarchyFlattenedNodeChildren  enumerable, ::Unity::Hierarchy::HierarchyNode  node) ;

/// @brief Method get_Current, addr 0xb632a30, size 0xdc, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Hierarchy::HierarchyNode> get_Current() ;

// Ctor Parameters []
// @brief default ctor
constexpr HierarchyFlattenedNodeChildren_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_Enumerable", ty: "::Unity::Hierarchy::HierarchyFlattenedNodeChildren", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Node", ty: "::Unity::Hierarchy::HierarchyNode", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ChildrenIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ChildrenCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HierarchyFlattenedNodeChildren_Enumerator(::Unity::Hierarchy::HierarchyFlattenedNodeChildren  m_Enumerable, ::Unity::Hierarchy::HierarchyFlattened*  m_HierarchyFlattened, ::Unity::Hierarchy::HierarchyNode  m_Node, int32_t  m_CurrentIndex, int32_t  m_ChildrenIndex, int32_t  m_ChildrenCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31965};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_Enumerable, offset: 0x0, size: 0x18, def value: None
 ::Unity::Hierarchy::HierarchyFlattenedNodeChildren  m_Enumerable;

/// @brief Field m_HierarchyFlattened, offset: 0x18, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyFlattened*  m_HierarchyFlattened;

/// @brief Field m_Node, offset: 0x20, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyNode  m_Node;

/// @brief Field m_CurrentIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  m_CurrentIndex;

/// @brief Field m_ChildrenIndex, offset: 0x2c, size: 0x4, def value: None
 int32_t  m_ChildrenIndex;

/// @brief Field m_ChildrenCount, offset: 0x30, size: 0x4, def value: None
 int32_t  m_ChildrenCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator, m_Enumerable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator, m_HierarchyFlattened) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator, m_Node) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator, m_CurrentIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator, m_ChildrenIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator, m_ChildrenCount) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HierarchyFlattenedNodeChildren_Enumerator) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
