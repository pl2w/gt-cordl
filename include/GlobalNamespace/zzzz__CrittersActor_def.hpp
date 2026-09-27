#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersActor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__JointDrive_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__SoftJointLimitSpring_def.hpp"
#include "UnityEngine/zzzz__SoftJointLimit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersActor)
namespace GlobalNamespace {
struct CrittersActor_CrittersActorType;
}
namespace GlobalNamespace {
class CrittersPawn;
}
namespace Photon::Pun {
class PhotonStream;
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
class Object;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
class ConfigurableJoint;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersActor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersActor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersActor*, "", "CrittersActor");
// Dependencies CrittersActor::CrittersActorType, UnityEngine.Collider, UnityEngine.GameObject, UnityEngine.JointDrive, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.SoftJointLimit, UnityEngine.SoftJointLimitSpring, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersActor
class CORDL_TYPE CrittersActor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CrittersActorType = ::GlobalNamespace::CrittersActor_CrittersActorType;

/// @brief Field AttractionAmount, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_AttractionAmount, put=__cordl_internal_set_AttractionAmount)) float_t  AttractionAmount;

/// @brief Field AttractionCurve, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_AttractionCurve, put=__cordl_internal_set_AttractionCurve)) ::UnityEngine::AnimationCurve*  AttractionCurve;

/// @brief Field FearAmount, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get_FearAmount, put=__cordl_internal_set_FearAmount)) float_t  FearAmount;

/// @brief Field FearCurve, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_FearCurve, put=__cordl_internal_set_FearCurve)) ::UnityEngine::AnimationCurve*  FearCurve;

 __declspec(property(get=get_GetAverageSpeed)) float_t  GetAverageSpeed;

/// @brief Field OnGrabbedChild, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGrabbedChild, put=__cordl_internal_set_OnGrabbedChild)) ::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*  OnGrabbedChild;

/// @brief Field ReleasedEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReleasedEvent, put=__cordl_internal_set_ReleasedEvent)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::CrittersActor>>*  ReleasedEvent;

/// @brief Field _isOnPlayerDefault, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get__isOnPlayerDefault, put=__cordl_internal_set__isOnPlayerDefault)) bool  _isOnPlayerDefault;

/// @brief Field actorId, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_actorId, put=__cordl_internal_set_actorId)) int32_t  actorId;

/// @brief Field angularDrive, offset 0x11c, size 0x10 
 __declspec(property(get=__cordl_internal_get_angularDrive, put=__cordl_internal_set_angularDrive)) ::UnityEngine::JointDrive  angularDrive;

/// @brief Field averageSpeed, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_averageSpeed, put=__cordl_internal_set_averageSpeed)) ::ArrayW<float_t>  averageSpeed;

/// @brief Field averageSpeedIndex, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_averageSpeedIndex, put=__cordl_internal_set_averageSpeedIndex)) int32_t  averageSpeedIndex;

/// @brief Field colliders, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  colliders;

/// @brief Field crittersActorType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_crittersActorType, put=__cordl_internal_set_crittersActorType)) ::GlobalNamespace::CrittersActor_CrittersActorType  crittersActorType;

/// @brief Field defaultParentTransform, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultParentTransform, put=__cordl_internal_set_defaultParentTransform)) ::UnityW<::UnityEngine::Transform>  defaultParentTransform;

/// @brief Field despawnDelay, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_despawnDelay, put=__cordl_internal_set_despawnDelay)) int32_t  despawnDelay;

/// @brief Field despawnTime, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_despawnTime, put=__cordl_internal_set_despawnTime)) double_t  despawnTime;

/// @brief Field despawnWhenIdle, offset 0xce, size 0x1 
 __declspec(property(get=__cordl_internal_get_despawnWhenIdle, put=__cordl_internal_set_despawnWhenIdle)) bool  despawnWhenIdle;

/// @brief Field disconnectJointFlag, offset 0x148, size 0x1 
 __declspec(property(get=__cordl_internal_get_disconnectJointFlag, put=__cordl_internal_set_disconnectJointFlag)) bool  disconnectJointFlag;

/// @brief Field drive, offset 0x10c, size 0x10 
 __declspec(property(get=__cordl_internal_get_drive, put=__cordl_internal_set_drive)) ::UnityEngine::JointDrive  drive;

/// @brief Field equipmentStorable, offset 0xe1, size 0x1 
 __declspec(property(get=__cordl_internal_get_equipmentStorable, put=__cordl_internal_set_equipmentStorable)) bool  equipmentStorable;

/// @brief Field equipmentStoreTriggerCollider, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_equipmentStoreTriggerCollider, put=__cordl_internal_set_equipmentStoreTriggerCollider)) ::UnityW<::UnityEngine::CapsuleCollider>  equipmentStoreTriggerCollider;

/// @brief Field forceUpdate, offset 0x149, size 0x1 
 __declspec(property(get=__cordl_internal_get_forceUpdate, put=__cordl_internal_set_forceUpdate)) bool  forceUpdate;

