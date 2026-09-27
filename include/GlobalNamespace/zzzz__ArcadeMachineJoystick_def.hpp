#pragma once
// IWYU pragma private; include "GlobalNamespace/ArcadeMachineJoystick.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ArcadeButtons_def.hpp"
#include "GlobalNamespace/zzzz__HandHold_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArcadeMachineJoystick)
namespace GlobalNamespace {
struct ArcadeButtons;
}
namespace GlobalNamespace {
class ArcadeMachine;
}
namespace GlobalNamespace {
class GorillaGrabber;
}
namespace GlobalNamespace {
class IRequestableOwnershipGuardCallbacks;
}
namespace GlobalNamespace {
class ISnapTurnOverride;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RequestableOwnershipGuard;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class GorillaSnapTurn;
}
// Forward declare root types
namespace GlobalNamespace {
class ArcadeMachineJoystick;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ArcadeMachineJoystick*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArcadeMachineJoystick*, "", "ArcadeMachineJoystick");
// Dependencies ArcadeButtons, HandHold, UnityEngine.XR.XRNode
namespace GlobalNamespace {
// Is value type: false
// CS Name: ArcadeMachineJoystick
class CORDL_TYPE ArcadeMachineJoystick : public ::GlobalNamespace::HandHold {
public:
// Declarations
 __declspec(property(get=get_IsHeldLeftHanded)) bool  IsHeldLeftHanded;

/// @brief Field <currentButtonState>k__BackingField, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentButtonState_k__BackingField, put=__cordl_internal_set__currentButtonState_k__BackingField)) ::GlobalNamespace::ArcadeButtons  _currentButtonState_k__BackingField;

/// @brief Field <heldByLocalPlayer>k__BackingField, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get__heldByLocalPlayer_k__BackingField, put=__cordl_internal_set__heldByLocalPlayer_k__BackingField)) bool  _heldByLocalPlayer_k__BackingField;

/// @brief Field <player>k__BackingField, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__player_k__BackingField, put=__cordl_internal_set__player_k__BackingField)) int32_t  _player_k__BackingField;

 __declspec(property(get=get_currentButtonState, put=set_currentButtonState)) ::GlobalNamespace::ArcadeButtons  currentButtonState;

/// @brief Field guard, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_guard, put=__cordl_internal_set_guard)) ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  guard;

 __declspec(property(get=get_heldByLocalPlayer, put=set_heldByLocalPlayer)) bool  heldByLocalPlayer;

/// @brief Field machine, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_machine, put=__cordl_internal_set_machine)) ::UnityW<::GlobalNamespace::ArcadeMachine>  machine;

 __declspec(property(get=get_player, put=set_player)) int32_t  player;

/// @brief Field snapTurn, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapTurn, put=__cordl_internal_set_snapTurn)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  snapTurn;

/// @brief Field snapTurnOverride, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_snapTurnOverride, put=__cordl_internal_set_snapTurnOverride)) bool  snapTurnOverride;

/// @brief Field xrNode, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_xrNode, put=__cordl_internal_set_xrNode)) ::UnityEngine::XR::XRNode  xrNode;

/// @brief Convert operator to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr operator  ::GlobalNamespace::IRequestableOwnershipGuardCallbacks*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ISnapTurnOverride"
constexpr operator  ::GlobalNamespace::ISnapTurnOverride*() noexcept;

/// @brief Method BindController, addr 0x55e523c, size 0x314, virtual false, abstract: false, final false
inline void BindController(bool  leftHand) ;

/// @brief Method CanBeGrabbed, addr 0x55e59dc, size 0x30, virtual true, abstract: false, final false
inline bool CanBeGrabbed(::GlobalNamespace::GorillaGrabber*  grabber) ;

/// @brief Method ForceRelease, addr 0x55e5560, size 0xc, virtual false, abstract: false, final false
inline void ForceRelease() ;

/// @brief Method Init, addr 0x55e51a4, size 0x98, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::ArcadeMachine*  machine, int32_t  player) ;

static inline ::GlobalNamespace::ArcadeMachineJoystick* New_ctor() ;

/// @brief Method OnInputUpdate, addr 0x55e5640, size 0x1d8, virtual false, abstract: false, final false
inline void OnInputUpdate() ;

/// @brief Method OnMasterClientAssistedTakeoverRequest, addr 0x55e5a58, size 0x10, virtual true, abstract: false, final true
inline bool OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer) ;

/// @brief Method OnMyCreatorLeft, addr 0x55e5a6c, size 0x4, virtual true, abstract: false, final true
inline void OnMyCreatorLeft() ;

/// @brief Method OnMyOwnerLeft, addr 0x55e5a68, size 0x4, virtual true, abstract: false, final true
inline void OnMyOwnerLeft() ;

/// @brief Method OnOwnershipFail, addr 0x55e5554, size 0xc, virtual false, abstract: false, final false
inline void OnOwnershipFail() ;

/// @brief Method OnOwnershipRequest, addr 0x55e5a48, size 0x10, virtual true, abstract: false, final true
inline bool OnOwnershipRequest(::GlobalNamespace::NetPlayer*  fromPlayer) ;

/// @brief Method OnOwnershipSuccess, addr 0x55e5550, size 0x4, virtual false, abstract: false, final false
inline void OnOwnershipSuccess() ;

/// @brief Method OnOwnershipTransferred, addr 0x55e5a0c, size 0x3c, virtual true, abstract: false, final true
inline void OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer) ;

