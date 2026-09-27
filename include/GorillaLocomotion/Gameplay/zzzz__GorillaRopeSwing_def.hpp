#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/GorillaRopeSwing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaRopeSwing)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class IBuilderPieceComponent;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GorillaLocomotion::Climbing {
class GorillaVelocityTracker;
}
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
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
class GorillaRopeSwing;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Gameplay::GorillaRopeSwing*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::GorillaRopeSwing*, "GorillaLocomotion.Gameplay", "GorillaRopeSwing");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.RaycastHit, UnityEngine.Transform, UnityEngine.XR.XRNode
namespace GorillaLocomotion::Gameplay {
// Is value type: false
// CS Name: GorillaLocomotion.Gameplay.GorillaRopeSwing
class CORDL_TYPE GorillaRopeSwing : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_SupportsMovingAtRuntime)) bool  SupportsMovingAtRuntime;

/// @brief Field <isFullyIdle>k__BackingField, offset 0x7d, size 0x1 
 __declspec(property(get=__cordl_internal_get__isFullyIdle_k__BackingField, put=__cordl_internal_set__isFullyIdle_k__BackingField)) bool  _isFullyIdle_k__BackingField;

/// @brief Field <isIdle>k__BackingField, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isIdle_k__BackingField, put=__cordl_internal_set__isIdle_k__BackingField)) bool  _isIdle_k__BackingField;

/// @brief Field hasMonkeBlockParent, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasMonkeBlockParent, put=__cordl_internal_set_hasMonkeBlockParent)) bool  hasMonkeBlockParent;

 __declspec(property(get=get_hasPlayers)) bool  hasPlayers;

 __declspec(property(get=get_isFullyIdle, put=set_isFullyIdle)) bool  isFullyIdle;

 __declspec(property(get=get_isIdle, put=set_isIdle)) bool  isIdle;

/// @brief Field lastGrabTime, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastGrabTime, put=__cordl_internal_set_lastGrabTime)) float_t  lastGrabTime;

/// @brief Field lastNodeCheckIndex, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastNodeCheckIndex, put=__cordl_internal_set_lastNodeCheckIndex)) int32_t  lastNodeCheckIndex;

/// @brief Field localPlayerBoneIndex, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_localPlayerBoneIndex, put=__cordl_internal_set_localPlayerBoneIndex)) int32_t  localPlayerBoneIndex;

/// @brief Field localPlayerOn, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_localPlayerOn, put=__cordl_internal_set_localPlayerOn)) bool  localPlayerOn;

/// @brief Field localPlayerXRNode, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_localPlayerXRNode, put=__cordl_internal_set_localPlayerXRNode)) ::UnityEngine::XR::XRNode  localPlayerXRNode;

/// @brief Field monkeBlockParent, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_monkeBlockParent, put=__cordl_internal_set_monkeBlockParent)) ::UnityW<::GlobalNamespace::BuilderPiece>  monkeBlockParent;

/// @brief Field nodeHits, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeHits, put=__cordl_internal_set_nodeHits)) ::ArrayW<::UnityEngine::RaycastHit>  nodeHits;

/// @brief Field nodes, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  nodes;

/// @brief Field potentialIdleTimer, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_potentialIdleTimer, put=__cordl_internal_set_potentialIdleTimer)) float_t  potentialIdleTimer;

/// @brief Field prefabRopeBit, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabRopeBit, put=__cordl_internal_set_prefabRopeBit)) ::UnityW<::UnityEngine::GameObject>  prefabRopeBit;

/// @brief Field remotePlayers, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_remotePlayers, put=__cordl_internal_set_remotePlayers)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  remotePlayers;

/// @brief Field ropeBitGenOffset, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_ropeBitGenOffset, put=__cordl_internal_set_ropeBitGenOffset)) float_t  ropeBitGenOffset;

/// @brief Field ropeCreakSFX, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ropeCreakSFX, put=__cordl_internal_set_ropeCreakSFX)) ::UnityW<::UnityEngine::AudioSource>  ropeCreakSFX;