/// @brief Field grabbable, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_grabbable, put=__cordl_internal_set_grabbable)) bool  grabbable;

/// @brief Field isDespawnBlocked, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDespawnBlocked, put=__cordl_internal_set_isDespawnBlocked)) bool  isDespawnBlocked;

/// @brief Field isEnabled, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEnabled, put=__cordl_internal_set_isEnabled)) bool  isEnabled;

/// @brief Field isGrabDisabled, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGrabDisabled, put=__cordl_internal_set_isGrabDisabled)) bool  isGrabDisabled;

/// @brief Field isOnPlayer, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOnPlayer, put=__cordl_internal_set_isOnPlayer)) bool  isOnPlayer;

/// @brief Field isSceneActor, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSceneActor, put=__cordl_internal_set_isSceneActor)) bool  isSceneActor;

/// @brief Field joint, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_joint, put=__cordl_internal_set_joint)) ::UnityW<::UnityEngine::ConfigurableJoint>  joint;

/// @brief Field lastGrabbedPlayer, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastGrabbedPlayer, put=__cordl_internal_set_lastGrabbedPlayer)) int32_t  lastGrabbedPlayer;

/// @brief Field lastImpulseAngularVelocity, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastImpulseAngularVelocity, put=__cordl_internal_set_lastImpulseAngularVelocity)) ::UnityEngine::Vector3  lastImpulseAngularVelocity;

/// @brief Field lastImpulsePosition, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastImpulsePosition, put=__cordl_internal_set_lastImpulsePosition)) ::UnityEngine::Vector3  lastImpulsePosition;

/// @brief Field lastImpulseQuaternion, offset 0x8c, size 0x10 
 __declspec(property(get=__cordl_internal_get_lastImpulseQuaternion, put=__cordl_internal_set_lastImpulseQuaternion)) ::UnityEngine::Quaternion  lastImpulseQuaternion;

/// @brief Field lastImpulseTime, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastImpulseTime, put=__cordl_internal_set_lastImpulseTime)) double_t  lastImpulseTime;

/// @brief Field lastImpulseVelocity, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastImpulseVelocity, put=__cordl_internal_set_lastImpulseVelocity)) ::UnityEngine::Vector3  lastImpulseVelocity;

/// @brief Field lastParentActorId, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastParentActorId, put=__cordl_internal_set_lastParentActorId)) int32_t  lastParentActorId;

/// @brief Field lastPosition, offset 0x17c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Field lastStoredObject, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastStoredObject, put=__cordl_internal_set_lastStoredObject)) ::UnityW<::GlobalNamespace::CrittersActor>  lastStoredObject;

/// @brief Field linearLimitDrive, offset 0x12c, size 0xc 
 __declspec(property(get=__cordl_internal_get_linearLimitDrive, put=__cordl_internal_set_linearLimitDrive)) ::UnityEngine::SoftJointLimit  linearLimitDrive;

/// @brief Field linearLimitSpringDrive, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_linearLimitSpringDrive, put=__cordl_internal_set_linearLimitSpringDrive)) ::UnityEngine::SoftJointLimitSpring  linearLimitSpringDrive;

/// @brief Field localCanStore, offset 0xe2, size 0x1 
 __declspec(property(get=__cordl_internal_get_localCanStore, put=__cordl_internal_set_localCanStore)) bool  localCanStore;

/// @brief Field localLastImpulse, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_localLastImpulse, put=__cordl_internal_set_localLastImpulse)) double_t  localLastImpulse;

/// @brief Field maxRangeOfFearAttraction, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRangeOfFearAttraction, put=__cordl_internal_set_maxRangeOfFearAttraction)) float_t  maxRangeOfFearAttraction;

/// @brief Field parentActor, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentActor, put=__cordl_internal_set_parentActor)) ::UnityW<::UnityEngine::Transform>  parentActor;

/// @brief Field parentActorId, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_parentActorId, put=__cordl_internal_set_parentActorId)) int32_t  parentActorId;

/// @brief Field preventDespawnUntilGrabbed, offset 0xcf, size 0x1 
 __declspec(property(get=__cordl_internal_get_preventDespawnUntilGrabbed, put=__cordl_internal_set_preventDespawnUntilGrabbed)) bool  preventDespawnUntilGrabbed;

/// @brief Field rb, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field resetPhysicsOnSpawn, offset 0xcd, size 0x1 
 __declspec(property(get=__cordl_internal_get_resetPhysicsOnSpawn, put=__cordl_internal_set_resetPhysicsOnSpawn)) bool  resetPhysicsOnSpawn;

/// @brief Field rigIndex, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rigIndex, put=__cordl_internal_set_rigIndex)) int32_t  rigIndex;

/// @brief Field rigPlayerId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_rigPlayerId, put=__cordl_internal_set_rigPlayerId)) int32_t  rigPlayerId;

/// @brief Field storeCollider, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_storeCollider, put=__cordl_internal_set_storeCollider)) ::UnityW<::UnityEngine::CapsuleCollider>  storeCollider;

