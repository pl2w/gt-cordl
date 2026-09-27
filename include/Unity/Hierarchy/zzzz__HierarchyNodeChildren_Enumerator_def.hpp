#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeChildren_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Hierarchy/zzzz__HierarchyNodeChildren_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyNodeChildren_Enumerator)
namespace Unity::Hierarchy {
struct HierarchyNodeChildren;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
// Forward declare root types
namespace GlobalNamespace {
struct HierarchyNodeChildren_Enumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HierarchyNodeChildren_Enumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HierarchyNodeChildren_Enumerator, "Unity.Hierarchy", "HierarchyNodeChildren/Enumerator");
// Dependencies Unity.Hierarchy.HierarchyNodeChildren
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyNodeChildren/Enumerator
struct CORDL_TYPE HierarchyNodeChildren_Enumerator {
public:
// Declarations
/// @brief [IsReadOnly]
 __declspec(property(get=get_Current)) ::Unity::Hierarchy::HierarchyNode  Current;

/// @brief Method MoveNext, addr 0xb6330ac, size 0x1c, virtual false, abstract: false, final false
inline bool MoveNext() ;

/// @brief Method .ctor, addr 0xb632f6c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNodeChildren>  enumerable) ;

/// @brief Method get_Current, addr 0xb633018, size 0x94, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Hierarchy::HierarchyNode> get_Current() ;

// Ctor Parameters []
// @brief default ctor
constexpr HierarchyNodeChildren_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_Enumerable", ty: "::Unity::Hierarchy::HierarchyNodeChildren", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HierarchyNodeChildren_Enumerator(::Unity::Hierarchy::HierarchyNodeChildren  m_Enumerable, int32_t  m_Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31967};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Enumerable, offset: 0x0, size: 0x18, def value: None
 ::Unity::Hierarchy::HierarchyNodeChildren  m_Enumerable;

/// @brief Field m_Index, offset: 0x18, size: 0x4, def value: None
 int32_t  m_Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HierarchyNodeChildren_Enumerator, m_Enumerable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HierarchyNodeChildren_Enumerator, m_Index) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HierarchyNodeChildren_Enumerator) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