/// @brief Field ropeDataIndexOffset, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_ropeDataIndexOffset, put=__cordl_internal_set_ropeDataIndexOffset)) int32_t  ropeDataIndexOffset;

/// @brief Field ropeDataStartIndex, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_ropeDataStartIndex, put=__cordl_internal_set_ropeDataStartIndex)) int32_t  ropeDataStartIndex;

/// @brief Field ropeId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ropeId, put=__cordl_internal_set_ropeId)) int32_t  ropeId;

/// @brief Field ropeLength, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_ropeLength, put=__cordl_internal_set_ropeLength)) int32_t  ropeLength;

/// @brief Field scaleFactor, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleFactor, put=__cordl_internal_set_scaleFactor)) float_t  scaleFactor;

/// @brief Field settings, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings>  settings;

/// @brief Field started, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get_started, put=__cordl_internal_set_started)) bool  started;

/// @brief Field staticId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_staticId, put=__cordl_internal_set_staticId)) ::StringW  staticId;

/// @brief Field supportMovingAtRuntime, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_supportMovingAtRuntime, put=__cordl_internal_set_supportMovingAtRuntime)) bool  supportMovingAtRuntime;

/// @brief Field useStaticId, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_useStaticId, put=__cordl_internal_set_useStaticId)) bool  useStaticId;

/// @brief Field velocityTracker, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityTracker, put=__cordl_internal_set_velocityTracker)) ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  velocityTracker;

/// @brief Field wallLayerMask, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_wallLayerMask, put=__cordl_internal_set_wallLayerMask)) ::UnityEngine::LayerMask  wallLayerMask;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

/// @brief Method AttachLocalPlayer, addr 0x5ceb280, size 0x5e4, virtual false, abstract: false, final false
inline void AttachLocalPlayer(::UnityEngine::XR::XRNode  xrNode, ::UnityEngine::Transform*  grabbedBone, ::UnityEngine::Vector3  offset, ::UnityEngine::Vector3  velocity) ;

/// @brief Method AttachRemotePlayer, addr 0x5cec22c, size 0x1e4, virtual false, abstract: false, final false
inline bool AttachRemotePlayer(int32_t  playerId, int32_t  boneIndex, ::UnityEngine::Transform*  offsetTransform, ::UnityEngine::Vector3  offset) ;

/// @brief Method Awake, addr 0x5ce98b8, size 0xe8, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateId, addr 0x5ce94d0, size 0x354, virtual false, abstract: false, final false
inline void CalculateId(bool  force) ;

/// @brief Method DetachLocalPlayer, addr 0x5cebc94, size 0x158, virtual false, abstract: false, final false
inline void DetachLocalPlayer() ;

/// @brief Method DetachRemotePlayer, addr 0x5cec410, size 0x60, virtual false, abstract: false, final false
inline void DetachRemotePlayer(int32_t  playerId) ;

/// @brief Method EdRecalculateId, addr 0x5ce94c8, size 0x8, virtual false, abstract: false, final false
inline void EdRecalculateId() ;

/// @brief Method GetBone, addr 0x5ceacf4, size 0x7c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetBone(int32_t  index) ;

/// @brief Method GetBoneIndex, addr 0x5ceb1cc, size 0xb4, virtual false, abstract: false, final false
inline int32_t GetBoneIndex(::UnityEngine::Transform*  r) ;

/// @brief Method InvokeUpdate, addr 0x5cea2cc, size 0x70c, virtual false, abstract: false, final false
inline void InvokeUpdate() ;

/// @brief Method IsAttachedToMovingPiece, addr 0x5cecc50, size 0xd0, virtual false, abstract: false, final false
inline bool IsAttachedToMovingPiece() ;

