#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBallManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameBallManager)
namespace GlobalNamespace {
struct GameBallData;
}
namespace GlobalNamespace {
struct GameBallId;
}
namespace GlobalNamespace {
struct GameBallManager_RPC;
}
namespace GlobalNamespace {
class GameBall;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GameBallManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameBallManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameBallManager*, "", "GameBallManager");
// [NetworkBehaviourWeaved(0)]
// Dependencies CallLimiter, NetworkComponent
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameBallManager
class CORDL_TYPE GameBallManager : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using RPC = ::GlobalNamespace::GameBallManager_RPC;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::GameBallManager>  Instance;

/// @brief Field _callLimiters, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__callLimiters, put=__cordl_internal_set__callLimiters)) ::ArrayW<::GlobalNamespace::CallLimiter*>  _callLimiters;

/// @brief Field gameBallData, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameBallData, put=__cordl_internal_set_gameBallData)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameBallData>*  gameBallData;

/// @brief Field gameBalls, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameBalls, put=__cordl_internal_set_gameBalls)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameBall>>*  gameBalls;

/// @brief Field photonView, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonView, put=__cordl_internal_set_photonView)) ::UnityW<::Photon::Pun::PhotonView>  photonView;

/// @brief Method AddGameBall, addr 0x57a1be8, size 0x164, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameBallId AddGameBall(::GlobalNamespace::GameBall*  gameBall) ;

/// @brief Method Awake, addr 0x57a15d4, size 0x454, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x57a6b80, size 0x8, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x57a6b88, size 0x218, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method GetGameBall, addr 0x57a1d4c, size 0xa0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GameBall> GetGameBall(::GlobalNamespace::GameBallId  id) ;

/// @brief Method GrabBall, addr 0x57a22a4, size 0x5b0, virtual false, abstract: false, final false
inline void GrabBall(::GlobalNamespace::GameBallId  gameBallId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::GlobalNamespace::NetPlayer*  grabbedByPlayer) ;