/// @brief Field subObjectIndex, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_subObjectIndex, put=__cordl_internal_set_subObjectIndex)) int32_t  subObjectIndex;

/// @brief Field subObjects, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_subObjects, put=__cordl_internal_set_subObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  subObjects;

/// @brief Field timeLastTouched, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeLastTouched, put=__cordl_internal_set_timeLastTouched)) float_t  timeLastTouched;

/// @brief Field updatedSinceLastFrame, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_updatedSinceLastFrame, put=__cordl_internal_set_updatedSinceLastFrame)) bool  updatedSinceLastFrame;

/// @brief Field usesRB, offset 0xcc, size 0x1 
 __declspec(property(get=__cordl_internal_get_usesRB, put=__cordl_internal_set_usesRB)) bool  usesRB;

/// @brief Field wasEnabled, offset 0xaa, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasEnabled, put=__cordl_internal_set_wasEnabled)) bool  wasEnabled;

/// @brief Method AddActorDataToList, addr 0x55f2764, size 0x4c0, virtual true, abstract: false, final false
inline int32_t AddActorDataToList(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>  objList) ;

/// @brief Method AddPlayerCrittersActorDataToList, addr 0x55f2534, size 0x230, virtual false, abstract: false, final false
inline void AddPlayerCrittersActorDataToList(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>  objList) ;

/// @brief Method AllowGrabbingActor, addr 0x55f456c, size 0x660, virtual false, abstract: false, final false
inline bool AllowGrabbingActor(::GlobalNamespace::CrittersActor*  grabbedBy) ;

/// @brief Method AttemptAddStoredObjectCollider, addr 0x55f5294, size 0x8c, virtual false, abstract: false, final false
inline void AttemptAddStoredObjectCollider(::GlobalNamespace::CrittersActor*  actor) ;

/// @brief Method AttemptRemoveStoredObjectCollider, addr 0x55f1c8c, size 0xfc, virtual false, abstract: false, final false
inline void AttemptRemoveStoredObjectCollider(int32_t  oldParentId, bool  playSound) ;

/// @brief Method AttemptSetEquipmentStorable, addr 0x55f70e4, size 0x1c, virtual false, abstract: false, final false
inline bool AttemptSetEquipmentStorable() ;

/// @brief Method Awake, addr 0x55f1484, size 0xc, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BaseActorDataLength, addr 0x55f2c24, size 0x8, virtual false, abstract: false, final false
inline int32_t BaseActorDataLength() ;

/// @brief Method CalculateAttraction, addr 0x55f5dc0, size 0x138, virtual true, abstract: false, final false
inline void CalculateAttraction(::GlobalNamespace::CrittersPawn*  critter, float_t  multiplier) ;

/// @brief Method CalculateFear, addr 0x55f5c88, size 0x138, virtual true, abstract: false, final false
inline void CalculateFear(::GlobalNamespace::CrittersPawn*  critter, float_t  multiplier) ;

/// @brief Method CanBeGrabbed, addr 0x55f43fc, size 0x20, virtual true, abstract: false, final false
inline bool CanBeGrabbed(::GlobalNamespace::CrittersActor*  grabbedBy) ;

/// @brief Method CheckStorable, addr 0x55f6060, size 0x908, virtual true, abstract: false, final false
inline bool CheckStorable() ;

/// @brief Method CleanupActor, addr 0x55f1974, size 0x318, virtual true, abstract: false, final false
inline void CleanupActor() ;

/// @brief Method CreateJoint, addr 0x55f6b50, size 0x3ac, virtual false, abstract: false, final false
inline void CreateJoint(::UnityEngine::Rigidbody*  rbToConnect, bool  setParentNull) ;

/// @brief Method DisconnectJoint, addr 0x55f5328, size 0x1c0, virtual false, abstract: false, final false
inline void DisconnectJoint() ;

/// @brief Method GetActorSubtype, addr 0x55f1938, size 0x3c, virtual true, abstract: false, final false
inline ::StringW GetActorSubtype() ;

/// @brief Method GetParentActor, addr 0x55f44d0, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::CrittersActor> GetParentActor(int32_t  actorId) ;

/// @brief Method GetRootActor, addr 0x55f441c, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::CrittersActor> GetRootActor(int32_t  actorId) ;

/// @brief Method GlobalGrabbedBy, addr 0x55f5320, size 0x4, virtual true, abstract: false, final false
inline void GlobalGrabbedBy(::GlobalNamespace::CrittersActor*  grabbingActor) ;

/// @brief Method GrabbedBy, addr 0x55f4ce8, size 0x504, virtual true, abstract: false, final false
inline void GrabbedBy(::GlobalNamespace::CrittersActor*  grabbingActor, bool  positionOverride, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localOffset, bool  disableGrabbing) ;

/// @brief Method HandleRemoteReleased, addr 0x55f5324, size 0x4, virtual true, abstract: false, final false
inline void HandleRemoteReleased() ;

