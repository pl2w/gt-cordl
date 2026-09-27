#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/XRInteractableSnapVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(XRInteractableSnapVolume)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRInteractableSnapVolume;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "XRInteractableSnapVolume");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// [AddComponentMenu("XR/XR Interactable Snap Volume", 11)]
// [DefaultExecutionOrder(-99)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactables.XRInteractableSnapVolume.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.XRInteractableSnapVolume
class CORDL_TYPE XRInteractableSnapVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_disableSnapColliderWhenSelected, put=set_disableSnapColliderWhenSelected)) bool  disableSnapColliderWhenSelected;

 __declspec(property(get=get_interactable, put=set_interactable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable;

 __declspec(property(get=get_interactableObject, put=set_interactableObject)) ::UnityW<::UnityEngine::Object>  interactableObject;

 __declspec(property(get=get_interactionManager, put=set_interactionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  interactionManager;

/// @brief Field m_BoundInteractable, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BoundInteractable, put=__cordl_internal_set_m_BoundInteractable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  m_BoundInteractable;

/// @brief Field m_BoundSelectInteractable, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BoundSelectInteractable, put=__cordl_internal_set_m_BoundSelectInteractable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  m_BoundSelectInteractable;

/// @brief Field m_DisableSnapColliderWhenSelected, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DisableSnapColliderWhenSelected, put=__cordl_internal_set_m_DisableSnapColliderWhenSelected)) bool  m_DisableSnapColliderWhenSelected;

/// @brief Field m_Interactable, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Interactable, put=__cordl_internal_set_m_Interactable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  m_Interactable;

/// @brief Field m_InteractableObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractableObject, put=__cordl_internal_set_m_InteractableObject)) ::UnityW<::UnityEngine::Object>  m_InteractableObject;

/// @brief Field m_InteractionManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionManager, put=__cordl_internal_set_m_InteractionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  m_InteractionManager;

/// @brief Field m_RegisteredInteractionManager, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RegisteredInteractionManager, put=__cordl_internal_set_m_RegisteredInteractionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  m_RegisteredInteractionManager;

/// @brief Field m_SnapCollider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SnapCollider, put=__cordl_internal_set_m_SnapCollider)) ::UnityW<::UnityEngine::Collider>  m_SnapCollider;

/// @brief Field m_SnapToCollider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SnapToCollider, put=__cordl_internal_set_m_SnapToCollider)) ::UnityW<::UnityEngine::Collider>  m_SnapToCollider;

 __declspec(property(get=get_snapCollider, put=set_snapCollider)) ::UnityW<::UnityEngine::Collider>  snapCollider;

 __declspec(property(get=get_snapToCollider, put=set_snapToCollider)) ::UnityW<::UnityEngine::Collider>  snapToCollider;

/// @brief Method Awake, addr 0xb4a0420, size 0x90, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method FindCreateInteractionManager, addr 0xb4a06b4, size 0xc0, virtual false, abstract: false, final false
inline void FindCreateInteractionManager() ;

/// @brief Method FindSnapCollider, addr 0xb4a04b0, size 0x114, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Collider> FindSnapCollider(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetClosestPoint, addr 0xb4a096c, size 0x1cc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetClosestPoint(::UnityEngine::Vector3  point) ;

/// @brief Method GetClosestPointOfAttachTransform, addr 0xb4a0b38, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetClosestPointOfAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume* New_ctor() ;

/// @brief Method OnDisable, addr 0xb4a0774, size 0x28, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4a05c4, size 0xf0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFirstSelectEntered, addr 0xb4a0d24, size 0x14, virtual false, abstract: false, final false
inline void OnFirstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnLastSelectExited, addr 0xb4a0d38, size 0x14, virtual false, abstract: false, final false
inline void OnLastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method RefreshSnapColliderEnabled, addr 0xb49fec0, size 0xc8, virtual false, abstract: false, final false
inline void RefreshSnapColliderEnabled() ;

/// @brief Method RegisterWithInteractionManager, addr 0xb49f910, size 0xdc, virtual false, abstract: false, final false
inline void RegisterWithInteractionManager() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method Reset, addr 0xb4a041c, size 0x4, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SetBoundInteractable, addr 0xb4a0038, size 0x3e4, virtual false, abstract: false, final false
inline void SetBoundInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  source) ;

/// @brief Method SetSnapColliderEnabled, addr 0xb4a079c, size 0x98, virtual false, abstract: false, final false
inline void SetSnapColliderEnabled(bool  enable) ;

/// @brief Method SupportsTriggerCollider, addr 0xb4a0834, size 0x138, virtual false, abstract: false, final false
static inline bool SupportsTriggerCollider(::UnityEngine::Collider*  col) ;

/// @brief Method UnregisterWithInteractionManager, addr 0xb49fca4, size 0x9c, virtual false, abstract: false, final false
inline void UnregisterWithInteractionManager() ;

/// @brief Method ValidateSnapCollider, addr 0xb49fd40, size 0x180, virtual false, abstract: false, final false
inline void ValidateSnapCollider() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& __cordl_internal_get_m_BoundInteractable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& __cordl_internal_get_m_BoundInteractable() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* const& __cordl_internal_get_m_BoundSelectInteractable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*& __cordl_internal_get_m_BoundSelectInteractable() ;

constexpr bool const& __cordl_internal_get_m_DisableSnapColliderWhenSelected() const;

constexpr bool& __cordl_internal_get_m_DisableSnapColliderWhenSelected() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& __cordl_internal_get_m_Interactable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& __cordl_internal_get_m_Interactable() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_InteractableObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_InteractableObject() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get_m_InteractionManager() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get_m_InteractionManager() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get_m_RegisteredInteractionManager() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get_m_RegisteredInteractionManager() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_m_SnapCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_m_SnapCollider() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_m_SnapToCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_m_SnapToCollider() ;

constexpr void __cordl_internal_set_m_BoundInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value) ;

constexpr void __cordl_internal_set_m_BoundSelectInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  value) ;

constexpr void __cordl_internal_set_m_DisableSnapColliderWhenSelected(bool  value) ;

constexpr void __cordl_internal_set_m_Interactable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value) ;

