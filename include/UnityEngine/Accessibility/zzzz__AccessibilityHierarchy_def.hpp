#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityHierarchy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessibilityHierarchy)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Accessibility {
class AccessibilityNode;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
class AccessibilityHierarchy;
}
// Write type traits
MARK_REF_T(::UnityEngine::Accessibility::AccessibilityHierarchy*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityHierarchy*, "UnityEngine.Accessibility", "AccessibilityHierarchy");
// Dependencies System.Object
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AccessibilityHierarchy
class CORDL_TYPE AccessibilityHierarchy : public ::System::Object {
public:
// Declarations
/// @brief Field m_Nodes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Nodes, put=__cordl_internal_set_m_Nodes)) ::System::Collections::Generic::IDictionary_2<int32_t,::UnityEngine::Accessibility::AccessibilityNode*>*  m_Nodes;

/// @brief Field m_RootNodes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RootNodes, put=__cordl_internal_set_m_RootNodes)) ::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>*  m_RootNodes;

/// @brief Method FreeNative, addr 0xb51c910, size 0x130, virtual false, abstract: false, final false
inline void FreeNative() ;

/// @brief Method TryGetNode, addr 0xb51b82c, size 0xbc, virtual false, abstract: false, final false
inline bool TryGetNode(int32_t  id, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>  node) ;

/// @brief Method TryGetNodeAt, addr 0xb51cdd0, size 0x34, virtual false, abstract: false, final false
inline bool TryGetNodeAt(float_t  horizontalPosition, float_t  verticalPosition, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>  node) ;

/// [CompilerGenerated]
/// @brief Method <TryGetNodeAt>g__FindNodeContainingPoint|27_0, addr 0xb51ce04, size 0x1a0, virtual false, abstract: false, final false
static inline ::UnityEngine::Accessibility::AccessibilityNode* _TryGetNodeAt_g__FindNodeContainingPoint_27_0(::System::Collections::Generic::IList_1<::UnityEngine::Accessibility::AccessibilityNode*>*  nodes, ::UnityEngine::Vector2  pos) ;

constexpr ::System::Collections::Generic::IDictionary_2<int32_t,::UnityEngine::Accessibility::AccessibilityNode*>* const& __cordl_internal_get_m_Nodes() const;

constexpr ::System::Collections::Generic::IDictionary_2<int32_t,::UnityEngine::Accessibility::AccessibilityNode*>*& __cordl_internal_get_m_Nodes() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>* const& __cordl_internal_get_m_RootNodes() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>*& __cordl_internal_get_m_RootNodes() ;

constexpr void __cordl_internal_set_m_Nodes(::System::Collections::Generic::IDictionary_2<int32_t,::UnityEngine::Accessibility::AccessibilityNode*>*  value) ;

constexpr void __cordl_internal_set_m_RootNodes(::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityHierarchy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityHierarchy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessibilityHierarchy(AccessibilityHierarchy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityHierarchy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessibilityHierarchy(AccessibilityHierarchy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32535};

/// @brief Field m_RootNodes, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>*  ___m_RootNodes;

/// @brief Field m_Nodes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<int32_t,::UnityEngine::Accessibility::AccessibilityNode*>*  ___m_Nodes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityHierarchy, ___m_RootNodes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityHierarchy, ___m_Nodes) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityHierarchy) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
