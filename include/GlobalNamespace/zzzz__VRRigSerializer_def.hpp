#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkString_1_def.hpp"
#include "Fusion/zzzz___16_def.hpp"
#include "GlobalNamespace/zzzz__GorillaWrappedSerializer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VRRigSerializer)
namespace Fusion {
template<typename TSize>
struct NetworkString_1;
}
namespace Fusion {
struct _16;
}
namespace GlobalNamespace {
class FXSystemSettings;
}
namespace GlobalNamespace {
class GeoSoundArg;
}
namespace GlobalNamespace {
class HandTapArgs;
}
namespace GlobalNamespace {
template<typename T>
class IFXContextParems_1;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaLocomotion {
struct StiltID;
}
namespace GorillaTag {
template<typename T1,typename T2>
class InDelegateListProcessor_2;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Voice::PUN {
class PhotonVoiceView;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VRRigSerializer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VRRigSerializer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRRigSerializer*, "", "VRRigSerializer");
// [NetworkBehaviourWeaved(35)]
// Dependencies Fusion.NetworkString`1<TSize>, Fusion._16, GorillaWrappedSerializer
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRRigSerializer
class CORDL_TYPE VRRigSerializer : public ::GlobalNamespace::GorillaWrappedSerializer {
public:
// Declarations
 __declspec(property(get=get_SuccesfullSpawnEvent, put=set_SuccesfullSpawnEvent)) ::GorillaTag::InDelegateListProcessor_2<::UnityW<::GlobalNamespace::RigContainer>,::GlobalNamespace::PhotonMessageInfoWrapped>*  SuccesfullSpawnEvent;

 __declspec(property(get=get_VRRig)) ::UnityW<::GlobalNamespace::VRRig>  VRRig;

 __declspec(property(get=get_Voice)) ::UnityW<::Photon::Voice::PUN::PhotonVoiceView>  Voice;

/// @brief Field <SuccesfullSpawnEvent>k__BackingField, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__SuccesfullSpawnEvent_k__BackingField, put=__cordl_internal_set__SuccesfullSpawnEvent_k__BackingField)) ::GorillaTag::InDelegateListProcessor_2<::UnityW<::GlobalNamespace::RigContainer>,::GlobalNamespace::PhotonMessageInfoWrapped>*  _SuccesfullSpawnEvent_k__BackingField;

/// @brief Field _defaultName, offset 0xbc, size 0xc 
 __declspec(property(get=__cordl_internal_get__defaultName, put=__cordl_internal_set__defaultName)) ::Fusion::NetworkString_1<::Fusion::_16>  _defaultName;

/// @brief Field _nickName, offset 0xb0, size 0xc 
 __declspec(property(get=__cordl_internal_get__nickName, put=__cordl_internal_set__nickName)) ::Fusion::NetworkString_1<::Fusion::_16>  _nickName;

/// @brief Field _tutorialComplete, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get__tutorialComplete, put=__cordl_internal_set__tutorialComplete)) bool  _tutorialComplete;

/// [Networked]
/// @brief [NetworkedWeaved(17, 17)]
 __declspec(property(get=get_defaultName, put=set_defaultName)) ::Fusion::NetworkString_1<::Fusion::_16>  defaultName;

/// @brief Field geoSoundArg, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_geoSoundArg, put=__cordl_internal_set_geoSoundArg)) ::GlobalNamespace::GeoSoundArg*  geoSoundArg;

/// @brief Field handTapArgs, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_handTapArgs, put=__cordl_internal_set_handTapArgs)) ::GlobalNamespace::HandTapArgs*  handTapArgs;

/// @brief Field networkSpeaker, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkSpeaker, put=__cordl_internal_set_networkSpeaker)) ::UnityW<::UnityEngine::Transform>  networkSpeaker;

/// [Networked]
/// @brief [NetworkedWeaved(0, 17)]
 __declspec(property(get=get_nickName, put=set_nickName)) ::Fusion::NetworkString_1<::Fusion::_16>  nickName;

/// @brief Field rigContainer, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigContainer, put=__cordl_internal_set_rigContainer)) ::UnityW<::GlobalNamespace::RigContainer>  rigContainer;

