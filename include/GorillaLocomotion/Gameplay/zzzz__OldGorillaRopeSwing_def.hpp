#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/OldGorillaRopeSwing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OldGorillaRopeSwing)
namespace GorillaLocomotion::Gameplay {
class GorillaRopeSwingSettings;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
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
namespace GorillaLocomotion::Gameplay {
class OldGorillaRopeSwing;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*, "GorillaLocomotion.Gameplay", "OldGorillaRopeSwing");
// Dependencies Photon.Pun.MonoBehaviourPun, UnityEngine.Rigidbody, UnityEngine.XR.XRNode
namespace GorillaLocomotion::Gameplay {
// Is value type: false
// CS Name: GorillaLocomotion.Gameplay.OldGorillaRopeSwing
class CORDL_TYPE OldGorillaRopeSwing : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
/// @brief Field <isIdle>k__BackingField, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__isIdle_k__BackingField, put=__cordl_internal_set__isIdle_k__BackingField)) bool  _isIdle_k__BackingField;

/// @brief Field bones, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bones, put=__cordl_internal_set_bones)) ::ArrayW<::UnityW<::UnityEngine::Rigidbody>>  bones;

 __declspec(property(get=get_isIdle, put=set_isIdle)) bool  isIdle;

/// @brief Field lastGrabTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastGrabTime, put=__cordl_internal_set_lastGrabTime)) float_t  lastGrabTime;

/// @brief Field localGrabbedRigid, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_localGrabbedRigid, put=__cordl_internal_set_localGrabbedRigid)) ::UnityW<::UnityEngine::Rigidbody>  localGrabbedRigid;

/// @brief Field localPlayerOn, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_localPlayerOn, put=__cordl_internal_set_localPlayerOn)) bool  localPlayerOn;

/// @brief Field localPlayerXRNode, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_localPlayerXRNode, put=__cordl_internal_set_localPlayerXRNode)) ::UnityEngine::XR::XRNode  localPlayerXRNode;

/// @brief Field potentialIdleTimer, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_potentialIdleTimer, put=__cordl_internal_set_potentialIdleTimer)) float_t  potentialIdleTimer;

/// @brief Field prefabRopeBit, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabRopeBit, put=__cordl_internal_set_prefabRopeBit)) ::UnityW<::UnityEngine::GameObject>  prefabRopeBit;

/// @brief Field remotePlayers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_remotePlayers, put=__cordl_internal_set_remotePlayers)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  remotePlayers;

/// @brief Field ropeCreakSFX, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_ropeCreakSFX, put=__cordl_internal_set_ropeCreakSFX)) ::UnityW<::UnityEngine::AudioSource>  ropeCreakSFX;

/// @brief Field ropeLength, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_ropeLength, put=__cordl_internal_set_ropeLength)) int32_t  ropeLength;

/// @brief Field settings, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings>  settings;

/// @brief Method AttachLocalPlayer, addr 0x5ceef14, size 0x640, virtual false, abstract: false, final false
inline void AttachLocalPlayer(::UnityEngine::XR::XRNode  xrNode, ::UnityEngine::Rigidbody*  rigid, ::UnityEngine::Vector3  offset, ::UnityEngine::Vector3  velocity) ;

/// @brief Method AttachRemotePlayer, addr 0x5cef988, size 0x1dc, virtual false, abstract: false, final false
inline bool AttachRemotePlayer(int32_t  playerId, int32_t  boneIndex, ::UnityEngine::Transform*  offsetTransform, ::UnityEngine::Vector3  offset) ;

/// @brief Method Awake, addr 0x5cee5ac, size 0x8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DetachLocalPlayer, addr 0x5cef82c, size 0x15c, virtual false, abstract: false, final false
inline void DetachLocalPlayer() ;

/// @brief Method DetachRemotePlayer, addr 0x5cefb64, size 0x58, virtual false, abstract: false, final false
inline void DetachRemotePlayer(int32_t  playerId) ;

/// @brief Method GetBone, addr 0x5ceede4, size 0x7c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> GetBone(int32_t  index) ;

/// @brief Method GetBoneIndex, addr 0x5ceee60, size 0xb4, virtual false, abstract: false, final false
inline int32_t GetBoneIndex(::UnityEngine::Rigidbody*  r) ;

static inline ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing* New_ctor() ;

/// @brief Method OnDisable, addr 0x5cee734, size 0x14, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method SetIsIdle, addr 0x5cee5b4, size 0x180, virtual false, abstract: false, final false
inline void SetIsIdle(bool  idle) ;

/// [PunRPC]
/// @brief Method SetVelocity, addr 0x5cefbbc, size 0x37c, virtual false, abstract: false, final false
inline void SetVelocity(int32_t  boneIndex, ::UnityEngine::Vector3  velocity, bool  wholeRope, ::ArrayW<::UnityEngine::Vector3>  ropeRotations, ::ArrayW<::UnityEngine::Vector3>  ropeVelocities) ;

/// @brief Method SetVelocity_RPC, addr 0x5cef554, size 0x2d8, virtual false, abstract: false, final false
inline void SetVelocity_RPC(int32_t  boneIndex, ::UnityEngine::Vector3  velocity, bool  wholeRope, ::ArrayW<::UnityEngine::Vector3>  ropeRotations, ::ArrayW<::UnityEngine::Vector3>  ropeVelocities) ;

/// @brief Method ToggleIsKinematic, addr 0x5ceed1c, size 0xc8, virtual false, abstract: false, final false
inline void ToggleIsKinematic(bool  kinematic) ;

/// @brief Method Update, addr 0x5cee748, size 0x5d4, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__isIdle_k__BackingField() const;

constexpr bool& __cordl_internal_get__isIdle_k__BackingField() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Rigidbody>> const& __cordl_internal_get_bones() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Rigidbody>>& __cordl_internal_get_bones() ;

constexpr float_t const& __cordl_internal_get_lastGrabTime() const;

constexpr float_t& __cordl_internal_get_lastGrabTime() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_localGrabbedRigid() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_localGrabbedRigid() ;

constexpr bool const& __cordl_internal_get_localPlayerOn() const;

constexpr bool& __cordl_internal_get_localPlayerOn() ;

constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_localPlayerXRNode() const;

constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_localPlayerXRNode() ;

constexpr float_t const& __cordl_internal_get_potentialIdleTimer() const;

constexpr float_t& __cordl_internal_get_potentialIdleTimer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prefabRopeBit() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prefabRopeBit() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_remotePlayers() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_remotePlayers() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_ropeCreakSFX() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_ropeCreakSFX() ;

constexpr int32_t const& __cordl_internal_get_ropeLength() const;

constexpr int32_t& __cordl_internal_get_ropeLength() ;

constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings> const& __cordl_internal_get_settings() const;

constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings>& __cordl_internal_get_settings() ;

constexpr void __cordl_internal_set__isIdle_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_bones(::ArrayW<::UnityW<::UnityEngine::Rigidbody>>  value) ;

constexpr void __cordl_internal_set_lastGrabTime(float_t  value) ;

constexpr void __cordl_internal_set_localGrabbedRigid(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_localPlayerOn(bool  value) ;

constexpr void __cordl_internal_set_localPlayerXRNode(::UnityEngine::XR::XRNode  value) ;

constexpr void __cordl_internal_set_potentialIdleTimer(float_t  value) ;

constexpr void __cordl_internal_set_prefabRopeBit(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_remotePlayers(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_ropeCreakSFX(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_ropeLength(int32_t  value) ;

constexpr void __cordl_internal_set_settings(::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings>  value) ;

/// @brief Method .ctor, addr 0x5ceff38, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_isIdle, addr 0x5cee59c, size 0x8, virtual false, abstract: false, final false
inline bool get_isIdle() ;

/// [CompilerGenerated]
/// @brief Method set_isIdle, addr 0x5cee5a4, size 0x8, virtual false, abstract: false, final false
inline void set_isIdle(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OldGorillaRopeSwing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OldGorillaRopeSwing", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OldGorillaRopeSwing(OldGorillaRopeSwing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OldGorillaRopeSwing", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OldGorillaRopeSwing(OldGorillaRopeSwing const& ) = delete;

/// @brief Field MAX_ROPE_SPEED offset 0xffffffff size 0x4
static constexpr float_t  MAX_ROPE_SPEED{static_cast<float_t>(15.0f)};

/// @brief Field MAX_VELOCITY_FOR_IDLE offset 0xffffffff size 0x4
static constexpr float_t  MAX_VELOCITY_FOR_IDLE{static_cast<float_t>(0.1f)};

/// @brief Field TIME_FOR_IDLE offset 0xffffffff size 0x4
static constexpr float_t  TIME_FOR_IDLE{static_cast<float_t>(2.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4536};

/// @brief Field kPlayerMass offset 0xffffffff size 0x4
static constexpr float_t  kPlayerMass{static_cast<float_t>(0.8f)};

/// @brief Field ropeBitGenOffset offset 0xffffffff size 0x4
static constexpr float_t  ropeBitGenOffset{static_cast<float_t>(1.0f)};

/// [SerializeField]
/// @brief Field prefabRopeBit, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prefabRopeBit;

/// @brief Field bones, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Rigidbody>>  ___bones;

/// @brief Field remotePlayers, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___remotePlayers;

/// @brief Field lastGrabTime, offset: 0x40, size: 0x4, def value: None
 float_t  ___lastGrabTime;

/// [SerializeField]
/// @brief Field ropeCreakSFX, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___ropeCreakSFX;

/// @brief Field localPlayerOn, offset: 0x50, size: 0x1, def value: None
 bool  ___localPlayerOn;

/// @brief Field localPlayerXRNode, offset: 0x54, size: 0x4, def value: None
 ::UnityEngine::XR::XRNode  ___localPlayerXRNode;

/// @brief Field localGrabbedRigid, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___localGrabbedRigid;

/// [CompilerGenerated]
/// @brief Field <isIdle>k__BackingField, offset: 0x60, size: 0x1, def value: None
 bool  ____isIdle_k__BackingField;

/// @brief Field potentialIdleTimer, offset: 0x64, size: 0x4, def value: None
 float_t  ___potentialIdleTimer;

/// [Header("Config")]
/// [SerializeField]
/// @brief Field ropeLength, offset: 0x68, size: 0x4, def value: None
 int32_t  ___ropeLength;

/// [SerializeField]
/// @brief Field settings, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings>  ___settings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::OldGorillaRopeSwing, ___prefabRopeBit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::OldGorillaRopeSwing, ___bones) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::OldGorillaRopeSwing, ___remotePlayers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::OldGorillaRopeSwing, ___lastGrabTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::OldGorillaRopeSwing, ___ropeCreakSFX) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::OldGorillaRopeSwing, ___localPlayerOn) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::OldGorillaRopeSwing, ___localPlayerXRNode) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::OldGorillaRopeSwing, ___localGrabbedRigid) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::OldGorillaRopeSwing, ____isIdle_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::OldGorillaRopeSwing, ___potentialIdleTimer) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::OldGorillaRopeSwing, ___ropeLength) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::OldGorillaRopeSwing, ___settings) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::OldGorillaRopeSwing) == 0x78, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay
