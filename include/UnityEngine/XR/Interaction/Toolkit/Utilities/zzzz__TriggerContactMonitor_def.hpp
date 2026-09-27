#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/TriggerContactMonitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TriggerContactMonitor)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class TriggerContactMonitor;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "TriggerContactMonitor");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.TriggerContactMonitor
class CORDL_TYPE TriggerContactMonitor : public ::System::Object {
public:
// Declarations
/// @brief Field <interactionManager>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactionManager_k__BackingField, put=__cordl_internal_set__interactionManager_k__BackingField)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  _interactionManager_k__BackingField;

/// @brief Field contactAdded, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_contactAdded, put=__cordl_internal_set_contactAdded)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  contactAdded;

/// @brief Field contactRemoved, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_contactRemoved, put=__cordl_internal_set_contactRemoved)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  contactRemoved;

 __declspec(property(get=get_interactionManager, put=set_interactionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  interactionManager;

/// @brief Field m_EnteredColliders, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_EnteredColliders, put=__cordl_internal_set_m_EnteredColliders)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  m_EnteredColliders;

/// @brief Field m_EnteredUnassociatedColliders, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_EnteredUnassociatedColliders, put=__cordl_internal_set_m_EnteredUnassociatedColliders)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  m_EnteredUnassociatedColliders;

/// @brief Field m_UnorderedInteractables, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UnorderedInteractables, put=__cordl_internal_set_m_UnorderedInteractables)) ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  m_UnorderedInteractables;

/// @brief Field s_ExitedColliders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ExitedColliders, put=setStaticF_s_ExitedColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  s_ExitedColliders;

/// @brief Field s_ScratchColliders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ScratchColliders, put=setStaticF_s_ScratchColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  s_ScratchColliders;

/// @brief Method AddCollider, addr 0xb428924, size 0x138, virtual false, abstract: false, final false
inline void AddCollider(::UnityEngine::Collider*  collider) ;

/// @brief Method IsContacting, addr 0xb429a04, size 0x58, virtual false, abstract: false, final false
inline bool IsContacting(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method IsDestroyed, addr 0xb429a5c, size 0x5c, virtual false, abstract: false, final false
static inline bool IsDestroyed(::UnityEngine::Collider*  col) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor* New_ctor() ;

/// @brief Method RemoveCollider, addr 0xb428a5c, size 0x284, virtual false, abstract: false, final false
inline void RemoveCollider(::UnityEngine::Collider*  collider) ;

/// @brief Method RemoveFromUnassociatedColliders, addr 0xb429164, size 0x58, virtual false, abstract: false, final false
inline void RemoveFromUnassociatedColliders(::UnityEngine::Collider*  col) ;

/// @brief Method ResolveUnassociatedColliders, addr 0xb428ce0, size 0x484, virtual false, abstract: false, final false
inline void ResolveUnassociatedColliders() ;

/// @brief Method ResolveUnassociatedColliders, addr 0xb4291bc, size 0x364, virtual false, abstract: false, final false
inline void ResolveUnassociatedColliders(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method UpdateStayedColliders, addr 0xb429520, size 0x4e4, virtual false, abstract: false, final false
inline void UpdateStayedColliders(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  stayedColliders) ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get__interactionManager_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get__interactionManager_k__BackingField() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& __cordl_internal_get_contactAdded() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& __cordl_internal_get_contactAdded() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& __cordl_internal_get_contactRemoved() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& __cordl_internal_get_contactRemoved() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& __cordl_internal_get_m_EnteredColliders() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& __cordl_internal_get_m_EnteredColliders() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_m_EnteredUnassociatedColliders() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_m_EnteredUnassociatedColliders() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& __cordl_internal_get_m_UnorderedInteractables() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& __cordl_internal_get_m_UnorderedInteractables() ;

constexpr void __cordl_internal_set__interactionManager_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value) ;

constexpr void __cordl_internal_set_contactAdded(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

constexpr void __cordl_internal_set_contactRemoved(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_EnteredColliders(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_EnteredUnassociatedColliders(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_m_UnorderedInteractables(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

/// @brief Method .ctor, addr 0xb429ab8, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_contactAdded, addr 0xb428654, size 0xb0, virtual false, abstract: false, final false
inline void add_contactAdded(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_contactRemoved, addr 0xb4287b4, size 0xb0, virtual false, abstract: false, final false
inline void add_contactRemoved(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* getStaticF_s_ExitedColliders() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* getStaticF_s_ScratchColliders() ;

/// [CompilerGenerated]
/// @brief Method get_interactionManager, addr 0xb428914, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> get_interactionManager() ;

/// [CompilerGenerated]
/// @brief Method remove_contactAdded, addr 0xb428704, size 0xb0, virtual false, abstract: false, final false
inline void remove_contactAdded(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_contactRemoved, addr 0xb428864, size 0xb0, virtual false, abstract: false, final false
inline void remove_contactRemoved(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

static inline void setStaticF_s_ExitedColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

static inline void setStaticF_s_ScratchColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_interactionManager, addr 0xb42891c, size 0x8, virtual false, abstract: false, final false
inline void set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriggerContactMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriggerContactMonitor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TriggerContactMonitor(TriggerContactMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriggerContactMonitor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriggerContactMonitor(TriggerContactMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11222};

/// [CompilerGenerated]
/// @brief Field contactAdded, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  ___contactAdded;

/// [CompilerGenerated]
/// @brief Field contactRemoved, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  ___contactRemoved;

/// [CompilerGenerated]
/// @brief Field <interactionManager>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  ____interactionManager_k__BackingField;

/// @brief Field m_EnteredColliders, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  ___m_EnteredColliders;

/// @brief Field m_UnorderedInteractables, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  ___m_UnorderedInteractables;

/// @brief Field m_EnteredUnassociatedColliders, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  ___m_EnteredUnassociatedColliders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor, ___contactAdded) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor, ___contactRemoved) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor, ____interactionManager_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor, ___m_EnteredColliders) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor, ___m_UnorderedInteractables) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor, ___m_EnteredUnassociatedColliders) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
