#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeTypeHandlerBaseEnumerable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(HierarchyNodeTypeHandlerBaseEnumerable)
namespace GlobalNamespace {
struct HierarchyNodeTypeHandlerBaseEnumerable_Enumerator;
}
namespace Unity::Hierarchy {
class Hierarchy;
}
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchyNodeTypeHandlerBaseEnumerable;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable);
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable, "Unity.Hierarchy", "HierarchyNodeTypeHandlerBaseEnumerable");
// [IsReadOnly]
// Dependencies 
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyNodeTypeHandlerBaseEnumerable
struct CORDL_TYPE HierarchyNodeTypeHandlerBaseEnumerable {
public:
// Declarations
using Enumerator = ::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator;

/// @brief Method GetEnumerator, addr 0xb634360, size 0x28, virtual false, abstract: false, final false
inline ::GlobalNamespace::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator GetEnumerator() ;

/// @brief Method .ctor, addr 0xb634358, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Hierarchy::Hierarchy*  hierarchy) ;

// Ctor Parameters []
// @brief default ctor
constexpr HierarchyNodeTypeHandlerBaseEnumerable() ;

// Ctor Parameters [CppParam { name: "m_Hierarchy", ty: "::Unity::Hierarchy::Hierarchy*", modifiers: "", def_value: None, comment: None }]
constexpr HierarchyNodeTypeHandlerBaseEnumerable(::Unity::Hierarchy::Hierarchy*  m_Hierarchy) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31975};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Hierarchy, offset: 0x0, size: 0x8, def value: None
 ::Unity::Hierarchy::Hierarchy*  m_Hierarchy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable, m_Hierarchy) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable) == 0x8, "Size mismatch!");

} // namespace end def Unity::Hierarchy
