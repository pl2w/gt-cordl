#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTBitOps_BitWriteInfo_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_PartyMemberStatus_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager_SubscriptionDetails_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VRRig)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
struct RpcInfo;
}
namespace GlobalNamespace {
struct BodyDockPositions_DropPositions;
}
namespace GlobalNamespace {
class BodyDockPositions;
}
namespace GlobalNamespace {
class BuilderArmShelf;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
template<typename T>
class CallbackContainer_1;
}
namespace GlobalNamespace {
template<typename T>
class CircularBuffer_1;
}
namespace GlobalNamespace {
struct CosmeticEffectsOnPlayers_EFFECTTYPE;
}
namespace GlobalNamespace {
class CosmeticRefRegistry;
}
namespace GlobalNamespace {
struct CosmeticsController_CollectionState;
}
namespace GlobalNamespace {
class CrittersLoudNoise;
}
namespace GlobalNamespace {
class FXSystemSettings;
}
namespace GlobalNamespace {
struct GTPlayer_MaterialData;
}
namespace GlobalNamespace {
class GamePlayer;
}
namespace GlobalNamespace {
class GorillaBodyRenderer;
}
namespace GlobalNamespace {
class GorillaEyeExpressions;
}
namespace GlobalNamespace {
class GorillaIK;
}
namespace GlobalNamespace {
class GorillaMouthFlap;
}
namespace GlobalNamespace {
class GorillaSkin;
}
namespace GlobalNamespace {
class GorillaSpeakerLoudness;
}
namespace GlobalNamespace {
class HandEffectContext;
}
namespace GlobalNamespace {
class HandEffectsOverrideCosmetic;
}
namespace GlobalNamespace {
class HandHold;
}
namespace GlobalNamespace {
class HoldableHand;
}
namespace GlobalNamespace {
class HoverboardVisual;
}
namespace GlobalNamespace {
class ICallBack;
}
namespace GlobalNamespace {
class IEyeScannable;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class IPreDisable;
}
namespace GlobalNamespace {
class ITickSystemPost;
}
namespace GlobalNamespace {
class IUserCosmeticsCallback;
}
namespace GlobalNamespace {
class IWrappedSerializable;
}
namespace GlobalNamespace {
struct InputStruct;
}
namespace GlobalNamespace {
struct KeyValueStringPair;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class NetworkVector3;
}
namespace GlobalNamespace {
class NetworkView;
}
namespace GlobalNamespace {
class NonCosmeticHandItem;
}
namespace GlobalNamespace {
class PaintbrawlBalloons;
}
namespace GlobalNamespace {
struct Permission_ManagedByEnum;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class ProjectileWeapon;
}
namespace GlobalNamespace {
class PropHuntHandFollower;
}
namespace GlobalNamespace {
class ReplacementVoice;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class RigDisplacementZone;
}
namespace GlobalNamespace {
class SizeManager;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class SuperInfectionHandDisplay;
}
namespace GlobalNamespace {
class TakeMyHand_HandLink;
}
namespace GlobalNamespace {
struct TransferrableObject_ItemStates;
}
namespace GlobalNamespace {
struct TransferrableObject_PositionState;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class VRMapIndex;
}
namespace GlobalNamespace {
class VRMapMiddle;
}
namespace GlobalNamespace {
class VRMapThumb;
}
namespace GlobalNamespace {
class VRMap;
}
namespace GlobalNamespace {
class VRRigReliableState;
}
namespace GlobalNamespace {
class VRRigSerializer;
}
namespace GlobalNamespace {
struct VRRig_PartyMemberStatus;
}
namespace GlobalNamespace {
struct VRRig_VelocityTime;
}
namespace GlobalNamespace {
struct VRRig_WearablePackedStateSlots;
}
namespace GlobalNamespace {
class VRRig___c;
}
namespace GlobalNamespace {
class VoiceShiftCosmetic;
}
namespace GlobalNamespace {
class XRaySkeleton;
}
namespace GlobalNamespace {
class ZoneEntityBSP;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace GorillaLocomotion::Climbing {
class GorillaClimbable;
}
namespace GorillaLocomotion::Gameplay {
class GorillaRopeSwing;
}
namespace GorillaLocomotion {
struct StiltID;
}
namespace GorillaNetworking {
class CosmeticCollectionDisplay;
}
namespace GorillaNetworking {
class CosmeticItemRegistry;
}
namespace GorillaNetworking {
class CosmeticsController_CosmeticSet;
}
namespace GorillaNetworking {
class FriendshipBracelet;
}
namespace GorillaTag::Cosmetics {
class CosmeticEffectsOnPlayers_CosmeticEffect;
}
namespace GorillaTagScripts {
class GorillaAmbushManager;
}
namespace GorillaTagScripts {
class LayerChanger;
}
namespace GorillaTagScripts {
class MovingSurface;
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
namespace Photon::Voice::PUN {
class PhotonVoiceView;
}
namespace Photon::Voice::Unity {
class MicWrapper;
}
namespace Photon::Voice {
class IAudioDesc;
}
namespace PlayFab::ClientModels {
class GetUserInventoryResult;
}
namespace PlayFab::ClientModels {
class ItemInstance;
}
namespace PlayFab {
class PlayFabError;
}
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
class IList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace TMPro {
class TextMeshPro;
}
namespace TagEffects {
class TagEffectPack;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class GorillaSnapTurn;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
class VRRig___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VRRig*);
MARK_REF_T(::GlobalNamespace::VRRig___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRRig*, "", "VRRig");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRRig___c*, "", "VRRig/<>c");
// Dependencies GTBitOps::BitWriteInfo, GorillaNetworking.CosmeticsController::CosmeticItem, GorillaTagScripts.SubscriptionManager::SubscriptionDetails, UnityEngine.AudioClip, UnityEngine.AudioSource, UnityEngine.Color, UnityEngine.Material, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.RaycastHit, UnityEngine.Vector3, VRRig::PartyMemberStatus
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRRig
class CORDL_TYPE VRRig : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PartyMemberStatus = ::GlobalNamespace::VRRig_PartyMemberStatus;

using VelocityTime = ::GlobalNamespace::VRRig_VelocityTime;

using WearablePackedStateSlots = ::GlobalNamespace::VRRig_WearablePackedStateSlots;

using __c = ::GlobalNamespace::VRRig___c;

/// @brief Field CosmeticEffectPack, offset 0x438, size 0x8 
 __declspec(property(get=__cordl_internal_get_CosmeticEffectPack, put=__cordl_internal_set_CosmeticEffectPack)) ::UnityW<::TagEffects::TagEffectPack>  CosmeticEffectPack;

/// @brief Field CosmeticHandEffectsOverride_Left, offset 0x868, size 0x8 
 __declspec(property(get=__cordl_internal_get_CosmeticHandEffectsOverride_Left, put=__cordl_internal_set_CosmeticHandEffectsOverride_Left)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HandEffectsOverrideCosmetic>>*  CosmeticHandEffectsOverride_Left;

/// @brief Field CosmeticHandEffectsOverride_Right, offset 0x860, size 0x8 
 __declspec(property(get=__cordl_internal_get_CosmeticHandEffectsOverride_Right, put=__cordl_internal_set_CosmeticHandEffectsOverride_Right)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HandEffectsOverrideCosmetic>>*  CosmeticHandEffectsOverride_Right;

 __declspec(property(get=get_Creator)) ::GlobalNamespace::NetPlayer*  Creator;

 __declspec(property(get=get_CurrentCosmeticSkin, put=set_CurrentCosmeticSkin)) ::UnityW<::GlobalNamespace::GorillaSkin>  CurrentCosmeticSkin;

 __declspec(property(get=get_CurrentModeSkin, put=set_CurrentModeSkin)) ::UnityW<::GlobalNamespace::GorillaSkin>  CurrentModeSkin;

 __declspec(property(get=get_ExtraLeftHandEffect)) ::GlobalNamespace::HandEffectContext*  ExtraLeftHandEffect;

 __declspec(property(get=get_ExtraRightHandEffect)) ::GlobalNamespace::HandEffectContext*  ExtraRightHandEffect;

/// @brief Field FPVEffectsParent, offset 0x3a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_FPVEffectsParent, put=__cordl_internal_set_FPVEffectsParent)) ::UnityW<::UnityEngine::GameObject>  FPVEffectsParent;

 __declspec(property(get=get_GamePlayerRef)) ::UnityW<::GlobalNamespace::GamePlayer>  GamePlayerRef;

/// @brief Field GorillaSnapTurningComp, offset 0x440, size 0x8 
 __declspec(property(get=__cordl_internal_get_GorillaSnapTurningComp, put=__cordl_internal_set_GorillaSnapTurningComp)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  GorillaSnapTurningComp;

 __declspec(property(get=get_HasBracelet)) bool  HasBracelet;

/// @brief Field HauntedHearingVolume, offset 0x2e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_HauntedHearingVolume, put=__cordl_internal_set_HauntedHearingVolume)) float_t  HauntedHearingVolume;

/// @brief Field HauntedRingVoicePitch, offset 0x2f0, size 0x4 
 __declspec(property(get=__cordl_internal_get_HauntedRingVoicePitch, put=__cordl_internal_set_HauntedRingVoicePitch)) float_t  HauntedRingVoicePitch;

/// @brief Field HauntedVoicePitch, offset 0x2e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_HauntedVoicePitch, put=__cordl_internal_set_HauntedVoicePitch)) float_t  HauntedVoicePitch;

 __declspec(property(get=IEyeScannable_get_Bounds)) ::UnityEngine::Bounds  IEyeScannable_Bounds;

 __declspec(property(get=IEyeScannable_get_Entries)) ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>*  IEyeScannable_Entries;

 __declspec(property(get=IEyeScannable_get_Position)) ::UnityEngine::Vector3  IEyeScannable_Position;

 __declspec(property(get=IEyeScannable_get_scannableId)) int32_t  IEyeScannable_scannableId;

 __declspec(property(get=IUserCosmeticsCallback_get_PendingUpdate, put=IUserCosmeticsCallback_set_PendingUpdate)) bool  IUserCosmeticsCallback_PendingUpdate;

/// @brief Field InOverrideSubscriptionZone, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get_InOverrideSubscriptionZone, put=__cordl_internal_set_InOverrideSubscriptionZone)) bool  InOverrideSubscriptionZone;

 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_InitializedCosmetics, put=set_InitializedCosmetics)) bool  InitializedCosmetics;

 __declspec(property(get=get_IsFrozen, put=set_IsFrozen)) bool  IsFrozen;

/// @brief Field IsHaunted, offset 0x2e0, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsHaunted, put=__cordl_internal_set_IsHaunted)) bool  IsHaunted;

 __declspec(property(get=get_IsInDisplacementZone)) bool  IsInDisplacementZone;

/// @brief Field IsInvisibleToLocalPlayer, offset 0x77c, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsInvisibleToLocalPlayer, put=__cordl_internal_set_IsInvisibleToLocalPlayer)) bool  IsInvisibleToLocalPlayer;

 __declspec(property(get=get_IsLocalPartyMember)) bool  IsLocalPartyMember;

 __declspec(property(get=get_IsMicEnabled, put=set_IsMicEnabled)) bool  IsMicEnabled;

 __declspec(property(get=get_IsPlayerMeshHidden)) bool  IsPlayerMeshHidden;

 __declspec(property(get=get_IsVisuallyDisplaced)) bool  IsVisuallyDisplaced;

 __declspec(property(get=get_LastHandTouchedGroundAtNetworkTime, put=set_LastHandTouchedGroundAtNetworkTime)) float_t  LastHandTouchedGroundAtNetworkTime;

 __declspec(property(get=get_LastTouchedGroundAtNetworkTime, put=set_LastTouchedGroundAtNetworkTime)) float_t  LastTouchedGroundAtNetworkTime;

 __declspec(property(get=get_LeftHandEffect)) ::GlobalNamespace::HandEffectContext*  LeftHandEffect;

 __declspec(property(get=get_LeftThrowableProjectileColor, put=set_LeftThrowableProjectileColor)) ::UnityEngine::Color32  LeftThrowableProjectileColor;

 __declspec(property(get=get_LeftThrowableProjectileIndex, put=set_LeftThrowableProjectileIndex)) int32_t  LeftThrowableProjectileIndex;

/// @brief Field LocalGrabOverrideDuration, offset 0x764, size 0x4 
 __declspec(property(get=__cordl_internal_get_LocalGrabOverrideDuration, put=__cordl_internal_set_LocalGrabOverrideDuration)) float_t  LocalGrabOverrideDuration;

/// @brief Field LocalTrajectoryOverrideBlend, offset 0x748, size 0x4 
 __declspec(property(get=__cordl_internal_get_LocalTrajectoryOverrideBlend, put=__cordl_internal_set_LocalTrajectoryOverrideBlend)) float_t  LocalTrajectoryOverrideBlend;

/// @brief Field LocalTrajectoryOverrideDuration, offset 0x74c, size 0x4 
 __declspec(property(get=__cordl_internal_get_LocalTrajectoryOverrideDuration, put=__cordl_internal_set_LocalTrajectoryOverrideDuration)) float_t  LocalTrajectoryOverrideDuration;

/// @brief Field LocalTrajectoryOverridePosition, offset 0x730, size 0xc 
 __declspec(property(get=__cordl_internal_get_LocalTrajectoryOverridePosition, put=__cordl_internal_set_LocalTrajectoryOverridePosition)) ::UnityEngine::Vector3  LocalTrajectoryOverridePosition;

/// @brief Field LocalTrajectoryOverrideVelocity, offset 0x73c, size 0xc 
 __declspec(property(get=__cordl_internal_get_LocalTrajectoryOverrideVelocity, put=__cordl_internal_set_LocalTrajectoryOverrideVelocity)) ::UnityEngine::Vector3  LocalTrajectoryOverrideVelocity;

/// @brief Field MouthPosition, offset 0x3c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_MouthPosition, put=__cordl_internal_set_MouthPosition)) ::UnityW<::UnityEngine::Transform>  MouthPosition;

 __declspec(property(get=get_NativeScale, put=set_NativeScale)) float_t  NativeScale;

/// @brief Field OnColorChanged, offset 0x7e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnColorChanged, put=__cordl_internal_set_OnColorChanged)) ::System::Action_1<::UnityEngine::Color>*  OnColorChanged;

/// @brief Field OnDataChange, offset 0x8a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDataChange, put=__cordl_internal_set_OnDataChange)) ::System::Action*  OnDataChange;

/// @brief Field OnMaterialIndexChanged, offset 0x7a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMaterialIndexChanged, put=__cordl_internal_set_OnMaterialIndexChanged)) ::System::Action_2<int32_t,int32_t>*  OnMaterialIndexChanged;

/// @brief Field OnNameChanged, offset 0x3e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNameChanged, put=__cordl_internal_set_OnNameChanged)) ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  OnNameChanged;

/// @brief Field OnPlayerNameVisibleChanged, offset 0x7e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerNameVisibleChanged, put=__cordl_internal_set_OnPlayerNameVisibleChanged)) ::System::Action*  OnPlayerNameVisibleChanged;

/// @brief Field OnQuestScoreChanged, offset 0x7f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnQuestScoreChanged, put=__cordl_internal_set_OnQuestScoreChanged)) ::System::Action_1<int32_t>*  OnQuestScoreChanged;

/// @brief Field OnRankedSubtierChanged, offset 0x810, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRankedSubtierChanged, put=__cordl_internal_set_OnRankedSubtierChanged)) ::System::Action_2<int32_t,int32_t>*  OnRankedSubtierChanged;

/// @brief Field OverrideSubscriptionZoneLocation, offset 0x104, size 0xc 
 __declspec(property(get=__cordl_internal_get_OverrideSubscriptionZoneLocation, put=__cordl_internal_set_OverrideSubscriptionZoneLocation)) ::UnityEngine::Vector3  OverrideSubscriptionZoneLocation;

/// @brief Field OwningNetPlayer, offset 0x6d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OwningNetPlayer, put=__cordl_internal_set_OwningNetPlayer)) ::GlobalNamespace::NetPlayer*  OwningNetPlayer;

 __declspec(property(get=get_PostTickRunning, put=set_PostTickRunning)) bool  PostTickRunning;

 __declspec(property(get=get_RandomThrowableIndex, put=set_RandomThrowableIndex)) int32_t  RandomThrowableIndex;

 __declspec(property(get=get_RightHandEffect)) ::GlobalNamespace::HandEffectContext*  RightHandEffect;

 __declspec(property(get=get_RightThrowableProjectileColor, put=set_RightThrowableProjectileColor)) ::UnityEngine::Color32  RightThrowableProjectileColor;

 __declspec(property(get=get_RightThrowableProjectileIndex, put=set_RightThrowableProjectileIndex)) int32_t  RightThrowableProjectileIndex;

/// @brief Field SDKIndex, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_SDKIndex, put=__cordl_internal_set_SDKIndex)) int32_t  SDKIndex;

 __declspec(property(get=get_ScaleMultiplier, put=set_ScaleMultiplier)) float_t  ScaleMultiplier;

 __declspec(property(get=get_ShowGoldNameTag, put=set_ShowGoldNameTag)) bool  ShowGoldNameTag;

 __declspec(property(get=get_SizeLayerMask, put=set_SizeLayerMask)) int32_t  SizeLayerMask;

 __declspec(property(get=get_SpeakingLoudness, put=set_SpeakingLoudness)) float_t  SpeakingLoudness;

/// @brief Field TemporaryCosmeticEffects, offset 0x3a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_TemporaryCosmeticEffects, put=__cordl_internal_set_TemporaryCosmeticEffects)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>*  TemporaryCosmeticEffects;

 __declspec(property(get=get_TemporaryCosmetics)) ::System::Collections::Generic::HashSet_1<::StringW>*  TemporaryCosmetics;

 __declspec(property(get=get_TemporaryEffectSkin, put=set_TemporaryEffectSkin)) ::UnityW<::GlobalNamespace::GorillaSkin>  TemporaryEffectSkin;

/// @brief Field UsingHauntedRing, offset 0x2ec, size 0x1 
 __declspec(property(get=__cordl_internal_get_UsingHauntedRing, put=__cordl_internal_set_UsingHauntedRing)) bool  UsingHauntedRing;

/// @brief Field VoiceShiftCosmetics, offset 0x300, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoiceShiftCosmetics, put=__cordl_internal_set_VoiceShiftCosmetics)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VoiceShiftCosmetic>>*  VoiceShiftCosmetics;

 __declspec(property(get=get_WearablePackedStates, put=set_WearablePackedStates)) int32_t  WearablePackedStates;

/// @brief Field WearablePackedStatesBitWriteInfos, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WearablePackedStatesBitWriteInfos, put=setStaticF_WearablePackedStatesBitWriteInfos)) ::ArrayW<::GlobalNamespace::GTBitOps_BitWriteInfo>  WearablePackedStatesBitWriteInfos;

/// @brief Field <CurrentCosmeticSkin>k__BackingField, offset 0x3c8, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentCosmeticSkin_k__BackingField, put=__cordl_internal_set__CurrentCosmeticSkin_k__BackingField)) ::UnityW<::GlobalNamespace::GorillaSkin>  _CurrentCosmeticSkin_k__BackingField;

/// @brief Field <CurrentModeSkin>k__BackingField, offset 0x3d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentModeSkin_k__BackingField, put=__cordl_internal_set__CurrentModeSkin_k__BackingField)) ::UnityW<::GlobalNamespace::GorillaSkin>  _CurrentModeSkin_k__BackingField;

/// @brief Field <IsFrozen>k__BackingField, offset 0x85a, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsFrozen_k__BackingField, put=__cordl_internal_set__IsFrozen_k__BackingField)) bool  _IsFrozen_k__BackingField;

/// @brief Field <LastHandTouchedGroundAtNetworkTime>k__BackingField, offset 0x374, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastHandTouchedGroundAtNetworkTime_k__BackingField, put=__cordl_internal_set__LastHandTouchedGroundAtNetworkTime_k__BackingField)) float_t  _LastHandTouchedGroundAtNetworkTime_k__BackingField;

/// @brief Field <LastTouchedGroundAtNetworkTime>k__BackingField, offset 0x370, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastTouchedGroundAtNetworkTime_k__BackingField, put=__cordl_internal_set__LastTouchedGroundAtNetworkTime_k__BackingField)) float_t  _LastTouchedGroundAtNetworkTime_k__BackingField;

/// @brief Field <PostTickRunning>k__BackingField, offset 0x460, size 0x1 
 __declspec(property(get=__cordl_internal_get__PostTickRunning_k__BackingField, put=__cordl_internal_set__PostTickRunning_k__BackingField)) bool  _PostTickRunning_k__BackingField;

/// @brief Field <TemporaryEffectSkin>k__BackingField, offset 0x3d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__TemporaryEffectSkin_k__BackingField, put=__cordl_internal_set__TemporaryEffectSkin_k__BackingField)) ::UnityW<::GlobalNamespace::GorillaSkin>  _TemporaryEffectSkin_k__BackingField;

/// @brief Field <cosmeticReferences>k__BackingField, offset 0x2c8, size 0x8 
 __declspec(property(get=__cordl_internal_get__cosmeticReferences_k__BackingField, put=__cordl_internal_set__cosmeticReferences_k__BackingField)) ::UnityW<::GlobalNamespace::CosmeticRefRegistry>  _cosmeticReferences_k__BackingField;

/// @brief Field _extraLeftHandEffect, offset 0x700, size 0x8 
 __declspec(property(get=__cordl_internal_get__extraLeftHandEffect, put=__cordl_internal_set__extraLeftHandEffect)) ::GlobalNamespace::HandEffectContext*  _extraLeftHandEffect;

/// @brief Field _extraRightHandEffect, offset 0x708, size 0x8 
 __declspec(property(get=__cordl_internal_get__extraRightHandEffect, put=__cordl_internal_set__extraRightHandEffect)) ::GlobalNamespace::HandEffectContext*  _extraRightHandEffect;

/// @brief Field _gamePlayerRef, offset 0x718, size 0x8 
 __declspec(property(get=__cordl_internal_get__gamePlayerRef, put=__cordl_internal_set__gamePlayerRef)) ::UnityW<::GlobalNamespace::GamePlayer>  _gamePlayerRef;

/// @brief Field _isListeningFor_OnPostInstantiateAllPrefabs, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__isListeningFor_OnPostInstantiateAllPrefabs, put=__cordl_internal_set__isListeningFor_OnPostInstantiateAllPrefabs)) bool  _isListeningFor_OnPostInstantiateAllPrefabs;

/// @brief Field _leftHandEffect, offset 0x6f0, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHandEffect, put=__cordl_internal_set__leftHandEffect)) ::GlobalNamespace::HandEffectContext*  _leftHandEffect;

/// @brief Field _nextUpdateTime, offset 0x3b0, size 0x4 
 __declspec(property(get=__cordl_internal_get__nextUpdateTime, put=__cordl_internal_set__nextUpdateTime)) float_t  _nextUpdateTime;

/// @brief Field _playerOwnedCosmetics, offset 0x278, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerOwnedCosmetics, put=__cordl_internal_set__playerOwnedCosmetics)) ::System::Collections::Generic::HashSet_1<::StringW>*  _playerOwnedCosmetics;

/// @brief Field _playerOwnedCosmeticsAge, offset 0x280, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerOwnedCosmeticsAge, put=__cordl_internal_set__playerOwnedCosmeticsAge)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  _playerOwnedCosmeticsAge;

/// @brief Field _rankedInfoUpdated, offset 0x824, size 0x1 
 __declspec(property(get=__cordl_internal_get__rankedInfoUpdated, put=__cordl_internal_set__rankedInfoUpdated)) bool  _rankedInfoUpdated;

/// @brief Field _rightHandEffect, offset 0x6f8, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHandEffect, put=__cordl_internal_set__rightHandEffect)) ::GlobalNamespace::HandEffectContext*  _rightHandEffect;

/// @brief Field _scoreUpdated, offset 0x804, size 0x1 
 __declspec(property(get=__cordl_internal_get__scoreUpdated, put=__cordl_internal_set__scoreUpdated)) bool  _scoreUpdated;

/// @brief Field _temporaryCosmetics, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get__temporaryCosmetics, put=__cordl_internal_set__temporaryCosmetics)) ::System::Collections::Generic::HashSet_1<::StringW>*  _temporaryCosmetics;

/// @brief Field activeCosmetics, offset 0x2b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeCosmetics, put=__cordl_internal_set_activeCosmetics)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  activeCosmetics;

/// @brief Field anyShiftedVoiceCosmetic, offset 0x2fe, size 0x1 
 __declspec(property(get=__cordl_internal_get_anyShiftedVoiceCosmetic, put=__cordl_internal_set_anyShiftedVoiceCosmetic)) bool  anyShiftedVoiceCosmetic;

/// @brief Field audioDesc, offset 0x688, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioDesc, put=__cordl_internal_set_audioDesc)) ::Photon::Voice::IAudioDesc*  audioDesc;

/// @brief Field backpack, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_backpack, put=__cordl_internal_set_backpack)) ::UnityW<::UnityEngine::GameObject>  backpack;

/// @brief Field blue, offset 0x240, size 0x4 
 __declspec(property(get=__cordl_internal_get_blue, put=__cordl_internal_set_blue)) float_t  blue;

/// @brief Field bodyHolds, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyHolds, put=__cordl_internal_set_bodyHolds)) ::UnityW<::GlobalNamespace::HoldableHand>  bodyHolds;

/// @brief Field bodyRenderer, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyRenderer, put=__cordl_internal_set_bodyRenderer)) ::UnityW<::GlobalNamespace::GorillaBodyRenderer>  bodyRenderer;

/// @brief Field bodyTransform, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyTransform, put=__cordl_internal_set_bodyTransform)) ::UnityW<::UnityEngine::Transform>  bodyTransform;

/// @brief Field bonkCooldown, offset 0x5e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_bonkCooldown, put=__cordl_internal_set_bonkCooldown)) float_t  bonkCooldown;

/// @brief Field bonkTime, offset 0x5e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_bonkTime, put=__cordl_internal_set_bonkTime)) float_t  bonkTime;

/// @brief Field builderArmShelfLeft, offset 0x600, size 0x8 
 __declspec(property(get=__cordl_internal_get_builderArmShelfLeft, put=__cordl_internal_set_builderArmShelfLeft)) ::UnityW<::GlobalNamespace::BuilderArmShelf>  builderArmShelfLeft;

/// @brief Field builderArmShelfRight, offset 0x608, size 0x8 
 __declspec(property(get=__cordl_internal_get_builderArmShelfRight, put=__cordl_internal_set_builderArmShelfRight)) ::UnityW<::GlobalNamespace::BuilderArmShelf>  builderArmShelfRight;

/// @brief Field builderResizeWatch, offset 0x5f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_builderResizeWatch, put=__cordl_internal_set_builderResizeWatch)) ::UnityW<::UnityEngine::GameObject>  builderResizeWatch;

/// @brief Field cachedRenderTransformPos, offset 0x844, size 0xc 
 __declspec(property(get=__cordl_internal_get_cachedRenderTransformPos, put=__cordl_internal_set_cachedRenderTransformPos)) ::UnityEngine::Vector3  cachedRenderTransformPos;

/// @brief Field clipToPlay, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipToPlay, put=__cordl_internal_set_clipToPlay)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  clipToPlay;

/// @brief Field colorInitialized, offset 0x7d0, size 0x1 
 __declspec(property(get=__cordl_internal_get_colorInitialized, put=__cordl_internal_set_colorInitialized)) bool  colorInitialized;

/// @brief Field cosmeticPitchActive, offset 0x2fc, size 0x1 
 __declspec(property(get=__cordl_internal_get_cosmeticPitchActive, put=__cordl_internal_set_cosmeticPitchActive)) bool  cosmeticPitchActive;

/// @brief Field cosmeticPitchShift, offset 0x2f4, size 0x4 
 __declspec(property(get=__cordl_internal_get_cosmeticPitchShift, put=__cordl_internal_set_cosmeticPitchShift)) float_t  cosmeticPitchShift;

 __declspec(property(get=get_cosmeticReferences, put=set_cosmeticReferences)) ::UnityW<::GlobalNamespace::CosmeticRefRegistry>  cosmeticReferences;

/// @brief Field cosmeticRetries, offset 0x2c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_cosmeticRetries, put=__cordl_internal_set_cosmeticRetries)) int32_t  cosmeticRetries;

/// @brief Field cosmeticSet, offset 0x298, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticSet, put=__cordl_internal_set_cosmeticSet)) ::GorillaNetworking::CosmeticsController_CosmeticSet*  cosmeticSet;

/// @brief Field cosmeticVolumeActive, offset 0x2fd, size 0x1 
 __declspec(property(get=__cordl_internal_get_cosmeticVolumeActive, put=__cordl_internal_set_cosmeticVolumeActive)) bool  cosmeticVolumeActive;

/// @brief Field cosmeticVolumeShift, offset 0x2f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_cosmeticVolumeShift, put=__cordl_internal_set_cosmeticVolumeShift)) float_t  cosmeticVolumeShift;

 __declspec(property(get=get_cosmetics)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  cosmetics;

/// @brief Field cosmeticsActivationPS, offset 0x7b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticsActivationPS, put=__cordl_internal_set_cosmeticsActivationPS)) ::UnityW<::UnityEngine::ParticleSystem>  cosmeticsActivationPS;

/// @brief Field cosmeticsActivationSBP, offset 0x7b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticsActivationSBP, put=__cordl_internal_set_cosmeticsActivationSBP)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  cosmeticsActivationSBP;

/// @brief Field cosmeticsObjectRegistry, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticsObjectRegistry, put=__cordl_internal_set_cosmeticsObjectRegistry)) ::GorillaNetworking::CosmeticItemRegistry*  cosmeticsObjectRegistry;

/// @brief Field creator, offset 0x4a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_creator, put=__cordl_internal_set_creator)) ::GlobalNamespace::NetPlayer*  creator;

/// @brief Field currentCosmeticTries, offset 0x2c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentCosmeticTries, put=__cordl_internal_set_currentCosmeticTries)) int32_t  currentCosmeticTries;

/// @brief Field currentHoldParent, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentHoldParent, put=__cordl_internal_set_currentHoldParent)) ::UnityW<::UnityEngine::Transform>  currentHoldParent;

/// @brief Field currentMicWrapper, offset 0x680, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentMicWrapper, put=__cordl_internal_set_currentMicWrapper)) ::Photon::Voice::Unity::MicWrapper*  currentMicWrapper;

/// @brief Field currentQuestScore, offset 0x800, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentQuestScore, put=__cordl_internal_set_currentQuestScore)) int32_t  currentQuestScore;

/// @brief Field currentRankedELO, offset 0x818, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentRankedELO, put=__cordl_internal_set_currentRankedELO)) float_t  currentRankedELO;

/// @brief Field currentRankedSubTierPC, offset 0x820, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentRankedSubTierPC, put=__cordl_internal_set_currentRankedSubTierPC)) int32_t  currentRankedSubTierPC;

/// @brief Field currentRankedSubTierQuest, offset 0x81c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentRankedSubTierQuest, put=__cordl_internal_set_currentRankedSubTierQuest)) int32_t  currentRankedSubTierQuest;

/// @brief Field currentRopeSwing, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentRopeSwing, put=__cordl_internal_set_currentRopeSwing)) ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>  currentRopeSwing;

/// @brief Field currentRopeSwingTarget, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentRopeSwingTarget, put=__cordl_internal_set_currentRopeSwingTarget)) ::UnityW<::UnityEngine::Transform>  currentRopeSwingTarget;

/// @brief Field cycleStatesArray, offset 0x480, size 0x8 
 __declspec(property(get=__cordl_internal_get_cycleStatesArray, put=__cordl_internal_set_cycleStatesArray)) ::ArrayW<int32_t>  cycleStatesArray;

/// @brief Field deactivatedRenderers, offset 0x8a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_deactivatedRenderers, put=__cordl_internal_set_deactivatedRenderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  deactivatedRenderers;

/// @brief Field defaultSkin, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultSkin, put=__cordl_internal_set_defaultSkin)) ::UnityW<::GlobalNamespace::GorillaSkin>  defaultSkin;

/// @brief Field displacementZone, offset 0x838, size 0x8 
 __declspec(property(get=__cordl_internal_get_displacementZone, put=__cordl_internal_set_displacementZone)) ::UnityW<::GlobalNamespace::RigDisplacementZone>  displacementZone;

/// @brief Field doNotLerpConstant, offset 0x49c, size 0x4 
 __declspec(property(get=__cordl_internal_get_doNotLerpConstant, put=__cordl_internal_set_doNotLerpConstant)) float_t  doNotLerpConstant;

/// @brief Field faceSkin, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_faceSkin, put=__cordl_internal_set_faceSkin)) ::UnityW<::UnityEngine::MeshRenderer>  faceSkin;

/// @brief Field fps, offset 0x45c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fps, put=__cordl_internal_set_fps)) int32_t  fps;

/// @brief Field frameScale, offset 0x874, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameScale, put=__cordl_internal_set_frameScale)) float_t  frameScale;

/// @brief Field friendshipBraceletLeftHand, offset 0x308, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendshipBraceletLeftHand, put=__cordl_internal_set_friendshipBraceletLeftHand)) ::UnityW<::GorillaNetworking::FriendshipBracelet>  friendshipBraceletLeftHand;

/// @brief Field friendshipBraceletRightHand, offset 0x318, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendshipBraceletRightHand, put=__cordl_internal_set_friendshipBraceletRightHand)) ::UnityW<::GorillaNetworking::FriendshipBracelet>  friendshipBraceletRightHand;

/// @brief Field frozenEffect, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_frozenEffect, put=__cordl_internal_set_frozenEffect)) ::UnityW<::UnityEngine::GameObject>  frozenEffect;

/// @brief Field frozenEffectMaxHorizontalScale, offset 0x39c, size 0x4 
 __declspec(property(get=__cordl_internal_get_frozenEffectMaxHorizontalScale, put=__cordl_internal_set_frozenEffectMaxHorizontalScale)) float_t  frozenEffectMaxHorizontalScale;

/// @brief Field frozenEffectMaxY, offset 0x398, size 0x4 
 __declspec(property(get=__cordl_internal_get_frozenEffectMaxY, put=__cordl_internal_set_frozenEffectMaxY)) float_t  frozenEffectMaxY;

/// @brief Field frozenEffectMinHorizontalScale, offset 0x42c, size 0x4 
 __declspec(property(get=__cordl_internal_get_frozenEffectMinHorizontalScale, put=__cordl_internal_set_frozenEffectMinHorizontalScale)) float_t  frozenEffectMinHorizontalScale;

/// @brief Field frozenEffectMinY, offset 0x428, size 0x4 
 __declspec(property(get=__cordl_internal_get_frozenEffectMinY, put=__cordl_internal_set_frozenEffectMinY)) float_t  frozenEffectMinY;

/// @brief Field frozenTimeElapsed, offset 0x430, size 0x4 
 __declspec(property(get=__cordl_internal_get_frozenTimeElapsed, put=__cordl_internal_set_frozenTimeElapsed)) float_t  frozenTimeElapsed;

/// @brief Field fxSettings, offset 0x6e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxSettings, put=__cordl_internal_set_fxSettings)) ::UnityW<::GlobalNamespace::FXSystemSettings>  fxSettings;

/// @brief Field gLocalRig, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gLocalRig, put=setStaticF_gLocalRig)) ::UnityW<::GlobalNamespace::VRRig>  gLocalRig;

/// @brief Field geodeCrackingSound, offset 0x5d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_geodeCrackingSound, put=__cordl_internal_set_geodeCrackingSound)) ::UnityW<::UnityEngine::AudioSource>  geodeCrackingSound;

/// @brief Field grabbedRopeBoneIndex, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabbedRopeBoneIndex, put=__cordl_internal_set_grabbedRopeBoneIndex)) int32_t  grabbedRopeBoneIndex;

/// @brief Field grabbedRopeIndex, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabbedRopeIndex, put=__cordl_internal_set_grabbedRopeIndex)) int32_t  grabbedRopeIndex;

/// @brief Field grabbedRopeIsBody, offset 0xc1, size 0x1 
 __declspec(property(get=__cordl_internal_get_grabbedRopeIsBody, put=__cordl_internal_set_grabbedRopeIsBody)) bool  grabbedRopeIsBody;

/// @brief Field grabbedRopeIsLeft, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_grabbedRopeIsLeft, put=__cordl_internal_set_grabbedRopeIsLeft)) bool  grabbedRopeIsLeft;

/// @brief Field grabbedRopeIsPhotonView, offset 0xc2, size 0x1 
 __declspec(property(get=__cordl_internal_get_grabbedRopeIsPhotonView, put=__cordl_internal_set_grabbedRopeIsPhotonView)) bool  grabbedRopeIsPhotonView;

/// @brief Field grabbedRopeOffset, offset 0xc4, size 0xc 
 __declspec(property(get=__cordl_internal_get_grabbedRopeOffset, put=__cordl_internal_set_grabbedRopeOffset)) ::UnityEngine::Vector3  grabbedRopeOffset;

/// @brief Field green, offset 0x23c, size 0x4 
 __declspec(property(get=__cordl_internal_get_green, put=__cordl_internal_set_green)) float_t  green;

/// @brief Field guardianEjectWatch, offset 0x610, size 0x8 
 __declspec(property(get=__cordl_internal_get_guardianEjectWatch, put=__cordl_internal_set_guardianEjectWatch)) ::UnityW<::UnityEngine::GameObject>  guardianEjectWatch;

/// @brief Field handLerpValues, offset 0x4b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_handLerpValues, put=__cordl_internal_set_handLerpValues)) double_t  handLerpValues;

/// @brief Field handSpeedToVolumeModifier, offset 0x6ec, size 0x4 
 __declspec(property(get=__cordl_internal_get_handSpeedToVolumeModifier, put=__cordl_internal_set_handSpeedToVolumeModifier)) float_t  handSpeedToVolumeModifier;

/// @brief Field handSync, offset 0x228, size 0x4 
 __declspec(property(get=__cordl_internal_get_handSync, put=__cordl_internal_set_handSync)) int32_t  handSync;

/// @brief Field handTapSound, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_handTapSound, put=__cordl_internal_set_handTapSound)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  handTapSound;

/// @brief Field head, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_head, put=__cordl_internal_set_head)) ::GlobalNamespace::VRMap*  head;

/// @brief Field headBodyOffset, offset 0x158, size 0xc 
 __declspec(property(get=__cordl_internal_get_headBodyOffset, put=__cordl_internal_set_headBodyOffset)) ::UnityEngine::Vector3  headBodyOffset;

/// @brief Field headConstraint, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_headConstraint, put=__cordl_internal_set_headConstraint)) ::UnityW<::UnityEngine::Transform>  headConstraint;

/// @brief Field headMesh, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_headMesh, put=__cordl_internal_set_headMesh)) ::UnityW<::UnityEngine::GameObject>  headMesh;

/// @brief Field hoverboardEnabledCount, offset 0x330, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverboardEnabledCount, put=__cordl_internal_set_hoverboardEnabledCount)) int32_t  hoverboardEnabledCount;

/// @brief Field hoverboardVisual, offset 0x328, size 0x8 
 __declspec(property(get=__cordl_internal_get_hoverboardVisual, put=__cordl_internal_set_hoverboardVisual)) ::UnityW<::GlobalNamespace::HoverboardVisual>  hoverboardVisual;

/// @brief Field huntComputer, offset 0x5f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_huntComputer, put=__cordl_internal_set_huntComputer)) ::UnityW<::UnityEngine::GameObject>  huntComputer;

/// @brief Field iceCubeLeft, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_iceCubeLeft, put=__cordl_internal_set_iceCubeLeft)) ::UnityW<::UnityEngine::GameObject>  iceCubeLeft;

/// @brief Field iceCubeRight, offset 0x390, size 0x8 
 __declspec(property(get=__cordl_internal_get_iceCubeRight, put=__cordl_internal_set_iceCubeRight)) ::UnityW<::UnityEngine::GameObject>  iceCubeRight;

/// @brief Field iceParticleSystem, offset 0x4f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_iceParticleSystem, put=__cordl_internal_set_iceParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  iceParticleSystem;

/// @brief Field inTempCosmSpace, offset 0x469, size 0x1 
 __declspec(property(get=__cordl_internal_get_inTempCosmSpace, put=__cordl_internal_set_inTempCosmSpace)) bool  inTempCosmSpace;

/// @brief Field inTryOnRoom, offset 0x468, size 0x1 
 __declspec(property(get=__cordl_internal_get_inTryOnRoom, put=__cordl_internal_set_inTryOnRoom)) bool  inTryOnRoom;

/// @brief Field initialized, offset 0x4c0, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field initializedCosmetics, offset 0x288, size 0x1 
 __declspec(property(get=__cordl_internal_get_initializedCosmetics, put=__cordl_internal_set_initializedCosmetics)) bool  initializedCosmetics;

/// @brief Field instrumentSelfOnly, offset 0x5d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_instrumentSelfOnly, put=__cordl_internal_set_instrumentSelfOnly)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  instrumentSelfOnly;

/// @brief Field isInitialized, offset 0x648, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInitialized, put=__cordl_internal_set_isInitialized)) bool  isInitialized;

 __declspec(property(get=get_isLocal)) bool  isLocal;

/// @brief Field isMyPlayer, offset 0x12c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isMyPlayer, put=__cordl_internal_set_isMyPlayer)) bool  isMyPlayer;

/// @brief Field isOfflineVRRig, offset 0x115, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOfflineVRRig, put=__cordl_internal_set_isOfflineVRRig)) bool  isOfflineVRRig;

/// @brief Field jobPos, offset 0x178, size 0xc 
 __declspec(property(get=__cordl_internal_get_jobPos, put=__cordl_internal_set_jobPos)) ::UnityEngine::Vector3  jobPos;

/// @brief Field jobRotation, offset 0x194, size 0x10 
 __declspec(property(get=__cordl_internal_get_jobRotation, put=__cordl_internal_set_jobRotation)) ::UnityEngine::Quaternion  jobRotation;

/// @brief Field justTeleportedSendsRemaining, offset 0x854, size 0x4 
 __declspec(property(get=__cordl_internal_get_justTeleportedSendsRemaining, put=__cordl_internal_set_justTeleportedSendsRemaining)) int32_t  justTeleportedSendsRemaining;

/// @brief Field lastMountedSurfaceTimer, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastMountedSurfaceTimer, put=__cordl_internal_set_lastMountedSurfaceTimer)) float_t  lastMountedSurfaceTimer;

/// @brief Field lastPosition, offset 0x65c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Field lastRopeGrabTimer, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastRopeGrabTimer, put=__cordl_internal_set_lastRopeGrabTimer)) float_t  lastRopeGrabTimer;

/// @brief Field lastScaleFactor, offset 0x48c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastScaleFactor, put=__cordl_internal_set_lastScaleFactor)) float_t  lastScaleFactor;

/// @brief Field lateUpdateCallbacks, offset 0x770, size 0x8 
 __declspec(property(get=__cordl_internal_get_lateUpdateCallbacks, put=__cordl_internal_set_lateUpdateCallbacks)) ::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::ICallBack*>*  lateUpdateCallbacks;

/// @brief Field lavaParticleSystem, offset 0x4e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaParticleSystem, put=__cordl_internal_set_lavaParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  lavaParticleSystem;

/// @brief Field layerChanger, offset 0x420, size 0x8 
 __declspec(property(get=__cordl_internal_get_layerChanger, put=__cordl_internal_set_layerChanger)) ::UnityW<::GorillaTagScripts::LayerChanger>  layerChanger;

/// @brief Field leftHand, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHand, put=__cordl_internal_set_leftHand)) ::GlobalNamespace::VRMap*  leftHand;

/// @brief Field leftHandGooParticleSystem, offset 0x500, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandGooParticleSystem, put=__cordl_internal_set_leftHandGooParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  leftHandGooParticleSystem;

/// @brief Field leftHandHoldableStatus, offset 0x5bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftHandHoldableStatus, put=__cordl_internal_set_leftHandHoldableStatus)) int32_t  leftHandHoldableStatus;

/// @brief Field leftHandHoldsPlayer, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandHoldsPlayer, put=__cordl_internal_set_leftHandHoldsPlayer)) ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  leftHandHoldsPlayer;

/// @brief Field leftHandLink, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandLink, put=__cordl_internal_set_leftHandLink)) ::UnityW<::GlobalNamespace::TakeMyHand_HandLink>  leftHandLink;

/// @brief Field leftHandNoise, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandNoise, put=__cordl_internal_set_leftHandNoise)) ::UnityW<::GlobalNamespace::CrittersLoudNoise>  leftHandNoise;

/// @brief Field leftHandPlayer, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandPlayer, put=__cordl_internal_set_leftHandPlayer)) ::UnityW<::UnityEngine::AudioSource>  leftHandPlayer;

/// @brief Field leftHandTransform, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandTransform, put=__cordl_internal_set_leftHandTransform)) ::UnityW<::UnityEngine::Transform>  leftHandTransform;

/// @brief Field leftHolds, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHolds, put=__cordl_internal_set_leftHolds)) ::UnityW<::GlobalNamespace::HoldableHand>  leftHolds;

/// @brief Field leftIndex, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftIndex, put=__cordl_internal_set_leftIndex)) ::GlobalNamespace::VRMapIndex*  leftIndex;

/// @brief Field leftMiddle, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftMiddle, put=__cordl_internal_set_leftMiddle)) ::GlobalNamespace::VRMapMiddle*  leftMiddle;

/// @brief Field leftThumb, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftThumb, put=__cordl_internal_set_leftThumb)) ::GlobalNamespace::VRMapThumb*  leftThumb;

/// @brief Field lerpValueBody, offset 0x1c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpValueBody, put=__cordl_internal_set_lerpValueBody)) float_t  lerpValueBody;

/// @brief Field lerpValueFingers, offset 0x1bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpValueFingers, put=__cordl_internal_set_lerpValueFingers)) float_t  lerpValueFingers;

/// @brief Field localGrabOverrideBlend, offset 0x760, size 0x4 
 __declspec(property(get=__cordl_internal_get_localGrabOverrideBlend, put=__cordl_internal_set_localGrabOverrideBlend)) float_t  localGrabOverrideBlend;

/// @brief Field localOverrideGrabbingHand, offset 0x758, size 0x8 
 __declspec(property(get=__cordl_internal_get_localOverrideGrabbingHand, put=__cordl_internal_set_localOverrideGrabbingHand)) ::UnityW<::UnityEngine::Transform>  localOverrideGrabbingHand;

/// @brief Field localOverrideIsBody, offset 0x750, size 0x1 
 __declspec(property(get=__cordl_internal_get_localOverrideIsBody, put=__cordl_internal_set_localOverrideIsBody)) bool  localOverrideIsBody;

/// @brief Field localOverrideIsLeftHand, offset 0x751, size 0x1 
 __declspec(property(get=__cordl_internal_get_localOverrideIsLeftHand, put=__cordl_internal_set_localOverrideIsLeftHand)) bool  localOverrideIsLeftHand;

/// @brief Field localUseReplacementVoice, offset 0x679, size 0x1 
 __declspec(property(get=__cordl_internal_get_localUseReplacementVoice, put=__cordl_internal_set_localUseReplacementVoice)) bool  localUseReplacementVoice;

/// @brief Field loudnessCheckFrame, offset 0x870, size 0x4 
 __declspec(property(get=__cordl_internal_get_loudnessCheckFrame, put=__cordl_internal_set_loudnessCheckFrame)) int32_t  loudnessCheckFrame;

/// @brief Field m_sentRankedScore, offset 0x7f0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_sentRankedScore, put=__cordl_internal_set_m_sentRankedScore)) bool  m_sentRankedScore;

/// @brief Field mainCamera, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainCamera, put=__cordl_internal_set_mainCamera)) ::UnityW<::UnityEngine::GameObject>  mainCamera;

/// @brief Field mainSkin, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainSkin, put=__cordl_internal_set_mainSkin)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  mainSkin;

/// @brief Field materialsToChangeTo, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialsToChangeTo, put=__cordl_internal_set_materialsToChangeTo)) ::ArrayW<::UnityW<::UnityEngine::Material>>  materialsToChangeTo;

/// @brief Field mergedSet, offset 0x2a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mergedSet, put=__cordl_internal_set_mergedSet)) ::GorillaNetworking::CosmeticsController_CosmeticSet*  mergedSet;

/// @brief Field mountedMonkeBlock, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_mountedMonkeBlock, put=__cordl_internal_set_mountedMonkeBlock)) ::UnityW<::GlobalNamespace::BuilderPiece>  mountedMonkeBlock;

/// @brief Field mountedMonkeBlockOffset, offset 0xf4, size 0xc 
 __declspec(property(get=__cordl_internal_get_mountedMonkeBlockOffset, put=__cordl_internal_set_mountedMonkeBlockOffset)) ::UnityEngine::Vector3  mountedMonkeBlockOffset;

/// @brief Field mountedMovingSurface, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mountedMovingSurface, put=__cordl_internal_set_mountedMovingSurface)) ::UnityW<::GorillaTagScripts::MovingSurface>  mountedMovingSurface;

/// @brief Field mountedMovingSurfaceId, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_mountedMovingSurfaceId, put=__cordl_internal_set_mountedMovingSurfaceId)) int32_t  mountedMovingSurfaceId;

/// @brief Field mountedMovingSurfaceIsBody, offset 0xf1, size 0x1 
 __declspec(property(get=__cordl_internal_get_mountedMovingSurfaceIsBody, put=__cordl_internal_set_mountedMovingSurfaceIsBody)) bool  mountedMovingSurfaceIsBody;

/// @brief Field mountedMovingSurfaceIsLeft, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get_mountedMovingSurfaceIsLeft, put=__cordl_internal_set_mountedMovingSurfaceIsLeft)) bool  mountedMovingSurfaceIsLeft;

/// @brief Field movingSurfaceIsMonkeBlock, offset 0xf2, size 0x1 
 __declspec(property(get=__cordl_internal_get_movingSurfaceIsMonkeBlock, put=__cordl_internal_set_movingSurfaceIsMonkeBlock)) bool  movingSurfaceIsMonkeBlock;

/// @brief Field movingSurfaceWasBody, offset 0xd5, size 0x1 
 __declspec(property(get=__cordl_internal_get_movingSurfaceWasBody, put=__cordl_internal_set_movingSurfaceWasBody)) bool  movingSurfaceWasBody;

/// @brief Field movingSurfaceWasLeft, offset 0xd4, size 0x1 
 __declspec(property(get=__cordl_internal_get_movingSurfaceWasLeft, put=__cordl_internal_set_movingSurfaceWasLeft)) bool  movingSurfaceWasLeft;

/// @brief Field movingSurfaceWasMonkeBlock, offset 0xd6, size 0x1 
 __declspec(property(get=__cordl_internal_get_movingSurfaceWasMonkeBlock, put=__cordl_internal_set_movingSurfaceWasMonkeBlock)) bool  movingSurfaceWasMonkeBlock;

/// @brief Field musicDrums, offset 0x5c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_musicDrums, put=__cordl_internal_set_musicDrums)) ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  musicDrums;

/// @brief Field muted, offset 0x488, size 0x1 
 __declspec(property(get=__cordl_internal_get_muted, put=__cordl_internal_set_muted)) bool  muted;

/// @brief Field myBodyDockPositions, offset 0x4d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_myBodyDockPositions, put=__cordl_internal_set_myBodyDockPositions)) ::UnityW<::GlobalNamespace::BodyDockPositions>  myBodyDockPositions;

 __declspec(property(get=get_myDefaultSkinMaterialInstance)) ::UnityW<::UnityEngine::Material>  myDefaultSkinMaterialInstance;

/// @brief Field myEyeExpressions, offset 0x6b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_myEyeExpressions, put=__cordl_internal_set_myEyeExpressions)) ::UnityW<::GlobalNamespace::GorillaEyeExpressions>  myEyeExpressions;

/// @brief Field myIk, offset 0x780, size 0x8 
 __declspec(property(get=__cordl_internal_get_myIk, put=__cordl_internal_set_myIk)) ::UnityW<::GlobalNamespace::GorillaIK>  myIk;

/// @brief Field myMouthFlap, offset 0x6a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_myMouthFlap, put=__cordl_internal_set_myMouthFlap)) ::UnityW<::GlobalNamespace::GorillaMouthFlap>  myMouthFlap;

/// @brief Field myPhotonVoiceView, offset 0x638, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPhotonVoiceView, put=__cordl_internal_set_myPhotonVoiceView)) ::UnityW<::Photon::Voice::PUN::PhotonVoiceView>  myPhotonVoiceView;

/// @brief Field myReplacementVoice, offset 0x6b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_myReplacementVoice, put=__cordl_internal_set_myReplacementVoice)) ::UnityW<::GlobalNamespace::ReplacementVoice>  myReplacementVoice;

/// @brief Field mySpeakerLoudness, offset 0x6a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mySpeakerLoudness, put=__cordl_internal_set_mySpeakerLoudness)) ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  mySpeakerLoudness;

/// @brief Field nameTagAnchor, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameTagAnchor, put=__cordl_internal_set_nameTagAnchor)) ::UnityW<::UnityEngine::GameObject>  nameTagAnchor;

/// @brief Field nativeScale, offset 0x494, size 0x4 
 __declspec(property(get=__cordl_internal_get_nativeScale, put=__cordl_internal_set_nativeScale)) float_t  nativeScale;

/// @brief Field netSyncPos, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_netSyncPos, put=__cordl_internal_set_netSyncPos)) ::GlobalNamespace::NetworkVector3*  netSyncPos;

/// @brief Field netView, offset 0x6c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_netView, put=__cordl_internal_set_netView)) ::UnityW<::GlobalNamespace::NetworkView>  netView;

/// @brief Field newPlayerJoined, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_newPlayerJoined, put=setStaticF_newPlayerJoined)) ::System::Action*  newPlayerJoined;

/// @brief Field nextLocalVelocityStoreTimestamp, offset 0x778, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextLocalVelocityStoreTimestamp, put=__cordl_internal_set_nextLocalVelocityStoreTimestamp)) float_t  nextLocalVelocityStoreTimestamp;

/// @brief Field nonCosmeticLeftHandItem, offset 0x310, size 0x8 
 __declspec(property(get=__cordl_internal_get_nonCosmeticLeftHandItem, put=__cordl_internal_set_nonCosmeticLeftHandItem)) ::UnityW<::GlobalNamespace::NonCosmeticHandItem>  nonCosmeticLeftHandItem;

/// @brief Field nonCosmeticRightHandItem, offset 0x320, size 0x8 
 __declspec(property(get=__cordl_internal_get_nonCosmeticRightHandItem, put=__cordl_internal_set_nonCosmeticRightHandItem)) ::UnityW<::GlobalNamespace::NonCosmeticHandItem>  nonCosmeticRightHandItem;

/// @brief Field nonHauntedVolume, offset 0x724, size 0x4 
 __declspec(property(get=__cordl_internal_get_nonHauntedVolume, put=__cordl_internal_set_nonHauntedVolume)) float_t  nonHauntedVolume;

/// @brief Field onColorInitialized, offset 0x7d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onColorInitialized, put=__cordl_internal_set_onColorInitialized)) ::System::Action_1<::UnityEngine::Color>*  onColorInitialized;

 __declspec(property(get=get_overrideCosmetics)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  overrideCosmetics;

/// @brief Field paintbrawlBalloons, offset 0x4c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_paintbrawlBalloons, put=__cordl_internal_set_paintbrawlBalloons)) ::UnityW<::GlobalNamespace::PaintbrawlBalloons>  paintbrawlBalloons;

/// @brief Field partyMemberStatus, offset 0x464, size 0x4 
 __declspec(property(get=__cordl_internal_get_partyMemberStatus, put=__cordl_internal_set_partyMemberStatus)) ::GlobalNamespace::VRRig_PartyMemberStatus  partyMemberStatus;

/// @brief Field pendingCosmeticUpdate, offset 0x859, size 0x1 
 __declspec(property(get=__cordl_internal_get_pendingCosmeticUpdate, put=__cordl_internal_set_pendingCosmeticUpdate)) bool  pendingCosmeticUpdate;

/// @brief Field pitchOffset, offset 0x2dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitchOffset, put=__cordl_internal_set_pitchOffset)) float_t  pitchOffset;

/// @brief Field pitchScale, offset 0x2d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitchScale, put=__cordl_internal_set_pitchScale)) float_t  pitchScale;

/// @brief Field playerColor, offset 0x7c0, size 0x10 
 __declspec(property(get=__cordl_internal_get_playerColor, put=__cordl_internal_set_playerColor)) ::UnityEngine::Color  playerColor;

/// @brief Field playerNameVisible, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerNameVisible, put=__cordl_internal_set_playerNameVisible)) ::StringW  playerNameVisible;

/// @brief Field playerOffsetTransform, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerOffsetTransform, put=__cordl_internal_set_playerOffsetTransform)) ::UnityW<::UnityEngine::Transform>  playerOffsetTransform;

/// @brief Field playerText1, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerText1, put=__cordl_internal_set_playerText1)) ::UnityW<::TMPro::TextMeshPro>  playerText1;

/// @brief Field playerWasHaunted, offset 0x720, size 0x1 
 __declspec(property(get=__cordl_internal_get_playerWasHaunted, put=__cordl_internal_set_playerWasHaunted)) bool  playerWasHaunted;

/// @brief Field portalShenanigansBit, offset 0x850, size 0x1 
 __declspec(property(get=__cordl_internal_get_portalShenanigansBit, put=__cordl_internal_set_portalShenanigansBit)) bool  portalShenanigansBit;

/// @brief Field prevMovingSurfaceID, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_prevMovingSurfaceID, put=__cordl_internal_set_prevMovingSurfaceID)) int32_t  prevMovingSurfaceID;

/// @brief Field prevSet, offset 0x2b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevSet, put=__cordl_internal_set_prevSet)) ::GorillaNetworking::CosmeticsController_CosmeticSet*  prevSet;

/// @brief Field previousGrabbedRope, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousGrabbedRope, put=__cordl_internal_set_previousGrabbedRope)) int32_t  previousGrabbedRope;

/// @brief Field previousGrabbedRopeBoneIndex, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousGrabbedRopeBoneIndex, put=__cordl_internal_set_previousGrabbedRopeBoneIndex)) int32_t  previousGrabbedRopeBoneIndex;

/// @brief Field previousGrabbedRopeWasBody, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get_previousGrabbedRopeWasBody, put=__cordl_internal_set_previousGrabbedRopeWasBody)) bool  previousGrabbedRopeWasBody;

/// @brief Field previousGrabbedRopeWasLeft, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_previousGrabbedRopeWasLeft, put=__cordl_internal_set_previousGrabbedRopeWasLeft)) bool  previousGrabbedRopeWasLeft;

/// @brief Field projectileWeapon, offset 0x630, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectileWeapon, put=__cordl_internal_set_projectileWeapon)) ::UnityW<::GlobalNamespace::ProjectileWeapon>  projectileWeapon;

/// @brief Field propHuntHandFollower, offset 0x268, size 0x8 
 __declspec(property(get=__cordl_internal_get_propHuntHandFollower, put=__cordl_internal_set_propHuntHandFollower)) ::UnityW<::GlobalNamespace::PropHuntHandFollower>  propHuntHandFollower;

/// @brief Field rankedTimerWatch, offset 0x620, size 0x8 
 __declspec(property(get=__cordl_internal_get_rankedTimerWatch, put=__cordl_internal_set_rankedTimerWatch)) ::UnityW<::UnityEngine::GameObject>  rankedTimerWatch;

/// @brief Field ratio, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_ratio, put=__cordl_internal_set_ratio)) float_t  ratio;

/// @brief Field rayCastNonAllocColliders, offset 0x830, size 0x8 
 __declspec(property(get=__cordl_internal_get_rayCastNonAllocColliders, put=__cordl_internal_set_rayCastNonAllocColliders)) ::ArrayW<::UnityEngine::RaycastHit>  rayCastNonAllocColliders;

/// @brief Field red, offset 0x238, size 0x4 
 __declspec(property(get=__cordl_internal_get_red, put=__cordl_internal_set_red)) float_t  red;

/// @brief Field reliableState, offset 0x3b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_reliableState, put=__cordl_internal_set_reliableState)) ::UnityW<::GlobalNamespace::VRRigReliableState>  reliableState;

/// @brief Field remoteCorrectionNeeded, offset 0x408, size 0xc 
 __declspec(property(get=__cordl_internal_get_remoteCorrectionNeeded, put=__cordl_internal_set_remoteCorrectionNeeded)) ::UnityEngine::Vector3  remoteCorrectionNeeded;

/// @brief Field remoteCycleStates, offset 0x470, size 0x8 
 __declspec(property(get=__cordl_internal_get_remoteCycleStates, put=__cordl_internal_set_remoteCycleStates)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CollectionState>*  remoteCycleStates;

/// @brief Field remoteLatestTimestamp, offset 0x400, size 0x8 
 __declspec(property(get=__cordl_internal_get_remoteLatestTimestamp, put=__cordl_internal_set_remoteLatestTimestamp)) double_t  remoteLatestTimestamp;

/// @brief Field remoteUseReplacementVoice, offset 0x678, size 0x1 
 __declspec(property(get=__cordl_internal_get_remoteUseReplacementVoice, put=__cordl_internal_set_remoteUseReplacementVoice)) bool  remoteUseReplacementVoice;

/// @brief Field remoteVelocity, offset 0x3f0, size 0xc 
 __declspec(property(get=__cordl_internal_get_remoteVelocity, put=__cordl_internal_set_remoteVelocity)) ::UnityEngine::Vector3  remoteVelocity;

/// @brief Field renderTransform, offset 0x710, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderTransform, put=__cordl_internal_set_renderTransform)) ::UnityW<::UnityEngine::Transform>  renderTransform;

/// @brief Field renderTransformDisplaced, offset 0x840, size 0x1 
 __declspec(property(get=__cordl_internal_get_renderTransformDisplaced, put=__cordl_internal_set_renderTransformDisplaced)) bool  renderTransformDisplaced;

/// @brief Field replacementVoiceDetectionDelay, offset 0x69c, size 0x4 
 __declspec(property(get=__cordl_internal_get_replacementVoiceDetectionDelay, put=__cordl_internal_set_replacementVoiceDetectionDelay)) int32_t  replacementVoiceDetectionDelay;

/// @brief Field replacementVoiceLoudnessThreshold, offset 0x698, size 0x4 
 __declspec(property(get=__cordl_internal_get_replacementVoiceLoudnessThreshold, put=__cordl_internal_set_replacementVoiceLoudnessThreshold)) float_t  replacementVoiceLoudnessThreshold;

/// @brief Field rigContainer, offset 0x3e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigContainer, put=__cordl_internal_set_rigContainer)) ::UnityW<::GlobalNamespace::RigContainer>  rigContainer;

/// @brief Field rigSerializer, offset 0x6c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigSerializer, put=__cordl_internal_set_rigSerializer)) ::UnityW<::GlobalNamespace::VRRigSerializer>  rigSerializer;

/// @brief Field rightHand, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHand, put=__cordl_internal_set_rightHand)) ::GlobalNamespace::VRMap*  rightHand;

/// @brief Field rightHandGooParticleSystem, offset 0x508, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandGooParticleSystem, put=__cordl_internal_set_rightHandGooParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  rightHandGooParticleSystem;

/// @brief Field rightHandHoldableStatus, offset 0x5c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightHandHoldableStatus, put=__cordl_internal_set_rightHandHoldableStatus)) int32_t  rightHandHoldableStatus;

/// @brief Field rightHandHoldsPlayer, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandHoldsPlayer, put=__cordl_internal_set_rightHandHoldsPlayer)) ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  rightHandHoldsPlayer;

/// @brief Field rightHandLink, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandLink, put=__cordl_internal_set_rightHandLink)) ::UnityW<::GlobalNamespace::TakeMyHand_HandLink>  rightHandLink;

/// @brief Field rightHandNoise, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandNoise, put=__cordl_internal_set_rightHandNoise)) ::UnityW<::GlobalNamespace::CrittersLoudNoise>  rightHandNoise;

/// @brief Field rightHandPlayer, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandPlayer, put=__cordl_internal_set_rightHandPlayer)) ::UnityW<::UnityEngine::AudioSource>  rightHandPlayer;

/// @brief Field rightHandTransform, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandTransform, put=__cordl_internal_set_rightHandTransform)) ::UnityW<::UnityEngine::Transform>  rightHandTransform;

/// @brief Field rightHolds, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHolds, put=__cordl_internal_set_rightHolds)) ::UnityW<::GlobalNamespace::HoldableHand>  rightHolds;

/// @brief Field rightIndex, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightIndex, put=__cordl_internal_set_rightIndex)) ::GlobalNamespace::VRMapIndex*  rightIndex;

/// @brief Field rightMiddle, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightMiddle, put=__cordl_internal_set_rightMiddle)) ::GlobalNamespace::VRMapMiddle*  rightMiddle;

/// @brief Field rightThumb, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightThumb, put=__cordl_internal_set_rightThumb)) ::GlobalNamespace::VRMapThumb*  rightThumb;

/// @brief Field rockParticleSystem, offset 0x4e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rockParticleSystem, put=__cordl_internal_set_rockParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  rockParticleSystem;

 __declspec(property(get=get_scaleFactor)) float_t  scaleFactor;

/// @brief Field scaleMultiplier, offset 0x490, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleMultiplier, put=__cordl_internal_set_scaleMultiplier)) float_t  scaleMultiplier;

/// @brief Field scoreboardMaterial, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_scoreboardMaterial, put=__cordl_internal_set_scoreboardMaterial)) ::UnityW<::UnityEngine::Material>  scoreboardMaterial;

/// @brief Field scratchDisplayList, offset 0x478, size 0x8 
 __declspec(property(get=__cordl_internal_get_scratchDisplayList, put=__cordl_internal_set_scratchDisplayList)) ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*  scratchDisplayList;

/// @brief Field senderRig, offset 0x640, size 0x8 
 __declspec(property(get=__cordl_internal_get_senderRig, put=__cordl_internal_set_senderRig)) ::UnityW<::GlobalNamespace::VRRig>  senderRig;

/// @brief Field setMatIndex, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_setMatIndex, put=__cordl_internal_set_setMatIndex)) int32_t  setMatIndex;

/// @brief Field sharedFXSettings, offset 0x6d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedFXSettings, put=__cordl_internal_set_sharedFXSettings)) ::UnityW<::GlobalNamespace::FXSystemSettings>  sharedFXSettings;

/// @brief Field shouldLerpToMovingSurface, offset 0x114, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldLerpToMovingSurface, put=__cordl_internal_set_shouldLerpToMovingSurface)) bool  shouldLerpToMovingSurface;

/// @brief Field shouldLerpToRope, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldLerpToRope, put=__cordl_internal_set_shouldLerpToRope)) bool  shouldLerpToRope;

/// @brief Field shouldSendSpeakingLoudness, offset 0x694, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldSendSpeakingLoudness, put=__cordl_internal_set_shouldSendSpeakingLoudness)) bool  shouldSendSpeakingLoudness;

/// @brief Field showGoldNameTag, offset 0x85b, size 0x1 
 __declspec(property(get=__cordl_internal_get_showGoldNameTag, put=__cordl_internal_set_showGoldNameTag)) bool  showGoldNameTag;

/// @brief Field showName, offset 0x258, size 0x1 
 __declspec(property(get=__cordl_internal_get_showName, put=__cordl_internal_set_showName)) bool  showName;

/// @brief Field sizeManager, offset 0x2d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sizeManager, put=__cordl_internal_set_sizeManager)) ::UnityW<::GlobalNamespace::SizeManager>  sizeManager;

/// @brief Field skeleton, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_skeleton, put=__cordl_internal_set_skeleton)) ::UnityW<::GlobalNamespace::XRaySkeleton>  skeleton;

/// @brief Field snapNextRigUpdate, offset 0x858, size 0x1 
 __declspec(property(get=__cordl_internal_get_snapNextRigUpdate, put=__cordl_internal_set_snapNextRigUpdate)) bool  snapNextRigUpdate;

/// @brief Field snowFlakeParticleSystem, offset 0x4f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_snowFlakeParticleSystem, put=__cordl_internal_set_snowFlakeParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  snowFlakeParticleSystem;

/// @brief Field speakingLoudness, offset 0x690, size 0x4 
 __declspec(property(get=__cordl_internal_get_speakingLoudness, put=__cordl_internal_set_speakingLoudness)) float_t  speakingLoudness;

/// @brief Field speakingNoise, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_speakingNoise, put=__cordl_internal_set_speakingNoise)) ::UnityW<::GlobalNamespace::CrittersLoudNoise>  speakingNoise;

/// @brief Field spectatorSkin, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_spectatorSkin, put=__cordl_internal_set_spectatorSkin)) ::UnityW<::UnityEngine::GameObject>  spectatorSkin;

/// @brief Field speedArray, offset 0x4b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_speedArray, put=__cordl_internal_set_speedArray)) ::ArrayW<float_t>  speedArray;

/// @brief Field splashEffectTimes, offset 0x668, size 0x8 
 __declspec(property(get=__cordl_internal_get_splashEffectTimes, put=__cordl_internal_set_splashEffectTimes)) ::ArrayW<float_t>  splashEffectTimes;

/// @brief Field stealthManager, offset 0x418, size 0x8 
 __declspec(property(get=__cordl_internal_get_stealthManager, put=__cordl_internal_set_stealthManager)) ::UnityW<::GorillaTagScripts::GorillaAmbushManager>  stealthManager;

/// @brief Field stealthTimer, offset 0x414, size 0x4 
 __declspec(property(get=__cordl_internal_get_stealthTimer, put=__cordl_internal_set_stealthTimer)) float_t  stealthTimer;

/// @brief Field subDataCache, offset 0x878, size 0x28 
 __declspec(property(get=__cordl_internal_get_subDataCache, put=__cordl_internal_set_subDataCache)) ::GlobalNamespace::SubscriptionManager_SubscriptionDetails  subDataCache;

/// @brief Field superInfectionHand, offset 0x628, size 0x8 
 __declspec(property(get=__cordl_internal_get_superInfectionHand, put=__cordl_internal_set_superInfectionHand)) ::UnityW<::GlobalNamespace::SuperInfectionHandDisplay>  superInfectionHand;

 __declspec(property(get=get_syncPos, put=set_syncPos)) ::UnityEngine::Vector3  syncPos;

/// @brief Field syncRotation, offset 0x184, size 0x10 
 __declspec(property(get=__cordl_internal_get_syncRotation, put=__cordl_internal_set_syncRotation)) ::UnityEngine::Quaternion  syncRotation;

/// @brief Field tagSound, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagSound, put=__cordl_internal_set_tagSound)) ::UnityW<::UnityEngine::AudioSource>  tagSound;

/// @brief Field taggedById, offset 0x270, size 0x4 
 __declspec(property(get=__cordl_internal_get_taggedById, put=__cordl_internal_set_taggedById)) int32_t  taggedById;

/// @brief Field tapPointDistance, offset 0x6e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_tapPointDistance, put=__cordl_internal_set_tapPointDistance)) float_t  tapPointDistance;

/// @brief Field tempInt, offset 0x4d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_tempInt, put=__cordl_internal_set_tempInt)) int32_t  tempInt;

/// @brief Field tempItem, offset 0x518, size 0x98 
 __declspec(property(get=__cordl_internal_get_tempItem, put=__cordl_internal_set_tempItem)) ::GlobalNamespace::CosmeticsController_CosmeticItem  tempItem;

/// @brief Field tempItemCost, offset 0x5b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_tempItemCost, put=__cordl_internal_set_tempItemCost)) int32_t  tempItemCost;

/// @brief Field tempItemId, offset 0x5b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempItemId, put=__cordl_internal_set_tempItemId)) ::StringW  tempItemId;

/// @brief Field tempItemName, offset 0x510, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempItemName, put=__cordl_internal_set_tempItemName)) ::StringW  tempItemName;

/// @brief Field tempQuat, offset 0x794, size 0x10 
 __declspec(property(get=__cordl_internal_get_tempQuat, put=__cordl_internal_set_tempQuat)) ::UnityEngine::Quaternion  tempQuat;

/// @brief Field tempString, offset 0x4a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempString, put=__cordl_internal_set_tempString)) ::StringW  tempString;

/// @brief Field tempVRRig, offset 0x5e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempVRRig, put=__cordl_internal_set_tempVRRig)) ::UnityW<::GlobalNamespace::VRRig>  tempVRRig;

/// @brief Field tempVec, offset 0x788, size 0xc 
 __declspec(property(get=__cordl_internal_get_tempVec, put=__cordl_internal_set_tempVec)) ::UnityEngine::Vector3  tempVec;

/// @brief Field timeSpawned, offset 0x498, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeSpawned, put=__cordl_internal_set_timeSpawned)) float_t  timeSpawned;

/// @brief Field tryOnSet, offset 0x2a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tryOnSet, put=__cordl_internal_set_tryOnSet)) ::GorillaNetworking::CosmeticsController_CosmeticSet*  tryOnSet;

/// @brief Field turnFactor, offset 0x458, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnFactor, put=__cordl_internal_set_turnFactor)) int32_t  turnFactor;

/// @brief Field turnType, offset 0x450, size 0x8 
 __declspec(property(get=__cordl_internal_get_turnType, put=__cordl_internal_set_turnType)) ::StringW  turnType;

/// @brief Field turningCompInitialized, offset 0x448, size 0x1 
 __declspec(property(get=__cordl_internal_get_turningCompInitialized, put=__cordl_internal_set_turningCompInitialized)) bool  turningCompInitialized;

/// @brief Field updateQuestCallLimit, offset 0x808, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateQuestCallLimit, put=__cordl_internal_set_updateQuestCallLimit)) ::GlobalNamespace::CallLimiter*  updateQuestCallLimit;

/// @brief Field updateRankedInfoCallLimit, offset 0x828, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateRankedInfoCallLimit, put=__cordl_internal_set_updateRankedInfoCallLimit)) ::GlobalNamespace::CallLimiter*  updateRankedInfoCallLimit;

/// @brief Field vStumpReturnWatch, offset 0x618, size 0x8 
 __declspec(property(get=__cordl_internal_get_vStumpReturnWatch, put=__cordl_internal_set_vStumpReturnWatch)) ::UnityW<::UnityEngine::GameObject>  vStumpReturnWatch;

/// @brief Field velocityHistoryList, offset 0x650, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityHistoryList, put=__cordl_internal_set_velocityHistoryList)) ::GlobalNamespace::CircularBuffer_1<::GlobalNamespace::VRRig_VelocityTime>*  velocityHistoryList;

/// @brief Field velocityHistoryMaxLength, offset 0x658, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocityHistoryMaxLength, put=__cordl_internal_set_velocityHistoryMaxLength)) int32_t  velocityHistoryMaxLength;

/// @brief Field voiceAudio, offset 0x670, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceAudio, put=__cordl_internal_set_voiceAudio)) ::UnityW<::UnityEngine::AudioSource>  voiceAudio;

/// @brief Field voicePitchForRelativeScale, offset 0x728, size 0x8 
 __declspec(property(get=__cordl_internal_get_voicePitchForRelativeScale, put=__cordl_internal_set_voicePitchForRelativeScale)) ::UnityEngine::AnimationCurve*  voicePitchForRelativeScale;

/// @brief Field voiceSampleBuffer, offset 0x768, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceSampleBuffer, put=__cordl_internal_set_voiceSampleBuffer)) ::ArrayW<float_t>  voiceSampleBuffer;

/// @brief Field voiceShiftCosmeticsDirty, offset 0x2ff, size 0x1 
 __declspec(property(get=__cordl_internal_get_voiceShiftCosmeticsDirty, put=__cordl_internal_set_voiceShiftCosmeticsDirty)) bool  voiceShiftCosmeticsDirty;

/// @brief Field zoneEntity, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneEntity, put=__cordl_internal_set_zoneEntity)) ::UnityW<::GlobalNamespace::ZoneEntityBSP>  zoneEntity;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IEyeScannable"
constexpr operator  ::GlobalNamespace::IEyeScannable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IPreDisable"
constexpr operator  ::GlobalNamespace::IPreDisable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr operator  ::GlobalNamespace::ITickSystemPost*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IUserCosmeticsCallback"
constexpr operator  ::GlobalNamespace::IUserCosmeticsCallback*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IWrappedSerializable"
constexpr operator  ::GlobalNamespace::IWrappedSerializable*() noexcept;

/// @brief Method ActivateVOEffect, addr 0x5722a8c, size 0x80, virtual false, abstract: false, final false
inline void ActivateVOEffect(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect) ;

/// @brief Method ActiveTransferrableObjectIndex, addr 0x571e314, size 0x38, virtual false, abstract: false, final false
inline int32_t ActiveTransferrableObjectIndex(int32_t  idx) ;

/// @brief Method ActiveTransferrableObjectIndexLength, addr 0x571e34c, size 0x24, virtual false, abstract: false, final false
inline int32_t ActiveTransferrableObjectIndexLength() ;

/// @brief Method AddCosmetic, addr 0x572d1d4, size 0xfc, virtual false, abstract: false, final false
inline void AddCosmetic(::StringW  cosmeticId, int32_t  daysOwned) ;

/// @brief Method AddLateUpdateCallback, addr 0x572108c, size 0x28, virtual false, abstract: false, final false
inline void AddLateUpdateCallback(::GlobalNamespace::ICallBack*  action) ;

/// @brief Method AddVelocityToQueue, addr 0x5721e24, size 0x1ac, virtual false, abstract: false, final false
inline void AddVelocityToQueue(::UnityEngine::Vector3  position, double_t  serverTime) ;

/// @brief Method ApplyColorCode, addr 0x571f18c, size 0x130, virtual false, abstract: false, final false
inline void ApplyColorCode() ;

/// @brief Method ApplyInstanceKnockBack, addr 0x5722a0c, size 0x80, virtual false, abstract: false, final false
inline void ApplyInstanceKnockBack(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect) ;

/// @brief Method ApplyLocalGrabOverride, addr 0x571f6d4, size 0x30, virtual false, abstract: false, final false
inline void ApplyLocalGrabOverride(bool  isBody, bool  isLeftHand, ::UnityEngine::Transform*  grabbingHand) ;

/// @brief Method ApplyLocalTrajectoryOverride, addr 0x571f660, size 0x64, virtual false, abstract: false, final false
inline void ApplyLocalTrajectoryOverride(::UnityEngine::Vector3  overrideVelocity) ;

/// @brief Method AssignDrumToMusicDrums, addr 0x5729a24, size 0xc4, virtual false, abstract: false, final false
inline void AssignDrumToMusicDrums(int32_t  drumIndex, ::UnityEngine::AudioSource*  drum) ;

/// @brief Method AssignInstrumentToInstrumentSelfOnly, addr 0x5729ed8, size 0x150, virtual false, abstract: false, final false
inline int32_t AssignInstrumentToInstrumentSelfOnly(::GlobalNamespace::TransferrableObject*  instrument) ;

/// @brief Method AttachLocalPlayerToMovingSurface, addr 0x57272c4, size 0x298, virtual false, abstract: false, final false
static inline void AttachLocalPlayerToMovingSurface(int32_t  blockId, bool  isLeft, bool  isBody, ::UnityEngine::Vector3  offset, bool  isMonkeBlock) ;

/// @brief Method AttachLocalPlayerToPhotonView, addr 0x572769c, size 0x24c, virtual false, abstract: false, final false
static inline void AttachLocalPlayerToPhotonView(::Photon::Pun::PhotonView*  view, ::UnityEngine::XR::XRNode  xrNode, ::UnityEngine::Vector3  offset, ::UnityEngine::Vector3  velocity) ;

/// @brief Method Awake, addr 0x571eb54, size 0x198, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BreakHandLinks, addr 0x571e100, size 0x30, virtual false, abstract: false, final false
inline void BreakHandLinks() ;

/// @brief Method BroadcastSubCosmeticSignal, addr 0x572c880, size 0x310, virtual false, abstract: false, final false
inline void BroadcastSubCosmeticSignal(int32_t  packedParentID, int32_t  signal, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method BuildInitialize, addr 0x571e920, size 0x234, virtual false, abstract: false, final false
inline void BuildInitialize() ;

/// @brief Method ChangeLayer, addr 0x5723590, size 0x118, virtual false, abstract: false, final false
inline void ChangeLayer(::StringW  layerName) ;

/// @brief Method ChangeMaterial, addr 0x5727a28, size 0x8c, virtual false, abstract: false, final false
inline void ChangeMaterial(int32_t  materialIndex, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ChangeMaterialLocal, addr 0x57220f0, size 0x168, virtual false, abstract: false, final false
inline void ChangeMaterialLocal(int32_t  materialIndex) ;

/// @brief Method CheckCosmeticAge, addr 0x571e030, size 0x94, virtual false, abstract: false, final false
inline int32_t CheckCosmeticAge(::StringW  pfID) ;

/// @brief Method CheckForEarlyAccess, addr 0x571dc1c, size 0x114, virtual false, abstract: false, final false
inline void CheckForEarlyAccess() ;

/// @brief Method CheckTagDistanceRollback, addr 0x572dc64, size 0x12c, virtual false, abstract: false, final false
inline bool CheckTagDistanceRollback(::GlobalNamespace::VRRig*  otherRig, float_t  max, float_t  timeInterval) ;

/// @brief Method ClampVelocityRelativeToPlayerSafe, addr 0x572dd90, size 0x3a8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ClampVelocityRelativeToPlayerSafe(::UnityEngine::Vector3  inVel, float_t  max, float_t  teleportSpeedThreshold) ;

/// @brief Method ClearDisplacementZone, addr 0x573309c, size 0x90, virtual false, abstract: false, final false
inline void ClearDisplacementZone(::GlobalNamespace::RigDisplacementZone*  displacementZone) ;

/// @brief Method ClearLocalGrabOverride, addr 0x571f704, size 0xc, virtual false, abstract: false, final false
inline void ClearLocalGrabOverride() ;

/// @brief Method ClearPartyMemberStatus, addr 0x571e30c, size 0x8, virtual false, abstract: false, final false
inline void ClearPartyMemberStatus() ;

/// @brief Method ClearRopeData, addr 0x5723b10, size 0xf4, virtual false, abstract: false, final false
inline void ClearRopeData() ;

/// @brief Method CosmeticsV2_Awake, addr 0x571da08, size 0x100, virtual false, abstract: false, final false
inline void CosmeticsV2_Awake() ;

/// @brief Method DeactivateAllRenderers, addr 0x573397c, size 0x164, virtual false, abstract: false, final false
inline void DeactivateAllRenderers() ;

/// @brief Method DetachLocalPlayerFromMovingSurface, addr 0x572755c, size 0x140, virtual false, abstract: false, final false
static inline void DetachLocalPlayerFromMovingSurface() ;

/// @brief Method DetachLocalPlayerFromPhotonView, addr 0x57278e8, size 0x140, virtual false, abstract: false, final false
static inline void DetachLocalPlayerFromPhotonView() ;

/// @brief Method DisableHitWithKnockBack, addr 0x572281c, size 0x1f0, virtual false, abstract: false, final false
inline void DisableHitWithKnockBack() ;

/// @brief Method DisableHitWithKnockBack, addr 0x57224dc, size 0x200, virtual false, abstract: false, final false
inline void DisableHitWithKnockBack(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect) ;

/// @brief Method DroppedByPlayer, addr 0x57315a8, size 0x7c4, virtual false, abstract: false, final false
inline void DroppedByPlayer(::GlobalNamespace::VRRig*  grabbedByRig, ::UnityEngine::Vector3  throwVelocity) ;

/// @brief Method EnableBuilderResizeWatch, addr 0x5732b34, size 0x174, virtual false, abstract: false, final false
inline void EnableBuilderResizeWatch(bool  on) ;

/// @brief Method EnableGuardianEjectWatch, addr 0x5732ca8, size 0xb8, virtual false, abstract: false, final false
inline void EnableGuardianEjectWatch(bool  on) ;

/// @brief Method EnableHitWithKnockBack, addr 0x572279c, size 0x80, virtual false, abstract: false, final false
inline void EnableHitWithKnockBack(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect) ;

/// @brief Method EnableHuntWatch, addr 0x5730404, size 0x100, virtual false, abstract: false, final false
inline void EnableHuntWatch(bool  on) ;

/// [PunRPC]
/// @brief Method EnableNonCosmeticHandItemRPC, addr 0x572b5b0, size 0x228, virtual false, abstract: false, final false
inline void EnableNonCosmeticHandItemRPC(bool  enable, bool  isLeftHand, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method EnablePaintbrawlCosmetics, addr 0x5730504, size 0x30, virtual false, abstract: false, final false
inline void EnablePaintbrawlCosmetics(bool  on) ;

/// @brief Method EnableRankedTimerWatch, addr 0x5732e18, size 0xb8, virtual false, abstract: false, final false
inline void EnableRankedTimerWatch(bool  on) ;

/// @brief Method EnableSuperInfectionHands, addr 0x5730534, size 0x98, virtual false, abstract: false, final false
inline void EnableSuperInfectionHands(bool  on) ;

/// @brief Method EnableVStumpReturnWatch, addr 0x5732d60, size 0xb8, virtual false, abstract: false, final false
inline void EnableVStumpReturnWatch(bool  on) ;

/// @brief Method FlagJustTeleported, addr 0x5733020, size 0xc, virtual false, abstract: false, final false
inline void FlagJustTeleported() ;

/// @brief Method ForceResetFrozenEffect, addr 0x5722258, size 0x4c, virtual false, abstract: false, final false
inline void ForceResetFrozenEffect() ;

/// @brief Method GenerateFingerAngleLookupTables, addr 0x572d2d0, size 0x3c, virtual false, abstract: false, final false
inline void GenerateFingerAngleLookupTables() ;

/// @brief Method GenerateTableIndex, addr 0x572d30c, size 0x1f8, virtual false, abstract: false, final false
inline void GenerateTableIndex(::by_ref<::GlobalNamespace::VRMapIndex*>  index) ;

/// @brief Method GenerateTableMiddle, addr 0x572d504, size 0x1f8, virtual false, abstract: false, final false
inline void GenerateTableMiddle(::by_ref<::GlobalNamespace::VRMapMiddle*>  middle) ;

/// @brief Method GenerateTableThumb, addr 0x572d6fc, size 0x174, virtual false, abstract: false, final false
inline void GenerateTableThumb(::by_ref<::GlobalNamespace::VRMapThumb*>  thumb) ;

/// @brief Method GetCosmeticsPlayFabCatalogData, addr 0x572cec8, size 0x30c, virtual false, abstract: false, final false
inline void GetCosmeticsPlayFabCatalogData() ;

/// @brief Method GetCurrentQuestScore, addr 0x572ee78, size 0x74, virtual false, abstract: false, final false
inline int32_t GetCurrentQuestScore() ;

/// @brief Method GetCurrentRankedSubTier, addr 0x572f3d8, size 0x24, virtual false, abstract: false, final false
inline int32_t GetCurrentRankedSubTier(bool  getPC) ;

/// @brief Method GetHandEffect, addr 0x572a514, size 0x30, virtual false, abstract: false, final false
inline ::GlobalNamespace::HandEffectContext* GetHandEffect(bool  isLeftHand, ::GorillaLocomotion::StiltID  stiltID) ;

/// @brief Method GetHandSurfaceData, addr 0x572abd4, size 0x1b0, virtual false, abstract: false, final false
inline ::GlobalNamespace::GTPlayer_MaterialData GetHandSurfaceData(int32_t  index) ;

/// @brief Method GetMakingFist, addr 0x572bb18, size 0x54, virtual false, abstract: false, final false
inline ::GlobalNamespace::VRMap* GetMakingFist(bool  debug, ::by_ref<bool>  isLeftHand) ;

/// @brief Method GetMouthPosition, addr 0x571e1b0, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetMouthPosition() ;

/// @brief Method GetPartyMemberStatus, addr 0x571e220, size 0xd4, virtual false, abstract: false, final false
inline ::GlobalNamespace::VRRig_PartyMemberStatus GetPartyMemberStatus() ;

/// @brief Method GetRandomThrowableModelIndex, addr 0x571e750, size 0x18, virtual false, abstract: false, final false
inline int32_t GetRandomThrowableModelIndex() ;

/// @brief Method GetThrowableProjectileColor, addr 0x571e6d8, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Color32 GetThrowableProjectileColor(bool  isLeftHand) ;

/// @brief Method GrabbedByPlayer, addr 0x57313f4, size 0x1b4, virtual false, abstract: false, final false
inline void GrabbedByPlayer(::GlobalNamespace::VRRig*  grabbedByRig, bool  grabbedBody, bool  grabbedLeftHand, bool  grabbedWithLeftHand) ;

/// @brief Method HandHold_HandPositionReleaseOverride, addr 0x5730ec8, size 0x2c, virtual false, abstract: false, final false
inline void HandHold_HandPositionReleaseOverride(::GlobalNamespace::HandHold*  hh, bool  leftHand) ;

/// @brief Method HandHold_HandPositionRequestOverride, addr 0x5730ef4, size 0xa8, virtual false, abstract: false, final false
inline void HandHold_HandPositionRequestOverride(::GlobalNamespace::HandHold*  hh, bool  leftHand, ::UnityEngine::Vector3  pos) ;

/// @brief Method Handle_CosmeticsV2_OnPostInstantiateAllPrefabs_DoEnableAllCosmetics, addr 0x571db08, size 0x114, virtual false, abstract: false, final false
inline void Handle_CosmeticsV2_OnPostInstantiateAllPrefabs_DoEnableAllCosmetics() ;

/// @brief Method HasCosmetic, addr 0x5733924, size 0x58, virtual false, abstract: false, final false
inline bool HasCosmetic(::StringW  cosmeticId) ;

/// @brief Method HideAllCosmetics, addr 0x572bd00, size 0x198, virtual false, abstract: false, final false
inline void HideAllCosmetics(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method IEyeScannable.get_Bounds, addr 0x5733da4, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Bounds IEyeScannable_get_Bounds() ;

/// @brief Method IEyeScannable.get_Entries, addr 0x5733db0, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* IEyeScannable_get_Entries() ;

/// @brief Method IEyeScannable.get_Position, addr 0x5733d84, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 IEyeScannable_get_Position() ;

/// @brief Method IEyeScannable.get_scannableId, addr 0x5733d64, size 0x20, virtual true, abstract: false, final true
inline int32_t IEyeScannable_get_scannableId() ;

/// @brief Method IPreDisable.PreDisable, addr 0x572fe74, size 0x590, virtual true, abstract: false, final true
inline void IPreDisable_PreDisable() ;

/// @brief Method IUserCosmeticsCallback.OnGetUserCosmetics, addr 0x5733228, size 0x3a8, virtual true, abstract: false, final true
inline bool IUserCosmeticsCallback_OnGetUserCosmetics(::StringW  cosmeticsString) ;

/// @brief Method IUserCosmeticsCallback.get_PendingUpdate, addr 0x57331f8, size 0x8, virtual true, abstract: false, final true
inline bool IUserCosmeticsCallback_get_PendingUpdate() ;

/// @brief Method IUserCosmeticsCallback.set_PendingUpdate, addr 0x5733200, size 0x8, virtual true, abstract: false, final true
inline void IUserCosmeticsCallback_set_PendingUpdate(bool  value) ;

/// @brief Method IWrappedSerializable.OnSerializeRead, addr 0x5726490, size 0x9f8, virtual true, abstract: false, final true
inline void IWrappedSerializable_OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method IWrappedSerializable.OnSerializeWrite, addr 0x5725dcc, size 0x6c4, virtual true, abstract: false, final true
inline void IWrappedSerializable_OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method IncrementRPC, addr 0x572857c, size 0xdc, virtual false, abstract: false, final false
inline void IncrementRPC(::GlobalNamespace::PhotonMessageInfoWrapped  info, ::StringW  sourceCall) ;

/// @brief Method IncrementRPC, addr 0x572be98, size 0xdc, virtual false, abstract: false, final false
inline void IncrementRPC(::Photon::Pun::PhotonMessageInfo  info, ::StringW  sourceCall) ;

/// @brief Method InitializeNoobMaterial, addr 0x57282ac, size 0x2d0, virtual false, abstract: false, final false
inline void InitializeNoobMaterial(float_t  red, float_t  green, float_t  blue, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method InitializeNoobMaterialLocal, addr 0x5728658, size 0xf8, virtual false, abstract: false, final false
inline void InitializeNoobMaterialLocal(float_t  red, float_t  green, float_t  blue) ;

/// @brief Method IsInHandHoldChainWithOtherPlayer, addr 0x571e130, size 0x48, virtual false, abstract: false, final false
inline bool IsInHandHoldChainWithOtherPlayer(int32_t  otherPlayer) ;

/// @brief Method IsInRankedMode, addr 0x572ea78, size 0x134, virtual false, abstract: false, final false
inline bool IsInRankedMode() ;

/// @brief Method IsItemAllowed, addr 0x571f450, size 0x210, virtual false, abstract: false, final false
inline bool IsItemAllowed(::StringW  itemName) ;

/// @brief Method IsLocalTrajectoryOverrideActive, addr 0x571f6c4, size 0x10, virtual false, abstract: false, final false
inline bool IsLocalTrajectoryOverrideActive() ;

/// @brief Method IsMakingFistLeft, addr 0x572b7d8, size 0xd0, virtual false, abstract: false, final false
inline bool IsMakingFistLeft() ;

/// @brief Method IsMakingFistRight, addr 0x572b8a8, size 0xd0, virtual false, abstract: false, final false
inline bool IsMakingFistRight() ;

/// @brief Method IsMakingFiveLeft, addr 0x572b978, size 0xd0, virtual false, abstract: false, final false
inline bool IsMakingFiveLeft() ;

/// @brief Method IsMakingFiveRight, addr 0x572ba48, size 0xd0, virtual false, abstract: false, final false
inline bool IsMakingFiveRight() ;

/// @brief Method IsOnGround, addr 0x5731d6c, size 0x324, virtual false, abstract: false, final false
inline bool IsOnGround(float_t  headCheckDistance, float_t  handCheckDistance, ::by_ref<::UnityEngine::Vector3>  groundNormal) ;

/// @brief Method IsPositionInRange, addr 0x572db94, size 0xd0, virtual false, abstract: false, final false
inline bool IsPositionInRange(::UnityEngine::Vector3  position, float_t  range) ;

/// @brief Method LatestVelocity, addr 0x572dad4, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 LatestVelocity() ;

/// @brief Method LocalCheckCollision, addr 0x5732090, size 0x3a4, virtual false, abstract: false, final false
inline bool LocalCheckCollision(::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  movement, float_t  radius, ::by_ref<::UnityEngine::Vector3>  finalPosition, ::by_ref<::UnityEngine::RaycastHit>  hit) ;

/// @brief Method LocalTestMovementCollision, addr 0x5720920, size 0x6b8, virtual false, abstract: false, final false
inline bool LocalTestMovementCollision(::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  startVelocity, ::by_ref<::UnityEngine::Vector3>  modifiedVelocity, ::by_ref<::UnityEngine::Vector3>  finalPosition) ;

/// @brief Method LocalUpdateCosmeticsWithTryon, addr 0x572bf74, size 0x58, virtual false, abstract: false, final false
inline void LocalUpdateCosmeticsWithTryon(::GorillaNetworking::CosmeticsController_CosmeticSet*  newSet, ::GorillaNetworking::CosmeticsController_CosmeticSet*  newTryOnSet, bool  playfx) ;

/// @brief Method NetInitialize, addr 0x5730f9c, size 0x458, virtual false, abstract: false, final false
inline void NetInitialize() ;

static inline ::GlobalNamespace::VRRig* New_ctor() ;

/// @brief Method NormalizeName, addr 0x5728b28, size 0x1fc, virtual false, abstract: false, final false
inline ::StringW NormalizeName(bool  doIt, ::StringW  text) ;

/// @brief Method OnColorInitialized, addr 0x572e3d0, size 0xe8, virtual false, abstract: false, final false
inline void OnColorInitialized(::System::Action_1<::UnityEngine::Color>*  action) ;

/// @brief Method OnDestroy, addr 0x57239f4, size 0x11c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x57305cc, size 0x8fc, virtual true, abstract: false, final true
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x572f6ec, size 0x564, virtual true, abstract: false, final true
inline void OnEnable() ;

/// @brief Method OnKIDSessionUpdated, addr 0x5733ae0, size 0x22c, virtual false, abstract: false, final false
inline void OnKIDSessionUpdated(bool  showCustomNames, ::GlobalNamespace::Permission_ManagedByEnum  managedBy) ;

/// @brief Method OnSerializeRead, addr 0x5726fe0, size 0xe0, virtual true, abstract: false, final true
inline void OnSerializeRead(::System::Object*  objectData) ;

/// @brief Method OnSerializeWrite, addr 0x5726e88, size 0x158, virtual true, abstract: false, final true
inline ::System::Object* OnSerializeWrite() ;

/// @brief Method OnSubscriptionData, addr 0x572fd64, size 0x110, virtual false, abstract: false, final false
inline void OnSubscriptionData() ;

/// @brief Method PackCompetitiveData, addr 0x572456c, size 0x29c, virtual false, abstract: false, final false
inline int16_t PackCompetitiveData() ;

/// @brief Method PlayClimbSound, addr 0x572bc54, size 0xac, virtual false, abstract: false, final false
inline void PlayClimbSound(::UnityEngine::AudioClip*  clip, bool  isLeftHand) ;

/// @brief Method PlayCosmeticEffectSFX, addr 0x5722b94, size 0xec, virtual false, abstract: false, final false
inline void PlayCosmeticEffectSFX(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect) ;

/// @brief Method PlayDrum, addr 0x5729ae8, size 0x3f0, virtual false, abstract: false, final false
inline void PlayDrum(int32_t  drumIndex, float_t  drumVolume, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method PlayGeodeEffect, addr 0x572bb6c, size 0xe8, virtual false, abstract: false, final false
inline void PlayGeodeEffect(::UnityEngine::Vector3  hitPosition) ;

/// @brief Method PlayHandTapLocal, addr 0x572a2fc, size 0x218, virtual false, abstract: false, final false
inline void PlayHandTapLocal(int32_t  audioClipIndex, bool  isLeftHand, float_t  tapVolume) ;

/// @brief Method PlaySelfOnlyInstrument, addr 0x572a028, size 0x2d4, virtual false, abstract: false, final false
inline void PlaySelfOnlyInstrument(int32_t  selfOnlyIndex, int32_t  noteIndex, float_t  instrumentVol, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method PlaySplashEffect, addr 0x572ad84, size 0x610, virtual false, abstract: false, final false
inline void PlaySplashEffect(::UnityEngine::Vector3  splashPosition, ::UnityEngine::Quaternion  splashRotation, float_t  splashScale, float_t  boundingRadius, bool  bigSplash, bool  enteringWater, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method PlayTagSoundLocal, addr 0x572997c, size 0xa8, virtual false, abstract: false, final false
inline void PlayTagSoundLocal(int32_t  soundIndex, float_t  soundVolume, bool  stopCurrentAudio) ;

/// @brief Method PlayTaggedEffect, addr 0x5727cc8, size 0x478, virtual false, abstract: false, final false
inline void PlayTaggedEffect() ;

/// @brief Method PostTick, addr 0x57210dc, size 0xd48, virtual true, abstract: false, final true
inline void PostTick() ;

/// [Rpc((Fusion.RpcSources)1, (Fusion.RpcTargets)7)]
/// @brief Method RPC_EnableNonCosmeticHandItem, addr 0x572b394, size 0x21c, virtual false, abstract: false, final false
inline void RPC_EnableNonCosmeticHandItem(bool  enable, bool  isLeftHand, ::Fusion::RpcInfo  info) ;

/// @brief Method ReactivateAllRenderers, addr 0x572fc50, size 0x114, virtual false, abstract: false, final false
inline void ReactivateAllRenderers() ;

/// @brief Method RefreshCosmetics, addr 0x572cea0, size 0x28, virtual false, abstract: false, final false
inline void RefreshCosmetics() ;

/// @brief Method RemoteRigUpdate, addr 0x571f710, size 0x1090, virtual false, abstract: false, final false
inline void RemoteRigUpdate() ;

/// @brief Method RemoveLateUpdateCallback, addr 0x57210b4, size 0x28, virtual false, abstract: false, final false
inline void RemoveLateUpdateCallback(::GlobalNamespace::ICallBack*  action) ;

/// @brief Method RemoveTemporaryCosmeticEffects, addr 0x5722368, size 0x174, virtual false, abstract: false, final false
inline void RemoveTemporaryCosmeticEffects(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect) ;

/// @brief Method RequestCosmetics, addr 0x5729218, size 0x764, virtual false, abstract: false, final false
inline void RequestCosmetics(::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method RequestMaterialColor, addr 0x5728f58, size 0x2c0, virtual false, abstract: false, final false
inline void RequestMaterialColor(int32_t  askingPlayerID, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method ResetTimeSpawned, addr 0x573312c, size 0x1c, virtual false, abstract: false, final false
inline void ResetTimeSpawned() ;

/// @brief Method RestoreLayer, addr 0x57236a8, size 0xe4, virtual false, abstract: false, final false
inline void RestoreLayer() ;

/// @brief Method ReturnHandPosition, addr 0x57237a0, size 0x254, virtual false, abstract: false, final false
inline int32_t ReturnHandPosition() ;

/// @brief Method ReturnVelocityAtTime, addr 0x572d870, size 0x264, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ReturnVelocityAtTime(double_t  timeToReturn) ;

/// @brief Method SanitizeQuaternion, addr 0x5720fd8, size 0xb4, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion SanitizeQuaternion(::UnityEngine::Quaternion  quat) ;

/// @brief Method SanitizeVector3, addr 0x5720878, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 SanitizeVector3(::UnityEngine::Vector3  vec) ;

/// @brief Method SaveOwnedCosmetics, addr 0x57335d0, size 0x354, virtual false, abstract: false, final false
inline void SaveOwnedCosmetics(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::ItemInstance*>*  cosmetics) ;

/// @brief Method ScaleUpdate, addr 0x57207a0, size 0xd8, virtual false, abstract: false, final false
inline void ScaleUpdate() ;

/// @brief Method SendScoresToGameModeRoom, addr 0x572e5f0, size 0x1f4, virtual false, abstract: false, final false
inline void SendScoresToGameModeRoom(::GorillaGameModes::GameModeType  newGameModeType) ;

/// @brief Method SendScoresToNewPlayer, addr 0x572e7e4, size 0x294, virtual false, abstract: false, final false
inline void SendScoresToNewPlayer(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method SendScoresToRoom, addr 0x572e4b8, size 0x138, virtual false, abstract: false, final false
inline void SendScoresToRoom() ;

/// @brief Method SerializeReadShared, addr 0x5724808, size 0xc94, virtual false, abstract: false, final false
inline void SerializeReadShared(::GlobalNamespace::InputStruct  data) ;

/// @brief Method SerializeWriteShared, addr 0x5723c04, size 0x89c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputStruct SerializeWriteShared() ;

/// @brief Method SetActiveTransferrableObjectIndex, addr 0x571e370, size 0x50, virtual false, abstract: false, final false
inline void SetActiveTransferrableObjectIndex(int32_t  idx, int32_t  v) ;

/// @brief Method SetCollectionCycleIndex, addr 0x572cb90, size 0x310, virtual false, abstract: false, final false
inline void SetCollectionCycleIndex(int32_t  packedParentID, int32_t  activeIndex, int32_t  visibleMask, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method SetColor, addr 0x5728750, size 0x19c, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetCosmeticsActive, addr 0x571dd30, size 0x1ac, virtual false, abstract: false, final false
inline void SetCosmeticsActive(bool  playfx) ;

/// @brief Method SetDisplacementZone, addr 0x573308c, size 0x10, virtual false, abstract: false, final false
inline void SetDisplacementZone(::GlobalNamespace::RigDisplacementZone*  displacementZone) ;

/// @brief Method SetGooParticleSystemStatus, addr 0x5733148, size 0xb0, virtual false, abstract: false, final false
inline void SetGooParticleSystemStatus(bool  isLeftHand, bool  isEnabled) ;

/// @brief Method SetHandEffectData, addr 0x572a544, size 0x690, virtual false, abstract: false, final false
inline void SetHandEffectData(::GlobalNamespace::HandEffectContext*  effectContext, int32_t  audioClipIndex, bool  isDownTap, bool  isLeftHand, ::GorillaLocomotion::StiltID  stiltID, float_t  handTapVolume, float_t  handTapSpeed, ::UnityEngine::Vector3  dirFromHitToHand) ;

/// @brief Method SetHeadBodyOffset, addr 0x572378c, size 0x4, virtual false, abstract: false, final false
inline void SetHeadBodyOffset() ;

/// @brief Method SetInvisibleToLocalPlayer, addr 0x5723140, size 0x4c, virtual false, abstract: false, final false
inline void SetInvisibleToLocalPlayer(bool  invisible) ;

/// @brief Method SetJumpLimitLocal, addr 0x5728e18, size 0xa0, virtual false, abstract: false, final false
inline void SetJumpLimitLocal(float_t  maxJumpSpeed) ;

/// @brief Method SetJumpMultiplierLocal, addr 0x5728eb8, size 0xa0, virtual false, abstract: false, final false
inline void SetJumpMultiplierLocal(float_t  jumpMultiplier) ;

/// @brief Method SetNameTagText, addr 0x5728d24, size 0x6c, virtual false, abstract: false, final false
inline void SetNameTagText(::StringW  name) ;

/// @brief Method SetPlayerMeshHidden, addr 0x5722e48, size 0x64, virtual false, abstract: false, final false
inline void SetPlayerMeshHidden(bool  hide) ;

/// @brief Method SetQuestScore, addr 0x572ed0c, size 0x15c, virtual false, abstract: false, final false
inline void SetQuestScore(int32_t  score) ;

/// @brief Method SetQuestScoreLocal, addr 0x572ee68, size 0x10, virtual false, abstract: false, final false
inline void SetQuestScoreLocal(int32_t  score) ;

/// @brief Method SetRandomThrowableModelIndex, addr 0x571e71c, size 0x4, virtual false, abstract: false, final false
inline void SetRandomThrowableModelIndex(int32_t  randModelIndex) ;

/// @brief Method SetRankedInfo, addr 0x572f1a0, size 0x220, virtual false, abstract: false, final false
inline void SetRankedInfo(float_t  rankedELO, int32_t  rankedSubtierQuest, int32_t  rankedSubtierPC, bool  broadcastToOtherClients) ;

/// @brief Method SetRankedInfoLocal, addr 0x572f3c0, size 0x18, virtual false, abstract: false, final false
inline void SetRankedInfoLocal(float_t  rankedELO, int32_t  rankedSubTierQuest, int32_t  rankedSubTierPC) ;

/// @brief Method SetTaggedBy, addr 0x571e000, size 0x30, virtual false, abstract: false, final false
inline void SetTaggedBy(::GlobalNamespace::VRRig*  taggingRig) ;

/// @brief Method SetThrowableProjectileColor, addr 0x571e708, size 0x14, virtual false, abstract: false, final false
inline void SetThrowableProjectileColor(bool  isLeftHand, ::UnityEngine::Color32  color) ;

/// @brief Method SetTransferrableDockPosition, addr 0x571e4d0, size 0x50, virtual false, abstract: false, final false
inline void SetTransferrableDockPosition(int32_t  idx, ::GlobalNamespace::BodyDockPositions_DropPositions  v) ;

/// @brief Method SetTransferrableItemStates, addr 0x571e480, size 0x50, virtual false, abstract: false, final false
inline void SetTransferrableItemStates(int32_t  idx, ::GlobalNamespace::TransferrableObject_ItemStates  v) ;

/// @brief Method SetTransferrablePosStates, addr 0x571e3f8, size 0x50, virtual false, abstract: false, final false
inline void SetTransferrablePosStates(int32_t  idx, ::GlobalNamespace::TransferrableObject_PositionState  v) ;

/// @brief Method SetVoiceShiftCosmeticsDirty, addr 0x571e0f4, size 0xc, virtual false, abstract: false, final false
inline void SetVoiceShiftCosmeticsDirty() ;

/// @brief Method SharedStart, addr 0x571ecec, size 0x4a0, virtual false, abstract: false, final false
inline void SharedStart() ;

/// @brief Method ShouldPlayReplacementVoice, addr 0x5732ed0, size 0x150, virtual false, abstract: false, final false
inline bool ShouldPlayReplacementVoice() ;

/// @brief Method ShouldUseNewIKMethod, addr 0x57244a0, size 0xcc, virtual false, abstract: false, final false
inline bool ShouldUseNewIKMethod(bool  isReceivingNewIKData) ;

/// @brief Method SliceUpdate, addr 0x571f2bc, size 0x194, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method SpawnSkinEffects, addr 0x57226dc, size 0xc0, virtual false, abstract: false, final false
inline void SpawnSkinEffects(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect) ;

/// @brief Method SpawnVFXEffect, addr 0x5722c80, size 0x1a0, virtual false, abstract: false, final false
inline void SpawnVFXEffect(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect) ;

/// @brief Method ToggleMatParticles, addr 0x5728140, size 0x128, virtual false, abstract: false, final false
inline void ToggleMatParticles(bool  enabled) ;

/// @brief Method ToggleParticleSystem, addr 0x5728268, size 0x44, virtual false, abstract: false, final false
inline void ToggleParticleSystem(::UnityEngine::ParticleSystem*  ps, bool  enabled) ;

/// @brief Method TransferrableDockPosition, addr 0x571e520, size 0x38, virtual false, abstract: false, final false
inline ::GlobalNamespace::BodyDockPositions_DropPositions TransferrableDockPosition(int32_t  idx) ;

/// @brief Method TransferrableItemStates, addr 0x571e448, size 0x38, virtual false, abstract: false, final false
inline ::GlobalNamespace::TransferrableObject_ItemStates TransferrableItemStates(int32_t  idx) ;

/// @brief Method TransferrablePosStates, addr 0x571e3c0, size 0x38, virtual false, abstract: false, final false
inline ::GlobalNamespace::TransferrableObject_PositionState TransferrablePosStates(int32_t  idx) ;

/// @brief Method TryGetCosmeticVoiceOverride, addr 0x5722b0c, size 0x88, virtual false, abstract: false, final false
inline bool TryGetCosmeticVoiceOverride(::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE  key, ::by_ref<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  value) ;

/// @brief Method TrySweptMoveTo, addr 0x5732434, size 0x6c, virtual false, abstract: false, final false
inline void TrySweptMoveTo(::UnityEngine::Vector3  targetPosition, ::by_ref<bool>  handCollided, ::by_ref<bool>  buttCollided) ;

/// @brief Method TrySweptOffsetMove, addr 0x57324a0, size 0x694, virtual false, abstract: false, final false
inline void TrySweptOffsetMove(::UnityEngine::Vector3  movement, ::by_ref<bool>  handCollided, ::by_ref<bool>  buttCollided) ;

/// @brief Method UnpackCompetitiveData, addr 0x572555c, size 0xcc, virtual false, abstract: false, final false
inline void UnpackCompetitiveData(int16_t  packed) ;

/// @brief Method UpdateCosmeticsWithCollectables, addr 0x572c4dc, size 0x3a4, virtual false, abstract: false, final false
inline void UpdateCosmeticsWithCollectables(::ArrayW<int32_t>  cycleStatesPacked, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method UpdateCosmeticsWithTryon, addr 0x572bfcc, size 0x260, virtual false, abstract: false, final false
inline void UpdateCosmeticsWithTryon(::ArrayW<::StringW>  currentItems, ::ArrayW<::StringW>  tryOnItems, bool  playfx, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method UpdateCosmeticsWithTryon, addr 0x572c22c, size 0x2b0, virtual false, abstract: false, final false
inline void UpdateCosmeticsWithTryon(::ArrayW<int32_t>  currentItemsPacked, ::ArrayW<int32_t>  tryOnItemsPacked, bool  playfx, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method UpdateExtrapolationTarget, addr 0x57270c0, size 0x204, virtual false, abstract: false, final false
inline void UpdateExtrapolationTarget() ;

/// @brief Method UpdateFriendshipBracelet, addr 0x572318c, size 0x404, virtual false, abstract: false, final false
inline void UpdateFriendshipBracelet() ;

/// @brief Method UpdateFrozen, addr 0x57222a4, size 0xc4, virtual false, abstract: false, final false
inline void UpdateFrozen(float_t  dt, float_t  freezeDuration) ;

/// @brief Method UpdateFrozenEffect, addr 0x5727ab4, size 0x214, virtual false, abstract: false, final false
inline void UpdateFrozenEffect(bool  enable) ;

/// @brief Method UpdateMatParticles, addr 0x5722eac, size 0x294, virtual false, abstract: false, final false
inline void UpdateMatParticles(int32_t  materialIndex) ;

/// @brief Method UpdateMovingMonkeBlockData, addr 0x5725b30, size 0x29c, virtual false, abstract: false, final false
inline void UpdateMovingMonkeBlockData() ;

/// @brief Method UpdateName, addr 0x5728d90, size 0x88, virtual false, abstract: false, final false
inline void UpdateName() ;

/// @brief Method UpdateName, addr 0x57288ec, size 0x230, virtual false, abstract: false, final false
inline void UpdateName(bool  isNamePermissionEnabled) ;

/// @brief Method UpdateNameSafeAccount, addr 0x5728b1c, size 0xc, virtual false, abstract: false, final false
inline void UpdateNameSafeAccount(bool  isSafeAccount) ;

/// @brief Method UpdateQuestScore, addr 0x572eeec, size 0x154, virtual false, abstract: false, final false
inline void UpdateQuestScore(int32_t  score, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method UpdateRankedInfo, addr 0x572f3fc, size 0x2f0, virtual false, abstract: false, final false
inline void UpdateRankedInfo(float_t  rankedELO, int32_t  rankedSubtierQuest, int32_t  rankedSubtierPC, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method UpdateReplacementVoice, addr 0x572549c, size 0xc0, virtual false, abstract: false, final false
inline void UpdateReplacementVoice() ;

/// @brief Method UpdateRopeData, addr 0x5725628, size 0x508, virtual false, abstract: false, final false
inline void UpdateRopeData() ;

/// @brief Method VRRigResize, addr 0x5723790, size 0x10, virtual false, abstract: false, final false
inline void VRRigResize(float_t  ratioVar) ;

/// [CompilerGenerated]
/// @brief Method <GetCosmeticsPlayFabCatalogData>b__500_0, addr 0x5734c80, size 0x2d4, virtual false, abstract: false, final false
inline void _GetCosmeticsPlayFabCatalogData_b__500_0(::PlayFab::ClientModels::GetUserInventoryResult*  result) ;

/// [CompilerGenerated]
/// @brief Method <GetCosmeticsPlayFabCatalogData>b__500_1, addr 0x5734f54, size 0x110, virtual false, abstract: false, final false
inline void _GetCosmeticsPlayFabCatalogData_b__500_1(::PlayFab::PlayFabError*  error) ;

constexpr ::UnityW<::TagEffects::TagEffectPack> const& __cordl_internal_get_CosmeticEffectPack() const;

constexpr ::UnityW<::TagEffects::TagEffectPack>& __cordl_internal_get_CosmeticEffectPack() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HandEffectsOverrideCosmetic>>* const& __cordl_internal_get_CosmeticHandEffectsOverride_Left() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HandEffectsOverrideCosmetic>>*& __cordl_internal_get_CosmeticHandEffectsOverride_Left() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HandEffectsOverrideCosmetic>>* const& __cordl_internal_get_CosmeticHandEffectsOverride_Right() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HandEffectsOverrideCosmetic>>*& __cordl_internal_get_CosmeticHandEffectsOverride_Right() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_FPVEffectsParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_FPVEffectsParent() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn> const& __cordl_internal_get_GorillaSnapTurningComp() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>& __cordl_internal_get_GorillaSnapTurningComp() ;

constexpr float_t const& __cordl_internal_get_HauntedHearingVolume() const;

constexpr float_t& __cordl_internal_get_HauntedHearingVolume() ;

constexpr float_t const& __cordl_internal_get_HauntedRingVoicePitch() const;

constexpr float_t& __cordl_internal_get_HauntedRingVoicePitch() ;

constexpr float_t const& __cordl_internal_get_HauntedVoicePitch() const;

constexpr float_t& __cordl_internal_get_HauntedVoicePitch() ;

constexpr bool const& __cordl_internal_get_InOverrideSubscriptionZone() const;

constexpr bool& __cordl_internal_get_InOverrideSubscriptionZone() ;

constexpr bool const& __cordl_internal_get_IsHaunted() const;

constexpr bool& __cordl_internal_get_IsHaunted() ;

constexpr bool const& __cordl_internal_get_IsInvisibleToLocalPlayer() const;

constexpr bool& __cordl_internal_get_IsInvisibleToLocalPlayer() ;

constexpr float_t const& __cordl_internal_get_LocalGrabOverrideDuration() const;

constexpr float_t& __cordl_internal_get_LocalGrabOverrideDuration() ;

constexpr float_t const& __cordl_internal_get_LocalTrajectoryOverrideBlend() const;

constexpr float_t& __cordl_internal_get_LocalTrajectoryOverrideBlend() ;

constexpr float_t const& __cordl_internal_get_LocalTrajectoryOverrideDuration() const;

constexpr float_t& __cordl_internal_get_LocalTrajectoryOverrideDuration() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_LocalTrajectoryOverridePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_LocalTrajectoryOverridePosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_LocalTrajectoryOverrideVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_LocalTrajectoryOverrideVelocity() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_MouthPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_MouthPosition() ;

constexpr ::System::Action_1<::UnityEngine::Color>* const& __cordl_internal_get_OnColorChanged() const;

constexpr ::System::Action_1<::UnityEngine::Color>*& __cordl_internal_get_OnColorChanged() ;

constexpr ::System::Action* const& __cordl_internal_get_OnDataChange() const;

constexpr ::System::Action*& __cordl_internal_get_OnDataChange() ;

constexpr ::System::Action_2<int32_t,int32_t>* const& __cordl_internal_get_OnMaterialIndexChanged() const;

constexpr ::System::Action_2<int32_t,int32_t>*& __cordl_internal_get_OnMaterialIndexChanged() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>* const& __cordl_internal_get_OnNameChanged() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*& __cordl_internal_get_OnNameChanged() ;

constexpr ::System::Action* const& __cordl_internal_get_OnPlayerNameVisibleChanged() const;

constexpr ::System::Action*& __cordl_internal_get_OnPlayerNameVisibleChanged() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnQuestScoreChanged() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnQuestScoreChanged() ;

constexpr ::System::Action_2<int32_t,int32_t>* const& __cordl_internal_get_OnRankedSubtierChanged() const;

constexpr ::System::Action_2<int32_t,int32_t>*& __cordl_internal_get_OnRankedSubtierChanged() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_OverrideSubscriptionZoneLocation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_OverrideSubscriptionZoneLocation() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_OwningNetPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_OwningNetPlayer() ;

constexpr int32_t const& __cordl_internal_get_SDKIndex() const;

constexpr int32_t& __cordl_internal_get_SDKIndex() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>* const& __cordl_internal_get_TemporaryCosmeticEffects() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>*& __cordl_internal_get_TemporaryCosmeticEffects() ;

constexpr bool const& __cordl_internal_get_UsingHauntedRing() const;

constexpr bool& __cordl_internal_get_UsingHauntedRing() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VoiceShiftCosmetic>>* const& __cordl_internal_get_VoiceShiftCosmetics() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VoiceShiftCosmetic>>*& __cordl_internal_get_VoiceShiftCosmetics() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin> const& __cordl_internal_get__CurrentCosmeticSkin_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin>& __cordl_internal_get__CurrentCosmeticSkin_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin> const& __cordl_internal_get__CurrentModeSkin_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin>& __cordl_internal_get__CurrentModeSkin_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsFrozen_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsFrozen_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__LastHandTouchedGroundAtNetworkTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__LastHandTouchedGroundAtNetworkTime_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__LastTouchedGroundAtNetworkTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__LastTouchedGroundAtNetworkTime_k__BackingField() ;

constexpr bool const& __cordl_internal_get__PostTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__PostTickRunning_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin> const& __cordl_internal_get__TemporaryEffectSkin_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin>& __cordl_internal_get__TemporaryEffectSkin_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::CosmeticRefRegistry> const& __cordl_internal_get__cosmeticReferences_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::CosmeticRefRegistry>& __cordl_internal_get__cosmeticReferences_k__BackingField() ;

constexpr ::GlobalNamespace::HandEffectContext* const& __cordl_internal_get__extraLeftHandEffect() const;

constexpr ::GlobalNamespace::HandEffectContext*& __cordl_internal_get__extraLeftHandEffect() ;

constexpr ::GlobalNamespace::HandEffectContext* const& __cordl_internal_get__extraRightHandEffect() const;

constexpr ::GlobalNamespace::HandEffectContext*& __cordl_internal_get__extraRightHandEffect() ;

constexpr ::UnityW<::GlobalNamespace::GamePlayer> const& __cordl_internal_get__gamePlayerRef() const;

constexpr ::UnityW<::GlobalNamespace::GamePlayer>& __cordl_internal_get__gamePlayerRef() ;

constexpr bool const& __cordl_internal_get__isListeningFor_OnPostInstantiateAllPrefabs() const;

constexpr bool& __cordl_internal_get__isListeningFor_OnPostInstantiateAllPrefabs() ;

constexpr ::GlobalNamespace::HandEffectContext* const& __cordl_internal_get__leftHandEffect() const;

constexpr ::GlobalNamespace::HandEffectContext*& __cordl_internal_get__leftHandEffect() ;

constexpr float_t const& __cordl_internal_get__nextUpdateTime() const;

constexpr float_t& __cordl_internal_get__nextUpdateTime() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__playerOwnedCosmetics() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__playerOwnedCosmetics() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get__playerOwnedCosmeticsAge() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get__playerOwnedCosmeticsAge() ;

constexpr bool const& __cordl_internal_get__rankedInfoUpdated() const;

constexpr bool& __cordl_internal_get__rankedInfoUpdated() ;

constexpr ::GlobalNamespace::HandEffectContext* const& __cordl_internal_get__rightHandEffect() const;

constexpr ::GlobalNamespace::HandEffectContext*& __cordl_internal_get__rightHandEffect() ;

constexpr bool const& __cordl_internal_get__scoreUpdated() const;

constexpr bool& __cordl_internal_get__scoreUpdated() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__temporaryCosmetics() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__temporaryCosmetics() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_activeCosmetics() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_activeCosmetics() ;

constexpr bool const& __cordl_internal_get_anyShiftedVoiceCosmetic() const;

constexpr bool& __cordl_internal_get_anyShiftedVoiceCosmetic() ;

constexpr ::Photon::Voice::IAudioDesc* const& __cordl_internal_get_audioDesc() const;

constexpr ::Photon::Voice::IAudioDesc*& __cordl_internal_get_audioDesc() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_backpack() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_backpack() ;

constexpr float_t const& __cordl_internal_get_blue() const;

constexpr float_t& __cordl_internal_get_blue() ;

constexpr ::UnityW<::GlobalNamespace::HoldableHand> const& __cordl_internal_get_bodyHolds() const;

constexpr ::UnityW<::GlobalNamespace::HoldableHand>& __cordl_internal_get_bodyHolds() ;

constexpr ::UnityW<::GlobalNamespace::GorillaBodyRenderer> const& __cordl_internal_get_bodyRenderer() const;

constexpr ::UnityW<::GlobalNamespace::GorillaBodyRenderer>& __cordl_internal_get_bodyRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bodyTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bodyTransform() ;

constexpr float_t const& __cordl_internal_get_bonkCooldown() const;

constexpr float_t& __cordl_internal_get_bonkCooldown() ;

constexpr float_t const& __cordl_internal_get_bonkTime() const;

constexpr float_t& __cordl_internal_get_bonkTime() ;

constexpr ::UnityW<::GlobalNamespace::BuilderArmShelf> const& __cordl_internal_get_builderArmShelfLeft() const;

constexpr ::UnityW<::GlobalNamespace::BuilderArmShelf>& __cordl_internal_get_builderArmShelfLeft() ;

constexpr ::UnityW<::GlobalNamespace::BuilderArmShelf> const& __cordl_internal_get_builderArmShelfRight() const;

constexpr ::UnityW<::GlobalNamespace::BuilderArmShelf>& __cordl_internal_get_builderArmShelfRight() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_builderResizeWatch() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_builderResizeWatch() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cachedRenderTransformPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_cachedRenderTransformPos() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_clipToPlay() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_clipToPlay() ;

constexpr bool const& __cordl_internal_get_colorInitialized() const;

constexpr bool& __cordl_internal_get_colorInitialized() ;

constexpr bool const& __cordl_internal_get_cosmeticPitchActive() const;

constexpr bool& __cordl_internal_get_cosmeticPitchActive() ;

constexpr float_t const& __cordl_internal_get_cosmeticPitchShift() const;

constexpr float_t& __cordl_internal_get_cosmeticPitchShift() ;

constexpr int32_t const& __cordl_internal_get_cosmeticRetries() const;

constexpr int32_t& __cordl_internal_get_cosmeticRetries() ;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet* const& __cordl_internal_get_cosmeticSet() const;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet*& __cordl_internal_get_cosmeticSet() ;

constexpr bool const& __cordl_internal_get_cosmeticVolumeActive() const;

constexpr bool& __cordl_internal_get_cosmeticVolumeActive() ;

constexpr float_t const& __cordl_internal_get_cosmeticVolumeShift() const;

constexpr float_t& __cordl_internal_get_cosmeticVolumeShift() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_cosmeticsActivationPS() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_cosmeticsActivationPS() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_cosmeticsActivationSBP() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_cosmeticsActivationSBP() ;

constexpr ::GorillaNetworking::CosmeticItemRegistry* const& __cordl_internal_get_cosmeticsObjectRegistry() const;

constexpr ::GorillaNetworking::CosmeticItemRegistry*& __cordl_internal_get_cosmeticsObjectRegistry() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_creator() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_creator() ;

constexpr int32_t const& __cordl_internal_get_currentCosmeticTries() const;

constexpr int32_t& __cordl_internal_get_currentCosmeticTries() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_currentHoldParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_currentHoldParent() ;

constexpr ::Photon::Voice::Unity::MicWrapper* const& __cordl_internal_get_currentMicWrapper() const;

constexpr ::Photon::Voice::Unity::MicWrapper*& __cordl_internal_get_currentMicWrapper() ;

constexpr int32_t const& __cordl_internal_get_currentQuestScore() const;

constexpr int32_t& __cordl_internal_get_currentQuestScore() ;

constexpr float_t const& __cordl_internal_get_currentRankedELO() const;

constexpr float_t& __cordl_internal_get_currentRankedELO() ;

constexpr int32_t const& __cordl_internal_get_currentRankedSubTierPC() const;

constexpr int32_t& __cordl_internal_get_currentRankedSubTierPC() ;

constexpr int32_t const& __cordl_internal_get_currentRankedSubTierQuest() const;

constexpr int32_t& __cordl_internal_get_currentRankedSubTierQuest() ;

constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing> const& __cordl_internal_get_currentRopeSwing() const;

constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>& __cordl_internal_get_currentRopeSwing() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_currentRopeSwingTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_currentRopeSwingTarget() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_cycleStatesArray() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_cycleStatesArray() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_deactivatedRenderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_deactivatedRenderers() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin> const& __cordl_internal_get_defaultSkin() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin>& __cordl_internal_get_defaultSkin() ;

constexpr ::UnityW<::GlobalNamespace::RigDisplacementZone> const& __cordl_internal_get_displacementZone() const;

constexpr ::UnityW<::GlobalNamespace::RigDisplacementZone>& __cordl_internal_get_displacementZone() ;

constexpr float_t const& __cordl_internal_get_doNotLerpConstant() const;

constexpr float_t& __cordl_internal_get_doNotLerpConstant() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_faceSkin() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_faceSkin() ;

constexpr int32_t const& __cordl_internal_get_fps() const;

constexpr int32_t& __cordl_internal_get_fps() ;

constexpr float_t const& __cordl_internal_get_frameScale() const;

constexpr float_t& __cordl_internal_get_frameScale() ;

constexpr ::UnityW<::GorillaNetworking::FriendshipBracelet> const& __cordl_internal_get_friendshipBraceletLeftHand() const;

constexpr ::UnityW<::GorillaNetworking::FriendshipBracelet>& __cordl_internal_get_friendshipBraceletLeftHand() ;

constexpr ::UnityW<::GorillaNetworking::FriendshipBracelet> const& __cordl_internal_get_friendshipBraceletRightHand() const;

constexpr ::UnityW<::GorillaNetworking::FriendshipBracelet>& __cordl_internal_get_friendshipBraceletRightHand() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_frozenEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_frozenEffect() ;

constexpr float_t const& __cordl_internal_get_frozenEffectMaxHorizontalScale() const;

constexpr float_t& __cordl_internal_get_frozenEffectMaxHorizontalScale() ;

constexpr float_t const& __cordl_internal_get_frozenEffectMaxY() const;

constexpr float_t& __cordl_internal_get_frozenEffectMaxY() ;

constexpr float_t const& __cordl_internal_get_frozenEffectMinHorizontalScale() const;

constexpr float_t& __cordl_internal_get_frozenEffectMinHorizontalScale() ;

constexpr float_t const& __cordl_internal_get_frozenEffectMinY() const;

constexpr float_t& __cordl_internal_get_frozenEffectMinY() ;

constexpr float_t const& __cordl_internal_get_frozenTimeElapsed() const;

constexpr float_t& __cordl_internal_get_frozenTimeElapsed() ;

constexpr ::UnityW<::GlobalNamespace::FXSystemSettings> const& __cordl_internal_get_fxSettings() const;

constexpr ::UnityW<::GlobalNamespace::FXSystemSettings>& __cordl_internal_get_fxSettings() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_geodeCrackingSound() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_geodeCrackingSound() ;

constexpr int32_t const& __cordl_internal_get_grabbedRopeBoneIndex() const;

constexpr int32_t& __cordl_internal_get_grabbedRopeBoneIndex() ;

constexpr int32_t const& __cordl_internal_get_grabbedRopeIndex() const;

constexpr int32_t& __cordl_internal_get_grabbedRopeIndex() ;

constexpr bool const& __cordl_internal_get_grabbedRopeIsBody() const;

constexpr bool& __cordl_internal_get_grabbedRopeIsBody() ;

constexpr bool const& __cordl_internal_get_grabbedRopeIsLeft() const;

constexpr bool& __cordl_internal_get_grabbedRopeIsLeft() ;

constexpr bool const& __cordl_internal_get_grabbedRopeIsPhotonView() const;

constexpr bool& __cordl_internal_get_grabbedRopeIsPhotonView() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_grabbedRopeOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_grabbedRopeOffset() ;

constexpr float_t const& __cordl_internal_get_green() const;

constexpr float_t& __cordl_internal_get_green() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_guardianEjectWatch() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_guardianEjectWatch() ;

constexpr double_t const& __cordl_internal_get_handLerpValues() const;

constexpr double_t& __cordl_internal_get_handLerpValues() ;

constexpr float_t const& __cordl_internal_get_handSpeedToVolumeModifier() const;

constexpr float_t& __cordl_internal_get_handSpeedToVolumeModifier() ;

constexpr int32_t const& __cordl_internal_get_handSync() const;

constexpr int32_t& __cordl_internal_get_handSync() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_handTapSound() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_handTapSound() ;

constexpr ::GlobalNamespace::VRMap* const& __cordl_internal_get_head() const;

constexpr ::GlobalNamespace::VRMap*& __cordl_internal_get_head() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headBodyOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_headBodyOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headConstraint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headConstraint() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_headMesh() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_headMesh() ;

constexpr int32_t const& __cordl_internal_get_hoverboardEnabledCount() const;

constexpr int32_t& __cordl_internal_get_hoverboardEnabledCount() ;

constexpr ::UnityW<::GlobalNamespace::HoverboardVisual> const& __cordl_internal_get_hoverboardVisual() const;

constexpr ::UnityW<::GlobalNamespace::HoverboardVisual>& __cordl_internal_get_hoverboardVisual() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_huntComputer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_huntComputer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_iceCubeLeft() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_iceCubeLeft() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_iceCubeRight() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_iceCubeRight() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_iceParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_iceParticleSystem() ;

constexpr bool const& __cordl_internal_get_inTempCosmSpace() const;

constexpr bool& __cordl_internal_get_inTempCosmSpace() ;

constexpr bool const& __cordl_internal_get_inTryOnRoom() const;

constexpr bool& __cordl_internal_get_inTryOnRoom() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr bool const& __cordl_internal_get_initializedCosmetics() const;

constexpr bool& __cordl_internal_get_initializedCosmetics() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>* const& __cordl_internal_get_instrumentSelfOnly() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*& __cordl_internal_get_instrumentSelfOnly() ;

constexpr bool const& __cordl_internal_get_isInitialized() const;

constexpr bool& __cordl_internal_get_isInitialized() ;

constexpr bool const& __cordl_internal_get_isMyPlayer() const;

constexpr bool& __cordl_internal_get_isMyPlayer() ;

constexpr bool const& __cordl_internal_get_isOfflineVRRig() const;

constexpr bool& __cordl_internal_get_isOfflineVRRig() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_jobPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_jobPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_jobRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_jobRotation() ;

constexpr int32_t const& __cordl_internal_get_justTeleportedSendsRemaining() const;

constexpr int32_t& __cordl_internal_get_justTeleportedSendsRemaining() ;

constexpr float_t const& __cordl_internal_get_lastMountedSurfaceTimer() const;

constexpr float_t& __cordl_internal_get_lastMountedSurfaceTimer() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition() ;

constexpr float_t const& __cordl_internal_get_lastRopeGrabTimer() const;

constexpr float_t& __cordl_internal_get_lastRopeGrabTimer() ;

constexpr float_t const& __cordl_internal_get_lastScaleFactor() const;

constexpr float_t& __cordl_internal_get_lastScaleFactor() ;

constexpr ::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::ICallBack*>* const& __cordl_internal_get_lateUpdateCallbacks() const;

constexpr ::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::ICallBack*>*& __cordl_internal_get_lateUpdateCallbacks() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_lavaParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_lavaParticleSystem() ;

constexpr ::UnityW<::GorillaTagScripts::LayerChanger> const& __cordl_internal_get_layerChanger() const;

constexpr ::UnityW<::GorillaTagScripts::LayerChanger>& __cordl_internal_get_layerChanger() ;

constexpr ::GlobalNamespace::VRMap* const& __cordl_internal_get_leftHand() const;

constexpr ::GlobalNamespace::VRMap*& __cordl_internal_get_leftHand() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_leftHandGooParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_leftHandGooParticleSystem() ;

constexpr int32_t const& __cordl_internal_get_leftHandHoldableStatus() const;

constexpr int32_t& __cordl_internal_get_leftHandHoldableStatus() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> const& __cordl_internal_get_leftHandHoldsPlayer() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>& __cordl_internal_get_leftHandHoldsPlayer() ;

constexpr ::UnityW<::GlobalNamespace::TakeMyHand_HandLink> const& __cordl_internal_get_leftHandLink() const;

constexpr ::UnityW<::GlobalNamespace::TakeMyHand_HandLink>& __cordl_internal_get_leftHandLink() ;

constexpr ::UnityW<::GlobalNamespace::CrittersLoudNoise> const& __cordl_internal_get_leftHandNoise() const;

constexpr ::UnityW<::GlobalNamespace::CrittersLoudNoise>& __cordl_internal_get_leftHandNoise() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_leftHandPlayer() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_leftHandPlayer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHandTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHandTransform() ;

constexpr ::UnityW<::GlobalNamespace::HoldableHand> const& __cordl_internal_get_leftHolds() const;

constexpr ::UnityW<::GlobalNamespace::HoldableHand>& __cordl_internal_get_leftHolds() ;

constexpr ::GlobalNamespace::VRMapIndex* const& __cordl_internal_get_leftIndex() const;

constexpr ::GlobalNamespace::VRMapIndex*& __cordl_internal_get_leftIndex() ;

constexpr ::GlobalNamespace::VRMapMiddle* const& __cordl_internal_get_leftMiddle() const;

constexpr ::GlobalNamespace::VRMapMiddle*& __cordl_internal_get_leftMiddle() ;

constexpr ::GlobalNamespace::VRMapThumb* const& __cordl_internal_get_leftThumb() const;

constexpr ::GlobalNamespace::VRMapThumb*& __cordl_internal_get_leftThumb() ;

constexpr float_t const& __cordl_internal_get_lerpValueBody() const;

constexpr float_t& __cordl_internal_get_lerpValueBody() ;

constexpr float_t const& __cordl_internal_get_lerpValueFingers() const;

constexpr float_t& __cordl_internal_get_lerpValueFingers() ;

constexpr float_t const& __cordl_internal_get_localGrabOverrideBlend() const;

constexpr float_t& __cordl_internal_get_localGrabOverrideBlend() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_localOverrideGrabbingHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_localOverrideGrabbingHand() ;

constexpr bool const& __cordl_internal_get_localOverrideIsBody() const;

constexpr bool& __cordl_internal_get_localOverrideIsBody() ;

constexpr bool const& __cordl_internal_get_localOverrideIsLeftHand() const;

constexpr bool& __cordl_internal_get_localOverrideIsLeftHand() ;

constexpr bool const& __cordl_internal_get_localUseReplacementVoice() const;

constexpr bool& __cordl_internal_get_localUseReplacementVoice() ;

constexpr int32_t const& __cordl_internal_get_loudnessCheckFrame() const;

constexpr int32_t& __cordl_internal_get_loudnessCheckFrame() ;

constexpr bool const& __cordl_internal_get_m_sentRankedScore() const;

constexpr bool& __cordl_internal_get_m_sentRankedScore() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_mainCamera() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_mainCamera() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_mainSkin() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_mainSkin() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_materialsToChangeTo() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_materialsToChangeTo() ;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet* const& __cordl_internal_get_mergedSet() const;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet*& __cordl_internal_get_mergedSet() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_mountedMonkeBlock() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_mountedMonkeBlock() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_mountedMonkeBlockOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_mountedMonkeBlockOffset() ;

constexpr ::UnityW<::GorillaTagScripts::MovingSurface> const& __cordl_internal_get_mountedMovingSurface() const;

constexpr ::UnityW<::GorillaTagScripts::MovingSurface>& __cordl_internal_get_mountedMovingSurface() ;

constexpr int32_t const& __cordl_internal_get_mountedMovingSurfaceId() const;

constexpr int32_t& __cordl_internal_get_mountedMovingSurfaceId() ;

constexpr bool const& __cordl_internal_get_mountedMovingSurfaceIsBody() const;

constexpr bool& __cordl_internal_get_mountedMovingSurfaceIsBody() ;

constexpr bool const& __cordl_internal_get_mountedMovingSurfaceIsLeft() const;

constexpr bool& __cordl_internal_get_mountedMovingSurfaceIsLeft() ;

constexpr bool const& __cordl_internal_get_movingSurfaceIsMonkeBlock() const;

constexpr bool& __cordl_internal_get_movingSurfaceIsMonkeBlock() ;

constexpr bool const& __cordl_internal_get_movingSurfaceWasBody() const;

constexpr bool& __cordl_internal_get_movingSurfaceWasBody() ;

constexpr bool const& __cordl_internal_get_movingSurfaceWasLeft() const;

constexpr bool& __cordl_internal_get_movingSurfaceWasLeft() ;

constexpr bool const& __cordl_internal_get_movingSurfaceWasMonkeBlock() const;

constexpr bool& __cordl_internal_get_movingSurfaceWasMonkeBlock() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& __cordl_internal_get_musicDrums() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& __cordl_internal_get_musicDrums() ;

constexpr bool const& __cordl_internal_get_muted() const;

constexpr bool& __cordl_internal_get_muted() ;

constexpr ::UnityW<::GlobalNamespace::BodyDockPositions> const& __cordl_internal_get_myBodyDockPositions() const;

constexpr ::UnityW<::GlobalNamespace::BodyDockPositions>& __cordl_internal_get_myBodyDockPositions() ;

constexpr ::UnityW<::GlobalNamespace::GorillaEyeExpressions> const& __cordl_internal_get_myEyeExpressions() const;

constexpr ::UnityW<::GlobalNamespace::GorillaEyeExpressions>& __cordl_internal_get_myEyeExpressions() ;

constexpr ::UnityW<::GlobalNamespace::GorillaIK> const& __cordl_internal_get_myIk() const;

constexpr ::UnityW<::GlobalNamespace::GorillaIK>& __cordl_internal_get_myIk() ;

constexpr ::UnityW<::GlobalNamespace::GorillaMouthFlap> const& __cordl_internal_get_myMouthFlap() const;

constexpr ::UnityW<::GlobalNamespace::GorillaMouthFlap>& __cordl_internal_get_myMouthFlap() ;

constexpr ::UnityW<::Photon::Voice::PUN::PhotonVoiceView> const& __cordl_internal_get_myPhotonVoiceView() const;

constexpr ::UnityW<::Photon::Voice::PUN::PhotonVoiceView>& __cordl_internal_get_myPhotonVoiceView() ;

constexpr ::UnityW<::GlobalNamespace::ReplacementVoice> const& __cordl_internal_get_myReplacementVoice() const;

constexpr ::UnityW<::GlobalNamespace::ReplacementVoice>& __cordl_internal_get_myReplacementVoice() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness> const& __cordl_internal_get_mySpeakerLoudness() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>& __cordl_internal_get_mySpeakerLoudness() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_nameTagAnchor() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_nameTagAnchor() ;

constexpr float_t const& __cordl_internal_get_nativeScale() const;

constexpr float_t& __cordl_internal_get_nativeScale() ;

constexpr ::GlobalNamespace::NetworkVector3* const& __cordl_internal_get_netSyncPos() const;

constexpr ::GlobalNamespace::NetworkVector3*& __cordl_internal_get_netSyncPos() ;

constexpr ::UnityW<::GlobalNamespace::NetworkView> const& __cordl_internal_get_netView() const;

constexpr ::UnityW<::GlobalNamespace::NetworkView>& __cordl_internal_get_netView() ;

constexpr float_t const& __cordl_internal_get_nextLocalVelocityStoreTimestamp() const;

constexpr float_t& __cordl_internal_get_nextLocalVelocityStoreTimestamp() ;

constexpr ::UnityW<::GlobalNamespace::NonCosmeticHandItem> const& __cordl_internal_get_nonCosmeticLeftHandItem() const;

constexpr ::UnityW<::GlobalNamespace::NonCosmeticHandItem>& __cordl_internal_get_nonCosmeticLeftHandItem() ;

constexpr ::UnityW<::GlobalNamespace::NonCosmeticHandItem> const& __cordl_internal_get_nonCosmeticRightHandItem() const;

constexpr ::UnityW<::GlobalNamespace::NonCosmeticHandItem>& __cordl_internal_get_nonCosmeticRightHandItem() ;

constexpr float_t const& __cordl_internal_get_nonHauntedVolume() const;

constexpr float_t& __cordl_internal_get_nonHauntedVolume() ;

constexpr ::System::Action_1<::UnityEngine::Color>* const& __cordl_internal_get_onColorInitialized() const;

constexpr ::System::Action_1<::UnityEngine::Color>*& __cordl_internal_get_onColorInitialized() ;

constexpr ::UnityW<::GlobalNamespace::PaintbrawlBalloons> const& __cordl_internal_get_paintbrawlBalloons() const;

constexpr ::UnityW<::GlobalNamespace::PaintbrawlBalloons>& __cordl_internal_get_paintbrawlBalloons() ;

constexpr ::GlobalNamespace::VRRig_PartyMemberStatus const& __cordl_internal_get_partyMemberStatus() const;

constexpr ::GlobalNamespace::VRRig_PartyMemberStatus& __cordl_internal_get_partyMemberStatus() ;

constexpr bool const& __cordl_internal_get_pendingCosmeticUpdate() const;

constexpr bool& __cordl_internal_get_pendingCosmeticUpdate() ;

constexpr float_t const& __cordl_internal_get_pitchOffset() const;

constexpr float_t& __cordl_internal_get_pitchOffset() ;

constexpr float_t const& __cordl_internal_get_pitchScale() const;

constexpr float_t& __cordl_internal_get_pitchScale() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_playerColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_playerColor() ;

constexpr ::StringW const& __cordl_internal_get_playerNameVisible() const;

constexpr ::StringW& __cordl_internal_get_playerNameVisible() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_playerOffsetTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_playerOffsetTransform() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_playerText1() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_playerText1() ;

constexpr bool const& __cordl_internal_get_playerWasHaunted() const;

constexpr bool& __cordl_internal_get_playerWasHaunted() ;

constexpr bool const& __cordl_internal_get_portalShenanigansBit() const;

constexpr bool& __cordl_internal_get_portalShenanigansBit() ;

constexpr int32_t const& __cordl_internal_get_prevMovingSurfaceID() const;

constexpr int32_t& __cordl_internal_get_prevMovingSurfaceID() ;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet* const& __cordl_internal_get_prevSet() const;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet*& __cordl_internal_get_prevSet() ;

constexpr int32_t const& __cordl_internal_get_previousGrabbedRope() const;

constexpr int32_t& __cordl_internal_get_previousGrabbedRope() ;

constexpr int32_t const& __cordl_internal_get_previousGrabbedRopeBoneIndex() const;

constexpr int32_t& __cordl_internal_get_previousGrabbedRopeBoneIndex() ;

constexpr bool const& __cordl_internal_get_previousGrabbedRopeWasBody() const;

constexpr bool& __cordl_internal_get_previousGrabbedRopeWasBody() ;

constexpr bool const& __cordl_internal_get_previousGrabbedRopeWasLeft() const;

constexpr bool& __cordl_internal_get_previousGrabbedRopeWasLeft() ;

constexpr ::UnityW<::GlobalNamespace::ProjectileWeapon> const& __cordl_internal_get_projectileWeapon() const;

constexpr ::UnityW<::GlobalNamespace::ProjectileWeapon>& __cordl_internal_get_projectileWeapon() ;

constexpr ::UnityW<::GlobalNamespace::PropHuntHandFollower> const& __cordl_internal_get_propHuntHandFollower() const;

constexpr ::UnityW<::GlobalNamespace::PropHuntHandFollower>& __cordl_internal_get_propHuntHandFollower() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rankedTimerWatch() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rankedTimerWatch() ;

constexpr float_t const& __cordl_internal_get_ratio() const;

constexpr float_t& __cordl_internal_get_ratio() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_rayCastNonAllocColliders() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_rayCastNonAllocColliders() ;

constexpr float_t const& __cordl_internal_get_red() const;

constexpr float_t& __cordl_internal_get_red() ;

constexpr ::UnityW<::GlobalNamespace::VRRigReliableState> const& __cordl_internal_get_reliableState() const;

constexpr ::UnityW<::GlobalNamespace::VRRigReliableState>& __cordl_internal_get_reliableState() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_remoteCorrectionNeeded() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_remoteCorrectionNeeded() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CollectionState>* const& __cordl_internal_get_remoteCycleStates() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CollectionState>*& __cordl_internal_get_remoteCycleStates() ;

constexpr double_t const& __cordl_internal_get_remoteLatestTimestamp() const;

constexpr double_t& __cordl_internal_get_remoteLatestTimestamp() ;

constexpr bool const& __cordl_internal_get_remoteUseReplacementVoice() const;

constexpr bool& __cordl_internal_get_remoteUseReplacementVoice() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_remoteVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_remoteVelocity() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_renderTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_renderTransform() ;

constexpr bool const& __cordl_internal_get_renderTransformDisplaced() const;

constexpr bool& __cordl_internal_get_renderTransformDisplaced() ;

constexpr int32_t const& __cordl_internal_get_replacementVoiceDetectionDelay() const;

constexpr int32_t& __cordl_internal_get_replacementVoiceDetectionDelay() ;

constexpr float_t const& __cordl_internal_get_replacementVoiceLoudnessThreshold() const;

constexpr float_t& __cordl_internal_get_replacementVoiceLoudnessThreshold() ;

constexpr ::UnityW<::GlobalNamespace::RigContainer> const& __cordl_internal_get_rigContainer() const;

constexpr ::UnityW<::GlobalNamespace::RigContainer>& __cordl_internal_get_rigContainer() ;

constexpr ::UnityW<::GlobalNamespace::VRRigSerializer> const& __cordl_internal_get_rigSerializer() const;

constexpr ::UnityW<::GlobalNamespace::VRRigSerializer>& __cordl_internal_get_rigSerializer() ;

constexpr ::GlobalNamespace::VRMap* const& __cordl_internal_get_rightHand() const;

constexpr ::GlobalNamespace::VRMap*& __cordl_internal_get_rightHand() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_rightHandGooParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_rightHandGooParticleSystem() ;

constexpr int32_t const& __cordl_internal_get_rightHandHoldableStatus() const;

constexpr int32_t& __cordl_internal_get_rightHandHoldableStatus() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> const& __cordl_internal_get_rightHandHoldsPlayer() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>& __cordl_internal_get_rightHandHoldsPlayer() ;

constexpr ::UnityW<::GlobalNamespace::TakeMyHand_HandLink> const& __cordl_internal_get_rightHandLink() const;

constexpr ::UnityW<::GlobalNamespace::TakeMyHand_HandLink>& __cordl_internal_get_rightHandLink() ;

constexpr ::UnityW<::GlobalNamespace::CrittersLoudNoise> const& __cordl_internal_get_rightHandNoise() const;

constexpr ::UnityW<::GlobalNamespace::CrittersLoudNoise>& __cordl_internal_get_rightHandNoise() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_rightHandPlayer() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_rightHandPlayer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHandTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHandTransform() ;

constexpr ::UnityW<::GlobalNamespace::HoldableHand> const& __cordl_internal_get_rightHolds() const;

constexpr ::UnityW<::GlobalNamespace::HoldableHand>& __cordl_internal_get_rightHolds() ;

constexpr ::GlobalNamespace::VRMapIndex* const& __cordl_internal_get_rightIndex() const;

constexpr ::GlobalNamespace::VRMapIndex*& __cordl_internal_get_rightIndex() ;

constexpr ::GlobalNamespace::VRMapMiddle* const& __cordl_internal_get_rightMiddle() const;

constexpr ::GlobalNamespace::VRMapMiddle*& __cordl_internal_get_rightMiddle() ;

constexpr ::GlobalNamespace::VRMapThumb* const& __cordl_internal_get_rightThumb() const;

constexpr ::GlobalNamespace::VRMapThumb*& __cordl_internal_get_rightThumb() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_rockParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_rockParticleSystem() ;

constexpr float_t const& __cordl_internal_get_scaleMultiplier() const;

constexpr float_t& __cordl_internal_get_scaleMultiplier() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_scoreboardMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_scoreboardMaterial() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>* const& __cordl_internal_get_scratchDisplayList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*& __cordl_internal_get_scratchDisplayList() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_senderRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_senderRig() ;

constexpr int32_t const& __cordl_internal_get_setMatIndex() const;

constexpr int32_t& __cordl_internal_get_setMatIndex() ;

constexpr ::UnityW<::GlobalNamespace::FXSystemSettings> const& __cordl_internal_get_sharedFXSettings() const;

constexpr ::UnityW<::GlobalNamespace::FXSystemSettings>& __cordl_internal_get_sharedFXSettings() ;

constexpr bool const& __cordl_internal_get_shouldLerpToMovingSurface() const;

constexpr bool& __cordl_internal_get_shouldLerpToMovingSurface() ;

constexpr bool const& __cordl_internal_get_shouldLerpToRope() const;

constexpr bool& __cordl_internal_get_shouldLerpToRope() ;

constexpr bool const& __cordl_internal_get_shouldSendSpeakingLoudness() const;

constexpr bool& __cordl_internal_get_shouldSendSpeakingLoudness() ;

constexpr bool const& __cordl_internal_get_showGoldNameTag() const;

constexpr bool& __cordl_internal_get_showGoldNameTag() ;

constexpr bool const& __cordl_internal_get_showName() const;

constexpr bool& __cordl_internal_get_showName() ;

constexpr ::UnityW<::GlobalNamespace::SizeManager> const& __cordl_internal_get_sizeManager() const;

constexpr ::UnityW<::GlobalNamespace::SizeManager>& __cordl_internal_get_sizeManager() ;

constexpr ::UnityW<::GlobalNamespace::XRaySkeleton> const& __cordl_internal_get_skeleton() const;

constexpr ::UnityW<::GlobalNamespace::XRaySkeleton>& __cordl_internal_get_skeleton() ;

constexpr bool const& __cordl_internal_get_snapNextRigUpdate() const;

constexpr bool& __cordl_internal_get_snapNextRigUpdate() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_snowFlakeParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_snowFlakeParticleSystem() ;

constexpr float_t const& __cordl_internal_get_speakingLoudness() const;

constexpr float_t& __cordl_internal_get_speakingLoudness() ;

constexpr ::UnityW<::GlobalNamespace::CrittersLoudNoise> const& __cordl_internal_get_speakingNoise() const;

constexpr ::UnityW<::GlobalNamespace::CrittersLoudNoise>& __cordl_internal_get_speakingNoise() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spectatorSkin() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spectatorSkin() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_speedArray() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_speedArray() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_splashEffectTimes() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_splashEffectTimes() ;

constexpr ::UnityW<::GorillaTagScripts::GorillaAmbushManager> const& __cordl_internal_get_stealthManager() const;

constexpr ::UnityW<::GorillaTagScripts::GorillaAmbushManager>& __cordl_internal_get_stealthManager() ;

constexpr float_t const& __cordl_internal_get_stealthTimer() const;

constexpr float_t& __cordl_internal_get_stealthTimer() ;

constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionDetails const& __cordl_internal_get_subDataCache() const;

constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionDetails& __cordl_internal_get_subDataCache() ;

constexpr ::UnityW<::GlobalNamespace::SuperInfectionHandDisplay> const& __cordl_internal_get_superInfectionHand() const;

constexpr ::UnityW<::GlobalNamespace::SuperInfectionHandDisplay>& __cordl_internal_get_superInfectionHand() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_syncRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_syncRotation() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_tagSound() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_tagSound() ;

constexpr int32_t const& __cordl_internal_get_taggedById() const;

constexpr int32_t& __cordl_internal_get_taggedById() ;

constexpr float_t const& __cordl_internal_get_tapPointDistance() const;

constexpr float_t& __cordl_internal_get_tapPointDistance() ;

constexpr int32_t const& __cordl_internal_get_tempInt() const;

constexpr int32_t& __cordl_internal_get_tempInt() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get_tempItem() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get_tempItem() ;

constexpr int32_t const& __cordl_internal_get_tempItemCost() const;

constexpr int32_t& __cordl_internal_get_tempItemCost() ;

constexpr ::StringW const& __cordl_internal_get_tempItemId() const;

constexpr ::StringW& __cordl_internal_get_tempItemId() ;

constexpr ::StringW const& __cordl_internal_get_tempItemName() const;

constexpr ::StringW& __cordl_internal_get_tempItemName() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_tempQuat() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_tempQuat() ;

constexpr ::StringW const& __cordl_internal_get_tempString() const;

constexpr ::StringW& __cordl_internal_get_tempString() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_tempVRRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_tempVRRig() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_tempVec() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_tempVec() ;

constexpr float_t const& __cordl_internal_get_timeSpawned() const;

constexpr float_t& __cordl_internal_get_timeSpawned() ;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet* const& __cordl_internal_get_tryOnSet() const;

constexpr ::GorillaNetworking::CosmeticsController_CosmeticSet*& __cordl_internal_get_tryOnSet() ;

constexpr int32_t const& __cordl_internal_get_turnFactor() const;

constexpr int32_t& __cordl_internal_get_turnFactor() ;

constexpr ::StringW const& __cordl_internal_get_turnType() const;

constexpr ::StringW& __cordl_internal_get_turnType() ;

constexpr bool const& __cordl_internal_get_turningCompInitialized() const;

constexpr bool& __cordl_internal_get_turningCompInitialized() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_updateQuestCallLimit() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_updateQuestCallLimit() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_updateRankedInfoCallLimit() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_updateRankedInfoCallLimit() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_vStumpReturnWatch() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_vStumpReturnWatch() ;

constexpr ::GlobalNamespace::CircularBuffer_1<::GlobalNamespace::VRRig_VelocityTime>* const& __cordl_internal_get_velocityHistoryList() const;

constexpr ::GlobalNamespace::CircularBuffer_1<::GlobalNamespace::VRRig_VelocityTime>*& __cordl_internal_get_velocityHistoryList() ;

constexpr int32_t const& __cordl_internal_get_velocityHistoryMaxLength() const;

constexpr int32_t& __cordl_internal_get_velocityHistoryMaxLength() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_voiceAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_voiceAudio() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_voicePitchForRelativeScale() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_voicePitchForRelativeScale() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_voiceSampleBuffer() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_voiceSampleBuffer() ;

constexpr bool const& __cordl_internal_get_voiceShiftCosmeticsDirty() const;

constexpr bool& __cordl_internal_get_voiceShiftCosmeticsDirty() ;

constexpr ::UnityW<::GlobalNamespace::ZoneEntityBSP> const& __cordl_internal_get_zoneEntity() const;

constexpr ::UnityW<::GlobalNamespace::ZoneEntityBSP>& __cordl_internal_get_zoneEntity() ;

constexpr void __cordl_internal_set_CosmeticEffectPack(::UnityW<::TagEffects::TagEffectPack>  value) ;

constexpr void __cordl_internal_set_CosmeticHandEffectsOverride_Left(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HandEffectsOverrideCosmetic>>*  value) ;

constexpr void __cordl_internal_set_CosmeticHandEffectsOverride_Right(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HandEffectsOverrideCosmetic>>*  value) ;

constexpr void __cordl_internal_set_FPVEffectsParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_GorillaSnapTurningComp(::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  value) ;

constexpr void __cordl_internal_set_HauntedHearingVolume(float_t  value) ;

constexpr void __cordl_internal_set_HauntedRingVoicePitch(float_t  value) ;

constexpr void __cordl_internal_set_HauntedVoicePitch(float_t  value) ;

constexpr void __cordl_internal_set_InOverrideSubscriptionZone(bool  value) ;

constexpr void __cordl_internal_set_IsHaunted(bool  value) ;

constexpr void __cordl_internal_set_IsInvisibleToLocalPlayer(bool  value) ;

constexpr void __cordl_internal_set_LocalGrabOverrideDuration(float_t  value) ;

constexpr void __cordl_internal_set_LocalTrajectoryOverrideBlend(float_t  value) ;

constexpr void __cordl_internal_set_LocalTrajectoryOverrideDuration(float_t  value) ;

constexpr void __cordl_internal_set_LocalTrajectoryOverridePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_LocalTrajectoryOverrideVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_MouthPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_OnColorChanged(::System::Action_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set_OnDataChange(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnMaterialIndexChanged(::System::Action_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_OnNameChanged(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

constexpr void __cordl_internal_set_OnPlayerNameVisibleChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnQuestScoreChanged(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnRankedSubtierChanged(::System::Action_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_OverrideSubscriptionZoneLocation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_OwningNetPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_SDKIndex(int32_t  value) ;

constexpr void __cordl_internal_set_TemporaryCosmeticEffects(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>*  value) ;

constexpr void __cordl_internal_set_UsingHauntedRing(bool  value) ;

constexpr void __cordl_internal_set_VoiceShiftCosmetics(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VoiceShiftCosmetic>>*  value) ;

constexpr void __cordl_internal_set__CurrentCosmeticSkin_k__BackingField(::UnityW<::GlobalNamespace::GorillaSkin>  value) ;

constexpr void __cordl_internal_set__CurrentModeSkin_k__BackingField(::UnityW<::GlobalNamespace::GorillaSkin>  value) ;

constexpr void __cordl_internal_set__IsFrozen_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LastHandTouchedGroundAtNetworkTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__LastTouchedGroundAtNetworkTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__PostTickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TemporaryEffectSkin_k__BackingField(::UnityW<::GlobalNamespace::GorillaSkin>  value) ;

constexpr void __cordl_internal_set__cosmeticReferences_k__BackingField(::UnityW<::GlobalNamespace::CosmeticRefRegistry>  value) ;

constexpr void __cordl_internal_set__extraLeftHandEffect(::GlobalNamespace::HandEffectContext*  value) ;

constexpr void __cordl_internal_set__extraRightHandEffect(::GlobalNamespace::HandEffectContext*  value) ;

constexpr void __cordl_internal_set__gamePlayerRef(::UnityW<::GlobalNamespace::GamePlayer>  value) ;

constexpr void __cordl_internal_set__isListeningFor_OnPostInstantiateAllPrefabs(bool  value) ;

constexpr void __cordl_internal_set__leftHandEffect(::GlobalNamespace::HandEffectContext*  value) ;

constexpr void __cordl_internal_set__nextUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set__playerOwnedCosmetics(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__playerOwnedCosmeticsAge(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set__rankedInfoUpdated(bool  value) ;

constexpr void __cordl_internal_set__rightHandEffect(::GlobalNamespace::HandEffectContext*  value) ;

constexpr void __cordl_internal_set__scoreUpdated(bool  value) ;

constexpr void __cordl_internal_set__temporaryCosmetics(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_activeCosmetics(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_anyShiftedVoiceCosmetic(bool  value) ;

constexpr void __cordl_internal_set_audioDesc(::Photon::Voice::IAudioDesc*  value) ;

constexpr void __cordl_internal_set_backpack(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_blue(float_t  value) ;

constexpr void __cordl_internal_set_bodyHolds(::UnityW<::GlobalNamespace::HoldableHand>  value) ;

constexpr void __cordl_internal_set_bodyRenderer(::UnityW<::GlobalNamespace::GorillaBodyRenderer>  value) ;

constexpr void __cordl_internal_set_bodyTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_bonkCooldown(float_t  value) ;

constexpr void __cordl_internal_set_bonkTime(float_t  value) ;

constexpr void __cordl_internal_set_builderArmShelfLeft(::UnityW<::GlobalNamespace::BuilderArmShelf>  value) ;

constexpr void __cordl_internal_set_builderArmShelfRight(::UnityW<::GlobalNamespace::BuilderArmShelf>  value) ;

constexpr void __cordl_internal_set_builderResizeWatch(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_cachedRenderTransformPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_clipToPlay(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_colorInitialized(bool  value) ;

constexpr void __cordl_internal_set_cosmeticPitchActive(bool  value) ;

constexpr void __cordl_internal_set_cosmeticPitchShift(float_t  value) ;

constexpr void __cordl_internal_set_cosmeticRetries(int32_t  value) ;

constexpr void __cordl_internal_set_cosmeticSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  value) ;

constexpr void __cordl_internal_set_cosmeticVolumeActive(bool  value) ;

constexpr void __cordl_internal_set_cosmeticVolumeShift(float_t  value) ;

constexpr void __cordl_internal_set_cosmeticsActivationPS(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_cosmeticsActivationSBP(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_cosmeticsObjectRegistry(::GorillaNetworking::CosmeticItemRegistry*  value) ;

constexpr void __cordl_internal_set_creator(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_currentCosmeticTries(int32_t  value) ;

constexpr void __cordl_internal_set_currentHoldParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_currentMicWrapper(::Photon::Voice::Unity::MicWrapper*  value) ;

constexpr void __cordl_internal_set_currentQuestScore(int32_t  value) ;

constexpr void __cordl_internal_set_currentRankedELO(float_t  value) ;

constexpr void __cordl_internal_set_currentRankedSubTierPC(int32_t  value) ;

constexpr void __cordl_internal_set_currentRankedSubTierQuest(int32_t  value) ;

constexpr void __cordl_internal_set_currentRopeSwing(::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>  value) ;

constexpr void __cordl_internal_set_currentRopeSwingTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_cycleStatesArray(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_deactivatedRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_defaultSkin(::UnityW<::GlobalNamespace::GorillaSkin>  value) ;

constexpr void __cordl_internal_set_displacementZone(::UnityW<::GlobalNamespace::RigDisplacementZone>  value) ;

constexpr void __cordl_internal_set_doNotLerpConstant(float_t  value) ;

constexpr void __cordl_internal_set_faceSkin(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_fps(int32_t  value) ;

constexpr void __cordl_internal_set_frameScale(float_t  value) ;

constexpr void __cordl_internal_set_friendshipBraceletLeftHand(::UnityW<::GorillaNetworking::FriendshipBracelet>  value) ;

constexpr void __cordl_internal_set_friendshipBraceletRightHand(::UnityW<::GorillaNetworking::FriendshipBracelet>  value) ;

constexpr void __cordl_internal_set_frozenEffect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_frozenEffectMaxHorizontalScale(float_t  value) ;

constexpr void __cordl_internal_set_frozenEffectMaxY(float_t  value) ;

constexpr void __cordl_internal_set_frozenEffectMinHorizontalScale(float_t  value) ;

constexpr void __cordl_internal_set_frozenEffectMinY(float_t  value) ;

constexpr void __cordl_internal_set_frozenTimeElapsed(float_t  value) ;

constexpr void __cordl_internal_set_fxSettings(::UnityW<::GlobalNamespace::FXSystemSettings>  value) ;

constexpr void __cordl_internal_set_geodeCrackingSound(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_grabbedRopeBoneIndex(int32_t  value) ;

constexpr void __cordl_internal_set_grabbedRopeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_grabbedRopeIsBody(bool  value) ;

constexpr void __cordl_internal_set_grabbedRopeIsLeft(bool  value) ;

constexpr void __cordl_internal_set_grabbedRopeIsPhotonView(bool  value) ;

constexpr void __cordl_internal_set_grabbedRopeOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_green(float_t  value) ;

constexpr void __cordl_internal_set_guardianEjectWatch(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_handLerpValues(double_t  value) ;

constexpr void __cordl_internal_set_handSpeedToVolumeModifier(float_t  value) ;

constexpr void __cordl_internal_set_handSync(int32_t  value) ;

constexpr void __cordl_internal_set_handTapSound(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_head(::GlobalNamespace::VRMap*  value) ;

constexpr void __cordl_internal_set_headBodyOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_headConstraint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_headMesh(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_hoverboardEnabledCount(int32_t  value) ;

constexpr void __cordl_internal_set_hoverboardVisual(::UnityW<::GlobalNamespace::HoverboardVisual>  value) ;

constexpr void __cordl_internal_set_huntComputer(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_iceCubeLeft(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_iceCubeRight(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_iceParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_inTempCosmSpace(bool  value) ;

constexpr void __cordl_internal_set_inTryOnRoom(bool  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_initializedCosmetics(bool  value) ;

constexpr void __cordl_internal_set_instrumentSelfOnly(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  value) ;

constexpr void __cordl_internal_set_isInitialized(bool  value) ;

constexpr void __cordl_internal_set_isMyPlayer(bool  value) ;

constexpr void __cordl_internal_set_isOfflineVRRig(bool  value) ;

constexpr void __cordl_internal_set_jobPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_jobRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_justTeleportedSendsRemaining(int32_t  value) ;

constexpr void __cordl_internal_set_lastMountedSurfaceTimer(float_t  value) ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastRopeGrabTimer(float_t  value) ;

constexpr void __cordl_internal_set_lastScaleFactor(float_t  value) ;

constexpr void __cordl_internal_set_lateUpdateCallbacks(::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::ICallBack*>*  value) ;

constexpr void __cordl_internal_set_lavaParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_layerChanger(::UnityW<::GorillaTagScripts::LayerChanger>  value) ;

constexpr void __cordl_internal_set_leftHand(::GlobalNamespace::VRMap*  value) ;

constexpr void __cordl_internal_set_leftHandGooParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_leftHandHoldableStatus(int32_t  value) ;

constexpr void __cordl_internal_set_leftHandHoldsPlayer(::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  value) ;

constexpr void __cordl_internal_set_leftHandLink(::UnityW<::GlobalNamespace::TakeMyHand_HandLink>  value) ;

constexpr void __cordl_internal_set_leftHandNoise(::UnityW<::GlobalNamespace::CrittersLoudNoise>  value) ;

constexpr void __cordl_internal_set_leftHandPlayer(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_leftHandTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftHolds(::UnityW<::GlobalNamespace::HoldableHand>  value) ;

constexpr void __cordl_internal_set_leftIndex(::GlobalNamespace::VRMapIndex*  value) ;

constexpr void __cordl_internal_set_leftMiddle(::GlobalNamespace::VRMapMiddle*  value) ;

constexpr void __cordl_internal_set_leftThumb(::GlobalNamespace::VRMapThumb*  value) ;

constexpr void __cordl_internal_set_lerpValueBody(float_t  value) ;

constexpr void __cordl_internal_set_lerpValueFingers(float_t  value) ;

constexpr void __cordl_internal_set_localGrabOverrideBlend(float_t  value) ;

constexpr void __cordl_internal_set_localOverrideGrabbingHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_localOverrideIsBody(bool  value) ;

constexpr void __cordl_internal_set_localOverrideIsLeftHand(bool  value) ;

constexpr void __cordl_internal_set_localUseReplacementVoice(bool  value) ;

constexpr void __cordl_internal_set_loudnessCheckFrame(int32_t  value) ;

constexpr void __cordl_internal_set_m_sentRankedScore(bool  value) ;

constexpr void __cordl_internal_set_mainCamera(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_mainSkin(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_materialsToChangeTo(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_mergedSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  value) ;

constexpr void __cordl_internal_set_mountedMonkeBlock(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_mountedMonkeBlockOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_mountedMovingSurface(::UnityW<::GorillaTagScripts::MovingSurface>  value) ;

constexpr void __cordl_internal_set_mountedMovingSurfaceId(int32_t  value) ;

constexpr void __cordl_internal_set_mountedMovingSurfaceIsBody(bool  value) ;

constexpr void __cordl_internal_set_mountedMovingSurfaceIsLeft(bool  value) ;

constexpr void __cordl_internal_set_movingSurfaceIsMonkeBlock(bool  value) ;

constexpr void __cordl_internal_set_movingSurfaceWasBody(bool  value) ;

constexpr void __cordl_internal_set_movingSurfaceWasLeft(bool  value) ;

constexpr void __cordl_internal_set_movingSurfaceWasMonkeBlock(bool  value) ;

constexpr void __cordl_internal_set_musicDrums(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value) ;

constexpr void __cordl_internal_set_muted(bool  value) ;

constexpr void __cordl_internal_set_myBodyDockPositions(::UnityW<::GlobalNamespace::BodyDockPositions>  value) ;

constexpr void __cordl_internal_set_myEyeExpressions(::UnityW<::GlobalNamespace::GorillaEyeExpressions>  value) ;

constexpr void __cordl_internal_set_myIk(::UnityW<::GlobalNamespace::GorillaIK>  value) ;

constexpr void __cordl_internal_set_myMouthFlap(::UnityW<::GlobalNamespace::GorillaMouthFlap>  value) ;

constexpr void __cordl_internal_set_myPhotonVoiceView(::UnityW<::Photon::Voice::PUN::PhotonVoiceView>  value) ;

constexpr void __cordl_internal_set_myReplacementVoice(::UnityW<::GlobalNamespace::ReplacementVoice>  value) ;

constexpr void __cordl_internal_set_mySpeakerLoudness(::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  value) ;

constexpr void __cordl_internal_set_nameTagAnchor(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_nativeScale(float_t  value) ;

constexpr void __cordl_internal_set_netSyncPos(::GlobalNamespace::NetworkVector3*  value) ;

constexpr void __cordl_internal_set_netView(::UnityW<::GlobalNamespace::NetworkView>  value) ;

constexpr void __cordl_internal_set_nextLocalVelocityStoreTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_nonCosmeticLeftHandItem(::UnityW<::GlobalNamespace::NonCosmeticHandItem>  value) ;

constexpr void __cordl_internal_set_nonCosmeticRightHandItem(::UnityW<::GlobalNamespace::NonCosmeticHandItem>  value) ;

constexpr void __cordl_internal_set_nonHauntedVolume(float_t  value) ;

constexpr void __cordl_internal_set_onColorInitialized(::System::Action_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set_paintbrawlBalloons(::UnityW<::GlobalNamespace::PaintbrawlBalloons>  value) ;

constexpr void __cordl_internal_set_partyMemberStatus(::GlobalNamespace::VRRig_PartyMemberStatus  value) ;

constexpr void __cordl_internal_set_pendingCosmeticUpdate(bool  value) ;

constexpr void __cordl_internal_set_pitchOffset(float_t  value) ;

constexpr void __cordl_internal_set_pitchScale(float_t  value) ;

constexpr void __cordl_internal_set_playerColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_playerNameVisible(::StringW  value) ;

constexpr void __cordl_internal_set_playerOffsetTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_playerText1(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_playerWasHaunted(bool  value) ;

constexpr void __cordl_internal_set_portalShenanigansBit(bool  value) ;

constexpr void __cordl_internal_set_prevMovingSurfaceID(int32_t  value) ;

constexpr void __cordl_internal_set_prevSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  value) ;

constexpr void __cordl_internal_set_previousGrabbedRope(int32_t  value) ;

constexpr void __cordl_internal_set_previousGrabbedRopeBoneIndex(int32_t  value) ;

constexpr void __cordl_internal_set_previousGrabbedRopeWasBody(bool  value) ;

constexpr void __cordl_internal_set_previousGrabbedRopeWasLeft(bool  value) ;

constexpr void __cordl_internal_set_projectileWeapon(::UnityW<::GlobalNamespace::ProjectileWeapon>  value) ;

constexpr void __cordl_internal_set_propHuntHandFollower(::UnityW<::GlobalNamespace::PropHuntHandFollower>  value) ;

constexpr void __cordl_internal_set_rankedTimerWatch(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_ratio(float_t  value) ;

constexpr void __cordl_internal_set_rayCastNonAllocColliders(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_red(float_t  value) ;

constexpr void __cordl_internal_set_reliableState(::UnityW<::GlobalNamespace::VRRigReliableState>  value) ;

constexpr void __cordl_internal_set_remoteCorrectionNeeded(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_remoteCycleStates(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CollectionState>*  value) ;

constexpr void __cordl_internal_set_remoteLatestTimestamp(double_t  value) ;

constexpr void __cordl_internal_set_remoteUseReplacementVoice(bool  value) ;

constexpr void __cordl_internal_set_remoteVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_renderTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_renderTransformDisplaced(bool  value) ;

constexpr void __cordl_internal_set_replacementVoiceDetectionDelay(int32_t  value) ;

constexpr void __cordl_internal_set_replacementVoiceLoudnessThreshold(float_t  value) ;

constexpr void __cordl_internal_set_rigContainer(::UnityW<::GlobalNamespace::RigContainer>  value) ;

constexpr void __cordl_internal_set_rigSerializer(::UnityW<::GlobalNamespace::VRRigSerializer>  value) ;

constexpr void __cordl_internal_set_rightHand(::GlobalNamespace::VRMap*  value) ;

constexpr void __cordl_internal_set_rightHandGooParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_rightHandHoldableStatus(int32_t  value) ;

constexpr void __cordl_internal_set_rightHandHoldsPlayer(::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  value) ;

constexpr void __cordl_internal_set_rightHandLink(::UnityW<::GlobalNamespace::TakeMyHand_HandLink>  value) ;

constexpr void __cordl_internal_set_rightHandNoise(::UnityW<::GlobalNamespace::CrittersLoudNoise>  value) ;

constexpr void __cordl_internal_set_rightHandPlayer(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_rightHandTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightHolds(::UnityW<::GlobalNamespace::HoldableHand>  value) ;

constexpr void __cordl_internal_set_rightIndex(::GlobalNamespace::VRMapIndex*  value) ;

constexpr void __cordl_internal_set_rightMiddle(::GlobalNamespace::VRMapMiddle*  value) ;

constexpr void __cordl_internal_set_rightThumb(::GlobalNamespace::VRMapThumb*  value) ;

constexpr void __cordl_internal_set_rockParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_scaleMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_scoreboardMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_scratchDisplayList(::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*  value) ;

constexpr void __cordl_internal_set_senderRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_setMatIndex(int32_t  value) ;

constexpr void __cordl_internal_set_sharedFXSettings(::UnityW<::GlobalNamespace::FXSystemSettings>  value) ;

constexpr void __cordl_internal_set_shouldLerpToMovingSurface(bool  value) ;

constexpr void __cordl_internal_set_shouldLerpToRope(bool  value) ;

constexpr void __cordl_internal_set_shouldSendSpeakingLoudness(bool  value) ;

constexpr void __cordl_internal_set_showGoldNameTag(bool  value) ;

constexpr void __cordl_internal_set_showName(bool  value) ;

constexpr void __cordl_internal_set_sizeManager(::UnityW<::GlobalNamespace::SizeManager>  value) ;

constexpr void __cordl_internal_set_skeleton(::UnityW<::GlobalNamespace::XRaySkeleton>  value) ;

constexpr void __cordl_internal_set_snapNextRigUpdate(bool  value) ;

constexpr void __cordl_internal_set_snowFlakeParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_speakingLoudness(float_t  value) ;

constexpr void __cordl_internal_set_speakingNoise(::UnityW<::GlobalNamespace::CrittersLoudNoise>  value) ;

constexpr void __cordl_internal_set_spectatorSkin(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_speedArray(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_splashEffectTimes(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_stealthManager(::UnityW<::GorillaTagScripts::GorillaAmbushManager>  value) ;

constexpr void __cordl_internal_set_stealthTimer(float_t  value) ;

constexpr void __cordl_internal_set_subDataCache(::GlobalNamespace::SubscriptionManager_SubscriptionDetails  value) ;

constexpr void __cordl_internal_set_superInfectionHand(::UnityW<::GlobalNamespace::SuperInfectionHandDisplay>  value) ;

constexpr void __cordl_internal_set_syncRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_tagSound(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_taggedById(int32_t  value) ;

constexpr void __cordl_internal_set_tapPointDistance(float_t  value) ;

constexpr void __cordl_internal_set_tempInt(int32_t  value) ;

constexpr void __cordl_internal_set_tempItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

constexpr void __cordl_internal_set_tempItemCost(int32_t  value) ;

constexpr void __cordl_internal_set_tempItemId(::StringW  value) ;

constexpr void __cordl_internal_set_tempItemName(::StringW  value) ;

constexpr void __cordl_internal_set_tempQuat(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_tempString(::StringW  value) ;

constexpr void __cordl_internal_set_tempVRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_tempVec(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_timeSpawned(float_t  value) ;

constexpr void __cordl_internal_set_tryOnSet(::GorillaNetworking::CosmeticsController_CosmeticSet*  value) ;

constexpr void __cordl_internal_set_turnFactor(int32_t  value) ;

constexpr void __cordl_internal_set_turnType(::StringW  value) ;

constexpr void __cordl_internal_set_turningCompInitialized(bool  value) ;

constexpr void __cordl_internal_set_updateQuestCallLimit(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_updateRankedInfoCallLimit(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_vStumpReturnWatch(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_velocityHistoryList(::GlobalNamespace::CircularBuffer_1<::GlobalNamespace::VRRig_VelocityTime>*  value) ;

constexpr void __cordl_internal_set_velocityHistoryMaxLength(int32_t  value) ;

constexpr void __cordl_internal_set_voiceAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_voicePitchForRelativeScale(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_voiceSampleBuffer(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_voiceShiftCosmeticsDirty(bool  value) ;

constexpr void __cordl_internal_set_zoneEntity(::UnityW<::GlobalNamespace::ZoneEntityBSP>  value) ;

/// @brief Method .ctor, addr 0x57342b0, size 0x754, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnColorChanged, addr 0x572e138, size 0xb0, virtual false, abstract: false, final false
inline void add_OnColorChanged(::System::Action_1<::UnityEngine::Color>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnDataChange, addr 0x5734178, size 0x9c, virtual true, abstract: false, final true
inline void add_OnDataChange(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnPlayerNameVisibleChanged, addr 0x572e298, size 0x9c, virtual false, abstract: false, final false
inline void add_OnPlayerNameVisibleChanged(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnQuestScoreChanged, addr 0x572ebac, size 0xb0, virtual false, abstract: false, final false
inline void add_OnQuestScoreChanged(::System::Action_1<int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRankedSubtierChanged, addr 0x572f040, size 0xb0, virtual false, abstract: false, final false
inline void add_OnRankedSubtierChanged(::System::Action_2<int32_t,int32_t>*  value) ;

/// @brief Method buildEntries, addr 0x5733db4, size 0x3c4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* buildEntries() ;

static inline ::ArrayW<::GlobalNamespace::GTBitOps_BitWriteInfo> getStaticF_WearablePackedStatesBitWriteInfos() ;

static inline ::UnityW<::GlobalNamespace::VRRig> getStaticF_gLocalRig() ;

static inline ::System::Action* getStaticF_newPlayerJoined() ;

/// @brief Method get_Creator, addr 0x571e840, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* get_Creator() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentCosmeticSkin, addr 0x571e1c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GorillaSkin> get_CurrentCosmeticSkin() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentModeSkin, addr 0x571e1e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GorillaSkin> get_CurrentModeSkin() ;

/// @brief Method get_ExtraLeftHandEffect, addr 0x571e870, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::HandEffectContext* get_ExtraLeftHandEffect() ;

/// @brief Method get_ExtraRightHandEffect, addr 0x571e878, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::HandEffectContext* get_ExtraRightHandEffect() ;

/// @brief Method get_GamePlayerRef, addr 0x571e880, size 0xa0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GamePlayer> get_GamePlayerRef() ;

/// @brief Method get_HasBracelet, addr 0x571e198, size 0x18, virtual false, abstract: false, final false
inline bool get_HasBracelet() ;

/// @brief Method get_Initialized, addr 0x571e848, size 0x8, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_InitializedCosmetics, addr 0x571e0cc, size 0x8, virtual false, abstract: false, final false
inline bool get_InitializedCosmetics() ;

/// [CompilerGenerated]
/// @brief Method get_IsFrozen, addr 0x5733208, size 0x8, virtual false, abstract: false, final false
inline bool get_IsFrozen() ;

/// @brief Method get_IsInDisplacementZone, addr 0x573302c, size 0x60, virtual false, abstract: false, final false
inline bool get_IsInDisplacementZone() ;

/// @brief Method get_IsLocalPartyMember, addr 0x571e2f4, size 0x18, virtual false, abstract: false, final false
inline bool get_IsLocalPartyMember() ;

/// @brief Method get_IsMicEnabled, addr 0x571e780, size 0x18, virtual false, abstract: false, final false
inline bool get_IsMicEnabled() ;

/// @brief Method get_IsPlayerMeshHidden, addr 0x5722e20, size 0x28, virtual false, abstract: false, final false
inline bool get_IsPlayerMeshHidden() ;

/// @brief Method get_IsVisuallyDisplaced, addr 0x5722060, size 0x90, virtual false, abstract: false, final false
inline bool get_IsVisuallyDisplaced() ;

/// [CompilerGenerated]
/// @brief Method get_LastHandTouchedGroundAtNetworkTime, addr 0x571e188, size 0x8, virtual false, abstract: false, final false
inline float_t get_LastHandTouchedGroundAtNetworkTime() ;

/// [CompilerGenerated]
/// @brief Method get_LastTouchedGroundAtNetworkTime, addr 0x571e178, size 0x8, virtual false, abstract: false, final false
inline float_t get_LastTouchedGroundAtNetworkTime() ;

/// @brief Method get_LeftHandEffect, addr 0x571e860, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::HandEffectContext* get_LeftHandEffect() ;

/// @brief Method get_LeftThrowableProjectileColor, addr 0x571e630, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Color32 get_LeftThrowableProjectileColor() ;

/// @brief Method get_LeftThrowableProjectileIndex, addr 0x571e5a0, size 0x18, virtual false, abstract: false, final false
inline int32_t get_LeftThrowableProjectileIndex() ;

/// @brief Method get_LocalRig, addr 0x5733d0c, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::VRRig> get_LocalRig() ;

/// @brief Method get_NativeScale, addr 0x571e830, size 0x8, virtual false, abstract: false, final false
inline float_t get_NativeScale() ;

/// [CompilerGenerated]
/// @brief Method get_PostTickRunning, addr 0x571e210, size 0x8, virtual true, abstract: false, final true
inline bool get_PostTickRunning() ;

/// @brief Method get_RandomThrowableIndex, addr 0x571e768, size 0x18, virtual false, abstract: false, final false
inline int32_t get_RandomThrowableIndex() ;

/// @brief Method get_RightHandEffect, addr 0x571e868, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::HandEffectContext* get_RightHandEffect() ;

/// @brief Method get_RightThrowableProjectileColor, addr 0x571e684, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Color32 get_RightThrowableProjectileColor() ;

/// @brief Method get_RightThrowableProjectileIndex, addr 0x571e5e8, size 0x18, virtual false, abstract: false, final false
inline int32_t get_RightThrowableProjectileIndex() ;

/// @brief Method get_ScaleMultiplier, addr 0x571e820, size 0x8, virtual false, abstract: false, final false
inline float_t get_ScaleMultiplier() ;

/// @brief Method get_ShowGoldNameTag, addr 0x5733218, size 0x8, virtual false, abstract: false, final false
inline bool get_ShowGoldNameTag() ;

/// @brief Method get_SizeLayerMask, addr 0x571e7c8, size 0x18, virtual false, abstract: false, final false
inline int32_t get_SizeLayerMask() ;

/// @brief Method get_SpeakingLoudness, addr 0x571e850, size 0x8, virtual false, abstract: false, final false
inline float_t get_SpeakingLoudness() ;

/// @brief Method get_TemporaryCosmetics, addr 0x571e0c4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::StringW>* get_TemporaryCosmetics() ;

/// [CompilerGenerated]
/// @brief Method get_TemporaryEffectSkin, addr 0x571e1f8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GorillaSkin> get_TemporaryEffectSkin() ;

/// @brief Method get_WearablePackedStates, addr 0x571e558, size 0x18, virtual false, abstract: false, final false
inline int32_t get_WearablePackedStates() ;

/// [CompilerGenerated]
/// @brief Method get_cosmeticReferences, addr 0x571e0dc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::CosmeticRefRegistry> get_cosmeticReferences() ;

/// @brief Method get_cosmetics, addr 0x571df28, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* get_cosmetics() ;

/// @brief Method get_isLocal, addr 0x5721fd0, size 0x90, virtual false, abstract: false, final false
inline bool get_isLocal() ;

/// @brief Method get_myDefaultSkinMaterialInstance, addr 0x571df10, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_myDefaultSkinMaterialInstance() ;

/// @brief Method get_overrideCosmetics, addr 0x571df94, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* get_overrideCosmetics() ;

/// @brief Method get_scaleFactor, addr 0x571e810, size 0x10, virtual false, abstract: false, final false
inline float_t get_scaleFactor() ;

/// @brief Method get_syncPos, addr 0x571dedc, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_syncPos() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() noexcept;

/// @brief Convert to "::GlobalNamespace::IEyeScannable"
constexpr ::GlobalNamespace::IEyeScannable* i___GlobalNamespace__IEyeScannable() noexcept;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Convert to "::GlobalNamespace::IPreDisable"
constexpr ::GlobalNamespace::IPreDisable* i___GlobalNamespace__IPreDisable() noexcept;

/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* i___GlobalNamespace__ITickSystemPost() noexcept;

/// @brief Convert to "::GlobalNamespace::IUserCosmeticsCallback"
constexpr ::GlobalNamespace::IUserCosmeticsCallback* i___GlobalNamespace__IUserCosmeticsCallback() noexcept;

/// @brief Convert to "::GlobalNamespace::IWrappedSerializable"
constexpr ::GlobalNamespace::IWrappedSerializable* i___GlobalNamespace__IWrappedSerializable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnColorChanged, addr 0x572e1e8, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnColorChanged(::System::Action_1<::UnityEngine::Color>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnDataChange, addr 0x5734214, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnDataChange(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPlayerNameVisibleChanged, addr 0x572e334, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnPlayerNameVisibleChanged(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnQuestScoreChanged, addr 0x572ec5c, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnQuestScoreChanged(::System::Action_1<int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRankedSubtierChanged, addr 0x572f0f0, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnRankedSubtierChanged(::System::Action_2<int32_t,int32_t>*  value) ;

static inline void setStaticF_WearablePackedStatesBitWriteInfos(::ArrayW<::GlobalNamespace::GTBitOps_BitWriteInfo>  value) ;

static inline void setStaticF_gLocalRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

static inline void setStaticF_newPlayerJoined(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentCosmeticSkin, addr 0x571e1d0, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentCosmeticSkin(::GlobalNamespace::GorillaSkin*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentModeSkin, addr 0x571e1e8, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentModeSkin(::GlobalNamespace::GorillaSkin*  value) ;

/// @brief Method set_InitializedCosmetics, addr 0x571e0d4, size 0x8, virtual false, abstract: false, final false
inline void set_InitializedCosmetics(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsFrozen, addr 0x5733210, size 0x8, virtual false, abstract: false, final false
inline void set_IsFrozen(bool  value) ;

/// @brief Method set_IsMicEnabled, addr 0x571e798, size 0x30, virtual false, abstract: false, final false
inline void set_IsMicEnabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastHandTouchedGroundAtNetworkTime, addr 0x571e190, size 0x8, virtual false, abstract: false, final false
inline void set_LastHandTouchedGroundAtNetworkTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastTouchedGroundAtNetworkTime, addr 0x571e180, size 0x8, virtual false, abstract: false, final false
inline void set_LastTouchedGroundAtNetworkTime(float_t  value) ;

/// @brief Method set_LeftThrowableProjectileColor, addr 0x571e648, size 0x3c, virtual false, abstract: false, final false
inline void set_LeftThrowableProjectileColor(::UnityEngine::Color32  value) ;

/// @brief Method set_LeftThrowableProjectileIndex, addr 0x571e5b8, size 0x30, virtual false, abstract: false, final false
inline void set_LeftThrowableProjectileIndex(int32_t  value) ;

/// @brief Method set_NativeScale, addr 0x571e838, size 0x8, virtual false, abstract: false, final false
inline void set_NativeScale(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_PostTickRunning, addr 0x571e218, size 0x8, virtual true, abstract: false, final true
inline void set_PostTickRunning(bool  value) ;

/// @brief Method set_RandomThrowableIndex, addr 0x571e720, size 0x30, virtual false, abstract: false, final false
inline void set_RandomThrowableIndex(int32_t  value) ;

/// @brief Method set_RightThrowableProjectileColor, addr 0x571e69c, size 0x3c, virtual false, abstract: false, final false
inline void set_RightThrowableProjectileColor(::UnityEngine::Color32  value) ;

/// @brief Method set_RightThrowableProjectileIndex, addr 0x571e600, size 0x30, virtual false, abstract: false, final false
inline void set_RightThrowableProjectileIndex(int32_t  value) ;

/// @brief Method set_ScaleMultiplier, addr 0x571e828, size 0x8, virtual false, abstract: false, final false
inline void set_ScaleMultiplier(float_t  value) ;

/// @brief Method set_ShowGoldNameTag, addr 0x5733220, size 0x8, virtual false, abstract: false, final false
inline void set_ShowGoldNameTag(bool  value) ;

/// @brief Method set_SizeLayerMask, addr 0x571e7e0, size 0x30, virtual false, abstract: false, final false
inline void set_SizeLayerMask(int32_t  value) ;

/// @brief Method set_SpeakingLoudness, addr 0x571e858, size 0x8, virtual false, abstract: false, final false
inline void set_SpeakingLoudness(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_TemporaryEffectSkin, addr 0x571e200, size 0x10, virtual false, abstract: false, final false
inline void set_TemporaryEffectSkin(::GlobalNamespace::GorillaSkin*  value) ;

/// @brief Method set_WearablePackedStates, addr 0x571e570, size 0x30, virtual false, abstract: false, final false
inline void set_WearablePackedStates(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_cosmeticReferences, addr 0x571e0e4, size 0x10, virtual false, abstract: false, final false
inline void set_cosmeticReferences(::GlobalNamespace::CosmeticRefRegistry*  value) ;

/// @brief Method set_syncPos, addr 0x571def8, size 0x18, virtual false, abstract: false, final false
inline void set_syncPos(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRRig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRRig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRRig(VRRig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRRig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRRig(VRRig const& ) = delete;

/// @brief Field CHECK_LOUDNESS_FREQ_FRAMES offset 0xffffffff size 0x4
static constexpr int32_t  CHECK_LOUDNESS_FREQ_FRAMES{static_cast<int32_t>(0xa)};

/// @brief Field JUST_TELEPORTED_MIN_DISTANCE offset 0xffffffff size 0x4
static constexpr float_t  JUST_TELEPORTED_MIN_DISTANCE{static_cast<float_t>(1.0f)};

/// @brief Field JUST_TELEPORTED_SEND_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  JUST_TELEPORTED_SEND_COUNT{static_cast<int32_t>(0x3)};

/// @brief Field REMOTE_CORRECTION_RATE offset 0xffffffff size 0x4
static constexpr float_t  REMOTE_CORRECTION_RATE{static_cast<float_t>(5.0f)};

/// @brief Field SHOW_SCREENS offset 0xffffffff size 0x1
static constexpr bool  SHOW_SCREENS{false};

/// @brief Field USE_NEW_NETCODE offset 0xffffffff size 0x1
static constexpr bool  USE_NEW_NETCODE{false};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1273};

/// @brief Field grabbedRopeIsPhotonView_BIT offset 0xffffffff size 0x4
static constexpr int32_t  grabbedRopeIsPhotonView_BIT{static_cast<int32_t>(0x800)};

/// @brief Field grabbedRope_BIT offset 0xffffffff size 0x4
static constexpr int32_t  grabbedRope_BIT{static_cast<int32_t>(0x400)};

/// @brief Field isHoldingHandsWithPlayer_BIT offset 0xffffffff size 0x4
static constexpr int32_t  isHoldingHandsWithPlayer_BIT{static_cast<int32_t>(0x1000)};

/// @brief Field isHoldingHoverboard_BIT offset 0xffffffff size 0x4
static constexpr int32_t  isHoldingHoverboard_BIT{static_cast<int32_t>(0x2000)};

/// @brief Field isHoverboardLeftHanded_BIT offset 0xffffffff size 0x4
static constexpr int32_t  isHoverboardLeftHanded_BIT{static_cast<int32_t>(0x4000)};

/// @brief Field isLeftHandGrabbable_BIT offset 0xffffffff size 0x4
static constexpr int32_t  isLeftHandGrabbable_BIT{static_cast<int32_t>(0x40000)};

/// @brief Field isLeftHandTentacleHoldingHand_BIT offset 0xffffffff size 0x4
static constexpr int32_t  isLeftHandTentacleHoldingHand_BIT{static_cast<int32_t>(0x100000)};

/// @brief Field isOnMovingSurface_BIT offset 0xffffffff size 0x4
static constexpr int32_t  isOnMovingSurface_BIT{static_cast<int32_t>(0x8000)};

/// @brief Field isPropHunt_BIT offset 0xffffffff size 0x4
static constexpr int32_t  isPropHunt_BIT{static_cast<int32_t>(0x10000)};

/// @brief Field isRightHandGrabbable_BIT offset 0xffffffff size 0x4
static constexpr int32_t  isRightHandGrabbable_BIT{static_cast<int32_t>(0x80000)};

/// @brief Field isRightHandTentacleHoldingHand_BIT offset 0xffffffff size 0x4
static constexpr int32_t  isRightHandTentacleHoldingHand_BIT{static_cast<int32_t>(0x200000)};

/// @brief Field justTeleported_BIT offset 0xffffffff size 0x4
static constexpr int32_t  justTeleported_BIT{static_cast<int32_t>(0x100)};

/// @brief Field maxGuardianThrowVelocity offset 0xffffffff size 0x4
static constexpr float_t  maxGuardianThrowVelocity{static_cast<float_t>(20.0f)};

/// @brief Field maxRegularThrowVelocity offset 0xffffffff size 0x4
static constexpr float_t  maxRegularThrowVelocity{static_cast<float_t>(3.0f)};

/// @brief Field portalShenanigans_BIT offset 0xffffffff size 0x4
static constexpr int32_t  portalShenanigans_BIT{static_cast<int32_t>(0x800000)};

/// @brief Field propHuntLeftHand_BIT offset 0xffffffff size 0x4
static constexpr int32_t  propHuntLeftHand_BIT{static_cast<int32_t>(0x20000)};

/// @brief Field remoteUseReplacementVoice_BIT offset 0xffffffff size 0x4
static constexpr int32_t  remoteUseReplacementVoice_BIT{static_cast<int32_t>(0x200)};

/// @brief Field showSubscriber_BIT offset 0xffffffff size 0x4
static constexpr int32_t  showSubscriber_BIT{static_cast<int32_t>(0x400000)};

/// @brief Field speakingLoudnessVal_BITSHIFT offset 0xffffffff size 0x4
static constexpr int32_t  speakingLoudnessVal_BITSHIFT{static_cast<int32_t>(0x18)};

/// @brief Field splashLimitCooldown offset 0xffffffff size 0x4
static constexpr float_t  splashLimitCooldown{static_cast<float_t>(0.5f)};

/// @brief Field splashLimitCount offset 0xffffffff size 0x4
static constexpr int32_t  splashLimitCount{static_cast<int32_t>(0x4)};

/// @brief Field _isListeningFor_OnPostInstantiateAllPrefabs, offset: 0x20, size: 0x1, def value: None
 bool  ____isListeningFor_OnPostInstantiateAllPrefabs;

/// @brief Field head, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::VRMap*  ___head;

/// @brief Field rightHand, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::VRMap*  ___rightHand;

/// @brief Field leftHand, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::VRMap*  ___leftHand;

/// @brief Field leftThumb, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::VRMapThumb*  ___leftThumb;

/// @brief Field leftIndex, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::VRMapIndex*  ___leftIndex;

/// @brief Field leftMiddle, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::VRMapMiddle*  ___leftMiddle;

/// @brief Field rightThumb, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::VRMapThumb*  ___rightThumb;

/// @brief Field rightIndex, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::VRMapIndex*  ___rightIndex;

/// @brief Field rightMiddle, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::VRMapMiddle*  ___rightMiddle;

/// @brief Field leftHandNoise, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersLoudNoise>  ___leftHandNoise;

/// @brief Field rightHandNoise, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersLoudNoise>  ___rightHandNoise;

/// @brief Field speakingNoise, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersLoudNoise>  ___speakingNoise;

/// @brief Field previousGrabbedRope, offset: 0x88, size: 0x4, def value: None
 int32_t  ___previousGrabbedRope;

/// @brief Field previousGrabbedRopeBoneIndex, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___previousGrabbedRopeBoneIndex;

/// @brief Field previousGrabbedRopeWasLeft, offset: 0x90, size: 0x1, def value: None
 bool  ___previousGrabbedRopeWasLeft;

/// @brief Field previousGrabbedRopeWasBody, offset: 0x91, size: 0x1, def value: None
 bool  ___previousGrabbedRopeWasBody;

/// @brief Field currentRopeSwing, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>  ___currentRopeSwing;

/// @brief Field currentHoldParent, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___currentHoldParent;

/// @brief Field currentRopeSwingTarget, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___currentRopeSwingTarget;

/// @brief Field lastRopeGrabTimer, offset: 0xb0, size: 0x4, def value: None
 float_t  ___lastRopeGrabTimer;

/// @brief Field shouldLerpToRope, offset: 0xb4, size: 0x1, def value: None
 bool  ___shouldLerpToRope;

/// @brief Field grabbedRopeIndex, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___grabbedRopeIndex;

/// @brief Field grabbedRopeBoneIndex, offset: 0xbc, size: 0x4, def value: None
 int32_t  ___grabbedRopeBoneIndex;

/// @brief Field grabbedRopeIsLeft, offset: 0xc0, size: 0x1, def value: None
 bool  ___grabbedRopeIsLeft;

/// @brief Field grabbedRopeIsBody, offset: 0xc1, size: 0x1, def value: None
 bool  ___grabbedRopeIsBody;

/// @brief Field grabbedRopeIsPhotonView, offset: 0xc2, size: 0x1, def value: None
 bool  ___grabbedRopeIsPhotonView;

/// @brief Field grabbedRopeOffset, offset: 0xc4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___grabbedRopeOffset;

/// @brief Field prevMovingSurfaceID, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___prevMovingSurfaceID;

/// @brief Field movingSurfaceWasLeft, offset: 0xd4, size: 0x1, def value: None
 bool  ___movingSurfaceWasLeft;

/// @brief Field movingSurfaceWasBody, offset: 0xd5, size: 0x1, def value: None
 bool  ___movingSurfaceWasBody;

/// @brief Field movingSurfaceWasMonkeBlock, offset: 0xd6, size: 0x1, def value: None
 bool  ___movingSurfaceWasMonkeBlock;

/// @brief Field mountedMovingSurfaceId, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___mountedMovingSurfaceId;

/// @brief Field mountedMonkeBlock, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___mountedMonkeBlock;

/// @brief Field mountedMovingSurface, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::MovingSurface>  ___mountedMovingSurface;

/// @brief Field mountedMovingSurfaceIsLeft, offset: 0xf0, size: 0x1, def value: None
 bool  ___mountedMovingSurfaceIsLeft;

/// @brief Field mountedMovingSurfaceIsBody, offset: 0xf1, size: 0x1, def value: None
 bool  ___mountedMovingSurfaceIsBody;

/// @brief Field movingSurfaceIsMonkeBlock, offset: 0xf2, size: 0x1, def value: None
 bool  ___movingSurfaceIsMonkeBlock;

/// @brief Field mountedMonkeBlockOffset, offset: 0xf4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___mountedMonkeBlockOffset;

/// @brief Field InOverrideSubscriptionZone, offset: 0x100, size: 0x1, def value: None
 bool  ___InOverrideSubscriptionZone;

/// @brief Field OverrideSubscriptionZoneLocation, offset: 0x104, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___OverrideSubscriptionZoneLocation;

/// @brief Field lastMountedSurfaceTimer, offset: 0x110, size: 0x4, def value: None
 float_t  ___lastMountedSurfaceTimer;

/// @brief Field shouldLerpToMovingSurface, offset: 0x114, size: 0x1, def value: None
 bool  ___shouldLerpToMovingSurface;

/// [Tooltip("- False in \'Gorilla Player Networked.prefab\'.\n- True in \'Local VRRig.prefab/Local Gorilla Player\'.\n- False in \'Local VRRig.prefab/Actual Gorilla\'")]
/// @brief Field isOfflineVRRig, offset: 0x115, size: 0x1, def value: None
 bool  ___isOfflineVRRig;

/// @brief Field mainCamera, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___mainCamera;

/// @brief Field playerOffsetTransform, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___playerOffsetTransform;

/// @brief Field SDKIndex, offset: 0x128, size: 0x4, def value: None
 int32_t  ___SDKIndex;

/// @brief Field isMyPlayer, offset: 0x12c, size: 0x1, def value: None
 bool  ___isMyPlayer;

/// @brief Field leftHandPlayer, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___leftHandPlayer;

/// @brief Field rightHandPlayer, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___rightHandPlayer;

/// @brief Field tagSound, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___tagSound;

/// [SerializeField]
/// @brief Field ratio, offset: 0x148, size: 0x4, def value: None
 float_t  ___ratio;

/// @brief Field headConstraint, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___headConstraint;

/// @brief Field headBodyOffset, offset: 0x158, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___headBodyOffset;

/// @brief Field headMesh, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___headMesh;

/// @brief Field netSyncPos, offset: 0x170, size: 0x8, def value: None
 ::GlobalNamespace::NetworkVector3*  ___netSyncPos;

/// @brief Field jobPos, offset: 0x178, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___jobPos;

/// @brief Field syncRotation, offset: 0x184, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___syncRotation;

/// @brief Field jobRotation, offset: 0x194, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___jobRotation;

/// @brief Field clipToPlay, offset: 0x1a8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___clipToPlay;

/// @brief Field handTapSound, offset: 0x1b0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___handTapSound;

/// @brief Field setMatIndex, offset: 0x1b8, size: 0x4, def value: None
 int32_t  ___setMatIndex;

/// @brief Field lerpValueFingers, offset: 0x1bc, size: 0x4, def value: None
 float_t  ___lerpValueFingers;

/// @brief Field lerpValueBody, offset: 0x1c0, size: 0x4, def value: None
 float_t  ___lerpValueBody;

/// @brief Field backpack, offset: 0x1c8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___backpack;

/// @brief Field leftHandTransform, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftHandTransform;

/// @brief Field rightHandTransform, offset: 0x1d8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightHandTransform;

/// @brief Field bodyTransform, offset: 0x1e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___bodyTransform;

/// @brief Field mainSkin, offset: 0x1e8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___mainSkin;

/// @brief Field defaultSkin, offset: 0x1f0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSkin>  ___defaultSkin;

/// @brief Field faceSkin, offset: 0x1f8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___faceSkin;

/// @brief Field skeleton, offset: 0x200, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::XRaySkeleton>  ___skeleton;

/// @brief Field bodyRenderer, offset: 0x208, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaBodyRenderer>  ___bodyRenderer;

/// @brief Field zoneEntity, offset: 0x210, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ZoneEntityBSP>  ___zoneEntity;

/// @brief Field scoreboardMaterial, offset: 0x218, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___scoreboardMaterial;

/// @brief Field spectatorSkin, offset: 0x220, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___spectatorSkin;

/// @brief Field handSync, offset: 0x228, size: 0x4, def value: None
 int32_t  ___handSync;

/// @brief Field materialsToChangeTo, offset: 0x230, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___materialsToChangeTo;

/// @brief Field red, offset: 0x238, size: 0x4, def value: None
 float_t  ___red;

/// @brief Field green, offset: 0x23c, size: 0x4, def value: None
 float_t  ___green;

/// @brief Field blue, offset: 0x240, size: 0x4, def value: None
 float_t  ___blue;

/// @brief Field playerText1, offset: 0x248, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___playerText1;

/// @brief Field playerNameVisible, offset: 0x250, size: 0x8, def value: None
 ::StringW  ___playerNameVisible;

/// [Tooltip("- True in \'Gorilla Player Networked.prefab\'.\n- True in \'Local VRRig.prefab/Local Gorilla Player\'.\n- False in \'Local VRRig.prefab/Actual Gorilla\'")]
/// @brief Field showName, offset: 0x258, size: 0x1, def value: None
 bool  ___showName;

/// @brief Field cosmeticsObjectRegistry, offset: 0x260, size: 0x8, def value: None
 ::GorillaNetworking::CosmeticItemRegistry*  ___cosmeticsObjectRegistry;

/// @brief Field propHuntHandFollower, offset: 0x268, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHuntHandFollower>  ___propHuntHandFollower;

/// @brief Field taggedById, offset: 0x270, size: 0x4, def value: None
 int32_t  ___taggedById;

/// @brief Field _playerOwnedCosmetics, offset: 0x278, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ____playerOwnedCosmetics;

/// @brief Field _playerOwnedCosmeticsAge, offset: 0x280, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ____playerOwnedCosmeticsAge;

/// @brief Field initializedCosmetics, offset: 0x288, size: 0x1, def value: None
 bool  ___initializedCosmetics;

/// @brief Field _temporaryCosmetics, offset: 0x290, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ____temporaryCosmetics;

/// @brief Field cosmeticSet, offset: 0x298, size: 0x8, def value: None
 ::GorillaNetworking::CosmeticsController_CosmeticSet*  ___cosmeticSet;

/// @brief Field tryOnSet, offset: 0x2a0, size: 0x8, def value: None
 ::GorillaNetworking::CosmeticsController_CosmeticSet*  ___tryOnSet;

/// @brief Field mergedSet, offset: 0x2a8, size: 0x8, def value: None
 ::GorillaNetworking::CosmeticsController_CosmeticSet*  ___mergedSet;

/// @brief Field prevSet, offset: 0x2b0, size: 0x8, def value: None
 ::GorillaNetworking::CosmeticsController_CosmeticSet*  ___prevSet;

/// @brief Field activeCosmetics, offset: 0x2b8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___activeCosmetics;

/// @brief Field cosmeticRetries, offset: 0x2c0, size: 0x4, def value: None
 int32_t  ___cosmeticRetries;

/// @brief Field currentCosmeticTries, offset: 0x2c4, size: 0x4, def value: None
 int32_t  ___currentCosmeticTries;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <cosmeticReferences>k__BackingField, offset: 0x2c8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CosmeticRefRegistry>  ____cosmeticReferences_k__BackingField;

/// @brief Field sizeManager, offset: 0x2d0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SizeManager>  ___sizeManager;

/// @brief Field pitchScale, offset: 0x2d8, size: 0x4, def value: None
 float_t  ___pitchScale;

/// @brief Field pitchOffset, offset: 0x2dc, size: 0x4, def value: None
 float_t  ___pitchOffset;

/// @brief Field IsHaunted, offset: 0x2e0, size: 0x1, def value: None
 bool  ___IsHaunted;

/// @brief Field HauntedVoicePitch, offset: 0x2e4, size: 0x4, def value: None
 float_t  ___HauntedVoicePitch;

/// @brief Field HauntedHearingVolume, offset: 0x2e8, size: 0x4, def value: None
 float_t  ___HauntedHearingVolume;

/// @brief Field UsingHauntedRing, offset: 0x2ec, size: 0x1, def value: None
 bool  ___UsingHauntedRing;

/// @brief Field HauntedRingVoicePitch, offset: 0x2f0, size: 0x4, def value: None
 float_t  ___HauntedRingVoicePitch;

/// @brief Field cosmeticPitchShift, offset: 0x2f4, size: 0x4, def value: None
 float_t  ___cosmeticPitchShift;

/// @brief Field cosmeticVolumeShift, offset: 0x2f8, size: 0x4, def value: None
 float_t  ___cosmeticVolumeShift;

/// @brief Field cosmeticPitchActive, offset: 0x2fc, size: 0x1, def value: None
 bool  ___cosmeticPitchActive;

/// @brief Field cosmeticVolumeActive, offset: 0x2fd, size: 0x1, def value: None
 bool  ___cosmeticVolumeActive;

/// @brief Field anyShiftedVoiceCosmetic, offset: 0x2fe, size: 0x1, def value: None
 bool  ___anyShiftedVoiceCosmetic;

/// @brief Field voiceShiftCosmeticsDirty, offset: 0x2ff, size: 0x1, def value: None
 bool  ___voiceShiftCosmeticsDirty;

/// @brief Field VoiceShiftCosmetics, offset: 0x300, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VoiceShiftCosmetic>>*  ___VoiceShiftCosmetics;

/// @brief Field friendshipBraceletLeftHand, offset: 0x308, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::FriendshipBracelet>  ___friendshipBraceletLeftHand;

/// @brief Field nonCosmeticLeftHandItem, offset: 0x310, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NonCosmeticHandItem>  ___nonCosmeticLeftHandItem;

/// @brief Field friendshipBraceletRightHand, offset: 0x318, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::FriendshipBracelet>  ___friendshipBraceletRightHand;

/// @brief Field nonCosmeticRightHandItem, offset: 0x320, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NonCosmeticHandItem>  ___nonCosmeticRightHandItem;

/// @brief Field hoverboardVisual, offset: 0x328, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HoverboardVisual>  ___hoverboardVisual;

/// @brief Field hoverboardEnabledCount, offset: 0x330, size: 0x4, def value: None
 int32_t  ___hoverboardEnabledCount;

/// @brief Field bodyHolds, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HoldableHand>  ___bodyHolds;

/// @brief Field leftHolds, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HoldableHand>  ___leftHolds;

/// @brief Field rightHolds, offset: 0x348, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HoldableHand>  ___rightHolds;

/// @brief Field leftHandHoldsPlayer, offset: 0x350, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  ___leftHandHoldsPlayer;

/// @brief Field rightHandHoldsPlayer, offset: 0x358, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  ___rightHandHoldsPlayer;

/// @brief Field leftHandLink, offset: 0x360, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TakeMyHand_HandLink>  ___leftHandLink;

/// @brief Field rightHandLink, offset: 0x368, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TakeMyHand_HandLink>  ___rightHandLink;

/// [CompilerGenerated]
/// @brief Field <LastTouchedGroundAtNetworkTime>k__BackingField, offset: 0x370, size: 0x4, def value: None
 float_t  ____LastTouchedGroundAtNetworkTime_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LastHandTouchedGroundAtNetworkTime>k__BackingField, offset: 0x374, size: 0x4, def value: None
 float_t  ____LastHandTouchedGroundAtNetworkTime_k__BackingField;

/// @brief Field nameTagAnchor, offset: 0x378, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___nameTagAnchor;

/// @brief Field frozenEffect, offset: 0x380, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___frozenEffect;

/// @brief Field iceCubeLeft, offset: 0x388, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___iceCubeLeft;

/// @brief Field iceCubeRight, offset: 0x390, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___iceCubeRight;

/// @brief Field frozenEffectMaxY, offset: 0x398, size: 0x4, def value: None
 float_t  ___frozenEffectMaxY;

/// @brief Field frozenEffectMaxHorizontalScale, offset: 0x39c, size: 0x4, def value: None
 float_t  ___frozenEffectMaxHorizontalScale;

/// @brief Field FPVEffectsParent, offset: 0x3a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___FPVEffectsParent;

/// @brief Field TemporaryCosmeticEffects, offset: 0x3a8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>*  ___TemporaryCosmeticEffects;

/// @brief Field _nextUpdateTime, offset: 0x3b0, size: 0x4, def value: None
 float_t  ____nextUpdateTime;

/// @brief Field reliableState, offset: 0x3b8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRigReliableState>  ___reliableState;

/// [SerializeField]
/// @brief Field MouthPosition, offset: 0x3c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___MouthPosition;

/// [CompilerGenerated]
/// @brief Field <CurrentCosmeticSkin>k__BackingField, offset: 0x3c8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSkin>  ____CurrentCosmeticSkin_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CurrentModeSkin>k__BackingField, offset: 0x3d0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSkin>  ____CurrentModeSkin_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TemporaryEffectSkin>k__BackingField, offset: 0x3d8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSkin>  ____TemporaryEffectSkin_k__BackingField;

/// [SerializeField]
/// @brief Field rigContainer, offset: 0x3e0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigContainer>  ___rigContainer;

/// @brief Field OnNameChanged, offset: 0x3e8, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  ___OnNameChanged;

/// @brief Field remoteVelocity, offset: 0x3f0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___remoteVelocity;

/// @brief Field remoteLatestTimestamp, offset: 0x400, size: 0x8, def value: None
 double_t  ___remoteLatestTimestamp;

/// @brief Field remoteCorrectionNeeded, offset: 0x408, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___remoteCorrectionNeeded;

/// @brief Field stealthTimer, offset: 0x414, size: 0x4, def value: None
 float_t  ___stealthTimer;

/// @brief Field stealthManager, offset: 0x418, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::GorillaAmbushManager>  ___stealthManager;

/// @brief Field layerChanger, offset: 0x420, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::LayerChanger>  ___layerChanger;

/// @brief Field frozenEffectMinY, offset: 0x428, size: 0x4, def value: None
 float_t  ___frozenEffectMinY;

/// @brief Field frozenEffectMinHorizontalScale, offset: 0x42c, size: 0x4, def value: None
 float_t  ___frozenEffectMinHorizontalScale;

/// @brief Field frozenTimeElapsed, offset: 0x430, size: 0x4, def value: None
 float_t  ___frozenTimeElapsed;

/// @brief Field CosmeticEffectPack, offset: 0x438, size: 0x8, def value: None
 ::UnityW<::TagEffects::TagEffectPack>  ___CosmeticEffectPack;

/// @brief Field GorillaSnapTurningComp, offset: 0x440, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  ___GorillaSnapTurningComp;

/// @brief Field turningCompInitialized, offset: 0x448, size: 0x1, def value: None
 bool  ___turningCompInitialized;

/// @brief Field turnType, offset: 0x450, size: 0x8, def value: None
 ::StringW  ___turnType;

/// @brief Field turnFactor, offset: 0x458, size: 0x4, def value: None
 int32_t  ___turnFactor;

/// @brief Field fps, offset: 0x45c, size: 0x4, def value: None
 int32_t  ___fps;

/// [CompilerGenerated]
/// @brief Field <PostTickRunning>k__BackingField, offset: 0x460, size: 0x1, def value: None
 bool  ____PostTickRunning_k__BackingField;

/// @brief Field partyMemberStatus, offset: 0x464, size: 0x4, def value: None
 ::GlobalNamespace::VRRig_PartyMemberStatus  ___partyMemberStatus;

/// @brief Field inTryOnRoom, offset: 0x468, size: 0x1, def value: None
 bool  ___inTryOnRoom;

/// @brief Field inTempCosmSpace, offset: 0x469, size: 0x1, def value: None
 bool  ___inTempCosmSpace;

/// @brief Field remoteCycleStates, offset: 0x470, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CosmeticsController_CollectionState>*  ___remoteCycleStates;

/// @brief Field scratchDisplayList, offset: 0x478, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*  ___scratchDisplayList;

/// @brief Field cycleStatesArray, offset: 0x480, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___cycleStatesArray;

/// @brief Field muted, offset: 0x488, size: 0x1, def value: None
 bool  ___muted;

/// @brief Field lastScaleFactor, offset: 0x48c, size: 0x4, def value: None
 float_t  ___lastScaleFactor;

/// @brief Field scaleMultiplier, offset: 0x490, size: 0x4, def value: None
 float_t  ___scaleMultiplier;

/// @brief Field nativeScale, offset: 0x494, size: 0x4, def value: None
 float_t  ___nativeScale;

/// @brief Field timeSpawned, offset: 0x498, size: 0x4, def value: None
 float_t  ___timeSpawned;

/// @brief Field doNotLerpConstant, offset: 0x49c, size: 0x4, def value: None
 float_t  ___doNotLerpConstant;

/// @brief Field tempString, offset: 0x4a0, size: 0x8, def value: None
 ::StringW  ___tempString;

/// @brief Field creator, offset: 0x4a8, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___creator;

/// @brief Field speedArray, offset: 0x4b0, size: 0x8, def value: None
 ::ArrayW<float_t>  ___speedArray;

/// @brief Field handLerpValues, offset: 0x4b8, size: 0x8, def value: None
 double_t  ___handLerpValues;

/// @brief Field initialized, offset: 0x4c0, size: 0x1, def value: None
 bool  ___initialized;

/// [FormerlySerializedAs("battleBalloons")]
/// @brief Field paintbrawlBalloons, offset: 0x4c8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PaintbrawlBalloons>  ___paintbrawlBalloons;

/// @brief Field tempInt, offset: 0x4d0, size: 0x4, def value: None
 int32_t  ___tempInt;

/// @brief Field myBodyDockPositions, offset: 0x4d8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BodyDockPositions>  ___myBodyDockPositions;

/// @brief Field lavaParticleSystem, offset: 0x4e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___lavaParticleSystem;

/// @brief Field rockParticleSystem, offset: 0x4e8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___rockParticleSystem;

/// @brief Field iceParticleSystem, offset: 0x4f0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___iceParticleSystem;

/// @brief Field snowFlakeParticleSystem, offset: 0x4f8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___snowFlakeParticleSystem;

/// @brief Field leftHandGooParticleSystem, offset: 0x500, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___leftHandGooParticleSystem;

/// @brief Field rightHandGooParticleSystem, offset: 0x508, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___rightHandGooParticleSystem;

/// @brief Field tempItemName, offset: 0x510, size: 0x8, def value: None
 ::StringW  ___tempItemName;

/// @brief Field tempItem, offset: 0x518, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ___tempItem;

/// @brief Field tempItemId, offset: 0x5b0, size: 0x8, def value: None
 ::StringW  ___tempItemId;

/// @brief Field tempItemCost, offset: 0x5b8, size: 0x4, def value: None
 int32_t  ___tempItemCost;

/// @brief Field leftHandHoldableStatus, offset: 0x5bc, size: 0x4, def value: None
 int32_t  ___leftHandHoldableStatus;

/// @brief Field rightHandHoldableStatus, offset: 0x5c0, size: 0x4, def value: None
 int32_t  ___rightHandHoldableStatus;

/// [Tooltip("This has to match the drumsAS array in DrumsItem.cs.")]
/// [SerializeReference]
/// @brief Field musicDrums, offset: 0x5c8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  ___musicDrums;

/// @brief Field instrumentSelfOnly, offset: 0x5d0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  ___instrumentSelfOnly;

/// @brief Field geodeCrackingSound, offset: 0x5d8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___geodeCrackingSound;

/// @brief Field bonkTime, offset: 0x5e0, size: 0x4, def value: None
 float_t  ___bonkTime;

/// @brief Field bonkCooldown, offset: 0x5e4, size: 0x4, def value: None
 float_t  ___bonkCooldown;

/// @brief Field tempVRRig, offset: 0x5e8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___tempVRRig;

/// @brief Field huntComputer, offset: 0x5f0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___huntComputer;

/// @brief Field builderResizeWatch, offset: 0x5f8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___builderResizeWatch;

/// @brief Field builderArmShelfLeft, offset: 0x600, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderArmShelf>  ___builderArmShelfLeft;

/// @brief Field builderArmShelfRight, offset: 0x608, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderArmShelf>  ___builderArmShelfRight;

/// @brief Field guardianEjectWatch, offset: 0x610, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___guardianEjectWatch;

/// @brief Field vStumpReturnWatch, offset: 0x618, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___vStumpReturnWatch;

/// @brief Field rankedTimerWatch, offset: 0x620, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rankedTimerWatch;

/// @brief Field superInfectionHand, offset: 0x628, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SuperInfectionHandDisplay>  ___superInfectionHand;

/// @brief Field projectileWeapon, offset: 0x630, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProjectileWeapon>  ___projectileWeapon;

/// @brief Field myPhotonVoiceView, offset: 0x638, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::PUN::PhotonVoiceView>  ___myPhotonVoiceView;

/// @brief Field senderRig, offset: 0x640, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___senderRig;

/// @brief Field isInitialized, offset: 0x648, size: 0x1, def value: None
 bool  ___isInitialized;

/// @brief Field velocityHistoryList, offset: 0x650, size: 0x8, def value: None
 ::GlobalNamespace::CircularBuffer_1<::GlobalNamespace::VRRig_VelocityTime>*  ___velocityHistoryList;

/// @brief Field velocityHistoryMaxLength, offset: 0x658, size: 0x4, def value: None
 int32_t  ___velocityHistoryMaxLength;

/// @brief Field lastPosition, offset: 0x65c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

/// @brief Field splashEffectTimes, offset: 0x668, size: 0x8, def value: None
 ::ArrayW<float_t>  ___splashEffectTimes;

/// @brief Field voiceAudio, offset: 0x670, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___voiceAudio;

/// @brief Field remoteUseReplacementVoice, offset: 0x678, size: 0x1, def value: None
 bool  ___remoteUseReplacementVoice;

/// @brief Field localUseReplacementVoice, offset: 0x679, size: 0x1, def value: None
 bool  ___localUseReplacementVoice;

/// @brief Field currentMicWrapper, offset: 0x680, size: 0x8, def value: None
 ::Photon::Voice::Unity::MicWrapper*  ___currentMicWrapper;

/// @brief Field audioDesc, offset: 0x688, size: 0x8, def value: None
 ::Photon::Voice::IAudioDesc*  ___audioDesc;

/// @brief Field speakingLoudness, offset: 0x690, size: 0x4, def value: None
 float_t  ___speakingLoudness;

/// @brief Field shouldSendSpeakingLoudness, offset: 0x694, size: 0x1, def value: None
 bool  ___shouldSendSpeakingLoudness;

/// @brief Field replacementVoiceLoudnessThreshold, offset: 0x698, size: 0x4, def value: None
 float_t  ___replacementVoiceLoudnessThreshold;

/// @brief Field replacementVoiceDetectionDelay, offset: 0x69c, size: 0x4, def value: None
 int32_t  ___replacementVoiceDetectionDelay;

/// @brief Field myMouthFlap, offset: 0x6a0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaMouthFlap>  ___myMouthFlap;

/// @brief Field mySpeakerLoudness, offset: 0x6a8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  ___mySpeakerLoudness;

/// @brief Field myReplacementVoice, offset: 0x6b0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ReplacementVoice>  ___myReplacementVoice;

/// @brief Field myEyeExpressions, offset: 0x6b8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaEyeExpressions>  ___myEyeExpressions;

/// [SerializeField]
/// @brief Field netView, offset: 0x6c0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkView>  ___netView;

/// [SerializeField]
/// @brief Field rigSerializer, offset: 0x6c8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRigSerializer>  ___rigSerializer;

/// [Obsolete("Deprecated, this is unreliable, use Creator", false)]
/// @brief Field OwningNetPlayer, offset: 0x6d0, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___OwningNetPlayer;

/// [SerializeField]
/// @brief Field sharedFXSettings, offset: 0x6d8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FXSystemSettings>  ___sharedFXSettings;

/// @brief Field fxSettings, offset: 0x6e0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FXSystemSettings>  ___fxSettings;

/// [SerializeField]
/// @brief Field tapPointDistance, offset: 0x6e8, size: 0x4, def value: None
 float_t  ___tapPointDistance;

/// [SerializeField]
/// @brief Field handSpeedToVolumeModifier, offset: 0x6ec, size: 0x4, def value: None
 float_t  ___handSpeedToVolumeModifier;

/// [SerializeField]
/// @brief Field _leftHandEffect, offset: 0x6f0, size: 0x8, def value: None
 ::GlobalNamespace::HandEffectContext*  ____leftHandEffect;

/// [SerializeField]
/// @brief Field _rightHandEffect, offset: 0x6f8, size: 0x8, def value: None
 ::GlobalNamespace::HandEffectContext*  ____rightHandEffect;

/// [SerializeField]
/// @brief Field _extraLeftHandEffect, offset: 0x700, size: 0x8, def value: None
 ::GlobalNamespace::HandEffectContext*  ____extraLeftHandEffect;

/// [SerializeField]
/// @brief Field _extraRightHandEffect, offset: 0x708, size: 0x8, def value: None
 ::GlobalNamespace::HandEffectContext*  ____extraRightHandEffect;

/// [SerializeField]
/// @brief Field renderTransform, offset: 0x710, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___renderTransform;

/// @brief Field _gamePlayerRef, offset: 0x718, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GamePlayer>  ____gamePlayerRef;

/// @brief Field playerWasHaunted, offset: 0x720, size: 0x1, def value: None
 bool  ___playerWasHaunted;

/// @brief Field nonHauntedVolume, offset: 0x724, size: 0x4, def value: None
 float_t  ___nonHauntedVolume;

/// [SerializeField]
/// @brief Field voicePitchForRelativeScale, offset: 0x728, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___voicePitchForRelativeScale;

/// @brief Field LocalTrajectoryOverridePosition, offset: 0x730, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___LocalTrajectoryOverridePosition;

/// @brief Field LocalTrajectoryOverrideVelocity, offset: 0x73c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___LocalTrajectoryOverrideVelocity;

/// @brief Field LocalTrajectoryOverrideBlend, offset: 0x748, size: 0x4, def value: None
 float_t  ___LocalTrajectoryOverrideBlend;

/// [SerializeField]
/// @brief Field LocalTrajectoryOverrideDuration, offset: 0x74c, size: 0x4, def value: None
 float_t  ___LocalTrajectoryOverrideDuration;

/// @brief Field localOverrideIsBody, offset: 0x750, size: 0x1, def value: None
 bool  ___localOverrideIsBody;

/// @brief Field localOverrideIsLeftHand, offset: 0x751, size: 0x1, def value: None
 bool  ___localOverrideIsLeftHand;

/// @brief Field localOverrideGrabbingHand, offset: 0x758, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___localOverrideGrabbingHand;

/// @brief Field localGrabOverrideBlend, offset: 0x760, size: 0x4, def value: None
 float_t  ___localGrabOverrideBlend;

/// [SerializeField]
/// @brief Field LocalGrabOverrideDuration, offset: 0x764, size: 0x4, def value: None
 float_t  ___LocalGrabOverrideDuration;

/// @brief Field voiceSampleBuffer, offset: 0x768, size: 0x8, def value: None
 ::ArrayW<float_t>  ___voiceSampleBuffer;

/// @brief Field lateUpdateCallbacks, offset: 0x770, size: 0x8, def value: None
 ::GlobalNamespace::CallbackContainer_1<::GlobalNamespace::ICallBack*>*  ___lateUpdateCallbacks;

/// @brief Field nextLocalVelocityStoreTimestamp, offset: 0x778, size: 0x4, def value: None
 float_t  ___nextLocalVelocityStoreTimestamp;

/// @brief Field IsInvisibleToLocalPlayer, offset: 0x77c, size: 0x1, def value: None
 bool  ___IsInvisibleToLocalPlayer;

/// @brief Field myIk, offset: 0x780, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaIK>  ___myIk;

/// @brief Field tempVec, offset: 0x788, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___tempVec;

/// @brief Field tempQuat, offset: 0x794, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___tempQuat;

/// @brief Field OnMaterialIndexChanged, offset: 0x7a8, size: 0x8, def value: None
 ::System::Action_2<int32_t,int32_t>*  ___OnMaterialIndexChanged;

/// [SerializeField]
/// @brief Field cosmeticsActivationPS, offset: 0x7b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___cosmeticsActivationPS;

/// [SerializeField]
/// @brief Field cosmeticsActivationSBP, offset: 0x7b8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___cosmeticsActivationSBP;

/// @brief Field playerColor, offset: 0x7c0, size: 0x10, def value: None
 ::UnityEngine::Color  ___playerColor;

/// @brief Field colorInitialized, offset: 0x7d0, size: 0x1, def value: None
 bool  ___colorInitialized;

/// @brief Field onColorInitialized, offset: 0x7d8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Color>*  ___onColorInitialized;

/// [CompilerGenerated]
/// @brief Field OnColorChanged, offset: 0x7e0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Color>*  ___OnColorChanged;

/// [CompilerGenerated]
/// @brief Field OnPlayerNameVisibleChanged, offset: 0x7e8, size: 0x8, def value: None
 ::System::Action*  ___OnPlayerNameVisibleChanged;

/// @brief Field m_sentRankedScore, offset: 0x7f0, size: 0x1, def value: None
 bool  ___m_sentRankedScore;

/// [CompilerGenerated]
/// @brief Field OnQuestScoreChanged, offset: 0x7f8, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnQuestScoreChanged;

/// @brief Field currentQuestScore, offset: 0x800, size: 0x4, def value: None
 int32_t  ___currentQuestScore;

/// @brief Field _scoreUpdated, offset: 0x804, size: 0x1, def value: None
 bool  ____scoreUpdated;

/// @brief Field updateQuestCallLimit, offset: 0x808, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___updateQuestCallLimit;

/// [CompilerGenerated]
/// @brief Field OnRankedSubtierChanged, offset: 0x810, size: 0x8, def value: None
 ::System::Action_2<int32_t,int32_t>*  ___OnRankedSubtierChanged;

/// @brief Field currentRankedELO, offset: 0x818, size: 0x4, def value: None
 float_t  ___currentRankedELO;

/// @brief Field currentRankedSubTierQuest, offset: 0x81c, size: 0x4, def value: None
 int32_t  ___currentRankedSubTierQuest;

/// @brief Field currentRankedSubTierPC, offset: 0x820, size: 0x4, def value: None
 int32_t  ___currentRankedSubTierPC;

/// @brief Field _rankedInfoUpdated, offset: 0x824, size: 0x1, def value: None
 bool  ____rankedInfoUpdated;

/// @brief Field updateRankedInfoCallLimit, offset: 0x828, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___updateRankedInfoCallLimit;

/// @brief Field rayCastNonAllocColliders, offset: 0x830, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___rayCastNonAllocColliders;

/// @brief Field displacementZone, offset: 0x838, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigDisplacementZone>  ___displacementZone;

/// @brief Field renderTransformDisplaced, offset: 0x840, size: 0x1, def value: None
 bool  ___renderTransformDisplaced;

/// @brief Field cachedRenderTransformPos, offset: 0x844, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___cachedRenderTransformPos;

/// @brief Field portalShenanigansBit, offset: 0x850, size: 0x1, def value: None
 bool  ___portalShenanigansBit;

/// @brief Field justTeleportedSendsRemaining, offset: 0x854, size: 0x4, def value: None
 int32_t  ___justTeleportedSendsRemaining;

/// @brief Field snapNextRigUpdate, offset: 0x858, size: 0x1, def value: None
 bool  ___snapNextRigUpdate;

/// @brief Field pendingCosmeticUpdate, offset: 0x859, size: 0x1, def value: None
 bool  ___pendingCosmeticUpdate;

/// [CompilerGenerated]
/// @brief Field <IsFrozen>k__BackingField, offset: 0x85a, size: 0x1, def value: None
 bool  ____IsFrozen_k__BackingField;

/// @brief Field showGoldNameTag, offset: 0x85b, size: 0x1, def value: None
 bool  ___showGoldNameTag;

/// @brief Field CosmeticHandEffectsOverride_Right, offset: 0x860, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HandEffectsOverrideCosmetic>>*  ___CosmeticHandEffectsOverride_Right;

/// @brief Field CosmeticHandEffectsOverride_Left, offset: 0x868, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HandEffectsOverrideCosmetic>>*  ___CosmeticHandEffectsOverride_Left;

/// @brief Field loudnessCheckFrame, offset: 0x870, size: 0x4, def value: None
 int32_t  ___loudnessCheckFrame;

/// @brief Field frameScale, offset: 0x874, size: 0x4, def value: None
 float_t  ___frameScale;

/// @brief Field subDataCache, offset: 0x878, size: 0x28, def value: None
 ::GlobalNamespace::SubscriptionManager_SubscriptionDetails  ___subDataCache;

/// @brief Field deactivatedRenderers, offset: 0x8a0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___deactivatedRenderers;

/// [CompilerGenerated]
/// @brief Field OnDataChange, offset: 0x8a8, size: 0x8, def value: None
 ::System::Action*  ___OnDataChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRRig, ____isListeningFor_OnPostInstantiateAllPrefabs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___head) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___rightHand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___leftHand) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___leftThumb) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___leftIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___leftMiddle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___rightThumb) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___rightIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___rightMiddle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___leftHandNoise) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___rightHandNoise) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___speakingNoise) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___previousGrabbedRope) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___previousGrabbedRopeBoneIndex) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___previousGrabbedRopeWasLeft) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___previousGrabbedRopeWasBody) == 0x91, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___currentRopeSwing) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___currentHoldParent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___currentRopeSwingTarget) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___lastRopeGrabTimer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___shouldLerpToRope) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___grabbedRopeIndex) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___grabbedRopeBoneIndex) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___grabbedRopeIsLeft) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___grabbedRopeIsBody) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___grabbedRopeIsPhotonView) == 0xc2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___grabbedRopeOffset) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___prevMovingSurfaceID) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___movingSurfaceWasLeft) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___movingSurfaceWasBody) == 0xd5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___movingSurfaceWasMonkeBlock) == 0xd6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___mountedMovingSurfaceId) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___mountedMonkeBlock) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___mountedMovingSurface) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___mountedMovingSurfaceIsLeft) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___mountedMovingSurfaceIsBody) == 0xf1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___movingSurfaceIsMonkeBlock) == 0xf2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___mountedMonkeBlockOffset) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___InOverrideSubscriptionZone) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___OverrideSubscriptionZoneLocation) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___lastMountedSurfaceTimer) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___shouldLerpToMovingSurface) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___isOfflineVRRig) == 0x115, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___mainCamera) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___playerOffsetTransform) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___SDKIndex) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___isMyPlayer) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___leftHandPlayer) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___rightHandPlayer) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___tagSound) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___ratio) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___headConstraint) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___headBodyOffset) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___headMesh) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___netSyncPos) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___jobPos) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___syncRotation) == 0x184, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___jobRotation) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___clipToPlay) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___handTapSound) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___setMatIndex) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___lerpValueFingers) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___lerpValueBody) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___backpack) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___leftHandTransform) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___rightHandTransform) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___bodyTransform) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___mainSkin) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___defaultSkin) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___faceSkin) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___skeleton) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___bodyRenderer) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___zoneEntity) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___scoreboardMaterial) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___spectatorSkin) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___handSync) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___materialsToChangeTo) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___red) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___green) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___blue) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___playerText1) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___playerNameVisible) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___showName) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___cosmeticsObjectRegistry) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___propHuntHandFollower) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___taggedById) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____playerOwnedCosmetics) == 0x278, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____playerOwnedCosmeticsAge) == 0x280, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___initializedCosmetics) == 0x288, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____temporaryCosmetics) == 0x290, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___cosmeticSet) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___tryOnSet) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___mergedSet) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___prevSet) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___activeCosmetics) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___cosmeticRetries) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___currentCosmeticTries) == 0x2c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____cosmeticReferences_k__BackingField) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___sizeManager) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___pitchScale) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___pitchOffset) == 0x2dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___IsHaunted) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___HauntedVoicePitch) == 0x2e4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___HauntedHearingVolume) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___UsingHauntedRing) == 0x2ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___HauntedRingVoicePitch) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___cosmeticPitchShift) == 0x2f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___cosmeticVolumeShift) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___cosmeticPitchActive) == 0x2fc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___cosmeticVolumeActive) == 0x2fd, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___anyShiftedVoiceCosmetic) == 0x2fe, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___voiceShiftCosmeticsDirty) == 0x2ff, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___VoiceShiftCosmetics) == 0x300, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___friendshipBraceletLeftHand) == 0x308, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___nonCosmeticLeftHandItem) == 0x310, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___friendshipBraceletRightHand) == 0x318, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___nonCosmeticRightHandItem) == 0x320, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___hoverboardVisual) == 0x328, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___hoverboardEnabledCount) == 0x330, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___bodyHolds) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___leftHolds) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___rightHolds) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___leftHandHoldsPlayer) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___rightHandHoldsPlayer) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___leftHandLink) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___rightHandLink) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____LastTouchedGroundAtNetworkTime_k__BackingField) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____LastHandTouchedGroundAtNetworkTime_k__BackingField) == 0x374, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___nameTagAnchor) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___frozenEffect) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___iceCubeLeft) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___iceCubeRight) == 0x390, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___frozenEffectMaxY) == 0x398, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___frozenEffectMaxHorizontalScale) == 0x39c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___FPVEffectsParent) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___TemporaryCosmeticEffects) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____nextUpdateTime) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___reliableState) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___MouthPosition) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____CurrentCosmeticSkin_k__BackingField) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____CurrentModeSkin_k__BackingField) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____TemporaryEffectSkin_k__BackingField) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___rigContainer) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___OnNameChanged) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___remoteVelocity) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___remoteLatestTimestamp) == 0x400, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___remoteCorrectionNeeded) == 0x408, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___stealthTimer) == 0x414, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___stealthManager) == 0x418, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___layerChanger) == 0x420, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___frozenEffectMinY) == 0x428, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___frozenEffectMinHorizontalScale) == 0x42c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___frozenTimeElapsed) == 0x430, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___CosmeticEffectPack) == 0x438, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___GorillaSnapTurningComp) == 0x440, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___turningCompInitialized) == 0x448, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___turnType) == 0x450, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___turnFactor) == 0x458, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___fps) == 0x45c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____PostTickRunning_k__BackingField) == 0x460, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___partyMemberStatus) == 0x464, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___inTryOnRoom) == 0x468, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___inTempCosmSpace) == 0x469, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___remoteCycleStates) == 0x470, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___scratchDisplayList) == 0x478, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___cycleStatesArray) == 0x480, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___muted) == 0x488, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___lastScaleFactor) == 0x48c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___scaleMultiplier) == 0x490, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___nativeScale) == 0x494, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___timeSpawned) == 0x498, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___doNotLerpConstant) == 0x49c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___tempString) == 0x4a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___creator) == 0x4a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___speedArray) == 0x4b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___handLerpValues) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___initialized) == 0x4c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___paintbrawlBalloons) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___tempInt) == 0x4d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___myBodyDockPositions) == 0x4d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___lavaParticleSystem) == 0x4e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___rockParticleSystem) == 0x4e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___iceParticleSystem) == 0x4f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___snowFlakeParticleSystem) == 0x4f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___leftHandGooParticleSystem) == 0x500, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___rightHandGooParticleSystem) == 0x508, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___tempItemName) == 0x510, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___tempItem) == 0x518, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___tempItemId) == 0x5b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___tempItemCost) == 0x5b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___leftHandHoldableStatus) == 0x5bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___rightHandHoldableStatus) == 0x5c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___musicDrums) == 0x5c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___instrumentSelfOnly) == 0x5d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___geodeCrackingSound) == 0x5d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___bonkTime) == 0x5e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___bonkCooldown) == 0x5e4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___tempVRRig) == 0x5e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___huntComputer) == 0x5f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___builderResizeWatch) == 0x5f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___builderArmShelfLeft) == 0x600, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___builderArmShelfRight) == 0x608, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___guardianEjectWatch) == 0x610, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___vStumpReturnWatch) == 0x618, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___rankedTimerWatch) == 0x620, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___superInfectionHand) == 0x628, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___projectileWeapon) == 0x630, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___myPhotonVoiceView) == 0x638, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___senderRig) == 0x640, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___isInitialized) == 0x648, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___velocityHistoryList) == 0x650, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___velocityHistoryMaxLength) == 0x658, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___lastPosition) == 0x65c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___splashEffectTimes) == 0x668, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___voiceAudio) == 0x670, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___remoteUseReplacementVoice) == 0x678, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___localUseReplacementVoice) == 0x679, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___currentMicWrapper) == 0x680, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___audioDesc) == 0x688, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___speakingLoudness) == 0x690, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___shouldSendSpeakingLoudness) == 0x694, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___replacementVoiceLoudnessThreshold) == 0x698, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___replacementVoiceDetectionDelay) == 0x69c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___myMouthFlap) == 0x6a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___mySpeakerLoudness) == 0x6a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___myReplacementVoice) == 0x6b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___myEyeExpressions) == 0x6b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___netView) == 0x6c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___rigSerializer) == 0x6c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___OwningNetPlayer) == 0x6d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___sharedFXSettings) == 0x6d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___fxSettings) == 0x6e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___tapPointDistance) == 0x6e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___handSpeedToVolumeModifier) == 0x6ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____leftHandEffect) == 0x6f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____rightHandEffect) == 0x6f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____extraLeftHandEffect) == 0x700, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____extraRightHandEffect) == 0x708, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___renderTransform) == 0x710, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____gamePlayerRef) == 0x718, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___playerWasHaunted) == 0x720, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___nonHauntedVolume) == 0x724, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___voicePitchForRelativeScale) == 0x728, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___LocalTrajectoryOverridePosition) == 0x730, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___LocalTrajectoryOverrideVelocity) == 0x73c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___LocalTrajectoryOverrideBlend) == 0x748, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___LocalTrajectoryOverrideDuration) == 0x74c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___localOverrideIsBody) == 0x750, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___localOverrideIsLeftHand) == 0x751, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___localOverrideGrabbingHand) == 0x758, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___localGrabOverrideBlend) == 0x760, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___LocalGrabOverrideDuration) == 0x764, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___voiceSampleBuffer) == 0x768, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___lateUpdateCallbacks) == 0x770, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___nextLocalVelocityStoreTimestamp) == 0x778, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___IsInvisibleToLocalPlayer) == 0x77c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___myIk) == 0x780, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___tempVec) == 0x788, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___tempQuat) == 0x794, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___OnMaterialIndexChanged) == 0x7a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___cosmeticsActivationPS) == 0x7b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___cosmeticsActivationSBP) == 0x7b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___playerColor) == 0x7c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___colorInitialized) == 0x7d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___onColorInitialized) == 0x7d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___OnColorChanged) == 0x7e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___OnPlayerNameVisibleChanged) == 0x7e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___m_sentRankedScore) == 0x7f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___OnQuestScoreChanged) == 0x7f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___currentQuestScore) == 0x800, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____scoreUpdated) == 0x804, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___updateQuestCallLimit) == 0x808, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___OnRankedSubtierChanged) == 0x810, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___currentRankedELO) == 0x818, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___currentRankedSubTierQuest) == 0x81c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___currentRankedSubTierPC) == 0x820, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____rankedInfoUpdated) == 0x824, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___updateRankedInfoCallLimit) == 0x828, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___rayCastNonAllocColliders) == 0x830, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___displacementZone) == 0x838, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___renderTransformDisplaced) == 0x840, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___cachedRenderTransformPos) == 0x844, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___portalShenanigansBit) == 0x850, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___justTeleportedSendsRemaining) == 0x854, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___snapNextRigUpdate) == 0x858, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___pendingCosmeticUpdate) == 0x859, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ____IsFrozen_k__BackingField) == 0x85a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___showGoldNameTag) == 0x85b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___CosmeticHandEffectsOverride_Right) == 0x860, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___CosmeticHandEffectsOverride_Left) == 0x868, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___loudnessCheckFrame) == 0x870, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___frameScale) == 0x874, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___subDataCache) == 0x878, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___deactivatedRenderers) == 0x8a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRig, ___OnDataChange) == 0x8a8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRRig) == 0x8b0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRRig/<>c
