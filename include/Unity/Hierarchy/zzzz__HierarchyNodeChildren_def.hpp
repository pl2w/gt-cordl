#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeChildren.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyNodeChildren)
namespace GlobalNamespace {
struct HierarchyNodeChildren_Enumerator;
}
namespace System {
struct IntPtr;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace Unity::Hierarchy {
class Hierarchy;
}
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchyNodeChildren;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchyNodeChildren);
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyNodeChildren, "Unity.Hierarchy", "HierarchyNodeChildren");
// [IsReadOnly]
// [DefaultMember("Item")]
// Dependencies 
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyNodeChildren
struct CORDL_TYPE HierarchyNodeChildren {
public:
// Declarations
using Enumerator = ::GlobalNamespace::HierarchyNodeChildren_Enumerator;

/// @brief Method GetEnumerator, addr 0xb632f38, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::HierarchyNodeChildren_Enumerator GetEnumerator() ;

/// @brief Method ThrowIfVersionChanged, addr 0xb632f9c, size 0x7c, virtual false, abstract: false, final false
inline void ThrowIfVersionChanged() ;

/// @brief Method .ctor, addr 0xb632da0, size 0x16c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Hierarchy::Hierarchy*  hierarchy, ::System::IntPtr  nodeChildrenPtr) ;

// Ctor Parameters []
// @brief default ctor
constexpr HierarchyNodeChildren() ;

// Ctor Parameters [CppParam { name: "m_Hierarchy", ty: "::Unity::Hierarchy::Hierarchy*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Ptr", ty: "::Unity::Hierarchy::HierarchyNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HierarchyNodeChildren(::Unity::Hierarchy::Hierarchy*  m_Hierarchy, ::Unity::Hierarchy::HierarchyNode*  m_Ptr, int32_t  m_Version, int32_t  m_Count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31968};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Hierarchy, offset: 0x0, size: 0x8, def value: None
 ::Unity::Hierarchy::Hierarchy*  m_Hierarchy;

/// @brief Field m_Ptr, offset: 0x8, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyNode*  m_Ptr;

/// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
 int32_t  m_Version;

/// @brief Field m_Count, offset: 0x14, size: 0x4, def value: None
 int32_t  m_Count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeChildren, m_Hierarchy) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeChildren, m_Ptr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeChildren, m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeChildren, m_Count) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchyNodeChildren) == 0x18, "Size mismatch!");

} // namespace end def Unity::Hierarchy