/// @brief Method Initialize, addr 0x55f1490, size 0x478, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsCurrentlyAttachedToBag, addr 0x55f4bcc, size 0xb0, virtual false, abstract: false, final false
inline bool IsCurrentlyAttachedToBag() ;

/// @brief Method MoveActor, addr 0x55f228c, size 0x238, virtual false, abstract: false, final false
inline void MoveActor(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  local, bool  updateImpulses, bool  updateImpulseTime) ;

static inline ::GlobalNamespace::CrittersActor* New_ctor() ;

/// @brief Method OnDisable, addr 0x55f192c, size 0xc, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x55f1908, size 0x24, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnHover, addr 0x55f42b8, size 0x144, virtual true, abstract: false, final false
inline void OnHover(bool  isLeft) ;

/// @brief Method PlacePlayerCrittersActor, addr 0x55f30fc, size 0x4dc, virtual false, abstract: false, final false
inline void PlacePlayerCrittersActor() ;

/// @brief Method ProcessLocal, addr 0x55f1d88, size 0x4c, virtual true, abstract: false, final false
inline bool ProcessLocal() ;

/// @brief Method ProcessRemote, addr 0x55f1dd4, size 0x298, virtual true, abstract: false, final false
inline void ProcessRemote() ;

/// @brief Method Released, addr 0x55f54e8, size 0x668, virtual true, abstract: false, final false
inline void Released(bool  keepWorldPosition, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  impulseVelocity, ::UnityEngine::Vector3  impulseAngularVelocity) ;

/// @brief Method RemoteGrabbed, addr 0x55f4c84, size 0x54, virtual true, abstract: false, final false
inline void RemoteGrabbed(::GlobalNamespace::CrittersActor*  actor) ;

/// @brief Method RemoteGrabbedBy, addr 0x55f4cd8, size 0x10, virtual true, abstract: false, final false
inline void RemoteGrabbedBy(::GlobalNamespace::CrittersActor*  grabbingActor) ;

/// @brief Method RemoveDespawnBlock, addr 0x55f5fc0, size 0xa0, virtual false, abstract: false, final false
inline void RemoveDespawnBlock() ;

/// @brief Method SendDataByCrittersActorType, addr 0x55f40e0, size 0x1d8, virtual true, abstract: false, final false
inline void SendDataByCrittersActorType(::Photon::Pun::PhotonStream*  stream) ;

/// @brief Method SetDefaultParent, addr 0x55f4c7c, size 0x8, virtual false, abstract: false, final false
inline void SetDefaultParent(::UnityEngine::Transform*  newDefaultParent) ;

/// @brief Method SetImpulse, addr 0x55f21bc, size 0xd0, virtual true, abstract: false, final false
inline void SetImpulse() ;

/// @brief Method SetImpulseTime, addr 0x55f5b60, size 0x90, virtual false, abstract: false, final false
inline void SetImpulseTime() ;

/// @brief Method SetImpulseVelocity, addr 0x55f5b50, size 0x10, virtual false, abstract: false, final false
inline void SetImpulseVelocity(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity) ;

/// @brief Method SetJointRigid, addr 0x55f6968, size 0x1e8, virtual false, abstract: false, final false
inline void SetJointRigid(::UnityEngine::Rigidbody*  rbToConnect) ;

/// @brief Method SetJointSoft, addr 0x55f6efc, size 0x1e8, virtual false, abstract: false, final false
inline void SetJointSoft(::UnityEngine::Rigidbody*  rbToConnect) ;

/// @brief Method SetTransformToDefaultParent, addr 0x55f206c, size 0x150, virtual false, abstract: false, final false
inline void SetTransformToDefaultParent(bool  resetOrigin) ;

/// @brief Method ShouldDespawn, addr 0x55f5ef8, size 0xc8, virtual true, abstract: false, final false
inline bool ShouldDespawn() ;

/// @brief Method TogglePhysics, addr 0x55f24c4, size 0x70, virtual true, abstract: false, final false
inline void TogglePhysics(bool  enable) ;

/// @brief Method TotalActorDataLength, addr 0x55f2c2c, size 0x8, virtual true, abstract: false, final false
inline int32_t TotalActorDataLength() ;

/// @brief Method UpdateAverageSpeed, addr 0x55f12d8, size 0x138, virtual true, abstract: false, final false
inline void UpdateAverageSpeed() ;

/// @brief Method UpdateFromRPC, addr 0x55f2c34, size 0x338, virtual true, abstract: false, final false
inline int32_t UpdateFromRPC(::ArrayW<::System::Object*>  data, int32_t  startingIndex) ;

/// @brief Method UpdateImpulseVelocity, addr 0x55f5bf0, size 0x98, virtual false, abstract: false, final false
inline void UpdateImpulseVelocity() ;

/// @brief Method UpdateImpulses, addr 0x55f51ec, size 0xa8, virtual false, abstract: false, final false
inline void UpdateImpulses(bool  local, bool  updateTime) ;

/// @brief Method UpdatePlayerCrittersActorFromRPC, addr 0x55f2f6c, size 0x190, virtual false, abstract: false, final false
inline int32_t UpdatePlayerCrittersActorFromRPC(::ArrayW<::System::Object*>  data, int32_t  startingIndex) ;

