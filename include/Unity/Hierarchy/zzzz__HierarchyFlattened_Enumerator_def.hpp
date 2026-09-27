#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyFlattened_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyFlattened_Enumerator)
namespace Unity::Hierarchy {
struct HierarchyFlattenedNode;
}
namespace Unity::Hierarchy {
class HierarchyFlattened;
}
// Forward declare root types
namespace GlobalNamespace {
struct HierarchyFlattened_Enumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HierarchyFlattened_Enumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HierarchyFlattened_Enumerator, "Unity.Hierarchy", "HierarchyFlattened/Enumerator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyFlattened/Enumerator
struct CORDL_TYPE HierarchyFlattened_Enumerator {
public:
// Declarations
/// @brief [IsReadOnly]
 __declspec(property(get=get_Current)) ::Unity::Hierarchy::HierarchyFlattenedNode  Current;

/// @brief Method MoveNext, addr 0xb636a1c, size 0x20, virtual false, abstract: false, final false
inline bool MoveNext() ;

/// @brief Method .ctor, addr 0xb636704, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Hierarchy::HierarchyFlattened*  hierarchyFlattened) ;

/// @brief Method get_Current, addr 0xb636998, size 0x84, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode> get_Current() ;

// Ctor Parameters []
// @brief default ctor
constexpr HierarchyFlattened_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_NodesPtr", ty: "::Unity::Hierarchy::HierarchyFlattenedNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_NodesCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HierarchyFlattened_Enumerator(::Unity::Hierarchy::HierarchyFlattened*  m_HierarchyFlattened, ::Unity::Hierarchy::HierarchyFlattenedNode*  m_NodesPtr, int32_t  m_NodesCount, int32_t  m_Version, int32_t  m_Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31988};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_HierarchyFlattened, offset: 0x0, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyFlattened*  m_HierarchyFlattened;

/// @brief Field m_NodesPtr, offset: 0x8, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyFlattenedNode*  m_NodesPtr;

/// @brief Field m_NodesCount, offset: 0x10, size: 0x4, def value: None
 int32_t  m_NodesCount;

/// @brief Field m_Version, offset: 0x14, size: 0x4, def value: None
 int32_t  m_Version;

/// @brief Field m_Index, offset: 0x18, size: 0x4, def value: None
 int32_t  m_Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HierarchyFlattened_Enumerator, m_HierarchyFlattened) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyFlattened_Enumerator, m_NodesPtr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyFlattened_Enumerator, m_NodesCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyFlattened_Enumerator, m_Version) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyFlattened_Enumerator, m_Index) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HierarchyFlattened_Enumerator) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
