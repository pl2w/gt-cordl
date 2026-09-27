#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityHierarchyService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessibilityHierarchyService)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Accessibility {
class AccessibilityHierarchy;
}
namespace UnityEngine::Accessibility {
class AccessibilityNode;
}
namespace UnityEngine::Accessibility {
class IService;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
class AccessibilityHierarchyService;
}
// Write type traits
MARK_REF_T(::UnityEngine::Accessibility::AccessibilityHierarchyService*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityHierarchyService*, "UnityEngine.Accessibility", "AccessibilityHierarchyService");
// Dependencies System.Object
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AccessibilityHierarchyService
class CORDL_TYPE AccessibilityHierarchyService : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_hierarchy)) ::UnityEngine::Accessibility::AccessibilityHierarchy*  hierarchy;

/// @brief Field m_Hierarchy, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Hierarchy, put=__cordl_internal_set_m_Hierarchy)) ::UnityEngine::Accessibility::AccessibilityHierarchy*  m_Hierarchy;

/// @brief Convert operator to "::UnityEngine::Accessibility::IService"
constexpr operator  ::UnityEngine::Accessibility::IService*() noexcept;

/// @brief Method GetRootNodes, addr 0xb51aed0, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>* GetRootNodes() ;

static inline ::UnityEngine::Accessibility::AccessibilityHierarchyService* New_ctor() ;

/// @brief Method RemoveActiveHierarchy, addr 0xb51d41c, size 0x130, virtual false, abstract: false, final false
inline void RemoveActiveHierarchy(bool  notifyScreenChanged) ;

/// @brief Method Start, addr 0xb51d404, size 0x4, virtual true, abstract: false, final true
inline void Start() ;

/// @brief Method Stop, addr 0xb51d408, size 0x14, virtual true, abstract: false, final true
inline void Stop() ;

/// @brief Method TryGetNode, addr 0xb51af98, size 0x4c, virtual false, abstract: false, final false
inline bool TryGetNode(int32_t  id, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>  node) ;

/// @brief Method TryGetNodeAt, addr 0xb51b254, size 0x78, virtual false, abstract: false, final false
inline bool TryGetNodeAt(float_t  x, float_t  y, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>  node) ;

constexpr ::UnityEngine::Accessibility::AccessibilityHierarchy* const& __cordl_internal_get_m_Hierarchy() const;

constexpr ::UnityEngine::Accessibility::AccessibilityHierarchy*& __cordl_internal_get_m_Hierarchy() ;

constexpr void __cordl_internal_set_m_Hierarchy(::UnityEngine::Accessibility::AccessibilityHierarchy*  value) ;

/// @brief Method .ctor, addr 0xb51d54c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_hierarchy, addr 0xb51d3fc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Accessibility::AccessibilityHierarchy* get_hierarchy() ;

/// @brief Convert to "::UnityEngine::Accessibility::IService"
constexpr ::UnityEngine::Accessibility::IService* i___UnityEngine__Accessibility__IService() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityHierarchyService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityHierarchyService", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessibilityHierarchyService(AccessibilityHierarchyService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityHierarchyService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessibilityHierarchyService(AccessibilityHierarchyService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32539};

/// @brief Field m_Hierarchy, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Accessibility::AccessibilityHierarchy*  ___m_Hierarchy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityHierarchyService, ___m_Hierarchy) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityHierarchyService) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
