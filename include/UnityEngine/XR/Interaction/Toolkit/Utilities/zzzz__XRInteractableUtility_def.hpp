#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/XRInteractableUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRInteractableUtility)
namespace GlobalNamespace {
struct XRInteractableUtility_AllowTriggerCollidersScope;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
struct DistanceInfo;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class XRInteractableUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "XRInteractableUtility");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.XRInteractableUtility
class CORDL_TYPE XRInteractableUtility : public ::System::Object {
public:
// Declarations
using AllowTriggerCollidersScope = ::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope;

/// @brief Field <allowTriggerColliders>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__allowTriggerColliders_k__BackingField, put=setStaticF__allowTriggerColliders_k__BackingField)) bool  _allowTriggerColliders_k__BackingField;

/// @brief Method TryGetClosestCollider, addr 0xb427300, size 0x38c, virtual false, abstract: false, final false
static inline bool TryGetClosestCollider(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, ::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>  distanceInfo) ;

/// @brief Method TryGetClosestPointOnCollider, addr 0xb41cd48, size 0x380, virtual false, abstract: false, final false
static inline bool TryGetClosestPointOnCollider(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, ::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>  distanceInfo) ;

static inline bool getStaticF__allowTriggerColliders_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_allowTriggerColliders, addr 0xb427268, size 0x48, virtual false, abstract: false, final false
static inline bool get_allowTriggerColliders() ;

static inline void setStaticF__allowTriggerColliders_k__BackingField(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_allowTriggerColliders, addr 0xb4272b0, size 0x50, virtual false, abstract: false, final false
static inline void set_allowTriggerColliders(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractableUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractableUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractableUtility(XRInteractableUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractableUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractableUtility(XRInteractableUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11208};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
