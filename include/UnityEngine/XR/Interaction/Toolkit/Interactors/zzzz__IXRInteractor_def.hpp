#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/IXRInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRInteractor)
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
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
struct InteractorHandedness;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct InteractionLayerMask;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorUnregisteredEventArgs;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "IXRInteractor");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor
class CORDL_TYPE IXRInteractor {
public:
// Declarations
 __declspec(property(get=get_handedness)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness  handedness;

 __declspec(property(get=get_interactionLayers)) ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  interactionLayers;

 __declspec(property(get=get_transform)) ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Method GetAttachTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method GetValidTargets, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets) ;

/// @brief Method OnRegistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*  args) ;

/// @brief Method OnUnregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*  args) ;

/// @brief Method PreprocessInteractor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PreprocessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessInteractor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ProcessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// [CompilerGenerated]
/// @brief Method add_registered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_unregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value) ;

/// @brief Method get_handedness, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness get_handedness() ;

/// @brief Method get_interactionLayers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask get_interactionLayers() ;

/// @brief Method get_transform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_transform() ;

/// [CompilerGenerated]
/// @brief Method remove_registered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_unregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IXRInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRInteractor(IXRInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11433};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