constexpr void __cordl_internal_set_m_InteractableObject(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_InteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value) ;

constexpr void __cordl_internal_set_m_RegisteredInteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value) ;

constexpr void __cordl_internal_set_m_SnapCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_m_SnapToCollider(::UnityW<::UnityEngine::Collider>  value) ;

/// @brief Method .ctor, addr 0xb4a0d4c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_disableSnapColliderWhenSelected, addr 0xb49ff88, size 0x8, virtual false, abstract: false, final false
inline bool get_disableSnapColliderWhenSelected() ;

/// @brief Method get_interactable, addr 0xb4a0030, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* get_interactable() ;

/// @brief Method get_interactableObject, addr 0xb49f9ec, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_interactableObject() ;

/// @brief Method get_interactionManager, addr 0xb49f86c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> get_interactionManager() ;

/// @brief Method get_snapCollider, addr 0xb49fb8c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> get_snapCollider() ;

/// @brief Method get_snapToCollider, addr 0xb4a0020, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> get_snapToCollider() ;

/// @brief Method set_disableSnapColliderWhenSelected, addr 0xb49ff90, size 0x90, virtual false, abstract: false, final false
inline void set_disableSnapColliderWhenSelected(bool  value) ;

/// @brief Method set_interactable, addr 0xb49fa64, size 0x128, virtual false, abstract: false, final false
inline void set_interactable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value) ;

/// @brief Method set_interactableObject, addr 0xb49f9f4, size 0x70, virtual false, abstract: false, final false
inline void set_interactableObject(::UnityEngine::Object*  value) ;

/// @brief Method set_interactionManager, addr 0xb49f874, size 0x9c, virtual false, abstract: false, final false
inline void set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value) ;

/// @brief Method set_snapCollider, addr 0xb49fb94, size 0x110, virtual false, abstract: false, final false
inline void set_snapCollider(::UnityEngine::Collider*  value) ;

/// @brief Method set_snapToCollider, addr 0xb4a0028, size 0x8, virtual false, abstract: false, final false
inline void set_snapToCollider(::UnityEngine::Collider*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractableSnapVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractableSnapVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractableSnapVolume(XRInteractableSnapVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractableSnapVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractableSnapVolume(XRInteractableSnapVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11529};

/// [SerializeField]
/// @brief Field m_InteractionManager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  ___m_InteractionManager;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable))]
/// @brief Field m_InteractableObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_InteractableObject;

/// [SerializeField]
/// @brief Field m_SnapCollider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___m_SnapCollider;

/// [SerializeField]
/// @brief Field m_DisableSnapColliderWhenSelected, offset: 0x38, size: 0x1, def value: None
 bool  ___m_DisableSnapColliderWhenSelected;

/// [SerializeField]
/// @brief Field m_SnapToCollider, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___m_SnapToCollider;

/// @brief Field m_Interactable, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  ___m_Interactable;

/// @brief Field m_BoundInteractable, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  ___m_BoundInteractable;

/// @brief Field m_BoundSelectInteractable, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  ___m_BoundSelectInteractable;

/// @brief Field m_RegisteredInteractionManager, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  ___m_RegisteredInteractionManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume, ___m_InteractionManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume, ___m_InteractableObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume, ___m_SnapCollider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume, ___m_DisableSnapColliderWhenSelected) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume, ___m_SnapToCollider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume, ___m_Interactable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume, ___m_BoundInteractable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume, ___m_BoundSelectInteractable) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume, ___m_RegisteredInteractionManager) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
