#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/IXRInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IXRInteractable)
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct InteractionLayerMask;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "IXRInteractable");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable
class CORDL_TYPE IXRInteractable {
public:
// Declarations
 __declspec(property(get=get_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

 __declspec(property(get=get_interactionLayers)) ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  interactionLayers;

 __declspec(property(get=get_transform)) ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Method GetAttachTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method GetDistanceSqrToInteractor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t GetDistanceSqrToInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method OnRegistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*  args) ;

/// @brief Method OnUnregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*  args) ;

/// @brief Method ProcessInteractable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ProcessInteractable(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// [CompilerGenerated]
/// @brief Method add_registered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_unregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value) ;

/// @brief Method get_colliders, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* get_colliders() ;

/// @brief Method get_interactionLayers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask get_interactionLayers() ;

/// @brief Method get_transform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_transform() ;

/// [CompilerGenerated]
/// @brief Method remove_registered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_unregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IXRInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRInteractable(IXRInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11513};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
