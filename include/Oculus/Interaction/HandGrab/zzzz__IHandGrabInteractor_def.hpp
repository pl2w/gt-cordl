#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/IHandGrabInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHandGrabInteractor)
namespace Oculus::Interaction::GrabAPI {
class HandGrabAPI;
}
namespace Oculus::Interaction::Grab {
struct GrabTypeFlags;
}
namespace Oculus::Interaction::HandGrab {
class IHandGrabInteractable;
}
namespace Oculus::Interaction::HandGrab {
class IHandGrabState;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class IHandGrabInteractor;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::IHandGrabInteractor*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, "Oculus.Interaction.HandGrab", "IHandGrabInteractor");
// Dependencies 
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.IHandGrabInteractor
class CORDL_TYPE IHandGrabInteractor {
public:
// Declarations
 __declspec(property(get=get_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_HandGrabApi)) ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  HandGrabApi;

 __declspec(property(get=get_PalmPoint)) ::UnityW<::UnityEngine::Transform>  PalmPoint;

 __declspec(property(get=get_PinchPoint)) ::UnityW<::UnityEngine::Transform>  PinchPoint;

 __declspec(property(get=get_SupportedGrabTypes)) ::Oculus::Interaction::Grab::GrabTypeFlags  SupportedGrabTypes;

 __declspec(property(get=get_TargetInteractable)) ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  TargetInteractable;

 __declspec(property(get=get_WristPoint)) ::UnityW<::UnityEngine::Transform>  WristPoint;

/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabState"
constexpr operator  ::Oculus::Interaction::HandGrab::IHandGrabState*() noexcept;

/// @brief Method get_Hand, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_HandGrabApi, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> get_HandGrabApi() ;

/// @brief Method get_PalmPoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_PalmPoint() ;

/// @brief Method get_PinchPoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_PinchPoint() ;

/// @brief Method get_SupportedGrabTypes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Grab::GrabTypeFlags get_SupportedGrabTypes() ;

/// @brief Method get_TargetInteractable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::HandGrab::IHandGrabInteractable* get_TargetInteractable() ;

/// @brief Method get_WristPoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_WristPoint() ;

/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabState"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabState* i___Oculus__Interaction__HandGrab__IHandGrabState() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IHandGrabInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHandGrabInteractor(IHandGrabInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16334};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::HandGrab