static inline ::GorillaLocomotion::Gameplay::GorillaRopeSwing* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5ce9be0, size 0xa8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5cea060, size 0x98, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5ce9ce0, size 0x158, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPieceActivate, addr 0x5cecd20, size 0x78, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x5cec878, size 0x1e8, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x5cecd98, size 0x8, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x5cecac8, size 0x4, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x5cecacc, size 0x184, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

/// @brief Method RefreshAllBonesMass, addr 0x5ceb864, size 0x198, virtual false, abstract: false, final false
inline void RefreshAllBonesMass() ;

/// @brief Method SetIsIdle, addr 0x5ce99a0, size 0x1b4, virtual false, abstract: false, final false
inline void SetIsIdle(bool  idle, bool  resetPos) ;

/// @brief Method SetVelocity, addr 0x5cead70, size 0x364, virtual false, abstract: false, final false
inline void SetVelocity(int32_t  boneIndex, ::UnityEngine::Vector3  velocity, bool  wholeRope, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method Start, addr 0x5ce9b54, size 0x34, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleVelocityTracker, addr 0x5ceb0d4, size 0xf8, virtual false, abstract: false, final false
inline void ToggleVelocityTracker(bool  enable, int32_t  boneIndex, ::UnityEngine::Vector3  offset) ;

constexpr bool const& __cordl_internal_get__isFullyIdle_k__BackingField() const;

constexpr bool& __cordl_internal_get__isFullyIdle_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isIdle_k__BackingField() const;

constexpr bool& __cordl_internal_get__isIdle_k__BackingField() ;

constexpr bool const& __cordl_internal_get_hasMonkeBlockParent() const;

constexpr bool& __cordl_internal_get_hasMonkeBlockParent() ;

constexpr float_t const& __cordl_internal_get_lastGrabTime() const;

constexpr float_t& __cordl_internal_get_lastGrabTime() ;

constexpr int32_t const& __cordl_internal_get_lastNodeCheckIndex() const;

constexpr int32_t& __cordl_internal_get_lastNodeCheckIndex() ;

constexpr int32_t const& __cordl_internal_get_localPlayerBoneIndex() const;

constexpr int32_t& __cordl_internal_get_localPlayerBoneIndex() ;

constexpr bool const& __cordl_internal_get_localPlayerOn() const;

constexpr bool& __cordl_internal_get_localPlayerOn() ;

constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_localPlayerXRNode() const;

constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_localPlayerXRNode() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_monkeBlockParent() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_monkeBlockParent() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_nodeHits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_nodeHits() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_nodes() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_nodes() ;

constexpr float_t const& __cordl_internal_get_potentialIdleTimer() const;

constexpr float_t& __cordl_internal_get_potentialIdleTimer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prefabRopeBit() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prefabRopeBit() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_remotePlayers() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_remotePlayers() ;

constexpr float_t const& __cordl_internal_get_ropeBitGenOffset() const;

constexpr float_t& __cordl_internal_get_ropeBitGenOffset() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_ropeCreakSFX() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_ropeCreakSFX() ;

constexpr int32_t const& __cordl_internal_get_ropeDataIndexOffset() const;

constexpr int32_t& __cordl_internal_get_ropeDataIndexOffset() ;

constexpr int32_t const& __cordl_internal_get_ropeDataStartIndex() const;

constexpr int32_t& __cordl_internal_get_ropeDataStartIndex() ;

constexpr int32_t const& __cordl_internal_get_ropeId() const;

constexpr int32_t& __cordl_internal_get_ropeId() ;

constexpr int32_t const& __cordl_internal_get_ropeLength() const;

constexpr int32_t& __cordl_internal_get_ropeLength() ;

constexpr float_t const& __cordl_internal_get_scaleFactor() const;

constexpr float_t& __cordl_internal_get_scaleFactor() ;

constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings> const& __cordl_internal_get_settings() const;

constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings>& __cordl_internal_get_settings() ;

constexpr bool const& __cordl_internal_get_started() const;

constexpr bool& __cordl_internal_get_started() ;

constexpr ::StringW const& __cordl_internal_get_staticId() const;

constexpr ::StringW& __cordl_internal_get_staticId() ;

constexpr bool const& __cordl_internal_get_supportMovingAtRuntime() const;

constexpr bool& __cordl_internal_get_supportMovingAtRuntime() ;

constexpr bool const& __cordl_internal_get_useStaticId() const;

constexpr bool& __cordl_internal_get_useStaticId() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> const& __cordl_internal_get_velocityTracker() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>& __cordl_internal_get_velocityTracker() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_wallLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_wallLayerMask() ;

constexpr void __cordl_internal_set__isFullyIdle_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isIdle_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_hasMonkeBlockParent(bool  value) ;

constexpr void __cordl_internal_set_lastGrabTime(float_t  value) ;

constexpr void __cordl_internal_set_lastNodeCheckIndex(int32_t  value) ;

constexpr void __cordl_internal_set_localPlayerBoneIndex(int32_t  value) ;

constexpr void __cordl_internal_set_localPlayerOn(bool  value) ;

constexpr void __cordl_internal_set_localPlayerXRNode(::UnityEngine::XR::XRNode  value) ;

constexpr void __cordl_internal_set_monkeBlockParent(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_nodeHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_nodes(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_potentialIdleTimer(float_t  value) ;

constexpr void __cordl_internal_set_prefabRopeBit(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_remotePlayers(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_ropeBitGenOffset(float_t  value) ;

constexpr void __cordl_internal_set_ropeCreakSFX(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_ropeDataIndexOffset(int32_t  value) ;

constexpr void __cordl_internal_set_ropeDataStartIndex(int32_t  value) ;

constexpr void __cordl_internal_set_ropeId(int32_t  value) ;

constexpr void __cordl_internal_set_ropeLength(int32_t  value) ;

constexpr void __cordl_internal_set_scaleFactor(float_t  value) ;

constexpr void __cordl_internal_set_settings(::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings>  value) ;

constexpr void __cordl_internal_set_started(bool  value) ;

constexpr void __cordl_internal_set_staticId(::StringW  value) ;

constexpr void __cordl_internal_set_supportMovingAtRuntime(bool  value) ;

constexpr void __cordl_internal_set_useStaticId(bool  value) ;

constexpr void __cordl_internal_set_velocityTracker(::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  value) ;

constexpr void __cordl_internal_set_wallLayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method .ctor, addr 0x5cecda0, size 0x150, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SupportsMovingAtRuntime, addr 0x5ce9844, size 0x8, virtual false, abstract: false, final false
inline bool get_SupportsMovingAtRuntime() ;

/// @brief Method get_hasPlayers, addr 0x5ce984c, size 0x6c, virtual false, abstract: false, final false
inline bool get_hasPlayers() ;

/// [CompilerGenerated]
/// @brief Method get_isFullyIdle, addr 0x5ce9834, size 0x8, virtual false, abstract: false, final false
inline bool get_isFullyIdle() ;

/// [CompilerGenerated]
/// @brief Method get_isIdle, addr 0x5ce9824, size 0x8, virtual false, abstract: false, final false
inline bool get_isIdle() ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* i___GlobalNamespace__IBuilderPieceComponent() noexcept;

/// [CompilerGenerated]
/// @brief Method set_isFullyIdle, addr 0x5ce983c, size 0x8, virtual false, abstract: false, final false
inline void set_isFullyIdle(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isIdle, addr 0x5ce982c, size 0x8, virtual false, abstract: false, final false
inline void set_isIdle(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaRopeSwing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaRopeSwing", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaRopeSwing(GorillaRopeSwing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaRopeSwing", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaRopeSwing(GorillaRopeSwing const& ) = delete;

/// @brief Field MAX_VELOCITY_FOR_IDLE offset 0xffffffff size 0x4
static constexpr float_t  MAX_VELOCITY_FOR_IDLE{static_cast<float_t>(0.5f)};

/// @brief Field TIME_FOR_IDLE offset 0xffffffff size 0x4
static constexpr float_t  TIME_FOR_IDLE{static_cast<float_t>(2.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4528};

/// @brief Field ropeId, offset: 0x20, size: 0x4, def value: None
 int32_t  ___ropeId;

/// @brief Field staticId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___staticId;

/// @brief Field useStaticId, offset: 0x30, size: 0x1, def value: None
 bool  ___useStaticId;

/// @brief Field ropeBitGenOffset, offset: 0x34, size: 0x4, def value: None
 float_t  ___ropeBitGenOffset;

/// [SerializeField]
/// @brief Field prefabRopeBit, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prefabRopeBit;

/// [SerializeField]
/// @brief Field supportMovingAtRuntime, offset: 0x40, size: 0x1, def value: None
 bool  ___supportMovingAtRuntime;

/// @brief Field nodes, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___nodes;

/// @brief Field remotePlayers, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___remotePlayers;

/// @brief Field lastGrabTime, offset: 0x58, size: 0x4, def value: None
 float_t  ___lastGrabTime;

/// [SerializeField]
/// @brief Field ropeCreakSFX, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___ropeCreakSFX;

/// @brief Field velocityTracker, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  ___velocityTracker;

/// @brief Field localPlayerOn, offset: 0x70, size: 0x1, def value: None
 bool  ___localPlayerOn;

/// @brief Field localPlayerBoneIndex, offset: 0x74, size: 0x4, def value: None
 int32_t  ___localPlayerBoneIndex;

/// @brief Field localPlayerXRNode, offset: 0x78, size: 0x4, def value: None
 ::UnityEngine::XR::XRNode  ___localPlayerXRNode;

/// [CompilerGenerated]
/// @brief Field <isIdle>k__BackingField, offset: 0x7c, size: 0x1, def value: None
 bool  ____isIdle_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <isFullyIdle>k__BackingField, offset: 0x7d, size: 0x1, def value: None
 bool  ____isFullyIdle_k__BackingField;

/// @brief Field potentialIdleTimer, offset: 0x80, size: 0x4, def value: None
 float_t  ___potentialIdleTimer;

/// [SerializeField]
/// @brief Field ropeLength, offset: 0x84, size: 0x4, def value: None
 int32_t  ___ropeLength;

/// [SerializeField]
/// @brief Field settings, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings>  ___settings;

/// @brief Field hasMonkeBlockParent, offset: 0x90, size: 0x1, def value: None
 bool  ___hasMonkeBlockParent;

/// @brief Field monkeBlockParent, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___monkeBlockParent;

/// @brief Field ropeDataStartIndex, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___ropeDataStartIndex;

/// @brief Field ropeDataIndexOffset, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___ropeDataIndexOffset;

/// [SerializeField]
/// @brief Field wallLayerMask, offset: 0xa8, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___wallLayerMask;

/// @brief Field nodeHits, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___nodeHits;

/// @brief Field scaleFactor, offset: 0xb8, size: 0x4, def value: None
 float_t  ___scaleFactor;

/// @brief Field started, offset: 0xbc, size: 0x1, def value: None
 bool  ___started;

/// @brief Field lastNodeCheckIndex, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___lastNodeCheckIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___ropeId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___staticId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___useStaticId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___ropeBitGenOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___prefabRopeBit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___supportMovingAtRuntime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___nodes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___remotePlayers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___lastGrabTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___ropeCreakSFX) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___velocityTracker) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___localPlayerOn) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___localPlayerBoneIndex) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___localPlayerXRNode) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ____isIdle_k__BackingField) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ____isFullyIdle_k__BackingField) == 0x7d, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___potentialIdleTimer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___ropeLength) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___settings) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___hasMonkeBlockParent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___monkeBlockParent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___ropeDataStartIndex) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___ropeDataIndexOffset) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___wallLayerMask) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___nodeHits) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___scaleFactor) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___started) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwing, ___lastNodeCheckIndex) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::GorillaRopeSwing) == 0xc8, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay
