#pragma once
// IWYU pragma private; include "Oculus/Interaction/OVR/OVRControllerInHandActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Hand_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_InputDeviceShowState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRControllerInHandActiveState)
namespace GlobalNamespace {
struct OVRInput_Hand;
}
namespace GlobalNamespace {
struct OVRInput_InputDeviceShowState;
}
namespace Oculus::Interaction {
class IActiveState;
}
// Forward declare root types
namespace Oculus::Interaction::OVR {
class OVRControllerInHandActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::OVR::OVRControllerInHandActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::OVR::OVRControllerInHandActiveState*, "Oculus.Interaction.OVR", "OVRControllerInHandActiveState");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies OVRInput::Hand, OVRInput::InputDeviceShowState, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::OVR {
// Is value type: false
// CS Name: Oculus.Interaction.OVR.OVRControllerInHandActiveState
class CORDL_TYPE OVRControllerInHandActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_HandType, put=set_HandType)) ::GlobalNamespace::OVRInput_Hand  HandType;

 __declspec(property(get=get_ShowState, put=set_ShowState)) ::GlobalNamespace::OVRInput_InputDeviceShowState  ShowState;

/// @brief Field _handType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__handType, put=__cordl_internal_set__handType)) ::GlobalNamespace::OVRInput_Hand  _handType;

/// @brief Field _showState, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__showState, put=__cordl_internal_set__showState)) ::GlobalNamespace::OVRInput_InputDeviceShowState  _showState;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

static inline ::Oculus::Interaction::OVR::OVRControllerInHandActiveState* New_ctor() ;

constexpr ::GlobalNamespace::OVRInput_Hand const& __cordl_internal_get__handType() const;

constexpr ::GlobalNamespace::OVRInput_Hand& __cordl_internal_get__handType() ;

constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState const& __cordl_internal_get__showState() const;

constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState& __cordl_internal_get__showState() ;

constexpr void __cordl_internal_set__handType(::GlobalNamespace::OVRInput_Hand  value) ;

constexpr void __cordl_internal_set__showState(::GlobalNamespace::OVRInput_InputDeviceShowState  value) ;

/// @brief Method .ctor, addr 0xa41b108, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa41b044, size 0xc4, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_HandType, addr 0xa41b024, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_Hand get_HandType() ;

/// @brief Method get_ShowState, addr 0xa41b034, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_InputDeviceShowState get_ShowState() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// @brief Method set_HandType, addr 0xa41b02c, size 0x8, virtual false, abstract: false, final false
inline void set_HandType(::GlobalNamespace::OVRInput_Hand  value) ;

/// @brief Method set_ShowState, addr 0xa41b03c, size 0x8, virtual false, abstract: false, final false
inline void set_ShowState(::GlobalNamespace::OVRInput_InputDeviceShowState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRControllerInHandActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerInHandActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRControllerInHandActiveState(OVRControllerInHandActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerInHandActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRControllerInHandActiveState(OVRControllerInHandActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31127};

/// [SerializeField]
/// @brief Field _handType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Hand  ____handType;

/// [SerializeField]
/// [Tooltip("Determines if the ActiveState should be enabled or disabled when the hand is grabbing a controller")]
/// [HelpBox("Ensure you have enabled ConformingHandsToControllers or/and Concurrent Hands/Controller Support in the OVRCameraRig.ControllerDrivenHandPosesType and that the OVRHand component ShowState is as permissive as this.", (Oculus.Interaction.HelpBoxAttribute::MessageType)1, (OVRInput::InputDeviceShowState)3, (Oculus.Interaction.ConditionalHideAttribute::DisplayMode)3)]
/// @brief Field _showState, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_InputDeviceShowState  ____showState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::OVR::OVRControllerInHandActiveState, ____handType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OVR::OVRControllerInHandActiveState, ____showState) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::OVR::OVRControllerInHandActiveState) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::OVR
