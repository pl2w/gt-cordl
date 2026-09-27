#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyViewNodesEnumerable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HierarchyViewNodesEnumerable)
namespace GlobalNamespace {
struct HierarchyViewNodesEnumerable_Enumerator;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Hierarchy {
struct HierarchyNodeFlags;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace Unity::Hierarchy {
class HierarchyViewModel;
}
namespace Unity::Hierarchy {
class HierarchyViewNodesEnumerable_Predicate;
}
// Forward declare root types
namespace Unity::Hierarchy {
class HierarchyViewNodesEnumerable_Predicate;
}
namespace Unity::Hierarchy {
struct HierarchyViewNodesEnumerable;
}
// Write type traits
MARK_REF_T(::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*);
MARK_VAL_T(::Unity::Hierarchy::HierarchyViewNodesEnumerable);
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*, "Unity.Hierarchy", "HierarchyViewNodesEnumerable/Predicate");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyViewNodesEnumerable, "Unity.Hierarchy", "HierarchyViewNodesEnumerable");
// [IsReadOnly]
// Dependencies Unity.Hierarchy.HierarchyNodeFlags
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyViewNodesEnumerable
struct CORDL_TYPE HierarchyViewNodesEnumerable {
public:
// Declarations
using Enumerator = ::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator;

using Predicate = ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate;

/// @brief Method GetEnumerator, addr 0xb6349c0, size 0x3c, virtual false, abstract: false, final false
inline ::GlobalNamespace::HierarchyViewNodesEnumerable_Enumerator GetEnumerator() ;

/// @brief Method .ctor, addr 0xb634914, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::Unity::Hierarchy::HierarchyViewModel*  viewModel, ::Unity::Hierarchy::HierarchyNodeFlags  flags, ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*  predicate) ;

// Ctor Parameters []
// @brief default ctor
constexpr HierarchyViewNodesEnumerable() ;

// Ctor Parameters [CppParam { name: "m_HierarchyViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Predicate", ty: "::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Flags", ty: "::Unity::Hierarchy::HierarchyNodeFlags", modifiers: "", def_value: None, comment: None }]
constexpr HierarchyViewNodesEnumerable(::Unity::Hierarchy::HierarchyViewModel*  m_HierarchyViewModel, ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*  m_Predicate, ::Unity::Hierarchy::HierarchyNodeFlags  m_Flags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31981};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_HierarchyViewModel, offset: 0x0, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyViewModel*  m_HierarchyViewModel;

/// @brief Field m_Predicate, offset: 0x8, size: 0x8, def value: None
 ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*  m_Predicate;

/// @brief Field m_Flags, offset: 0x10, size: 0x4, def value: None
 ::Unity::Hierarchy::HierarchyNodeFlags  m_Flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyViewNodesEnumerable, m_HierarchyViewModel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewNodesEnumerable, m_Predicate) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewNodesEnumerable, m_Flags) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchyViewNodesEnumerable) == 0x18, "Size mismatch!");

} // namespace end def Unity::Hierarchy
// Dependencies System.MulticastDelegate
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyViewNodesEnumerable/Predicate
class CORDL_TYPE HierarchyViewNodesEnumerable_Predicate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb634b28, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode>  node, ::Unity::Hierarchy::HierarchyNodeFlags  flags) ;

static inline ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb634a74, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HierarchyViewNodesEnumerable_Predicate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HierarchyViewNodesEnumerable_Predicate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HierarchyViewNodesEnumerable_Predicate(HierarchyViewNodesEnumerable_Predicate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyViewNodesEnumerable_Predicate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HierarchyViewNodesEnumerable_Predicate(HierarchyViewNodesEnumerable_Predicate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31979};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate) == 0x80, "Size mismatch!");

} // namespace end def Unity::Hierarchy