/// [PunRPC]
/// @brief Method GrabBallRPC, addr 0x57a2f40, size 0x450, virtual false, abstract: false, final false
inline void GrabBallRPC(int32_t  gameBallIndex, bool  isLeftHand, int64_t  packedPosRot, ::Photon::Realtime::Player*  grabbedBy, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method LaunchBall, addr 0x57a4fa0, size 0x2c0, virtual false, abstract: false, final false
inline void LaunchBall(::GlobalNamespace::GameBallId  gameBallId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity) ;

/// [PunRPC]
/// @brief Method LaunchBallRPC, addr 0x57a5784, size 0x388, virtual false, abstract: false, final false
inline void LaunchBallRPC(int32_t  gameBallIndex, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, double_t  throwTime, ::Photon::Pun::PhotonMessageInfo  info) ;

static inline ::GlobalNamespace::GameBallManager* New_ctor() ;

/// @brief Method ReadDataFusion, addr 0x57a6b6c, size 0x4, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x57a6b74, size 0x4, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReportRPCCall, addr 0x57a1af8, size 0xf0, virtual false, abstract: false, final false
inline void ReportRPCCall(::GlobalNamespace::GameBallManager_RPC  rpcCall, ::Photon::Pun::PhotonMessageInfo  info, ::StringW  susReason) ;

/// @brief Method RequestGrabBall, addr 0x57a2010, size 0x294, virtual false, abstract: false, final false
inline void RequestGrabBall(::GlobalNamespace::GameBallId  ballId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) ;

/// [PunRPC]
/// @brief Method RequestGrabBallRPC, addr 0x57a2854, size 0x6ec, virtual false, abstract: false, final false
inline void RequestGrabBallRPC(int32_t  gameBallIndex, bool  isLeftHand, int64_t  packedPosRot, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestLaunchBall, addr 0x57a4c58, size 0x348, virtual false, abstract: false, final false
inline void RequestLaunchBall(::GlobalNamespace::GameBallId  ballId, ::UnityEngine::Vector3  velocity) ;

/// [PunRPC]
/// @brief Method RequestLaunchBallRPC, addr 0x57a5260, size 0x524, virtual false, abstract: false, final false
inline void RequestLaunchBallRPC(int32_t  gameBallIndex, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestSetBallPosition, addr 0x57a6508, size 0x1b4, virtual false, abstract: false, final false
inline void RequestSetBallPosition(::GlobalNamespace::GameBallId  ballId) ;

/// [PunRPC]
/// @brief Method RequestSetBallPositionRPC, addr 0x57a66bc, size 0x4ac, virtual false, abstract: false, final false
inline void RequestSetBallPositionRPC(int32_t  gameBallIndex, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestTeleportBall, addr 0x57a5b0c, size 0x2d0, virtual false, abstract: false, final false
inline void RequestTeleportBall(::GlobalNamespace::GameBallId  id, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity) ;

/// @brief Method RequestThrowBall, addr 0x57a3390, size 0x41c, virtual false, abstract: false, final false
inline void RequestThrowBall(::GlobalNamespace::GameBallId  ballId, bool  isLeftHand, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity) ;

/// [PunRPC]
/// @brief Method RequestThrowBallRPC, addr 0x57a3c68, size 0x77c, virtual false, abstract: false, final false
inline void RequestThrowBallRPC(int32_t  gameBallIndex, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method TeleportBall, addr 0x57a62c4, size 0x244, virtual false, abstract: false, final false
inline void TeleportBall(::GlobalNamespace::GameBallId  gameBallId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity) ;

/// [PunRPC]
/// @brief Method TeleportBallRPC, addr 0x57a5ddc, size 0x4e8, virtual false, abstract: false, final false
inline void TeleportBallRPC(int32_t  gameBallIndex, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ThrowBall, addr 0x57a37ac, size 0x4bc, virtual false, abstract: false, final false
inline void ThrowBall(::GlobalNamespace::GameBallId  gameBallId, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::GlobalNamespace::NetPlayer*  thrownByPlayer) ;

/// [PunRPC]
/// @brief Method ThrowBallRPC, addr 0x57a4784, size 0x4d4, virtual false, abstract: false, final false
inline void ThrowBallRPC(int32_t  gameBallIndex, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::Photon::Realtime::Player*  thrownBy, double_t  throwTime, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method TryGrabLocal, addr 0x57a1dec, size 0x224, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameBallId TryGrabLocal(::UnityEngine::Vector3  handPosition, int32_t  teamId) ;

/// @brief Method ValidateCallLimits, addr 0x57a1a28, size 0xd0, virtual false, abstract: false, final false
inline bool ValidateCallLimits(::GlobalNamespace::GameBallManager_RPC  rpcCall, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ValidateThrowBallParams, addr 0x57a43e4, size 0x3a0, virtual false, abstract: false, final false
inline bool ValidateThrowBallParams(int32_t  gameBallIndex, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity) ;

/// @brief Method WriteDataFusion, addr 0x57a6b68, size 0x4, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x57a6b70, size 0x4, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::ArrayW<::GlobalNamespace::CallLimiter*> const& __cordl_internal_get__callLimiters() const;

constexpr ::ArrayW<::GlobalNamespace::CallLimiter*>& __cordl_internal_get__callLimiters() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameBallData>* const& __cordl_internal_get_gameBallData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameBallData>*& __cordl_internal_get_gameBallData() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameBall>>* const& __cordl_internal_get_gameBalls() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameBall>>*& __cordl_internal_get_gameBalls() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_photonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_photonView() ;

constexpr void __cordl_internal_set__callLimiters(::ArrayW<::GlobalNamespace::CallLimiter*>  value) ;

constexpr void __cordl_internal_set_gameBallData(::System::Collections::Generic::List_1<::GlobalNamespace::GameBallData>*  value) ;

constexpr void __cordl_internal_set_gameBalls(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameBall>>*  value) ;

constexpr void __cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

/// @brief Method .ctor, addr 0x57a6b78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::GameBallManager> getStaticF_Instance() ;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::GameBallManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameBallManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameBallManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameBallManager(GameBallManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameBallManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameBallManager(GameBallManager const& ) = delete;

/// @brief Field MAX_CATCH_DISTANCE_FROM_HAND_SQR offset 0xffffffff size 0x4
static constexpr float_t  MAX_CATCH_DISTANCE_FROM_HAND_SQR{static_cast<float_t>(25.0f)};

/// @brief Field MAX_DISTANCE_FROM_HAND_SQR offset 0xffffffff size 0x4
static constexpr float_t  MAX_DISTANCE_FROM_HAND_SQR{static_cast<float_t>(6.25f)};

/// @brief Field MAX_LAUNCHER_DISTANCE_SQR offset 0xffffffff size 0x4
static constexpr float_t  MAX_LAUNCHER_DISTANCE_SQR{static_cast<float_t>(1.0f)};

/// @brief Field MAX_LOCAL_MAGNITUDE_SQR offset 0xffffffff size 0x4
static constexpr float_t  MAX_LOCAL_MAGNITUDE_SQR{static_cast<float_t>(6400.0f)};

/// @brief Field MAX_THROW_VELOCITY_SQR offset 0xffffffff size 0x4
static constexpr float_t  MAX_THROW_VELOCITY_SQR{static_cast<float_t>(1600.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1537};

/// @brief Field photonView, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___photonView;

/// @brief Field gameBalls, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameBall>>*  ___gameBalls;

/// @brief Field gameBallData, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GameBallData>*  ___gameBallData;

/// @brief Field _callLimiters, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CallLimiter*>  ____callLimiters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameBallManager, ___photonView) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBallManager, ___gameBalls) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBallManager, ___gameBallData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBallManager, ____callLimiters) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameBallManager) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