/// @brief Method ReadDataPUN, addr 0x55e5818, size 0x130, virtual false, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReceiveRemoteState, addr 0x55e59d0, size 0x4, virtual false, abstract: false, final false
inline void ReceiveRemoteState(::GlobalNamespace::ArcadeButtons  newState) ;

/// @brief Method TurnOverrideActive, addr 0x55e59d4, size 0x8, virtual true, abstract: false, final true
inline bool TurnOverrideActive() ;

/// @brief Method UnbindController, addr 0x55e556c, size 0xd4, virtual false, abstract: false, final false
inline void UnbindController() ;

/// @brief Method WriteDataPUN, addr 0x55e5948, size 0x88, virtual false, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::GlobalNamespace::ArcadeButtons const& __cordl_internal_get__currentButtonState_k__BackingField() const;

constexpr ::GlobalNamespace::ArcadeButtons& __cordl_internal_get__currentButtonState_k__BackingField() ;

constexpr bool const& __cordl_internal_get__heldByLocalPlayer_k__BackingField() const;

constexpr bool& __cordl_internal_get__heldByLocalPlayer_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__player_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__player_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& __cordl_internal_get_guard() const;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& __cordl_internal_get_guard() ;

constexpr ::UnityW<::GlobalNamespace::ArcadeMachine> const& __cordl_internal_get_machine() const;

constexpr ::UnityW<::GlobalNamespace::ArcadeMachine>& __cordl_internal_get_machine() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn> const& __cordl_internal_get_snapTurn() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>& __cordl_internal_get_snapTurn() ;

constexpr bool const& __cordl_internal_get_snapTurnOverride() const;

constexpr bool& __cordl_internal_get_snapTurnOverride() ;

constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_xrNode() const;

constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_xrNode() ;

constexpr void __cordl_internal_set__currentButtonState_k__BackingField(::GlobalNamespace::ArcadeButtons  value) ;

constexpr void __cordl_internal_set__heldByLocalPlayer_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__player_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_guard(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value) ;

constexpr void __cordl_internal_set_machine(::UnityW<::GlobalNamespace::ArcadeMachine>  value) ;

constexpr void __cordl_internal_set_snapTurn(::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  value) ;

constexpr void __cordl_internal_set_snapTurnOverride(bool  value) ;

constexpr void __cordl_internal_set_xrNode(::UnityEngine::XR::XRNode  value) ;

/// @brief Method .ctor, addr 0x55e5a70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsHeldLeftHanded, addr 0x55e5164, size 0x20, virtual false, abstract: false, final false
inline bool get_IsHeldLeftHanded() ;

/// [CompilerGenerated]
/// @brief Method get_currentButtonState, addr 0x55e5184, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ArcadeButtons get_currentButtonState() ;

/// [CompilerGenerated]
/// @brief Method get_heldByLocalPlayer, addr 0x55e5154, size 0x8, virtual false, abstract: false, final false
inline bool get_heldByLocalPlayer() ;

/// [CompilerGenerated]
/// @brief Method get_player, addr 0x55e5194, size 0x8, virtual false, abstract: false, final false
inline int32_t get_player() ;

/// @brief Convert to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr ::GlobalNamespace::IRequestableOwnershipGuardCallbacks* i___GlobalNamespace__IRequestableOwnershipGuardCallbacks() noexcept;

/// @brief Convert to "::GlobalNamespace::ISnapTurnOverride"
constexpr ::GlobalNamespace::ISnapTurnOverride* i___GlobalNamespace__ISnapTurnOverride() noexcept;

/// [CompilerGenerated]
/// @brief Method set_currentButtonState, addr 0x55e518c, size 0x8, virtual false, abstract: false, final false
inline void set_currentButtonState(::GlobalNamespace::ArcadeButtons  value) ;

/// [CompilerGenerated]
/// @brief Method set_heldByLocalPlayer, addr 0x55e515c, size 0x8, virtual false, abstract: false, final false
inline void set_heldByLocalPlayer(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_player, addr 0x55e519c, size 0x8, virtual false, abstract: false, final false
inline void set_player(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArcadeMachineJoystick() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArcadeMachineJoystick", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArcadeMachineJoystick(ArcadeMachineJoystick && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArcadeMachineJoystick", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArcadeMachineJoystick(ArcadeMachineJoystick const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16};

/// @brief Field xrNode, offset: 0x80, size: 0x4, def value: None
 ::UnityEngine::XR::XRNode  ___xrNode;

/// [CompilerGenerated]
/// @brief Field <heldByLocalPlayer>k__BackingField, offset: 0x84, size: 0x1, def value: None
 bool  ____heldByLocalPlayer_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <currentButtonState>k__BackingField, offset: 0x88, size: 0x4, def value: None
 ::GlobalNamespace::ArcadeButtons  ____currentButtonState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <player>k__BackingField, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____player_k__BackingField;

/// @brief Field machine, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ArcadeMachine>  ___machine;

/// @brief Field guard, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  ___guard;

/// @brief Field snapTurn, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  ___snapTurn;

/// @brief Field snapTurnOverride, offset: 0xa8, size: 0x1, def value: None
 bool  ___snapTurnOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArcadeMachineJoystick, ___xrNode) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachineJoystick, ____heldByLocalPlayer_k__BackingField) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachineJoystick, ____currentButtonState_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachineJoystick, ____player_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachineJoystick, ___machine) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachineJoystick, ___guard) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachineJoystick, ___snapTurn) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachineJoystick, ___snapTurnOverride) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArcadeMachineJoystick) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