/// @brief Method UpdateSpecificActor, addr 0x55f35d8, size 0xb08, virtual true, abstract: false, final false
inline bool UpdateSpecificActor(::Photon::Pun::PhotonStream*  stream) ;

constexpr float_t const& __cordl_internal_get_AttractionAmount() const;

constexpr float_t& __cordl_internal_get_AttractionAmount() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_AttractionCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_AttractionCurve() ;

constexpr float_t const& __cordl_internal_get_FearAmount() const;

constexpr float_t& __cordl_internal_get_FearAmount() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_FearCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_FearCurve() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& __cordl_internal_get_OnGrabbedChild() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*& __cordl_internal_get_OnGrabbedChild() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& __cordl_internal_get_ReleasedEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::CrittersActor>>*& __cordl_internal_get_ReleasedEvent() ;

constexpr bool const& __cordl_internal_get__isOnPlayerDefault() const;

constexpr bool& __cordl_internal_get__isOnPlayerDefault() ;

constexpr int32_t const& __cordl_internal_get_actorId() const;

constexpr int32_t& __cordl_internal_get_actorId() ;

constexpr ::UnityEngine::JointDrive const& __cordl_internal_get_angularDrive() const;

constexpr ::UnityEngine::JointDrive& __cordl_internal_get_angularDrive() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_averageSpeed() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_averageSpeed() ;

constexpr int32_t const& __cordl_internal_get_averageSpeedIndex() const;

constexpr int32_t& __cordl_internal_get_averageSpeedIndex() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_colliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_colliders() ;

constexpr ::GlobalNamespace::CrittersActor_CrittersActorType const& __cordl_internal_get_crittersActorType() const;

constexpr ::GlobalNamespace::CrittersActor_CrittersActorType& __cordl_internal_get_crittersActorType() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_defaultParentTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_defaultParentTransform() ;

constexpr int32_t const& __cordl_internal_get_despawnDelay() const;

constexpr int32_t& __cordl_internal_get_despawnDelay() ;

constexpr double_t const& __cordl_internal_get_despawnTime() const;

constexpr double_t& __cordl_internal_get_despawnTime() ;

constexpr bool const& __cordl_internal_get_despawnWhenIdle() const;

constexpr bool& __cordl_internal_get_despawnWhenIdle() ;

constexpr bool const& __cordl_internal_get_disconnectJointFlag() const;

constexpr bool& __cordl_internal_get_disconnectJointFlag() ;

constexpr ::UnityEngine::JointDrive const& __cordl_internal_get_drive() const;

constexpr ::UnityEngine::JointDrive& __cordl_internal_get_drive() ;

constexpr bool const& __cordl_internal_get_equipmentStorable() const;

constexpr bool& __cordl_internal_get_equipmentStorable() ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_equipmentStoreTriggerCollider() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_equipmentStoreTriggerCollider() ;

constexpr bool const& __cordl_internal_get_forceUpdate() const;

constexpr bool& __cordl_internal_get_forceUpdate() ;

constexpr bool const& __cordl_internal_get_grabbable() const;

constexpr bool& __cordl_internal_get_grabbable() ;

constexpr bool const& __cordl_internal_get_isDespawnBlocked() const;

constexpr bool& __cordl_internal_get_isDespawnBlocked() ;

constexpr bool const& __cordl_internal_get_isEnabled() const;

constexpr bool& __cordl_internal_get_isEnabled() ;

constexpr bool const& __cordl_internal_get_isGrabDisabled() const;

constexpr bool& __cordl_internal_get_isGrabDisabled() ;

constexpr bool const& __cordl_internal_get_isOnPlayer() const;

constexpr bool& __cordl_internal_get_isOnPlayer() ;

constexpr bool const& __cordl_internal_get_isSceneActor() const;

constexpr bool& __cordl_internal_get_isSceneActor() ;

constexpr ::UnityW<::UnityEngine::ConfigurableJoint> const& __cordl_internal_get_joint() const;

constexpr ::UnityW<::UnityEngine::ConfigurableJoint>& __cordl_internal_get_joint() ;

constexpr int32_t const& __cordl_internal_get_lastGrabbedPlayer() const;

constexpr int32_t& __cordl_internal_get_lastGrabbedPlayer() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastImpulseAngularVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastImpulseAngularVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastImpulsePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastImpulsePosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastImpulseQuaternion() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastImpulseQuaternion() ;

constexpr double_t const& __cordl_internal_get_lastImpulseTime() const;

constexpr double_t& __cordl_internal_get_lastImpulseTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastImpulseVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastImpulseVelocity() ;

constexpr int32_t const& __cordl_internal_get_lastParentActorId() const;

constexpr int32_t& __cordl_internal_get_lastParentActorId() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition() ;

constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& __cordl_internal_get_lastStoredObject() const;

constexpr ::UnityW<::GlobalNamespace::CrittersActor>& __cordl_internal_get_lastStoredObject() ;