class CORDL_TYPE VRRig___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::VRRig___c*  __9;

/// @brief Field <>9__464_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__464_0, put=setStaticF___9__464_0)) ::System::Predicate_1<char16_t>*  __9__464_0;

/// @brief Field <>9__524_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__524_0, put=setStaticF___9__524_0)) ::System::Action_1<::UnityEngine::Color>*  __9__524_0;

static inline ::GlobalNamespace::VRRig___c* New_ctor() ;

/// @brief Method <NormalizeName>b__464_0, addr 0x5746044, size 0x58, virtual false, abstract: false, final false
inline bool _NormalizeName_b__464_0(char16_t  c) ;

/// @brief Method <SetColor>b__524_0, addr 0x574609c, size 0x4, virtual false, abstract: false, final false
inline void _SetColor_b__524_0(::UnityEngine::Color  color1) ;

/// @brief Method .ctor, addr 0x574603c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::VRRig___c* getStaticF___9() ;

static inline ::System::Predicate_1<char16_t>* getStaticF___9__464_0() ;

static inline ::System::Action_1<::UnityEngine::Color>* getStaticF___9__524_0() ;

static inline void setStaticF___9(::GlobalNamespace::VRRig___c*  value) ;

static inline void setStaticF___9__464_0(::System::Predicate_1<char16_t>*  value) ;

static inline void setStaticF___9__524_0(::System::Action_1<::UnityEngine::Color>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRRig___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRRig___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRRig___c(VRRig___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRRig___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRRig___c(VRRig___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1272};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::VRRig___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