 __declspec(property(get=get_settings)) ::UnityW<::GlobalNamespace::FXSystemSettings>  settings;

/// [Networked]
/// @brief [NetworkedWeaved(34, 1)]
 __declspec(property(get=get_tutorialComplete, put=set_tutorialComplete)) bool  tutorialComplete;

/// @brief Field voiceView, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceView, put=__cordl_internal_set_voiceView)) ::UnityW<::Photon::Voice::PUN::PhotonVoiceView>  voiceView;

/// @brief Field vrrig, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_vrrig, put=__cordl_internal_set_vrrig)) ::UnityW<::GlobalNamespace::VRRig>  vrrig;

/// @brief Convert operator to "::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::GeoSoundArg*>"
constexpr operator  ::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::GeoSoundArg*>*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::HandTapArgs*>"
constexpr operator  ::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::HandTapArgs*>*() noexcept;

/// @brief Method BroadcastLoudSpeakerNetwork, addr 0x590141c, size 0x164, virtual false, abstract: false, final false
inline void BroadcastLoudSpeakerNetwork(bool  toggleBroadcast, int32_t  actorNumber) ;

/// @brief Method BroadcastLoudSpeakerNetworkShared, addr 0x5901580, size 0x190, virtual false, abstract: false, final false
inline void BroadcastLoudSpeakerNetworkShared(bool  toggleBroadcast, ::GlobalNamespace::RigContainer*  rigContainer, int32_t  actorNumber, bool  isLocal) ;

/// @brief Method CleanUp, addr 0x58ff1a4, size 0x23c, virtual false, abstract: false, final false
inline void CleanUp(bool  netDestroy) ;

/// @brief Method CleanupLoudSpeakerNetwork, addr 0x58ff3e0, size 0x1d0, virtual false, abstract: false, final false
inline void CleanupLoudSpeakerNetwork() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5901cac, size 0x88, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5901d34, size 0x84, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// [PunRPC]
/// @brief Method DroppedByPlayer, addr 0x59018b0, size 0x268, virtual false, abstract: false, final false
inline void DroppedByPlayer(::UnityEngine::Vector3  throwVelocity, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method EnableNonCosmeticHandItemRPC, addr 0x59008a8, size 0x78, virtual false, abstract: false, final false
inline void EnableNonCosmeticHandItemRPC(bool  enable, bool  isLeftHand, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method EnableNonCosmeticHandItemShared, addr 0x5900920, size 0x40, virtual false, abstract: false, final false
inline void EnableNonCosmeticHandItemShared(bool  enable, bool  isLeftHand, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// [PunRPC]
/// @brief Method GrabbedByPlayer, addr 0x5901710, size 0x1a0, virtual false, abstract: false, final false
inline void GrabbedByPlayer(bool  grabbedBody, bool  grabbedLeftHand, bool  grabbedWithLeftHand, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method IFXContextParems<GeoSoundArg>.OnPlayFX, addr 0x5901b48, size 0x28, virtual true, abstract: false, final true
inline void IFXContextParems_GeoSoundArg__OnPlayFX(::GlobalNamespace::GeoSoundArg*  parems) ;

/// @brief Method IFXContextParems<HandTapArgs>.OnPlayFX, addr 0x5901b18, size 0x30, virtual true, abstract: false, final true
inline void IFXContextParems_HandTapArgs__OnPlayFX(::GlobalNamespace::HandTapArgs*  parems) ;

/// @brief Method InitializeNoobMaterialShared, addr 0x58ff8a8, size 0x38, virtual false, abstract: false, final false
inline void InitializeNoobMaterialShared(float_t  red, float_t  green, float_t  blue, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

static inline ::GlobalNamespace::VRRigSerializer* New_ctor() ;

/// @brief Method OnBeforeDespawn, addr 0x58ff19c, size 0x8, virtual true, abstract: false, final false
inline void OnBeforeDespawn() ;

/// @brief Method OnDestroy, addr 0x58ff684, size 0x19c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x58ff5b0, size 0xd4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnFailedSpawn, addr 0x58ff198, size 0x4, virtual true, abstract: false, final false
inline void OnFailedSpawn() ;

/// [PunRPC]
/// @brief Method OnHandTapRPC, addr 0x5900960, size 0xa8, virtual false, abstract: false, final false
inline void OnHandTapRPC(int32_t  audioClipIndex, bool  isDownTap, bool  isLeftHand, ::GorillaLocomotion::StiltID  stiltID, float_t  handTapSpeed, int64_t  packedDirFromHitToHand, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnHandTapRPCShared, addr 0x5900a08, size 0x8ac, virtual false, abstract: false, final false
inline void OnHandTapRPCShared(int32_t  audioClipIndex, bool  isDownTap, bool  isLeftHand, ::GorillaLocomotion::StiltID  stiltID, float_t  handTapSpeed, int64_t  packedDirFromHitToHand, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnSpawnSetupCheck, addr 0x58fe7dc, size 0x3d8, virtual true, abstract: false, final false
inline bool OnSpawnSetupCheck(::GlobalNamespace::PhotonMessageInfoWrapped  wrappedInfo, ::by_ref<::UnityEngine::GameObject*>  outTargetObject, ::by_ref<::System::Type*>  outTargetType) ;

/// @brief Method OnSuccesfullySpawned, addr 0x58febb4, size 0x40c, virtual true, abstract: false, final false
inline void OnSuccesfullySpawned(::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method PlayDrumShared, addr 0x58ffb60, size 0x38, virtual false, abstract: false, final false
inline void PlayDrumShared(int32_t  drumIndex, float_t  drumVolume, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method PlayGeodeEffectShared, addr 0x59005fc, size 0x2ac, virtual false, abstract: false, final false
inline void PlayGeodeEffectShared(::UnityEngine::Vector3  hitPosition, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method PlayHandTapShared, addr 0x58ffcd8, size 0x1e0, virtual false, abstract: false, final false
inline void PlayHandTapShared(int32_t  soundIndex, bool  isLeftHand, float_t  tapVolume, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method PlaySelfOnlyInstrumentShared, addr 0x58ffc20, size 0x38, virtual false, abstract: false, final false
inline void PlaySelfOnlyInstrumentShared(int32_t  selfOnlyIndex, int32_t  noteIndex, float_t  instrumentVol, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method PlaySplashEffectShared, addr 0x5900534, size 0x48, virtual false, abstract: false, final false
inline void PlaySplashEffectShared(::UnityEngine::Vector3  splashPosition, ::UnityEngine::Quaternion  splashRotation, float_t  splashScale, float_t  boundingRadius, bool  bigSplash, bool  enteringWater, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// [PunRPC]
/// @brief Method RPC_BroadcastSubCosmeticSignal, addr 0x5900398, size 0x84, virtual false, abstract: false, final false
inline void RPC_BroadcastSubCosmeticSignal(::ArrayW<int32_t>  data, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RPC_HideAllCosmetics, addr 0x590041c, size 0x38, virtual false, abstract: false, final false
inline void RPC_HideAllCosmetics(::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RPC_InitializeNoobMaterial, addr 0x58ff820, size 0x88, virtual false, abstract: false, final false
inline void RPC_InitializeNoobMaterial(float_t  red, float_t  green, float_t  blue, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RPC_PlayDrum, addr 0x58ffae0, size 0x80, virtual false, abstract: false, final false
inline void RPC_PlayDrum(int32_t  drumIndex, float_t  drumVolume, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RPC_PlayGeodeEffect, addr 0x590057c, size 0x80, virtual false, abstract: false, final false
inline void RPC_PlayGeodeEffect(::UnityEngine::Vector3  hitPosition, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RPC_PlayHandTap, addr 0x58ffc58, size 0x80, virtual false, abstract: false, final false
inline void RPC_PlayHandTap(int32_t  soundIndex, bool  isLeftHand, float_t  tapVolume, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RPC_PlaySelfOnlyInstrument, addr 0x58ffb98, size 0x88, virtual false, abstract: false, final false
inline void RPC_PlaySelfOnlyInstrument(int32_t  selfOnlyIndex, int32_t  noteIndex, float_t  instrumentVol, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RPC_PlaySplashEffect, addr 0x5900454, size 0xe0, virtual false, abstract: false, final false
inline void RPC_PlaySplashEffect(::UnityEngine::Vector3  splashPosition, ::UnityEngine::Quaternion  splashRotation, float_t  splashScale, float_t  boundingRadius, bool  bigSplash, bool  enteringWater, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RPC_RequestCosmetics, addr 0x58ff8e0, size 0x58, virtual false, abstract: false, final false
inline void RPC_RequestCosmetics(::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RPC_SetCollectionCycleIndex, addr 0x5900304, size 0x94, virtual false, abstract: false, final false
inline void RPC_SetCollectionCycleIndex(::ArrayW<int32_t>  data, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RPC_UpdateCosmetics, addr 0x5900134, size 0x4, virtual false, abstract: false, final false
inline void RPC_UpdateCosmetics(::ArrayW<::StringW>  currentItems, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RPC_UpdateCosmeticsWithCollectablesPacked, addr 0x5900200, size 0x104, virtual false, abstract: false, final false
inline void RPC_UpdateCosmeticsWithCollectablesPacked(::ArrayW<int32_t>  data, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RPC_UpdateCosmeticsWithTryon, addr 0x5900138, size 0x4, virtual false, abstract: false, final false
inline void RPC_UpdateCosmeticsWithTryon(::ArrayW<::StringW>  currentItems, ::ArrayW<::StringW>  tryOnItems, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RPC_UpdateCosmeticsWithTryonPacked, addr 0x590013c, size 0x88, virtual false, abstract: false, final false
inline void RPC_UpdateCosmeticsWithTryonPacked(::ArrayW<int32_t>  currentItemsPacked, ::ArrayW<int32_t>  tryOnItemsPacked, bool  playfx, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RPC_UpdateNativeSize, addr 0x58ffeb8, size 0x68, virtual false, abstract: false, final false
inline void RPC_UpdateNativeSize(float_t  value, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RPC_UpdateQuestScore, addr 0x59012b4, size 0x70, virtual false, abstract: false, final false
inline void RPC_UpdateQuestScore(int32_t  score, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RPC_UpdateRankedInfo, addr 0x590135c, size 0x88, virtual false, abstract: false, final false
inline void RPC_UpdateRankedInfo(float_t  elo, int32_t  questRank, int32_t  PCRank, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestCosmeticsShared, addr 0x58ff938, size 0x1a8, virtual false, abstract: false, final false
inline void RequestCosmeticsShared(::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method RequestMaterialColorShared, addr 0x5901b70, size 0x38, virtual false, abstract: false, final false
inline void RequestMaterialColorShared(int32_t  askingPlayerID, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method SetupLoudSpeakerNetwork, addr 0x58fefc0, size 0x1d8, virtual false, abstract: false, final false
inline void SetupLoudSpeakerNetwork(::GlobalNamespace::RigContainer*  rigContainer) ;

/// @brief Method UpdateCosmeticsWithTryonShared, addr 0x59001c4, size 0x3c, virtual false, abstract: false, final false
inline void UpdateCosmeticsWithTryonShared(::ArrayW<int32_t>  currentItems, ::ArrayW<int32_t>  tryOnItems, bool  playfx, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method UpdateNativeSizeShared, addr 0x58fff20, size 0x214, virtual false, abstract: false, final false
inline void UpdateNativeSizeShared(float_t  value, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method UpdateQuestScore, addr 0x5901324, size 0x38, virtual false, abstract: false, final false
inline void UpdateQuestScore(int32_t  score, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method UpdateRankedInfo, addr 0x59013e4, size 0x38, virtual false, abstract: false, final false
inline void UpdateRankedInfo(float_t  elo, int32_t  questRank, int32_t  PCRank, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

constexpr ::GorillaTag::InDelegateListProcessor_2<::UnityW<::GlobalNamespace::RigContainer>,::GlobalNamespace::PhotonMessageInfoWrapped>* const& __cordl_internal_get__SuccesfullSpawnEvent_k__BackingField() const;

constexpr ::GorillaTag::InDelegateListProcessor_2<::UnityW<::GlobalNamespace::RigContainer>,::GlobalNamespace::PhotonMessageInfoWrapped>*& __cordl_internal_get__SuccesfullSpawnEvent_k__BackingField() ;

constexpr ::Fusion::NetworkString_1<::Fusion::_16> const& __cordl_internal_get__defaultName() const;

constexpr ::Fusion::NetworkString_1<::Fusion::_16>& __cordl_internal_get__defaultName() ;

constexpr ::Fusion::NetworkString_1<::Fusion::_16> const& __cordl_internal_get__nickName() const;

constexpr ::Fusion::NetworkString_1<::Fusion::_16>& __cordl_internal_get__nickName() ;

constexpr bool const& __cordl_internal_get__tutorialComplete() const;

constexpr bool& __cordl_internal_get__tutorialComplete() ;

constexpr ::GlobalNamespace::GeoSoundArg* const& __cordl_internal_get_geoSoundArg() const;

constexpr ::GlobalNamespace::GeoSoundArg*& __cordl_internal_get_geoSoundArg() ;

constexpr ::GlobalNamespace::HandTapArgs* const& __cordl_internal_get_handTapArgs() const;

constexpr ::GlobalNamespace::HandTapArgs*& __cordl_internal_get_handTapArgs() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_networkSpeaker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_networkSpeaker() ;

constexpr ::UnityW<::GlobalNamespace::RigContainer> const& __cordl_internal_get_rigContainer() const;

constexpr ::UnityW<::GlobalNamespace::RigContainer>& __cordl_internal_get_rigContainer() ;

constexpr ::UnityW<::Photon::Voice::PUN::PhotonVoiceView> const& __cordl_internal_get_voiceView() const;

constexpr ::UnityW<::Photon::Voice::PUN::PhotonVoiceView>& __cordl_internal_get_voiceView() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_vrrig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_vrrig() ;

constexpr void __cordl_internal_set__SuccesfullSpawnEvent_k__BackingField(::GorillaTag::InDelegateListProcessor_2<::UnityW<::GlobalNamespace::RigContainer>,::GlobalNamespace::PhotonMessageInfoWrapped>*  value) ;

constexpr void __cordl_internal_set__defaultName(::Fusion::NetworkString_1<::Fusion::_16>  value) ;

constexpr void __cordl_internal_set__nickName(::Fusion::NetworkString_1<::Fusion::_16>  value) ;

constexpr void __cordl_internal_set__tutorialComplete(bool  value) ;

constexpr void __cordl_internal_set_geoSoundArg(::GlobalNamespace::GeoSoundArg*  value) ;

constexpr void __cordl_internal_set_handTapArgs(::GlobalNamespace::HandTapArgs*  value) ;

constexpr void __cordl_internal_set_networkSpeaker(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rigContainer(::UnityW<::GlobalNamespace::RigContainer>  value) ;

constexpr void __cordl_internal_set_voiceView(::UnityW<::Photon::Voice::PUN::PhotonVoiceView>  value) ;

constexpr void __cordl_internal_set_vrrig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x5901ba8, size 0x104, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_SuccesfullSpawnEvent, addr 0x58fe7c4, size 0x8, virtual false, abstract: false, final false
inline ::GorillaTag::InDelegateListProcessor_2<::UnityW<::GlobalNamespace::RigContainer>,::GlobalNamespace::PhotonMessageInfoWrapped>* get_SuccesfullSpawnEvent() ;

/// @brief Method get_VRRig, addr 0x58fe7a4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_VRRig() ;

/// @brief Method get_Voice, addr 0x58fe79c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Photon::Voice::PUN::PhotonVoiceView> get_Voice() ;

/// @brief Method get_defaultName, addr 0x58fe614, size 0x64, virtual false, abstract: false, final false
inline ::Fusion::NetworkString_1<::Fusion::_16> get_defaultName() ;

/// @brief Method get_nickName, addr 0x58fe558, size 0x60, virtual false, abstract: false, final false
inline ::Fusion::NetworkString_1<::Fusion::_16> get_nickName() ;

/// @brief Method get_settings, addr 0x58fe7ac, size 0x18, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::FXSystemSettings> get_settings() ;

/// @brief Method get_tutorialComplete, addr 0x58fe6d8, size 0x64, virtual false, abstract: false, final false
inline bool get_tutorialComplete() ;

/// @brief Convert to "::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::GeoSoundArg*>"
constexpr ::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::GeoSoundArg*>* i___GlobalNamespace__IFXContextParems_1___GlobalNamespace__GeoSoundArg__() noexcept;

/// @brief Convert to "::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::HandTapArgs*>"
constexpr ::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::HandTapArgs*>* i___GlobalNamespace__IFXContextParems_1___GlobalNamespace__HandTapArgs__() noexcept;

/// [CompilerGenerated]
/// @brief Method set_SuccesfullSpawnEvent, addr 0x58fe7cc, size 0x10, virtual false, abstract: false, final false
inline void set_SuccesfullSpawnEvent(::GorillaTag::InDelegateListProcessor_2<::UnityW<::GlobalNamespace::RigContainer>,::GlobalNamespace::PhotonMessageInfoWrapped>*  value) ;

/// @brief Method set_defaultName, addr 0x58fe678, size 0x60, virtual false, abstract: false, final false
inline void set_defaultName(::Fusion::NetworkString_1<::Fusion::_16>  value) ;

/// @brief Method set_nickName, addr 0x58fe5b8, size 0x5c, virtual false, abstract: false, final false
inline void set_nickName(::Fusion::NetworkString_1<::Fusion::_16>  value) ;

/// @brief Method set_tutorialComplete, addr 0x58fe73c, size 0x60, virtual false, abstract: false, final false
inline void set_tutorialComplete(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRRigSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRRigSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRRigSerializer(VRRigSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRRigSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRRigSerializer(VRRigSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2144};

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("nickName", 0, 17)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _nickName, offset: 0xb0, size: 0xc, def value: None
 ::Fusion::NetworkString_1<::Fusion::_16>  ____nickName;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("defaultName", 17, 17)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _defaultName, offset: 0xbc, size: 0xc, def value: None
 ::Fusion::NetworkString_1<::Fusion::_16>  ____defaultName;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("tutorialComplete", 34, 1)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _tutorialComplete, offset: 0xc8, size: 0x1, def value: None
 bool  ____tutorialComplete;

/// [SerializeField]
/// @brief Field voiceView, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::PUN::PhotonVoiceView>  ___voiceView;

/// @brief Field networkSpeaker, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___networkSpeaker;

/// [SerializeField]
/// @brief Field vrrig, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___vrrig;

/// @brief Field rigContainer, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigContainer>  ___rigContainer;

/// @brief Field handTapArgs, offset: 0xf0, size: 0x8, def value: None
 ::GlobalNamespace::HandTapArgs*  ___handTapArgs;

/// @brief Field geoSoundArg, offset: 0xf8, size: 0x8, def value: None
 ::GlobalNamespace::GeoSoundArg*  ___geoSoundArg;

/// [CompilerGenerated]
/// @brief Field <SuccesfullSpawnEvent>k__BackingField, offset: 0x100, size: 0x8, def value: None
 ::GorillaTag::InDelegateListProcessor_2<::UnityW<::GlobalNamespace::RigContainer>,::GlobalNamespace::PhotonMessageInfoWrapped>*  ____SuccesfullSpawnEvent_k__BackingField;

/// @brief Size padding 0x178 - 0x108 = 0x70, packed as 0x70
 uint8_t  _cordl_size_padding[0x70];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRRigSerializer, ____nickName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigSerializer, ____defaultName) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigSerializer, ____tutorialComplete) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigSerializer, ___voiceView) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigSerializer, ___networkSpeaker) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigSerializer, ___vrrig) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigSerializer, ___rigContainer) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigSerializer, ___handTapArgs) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigSerializer, ___geoSoundArg) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigSerializer, ____SuccesfullSpawnEvent_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRRigSerializer) == 0x178, "Size mismatch!");

} // namespace end def GlobalNamespace