constexpr ::UnityEngine::SoftJointLimit const& __cordl_internal_get_linearLimitDrive() const;

constexpr ::UnityEngine::SoftJointLimit& __cordl_internal_get_linearLimitDrive() ;

constexpr ::UnityEngine::SoftJointLimitSpring const& __cordl_internal_get_linearLimitSpringDrive() const;

constexpr ::UnityEngine::SoftJointLimitSpring& __cordl_internal_get_linearLimitSpringDrive() ;

constexpr bool const& __cordl_internal_get_localCanStore() const;

constexpr bool& __cordl_internal_get_localCanStore() ;

constexpr double_t const& __cordl_internal_get_localLastImpulse() const;

constexpr double_t& __cordl_internal_get_localLastImpulse() ;

constexpr float_t const& __cordl_internal_get_maxRangeOfFearAttraction() const;

constexpr float_t& __cordl_internal_get_maxRangeOfFearAttraction() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parentActor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parentActor() ;

constexpr int32_t const& __cordl_internal_get_parentActorId() const;

constexpr int32_t& __cordl_internal_get_parentActorId() ;

constexpr bool const& __cordl_internal_get_preventDespawnUntilGrabbed() const;

constexpr bool& __cordl_internal_get_preventDespawnUntilGrabbed() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr bool const& __cordl_internal_get_resetPhysicsOnSpawn() const;

constexpr bool& __cordl_internal_get_resetPhysicsOnSpawn() ;

constexpr int32_t const& __cordl_internal_get_rigIndex() const;

constexpr int32_t& __cordl_internal_get_rigIndex() ;

constexpr int32_t const& __cordl_internal_get_rigPlayerId() const;

constexpr int32_t& __cordl_internal_get_rigPlayerId() ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_storeCollider() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_storeCollider() ;

constexpr int32_t const& __cordl_internal_get_subObjectIndex() const;

constexpr int32_t& __cordl_internal_get_subObjectIndex() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_subObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_subObjects() ;

constexpr float_t const& __cordl_internal_get_timeLastTouched() const;

constexpr float_t& __cordl_internal_get_timeLastTouched() ;

constexpr bool const& __cordl_internal_get_updatedSinceLastFrame() const;

constexpr bool& __cordl_internal_get_updatedSinceLastFrame() ;

constexpr bool const& __cordl_internal_get_usesRB() const;

constexpr bool& __cordl_internal_get_usesRB() ;

constexpr bool const& __cordl_internal_get_wasEnabled() const;

constexpr bool& __cordl_internal_get_wasEnabled() ;

constexpr void __cordl_internal_set_AttractionAmount(float_t  value) ;

constexpr void __cordl_internal_set_AttractionCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_FearAmount(float_t  value) ;

constexpr void __cordl_internal_set_FearCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_OnGrabbedChild(::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

constexpr void __cordl_internal_set_ReleasedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

constexpr void __cordl_internal_set__isOnPlayerDefault(bool  value) ;

constexpr void __cordl_internal_set_actorId(int32_t  value) ;

constexpr void __cordl_internal_set_angularDrive(::UnityEngine::JointDrive  value) ;

constexpr void __cordl_internal_set_averageSpeed(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_averageSpeedIndex(int32_t  value) ;

constexpr void __cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_crittersActorType(::GlobalNamespace::CrittersActor_CrittersActorType  value) ;

constexpr void __cordl_internal_set_defaultParentTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_despawnDelay(int32_t  value) ;

constexpr void __cordl_internal_set_despawnTime(double_t  value) ;

constexpr void __cordl_internal_set_despawnWhenIdle(bool  value) ;

constexpr void __cordl_internal_set_disconnectJointFlag(bool  value) ;

constexpr void __cordl_internal_set_drive(::UnityEngine::JointDrive  value) ;

constexpr void __cordl_internal_set_equipmentStorable(bool  value) ;

constexpr void __cordl_internal_set_equipmentStoreTriggerCollider(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set_forceUpdate(bool  value) ;

constexpr void __cordl_internal_set_grabbable(bool  value) ;

constexpr void __cordl_internal_set_isDespawnBlocked(bool  value) ;

constexpr void __cordl_internal_set_isEnabled(bool  value) ;

constexpr void __cordl_internal_set_isGrabDisabled(bool  value) ;

constexpr void __cordl_internal_set_isOnPlayer(bool  value) ;

constexpr void __cordl_internal_set_isSceneActor(bool  value) ;

constexpr void __cordl_internal_set_joint(::UnityW<::UnityEngine::ConfigurableJoint>  value) ;

constexpr void __cordl_internal_set_lastGrabbedPlayer(int32_t  value) ;

constexpr void __cordl_internal_set_lastImpulseAngularVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastImpulsePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastImpulseQuaternion(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_lastImpulseTime(double_t  value) ;

constexpr void __cordl_internal_set_lastImpulseVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastParentActorId(int32_t  value) ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastStoredObject(::UnityW<::GlobalNamespace::CrittersActor>  value) ;

constexpr void __cordl_internal_set_linearLimitDrive(::UnityEngine::SoftJointLimit  value) ;

constexpr void __cordl_internal_set_linearLimitSpringDrive(::UnityEngine::SoftJointLimitSpring  value) ;

constexpr void __cordl_internal_set_localCanStore(bool  value) ;

constexpr void __cordl_internal_set_localLastImpulse(double_t  value) ;

constexpr void __cordl_internal_set_maxRangeOfFearAttraction(float_t  value) ;

constexpr void __cordl_internal_set_parentActor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_parentActorId(int32_t  value) ;

constexpr void __cordl_internal_set_preventDespawnUntilGrabbed(bool  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_resetPhysicsOnSpawn(bool  value) ;

constexpr void __cordl_internal_set_rigIndex(int32_t  value) ;

constexpr void __cordl_internal_set_rigPlayerId(int32_t  value) ;

constexpr void __cordl_internal_set_storeCollider(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set_subObjectIndex(int32_t  value) ;

constexpr void __cordl_internal_set_subObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_timeLastTouched(float_t  value) ;

constexpr void __cordl_internal_set_updatedSinceLastFrame(bool  value) ;

constexpr void __cordl_internal_set_usesRB(bool  value) ;

constexpr void __cordl_internal_set_wasEnabled(bool  value) ;

/// @brief Method .ctor, addr 0x55f7100, size 0x120, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnGrabbedChild, addr 0x55f1178, size 0xb0, virtual false, abstract: false, final false
inline void add_OnGrabbedChild(::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

/// @brief Method get_GetAverageSpeed, addr 0x55f1410, size 0x74, virtual false, abstract: false, final false
inline float_t get_GetAverageSpeed() ;

/// [CompilerGenerated]
/// @brief Method remove_OnGrabbedChild, addr 0x55f1228, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnGrabbedChild(::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersActor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersActor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersActor(CrittersActor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersActor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersActor(CrittersActor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{74};

/// @brief Field crittersActorType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CrittersActor_CrittersActorType  ___crittersActorType;

/// @brief Field isSceneActor, offset: 0x24, size: 0x1, def value: None
 bool  ___isSceneActor;

/// @brief Field isOnPlayer, offset: 0x25, size: 0x1, def value: None
 bool  ___isOnPlayer;

/// @brief Field _isOnPlayerDefault, offset: 0x26, size: 0x1, def value: None
 bool  ____isOnPlayerDefault;

/// @brief Field rigPlayerId, offset: 0x28, size: 0x4, def value: None
 int32_t  ___rigPlayerId;

/// @brief Field rigIndex, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___rigIndex;

/// @brief Field grabbable, offset: 0x30, size: 0x1, def value: None
 bool  ___grabbable;

/// @brief Field isGrabDisabled, offset: 0x31, size: 0x1, def value: None
 bool  ___isGrabDisabled;

/// @brief Field lastGrabbedPlayer, offset: 0x34, size: 0x4, def value: None
 int32_t  ___lastGrabbedPlayer;

/// @brief Field ReleasedEvent, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::CrittersActor>>*  ___ReleasedEvent;

/// [CompilerGenerated]
/// @brief Field OnGrabbedChild, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::CrittersActor>>*  ___OnGrabbedChild;

/// @brief Field rb, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field actorId, offset: 0x50, size: 0x4, def value: None
 int32_t  ___actorId;

/// @brief Field defaultParentTransform, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___defaultParentTransform;

/// @brief Field parentActorId, offset: 0x60, size: 0x4, def value: None
 int32_t  ___parentActorId;

/// @brief Field lastParentActorId, offset: 0x64, size: 0x4, def value: None
 int32_t  ___lastParentActorId;

/// @brief Field lastImpulsePosition, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastImpulsePosition;

/// @brief Field lastImpulseVelocity, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastImpulseVelocity;

/// @brief Field lastImpulseAngularVelocity, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastImpulseAngularVelocity;

/// @brief Field lastImpulseQuaternion, offset: 0x8c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___lastImpulseQuaternion;

/// @brief Field lastImpulseTime, offset: 0xa0, size: 0x8, def value: None
 double_t  ___lastImpulseTime;

/// @brief Field updatedSinceLastFrame, offset: 0xa8, size: 0x1, def value: None
 bool  ___updatedSinceLastFrame;

/// @brief Field isEnabled, offset: 0xa9, size: 0x1, def value: None
 bool  ___isEnabled;

/// @brief Field wasEnabled, offset: 0xaa, size: 0x1, def value: None
 bool  ___wasEnabled;

/// @brief Field localLastImpulse, offset: 0xb0, size: 0x8, def value: None
 double_t  ___localLastImpulse;

/// @brief Field parentActor, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___parentActor;

/// @brief Field subObjects, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___subObjects;

/// @brief Field subObjectIndex, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___subObjectIndex;

/// @brief Field usesRB, offset: 0xcc, size: 0x1, def value: None
 bool  ___usesRB;

/// @brief Field resetPhysicsOnSpawn, offset: 0xcd, size: 0x1, def value: None
 bool  ___resetPhysicsOnSpawn;

/// @brief Field despawnWhenIdle, offset: 0xce, size: 0x1, def value: None
 bool  ___despawnWhenIdle;

/// @brief Field preventDespawnUntilGrabbed, offset: 0xcf, size: 0x1, def value: None
 bool  ___preventDespawnUntilGrabbed;

/// @brief Field despawnDelay, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___despawnDelay;

/// @brief Field despawnTime, offset: 0xd8, size: 0x8, def value: None
 double_t  ___despawnTime;

/// @brief Field isDespawnBlocked, offset: 0xe0, size: 0x1, def value: None
 bool  ___isDespawnBlocked;

/// @brief Field equipmentStorable, offset: 0xe1, size: 0x1, def value: None
 bool  ___equipmentStorable;

/// @brief Field localCanStore, offset: 0xe2, size: 0x1, def value: None
 bool  ___localCanStore;

/// @brief Field lastStoredObject, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersActor>  ___lastStoredObject;

/// @brief Field storeCollider, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ___storeCollider;

/// @brief Field colliders, offset: 0xf8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___colliders;

/// @brief Field joint, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ConfigurableJoint>  ___joint;

/// @brief Field timeLastTouched, offset: 0x108, size: 0x4, def value: None
 float_t  ___timeLastTouched;

/// @brief Field drive, offset: 0x10c, size: 0x10, def value: None
 ::UnityEngine::JointDrive  ___drive;

/// @brief Field angularDrive, offset: 0x11c, size: 0x10, def value: None
 ::UnityEngine::JointDrive  ___angularDrive;

/// @brief Field linearLimitDrive, offset: 0x12c, size: 0xc, def value: None
 ::UnityEngine::SoftJointLimit  ___linearLimitDrive;

/// @brief Field linearLimitSpringDrive, offset: 0x138, size: 0x8, def value: None
 ::UnityEngine::SoftJointLimitSpring  ___linearLimitSpringDrive;

/// @brief Field equipmentStoreTriggerCollider, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ___equipmentStoreTriggerCollider;

/// @brief Field disconnectJointFlag, offset: 0x148, size: 0x1, def value: None
 bool  ___disconnectJointFlag;

/// @brief Field forceUpdate, offset: 0x149, size: 0x1, def value: None
 bool  ___forceUpdate;

/// @brief Field FearAmount, offset: 0x14c, size: 0x4, def value: None
 float_t  ___FearAmount;

/// @brief Field FearCurve, offset: 0x150, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___FearCurve;

/// @brief Field AttractionAmount, offset: 0x158, size: 0x4, def value: None
 float_t  ___AttractionAmount;

/// @brief Field AttractionCurve, offset: 0x160, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___AttractionCurve;

/// [FormerlySerializedAs("maxDetectionDistance")]
/// @brief Field maxRangeOfFearAttraction, offset: 0x168, size: 0x4, def value: None
 float_t  ___maxRangeOfFearAttraction;

/// @brief Field averageSpeed, offset: 0x170, size: 0x8, def value: None
 ::ArrayW<float_t>  ___averageSpeed;

/// @brief Field averageSpeedIndex, offset: 0x178, size: 0x4, def value: None
 int32_t  ___averageSpeedIndex;

/// @brief Field lastPosition, offset: 0x17c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersActor, ___crittersActorType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___isSceneActor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___isOnPlayer) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ____isOnPlayerDefault) == 0x26, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___rigPlayerId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___rigIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___grabbable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___isGrabDisabled) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___lastGrabbedPlayer) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___ReleasedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___OnGrabbedChild) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___rb) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___actorId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___defaultParentTransform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___parentActorId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___lastParentActorId) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___lastImpulsePosition) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___lastImpulseVelocity) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___lastImpulseAngularVelocity) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___lastImpulseQuaternion) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___lastImpulseTime) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___updatedSinceLastFrame) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___isEnabled) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___wasEnabled) == 0xaa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___localLastImpulse) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___parentActor) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___subObjects) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___subObjectIndex) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___usesRB) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___resetPhysicsOnSpawn) == 0xcd, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___despawnWhenIdle) == 0xce, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___preventDespawnUntilGrabbed) == 0xcf, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___despawnDelay) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___despawnTime) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___isDespawnBlocked) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___equipmentStorable) == 0xe1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___localCanStore) == 0xe2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___lastStoredObject) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___storeCollider) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___colliders) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___joint) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___timeLastTouched) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___drive) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___angularDrive) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___linearLimitDrive) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___linearLimitSpringDrive) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___equipmentStoreTriggerCollider) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___disconnectJointFlag) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___forceUpdate) == 0x149, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___FearAmount) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___FearCurve) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___AttractionAmount) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___AttractionCurve) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___maxRangeOfFearAttraction) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___averageSpeed) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___averageSpeedIndex) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActor, ___lastPosition) == 0x17c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersActor) == 0x188, "Size mismatch!");

} // namespace end def GlobalNamespace
