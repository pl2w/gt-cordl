#pragma once
// IWYU pragma private; include "GlobalNamespace/PaperPlaneProjectile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PaperPlaneProjectile)
namespace GlobalNamespace {
class PaperPlaneProjectile_PaperPlaneHit;
}
namespace GlobalNamespace {
struct TransferrableObject_SyncOptions;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Reactions {
class SpawnWorldEffects;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AnimationCurve;
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
class PaperPlaneProjectile;
}
namespace GlobalNamespace {
class PaperPlaneProjectile_PaperPlaneHit;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PaperPlaneProjectile*);
MARK_REF_T(::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PaperPlaneProjectile*, "", "PaperPlaneProjectile");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*, "", "PaperPlaneProjectile/PaperPlaneHit");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PaperPlaneProjectile
class CORDL_TYPE PaperPlaneProjectile : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PaperPlaneHit = ::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit;

 __declspec(property(get=get_MyRig)) ::UnityW<::GlobalNamespace::VRRig>  MyRig;

/// @brief Field OnHit, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHit, put=__cordl_internal_set_OnHit)) ::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*  OnHit;

/// @brief Field OnItemStateBoolAFalse, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolAFalse, put=__cordl_internal_set_OnItemStateBoolAFalse)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolAFalse;

/// @brief Field OnItemStateBoolATrue, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolATrue, put=__cordl_internal_set_OnItemStateBoolATrue)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolATrue;

/// @brief Field OnItemStateBoolBFalse, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolBFalse, put=__cordl_internal_set_OnItemStateBoolBFalse)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolBFalse;

/// @brief Field OnItemStateBoolBTrue, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolBTrue, put=__cordl_internal_set_OnItemStateBoolBTrue)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolBTrue;

/// @brief Field OnItemStateBoolCFalse, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolCFalse, put=__cordl_internal_set_OnItemStateBoolCFalse)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolCFalse;

/// @brief Field OnItemStateBoolCTrue, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolCTrue, put=__cordl_internal_set_OnItemStateBoolCTrue)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolCTrue;

/// @brief Field OnItemStateBoolDFalse, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolDFalse, put=__cordl_internal_set_OnItemStateBoolDFalse)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolDFalse;

/// @brief Field OnItemStateBoolDTrue, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolDTrue, put=__cordl_internal_set_OnItemStateBoolDTrue)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolDTrue;

/// @brief Field OnItemStateIntChanged, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateIntChanged, put=__cordl_internal_set_OnItemStateIntChanged)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  OnItemStateIntChanged;

/// @brief Field OnResetProjectileState, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnResetProjectileState, put=__cordl_internal_set_OnResetProjectileState)) ::UnityEngine::Events::UnityEvent*  OnResetProjectileState;

/// @brief Field _direction, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__direction, put=__cordl_internal_set__direction)) ::UnityEngine::Vector3  _direction;

/// @brief Field _speed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__speed, put=__cordl_internal_set__speed)) float_t  _speed;

/// @brief Field _stopped, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__stopped, put=__cordl_internal_set__stopped)) bool  _stopped;

/// @brief Field _tCached, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__tCached, put=__cordl_internal_set__tCached)) ::UnityW<::UnityEngine::Transform>  _tCached;

/// @brief Field _timeElapsed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeElapsed, put=__cordl_internal_set__timeElapsed)) float_t  _timeElapsed;

/// @brief Field boolADebugName, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_boolADebugName, put=__cordl_internal_set_boolADebugName)) ::StringW  boolADebugName;

/// @brief Field boolBDebugName, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_boolBDebugName, put=__cordl_internal_set_boolBDebugName)) ::StringW  boolBDebugName;

/// @brief Field boolCDebugName, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_boolCDebugName, put=__cordl_internal_set_boolCDebugName)) ::StringW  boolCDebugName;

/// @brief Field boolDDebugName, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_boolDDebugName, put=__cordl_internal_set_boolDDebugName)) ::StringW  boolDDebugName;

/// @brief Field crashingObject, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_crashingObject, put=__cordl_internal_set_crashingObject)) ::UnityW<::UnityEngine::GameObject>  crashingObject;

/// @brief Field enableRotation, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableRotation, put=__cordl_internal_set_enableRotation)) bool  enableRotation;

/// @brief Field flyingObject, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_flyingObject, put=__cordl_internal_set_flyingObject)) ::UnityW<::UnityEngine::GameObject>  flyingObject;

/// @brief Field layerMask, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field maxFlightTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxFlightTime, put=__cordl_internal_set_maxFlightTime)) float_t  maxFlightTime;

/// @brief Field maxSpeed, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field minFlightTime, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minFlightTime, put=__cordl_internal_set_minFlightTime)) float_t  minFlightTime;

/// @brief Field minSpeed, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSpeed, put=__cordl_internal_set_minSpeed)) float_t  minSpeed;

/// @brief Field myRig, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field nextPos, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_nextPos, put=__cordl_internal_set_nextPos)) ::UnityEngine::Vector3  nextPos;

/// @brief Field results, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_results, put=__cordl_internal_set_results)) ::ArrayW<::UnityEngine::RaycastHit>  results;

/// @brief Field scaleFactor, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleFactor, put=__cordl_internal_set_scaleFactor)) float_t  scaleFactor;

/// @brief Field spawnWorldEffects, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnWorldEffects, put=__cordl_internal_set_spawnWorldEffects)) ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  spawnWorldEffects;

/// @brief Field speedCurve, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_speedCurve, put=__cordl_internal_set_speedCurve)) ::UnityEngine::AnimationCurve*  speedCurve;

 __declspec(property(get=get_transform)) ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Field useTransferrableObjectState, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useTransferrableObjectState, put=__cordl_internal_set_useTransferrableObjectState)) bool  useTransferrableObjectState;

/// @brief Method Awake, addr 0x578b8a8, size 0x74, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Launch, addr 0x578ba6c, size 0x320, virtual false, abstract: false, final false
inline void Launch(::UnityEngine::Vector3  startPos, ::UnityEngine::Quaternion  startRot, ::UnityEngine::Vector3  vel) ;

static inline ::GlobalNamespace::PaperPlaneProjectile* New_ctor() ;

/// @brief Method OnDisable, addr 0x578c29c, size 0x1c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method ResetProjectile, addr 0x578b920, size 0x3c, virtual false, abstract: false, final false
inline void ResetProjectile() ;

/// @brief Method SetTransferrableState, addr 0x578b95c, size 0x110, virtual false, abstract: false, final false
inline void SetTransferrableState(::GlobalNamespace::TransferrableObject_SyncOptions  syncType, int32_t  state) ;

/// @brief Method SetVRRig, addr 0x578c28c, size 0x10, virtual false, abstract: false, final false
inline void SetVRRig(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method Start, addr 0x578b91c, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x578bd8c, size 0x500, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit* const& __cordl_internal_get_OnHit() const;

constexpr ::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*& __cordl_internal_get_OnHit() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateBoolAFalse() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateBoolAFalse() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateBoolATrue() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateBoolATrue() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateBoolBFalse() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateBoolBFalse() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateBoolBTrue() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateBoolBTrue() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateBoolCFalse() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateBoolCFalse() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateBoolCTrue() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateBoolCTrue() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateBoolDFalse() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateBoolDFalse() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateBoolDTrue() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateBoolDTrue() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_OnItemStateIntChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_OnItemStateIntChanged() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnResetProjectileState() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnResetProjectileState() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__direction() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__direction() ;

constexpr float_t const& __cordl_internal_get__speed() const;

constexpr float_t& __cordl_internal_get__speed() ;

constexpr bool const& __cordl_internal_get__stopped() const;

constexpr bool& __cordl_internal_get__stopped() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__tCached() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__tCached() ;

constexpr float_t const& __cordl_internal_get__timeElapsed() const;

constexpr float_t& __cordl_internal_get__timeElapsed() ;

constexpr ::StringW const& __cordl_internal_get_boolADebugName() const;

constexpr ::StringW& __cordl_internal_get_boolADebugName() ;

constexpr ::StringW const& __cordl_internal_get_boolBDebugName() const;

constexpr ::StringW& __cordl_internal_get_boolBDebugName() ;

constexpr ::StringW const& __cordl_internal_get_boolCDebugName() const;

constexpr ::StringW& __cordl_internal_get_boolCDebugName() ;

constexpr ::StringW const& __cordl_internal_get_boolDDebugName() const;

constexpr ::StringW& __cordl_internal_get_boolDDebugName() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_crashingObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_crashingObject() ;

constexpr bool const& __cordl_internal_get_enableRotation() const;

constexpr bool& __cordl_internal_get_enableRotation() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_flyingObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_flyingObject() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr float_t const& __cordl_internal_get_maxFlightTime() const;

constexpr float_t& __cordl_internal_get_maxFlightTime() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr float_t const& __cordl_internal_get_minFlightTime() const;

constexpr float_t& __cordl_internal_get_minFlightTime() ;

constexpr float_t const& __cordl_internal_get_minSpeed() const;

constexpr float_t& __cordl_internal_get_minSpeed() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_nextPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_nextPos() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_results() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_results() ;

constexpr float_t const& __cordl_internal_get_scaleFactor() const;

constexpr float_t& __cordl_internal_get_scaleFactor() ;

constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects> const& __cordl_internal_get_spawnWorldEffects() const;

constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>& __cordl_internal_get_spawnWorldEffects() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_speedCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_speedCurve() ;

constexpr bool const& __cordl_internal_get_useTransferrableObjectState() const;

constexpr bool& __cordl_internal_get_useTransferrableObjectState() ;

constexpr void __cordl_internal_set_OnHit(::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*  value) ;

constexpr void __cordl_internal_set_OnItemStateBoolAFalse(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateBoolATrue(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateBoolBFalse(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateBoolBTrue(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateBoolCFalse(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateBoolCTrue(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateBoolDFalse(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateBoolDTrue(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateIntChanged(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnResetProjectileState(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__direction(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__speed(float_t  value) ;

constexpr void __cordl_internal_set__stopped(bool  value) ;

constexpr void __cordl_internal_set__tCached(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__timeElapsed(float_t  value) ;

constexpr void __cordl_internal_set_boolADebugName(::StringW  value) ;

constexpr void __cordl_internal_set_boolBDebugName(::StringW  value) ;

constexpr void __cordl_internal_set_boolCDebugName(::StringW  value) ;

constexpr void __cordl_internal_set_boolDDebugName(::StringW  value) ;

constexpr void __cordl_internal_set_crashingObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_enableRotation(bool  value) ;

constexpr void __cordl_internal_set_flyingObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_maxFlightTime(float_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_minFlightTime(float_t  value) ;

constexpr void __cordl_internal_set_minSpeed(float_t  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_nextPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_results(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_scaleFactor(float_t  value) ;

constexpr void __cordl_internal_set_spawnWorldEffects(::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  value) ;

constexpr void __cordl_internal_set_speedCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_useTransferrableObjectState(bool  value) ;

/// @brief Method .ctor, addr 0x578c2b8, size 0x198, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnHit, addr 0x578b760, size 0x9c, virtual false, abstract: false, final false
inline void add_OnHit(::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*  value) ;

/// @brief Method get_MyRig, addr 0x578b8a0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_MyRig() ;

/// @brief Method get_transform, addr 0x578b898, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_transform() ;

/// [CompilerGenerated]
/// @brief Method remove_OnHit, addr 0x578b7fc, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnHit(::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PaperPlaneProjectile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PaperPlaneProjectile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PaperPlaneProjectile(PaperPlaneProjectile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PaperPlaneProjectile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PaperPlaneProjectile(PaperPlaneProjectile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1436};

/// @brief Field speedScaleRatio offset 0xffffffff size 0x4
static constexpr float_t  speedScaleRatio{static_cast<float_t>(0.7f)};

/// [CompilerGenerated]
/// @brief Field OnHit, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit*  ___OnHit;

/// [Space]
/// @brief Field _timeElapsed, offset: 0x28, size: 0x4, def value: None
 float_t  ____timeElapsed;

/// @brief Field _speed, offset: 0x2c, size: 0x4, def value: None
 float_t  ____speed;

/// @brief Field _direction, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____direction;

/// @brief Field _stopped, offset: 0x3c, size: 0x1, def value: None
 bool  ____stopped;

/// @brief Field _tCached, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____tCached;

/// @brief Field spawnWorldEffects, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  ___spawnWorldEffects;

/// @brief Field nextPos, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___nextPos;

/// @brief Field results, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___results;

/// [Tooltip("Maximum lifetime in seconds for the projectile")]
/// [SerializeField]
/// @brief Field maxFlightTime, offset: 0x68, size: 0x4, def value: None
 float_t  ___maxFlightTime;

/// [Tooltip("Collisions are ignored for minFlightTime seconds after launch")]
/// [SerializeField]
/// @brief Field minFlightTime, offset: 0x6c, size: 0x4, def value: None
 float_t  ___minFlightTime;

/// [Tooltip("Hand speed to projectile launch Speed")]
/// [SerializeField]
/// @brief Field speedCurve, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___speedCurve;

/// [Tooltip("maximum speed of launched projectile (clamped after applying speed curve)")]
/// [SerializeField]
/// @brief Field maxSpeed, offset: 0x78, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// [Tooltip("minimum speed of launched projectile (clamped after applying speed curve)")]
/// [SerializeField]
/// @brief Field minSpeed, offset: 0x7c, size: 0x4, def value: None
 float_t  ___minSpeed;

/// [SerializeField]
/// @brief Field enableRotation, offset: 0x80, size: 0x1, def value: None
 bool  ___enableRotation;

/// [Tooltip("Objects enabled when launched and disabled on Hit")]
/// [SerializeField]
/// @brief Field flyingObject, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___flyingObject;

/// [Tooltip("Objects disabled when launched and enabled on Hit")]
/// [SerializeField]
/// @brief Field crashingObject, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___crashingObject;

/// [Tooltip("Layers the projectile collides with")]
/// [SerializeField]
/// @brief Field layerMask, offset: 0x98, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// [SerializeField]
/// @brief Field useTransferrableObjectState, offset: 0x9c, size: 0x1, def value: None
 bool  ___useTransferrableObjectState;

/// [SerializeField]
/// @brief Field OnResetProjectileState, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnResetProjectileState;

/// [SerializeField]
/// @brief Field boolADebugName, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___boolADebugName;

/// [SerializeField]
/// @brief Field OnItemStateBoolATrue, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolATrue;

/// [SerializeField]
/// @brief Field OnItemStateBoolAFalse, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolAFalse;

/// [SerializeField]
/// @brief Field boolBDebugName, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ___boolBDebugName;

/// [SerializeField]
/// @brief Field OnItemStateBoolBTrue, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolBTrue;

/// [SerializeField]
/// @brief Field OnItemStateBoolBFalse, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolBFalse;

/// [SerializeField]
/// @brief Field boolCDebugName, offset: 0xd8, size: 0x8, def value: None
 ::StringW  ___boolCDebugName;

/// [SerializeField]
/// @brief Field OnItemStateBoolCTrue, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolCTrue;

/// [SerializeField]
/// @brief Field OnItemStateBoolCFalse, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolCFalse;

/// [SerializeField]
/// @brief Field boolDDebugName, offset: 0xf0, size: 0x8, def value: None
 ::StringW  ___boolDDebugName;

/// [SerializeField]
/// @brief Field OnItemStateBoolDTrue, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolDTrue;

/// [SerializeField]
/// @brief Field OnItemStateBoolDFalse, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolDFalse;

/// [SerializeField]
/// @brief Field OnItemStateIntChanged, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___OnItemStateIntChanged;

/// @brief Field myRig, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field scaleFactor, offset: 0x118, size: 0x4, def value: None
 float_t  ___scaleFactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___OnHit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ____timeElapsed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ____speed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ____direction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ____stopped) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ____tCached) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___spawnWorldEffects) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___nextPos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___results) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___maxFlightTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___minFlightTime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___speedCurve) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___maxSpeed) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___minSpeed) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___enableRotation) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___flyingObject) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___crashingObject) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___layerMask) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___useTransferrableObjectState) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___OnResetProjectileState) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___boolADebugName) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___OnItemStateBoolATrue) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___OnItemStateBoolAFalse) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___boolBDebugName) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___OnItemStateBoolBTrue) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___OnItemStateBoolBFalse) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___boolCDebugName) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___OnItemStateBoolCTrue) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___OnItemStateBoolCFalse) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___boolDDebugName) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___OnItemStateBoolDTrue) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___OnItemStateBoolDFalse) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___OnItemStateIntChanged) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___myRig) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperPlaneProjectile, ___scaleFactor) == 0x118, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PaperPlaneProjectile) == 0x120, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: PaperPlaneProjectile/PaperPlaneHit
class CORDL_TYPE PaperPlaneProjectile_PaperPlaneHit : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x578c504, size 0x88, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3  endPoint, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x578c58c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x578c4f0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Vector3  endPoint) ;

static inline ::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x578c450, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PaperPlaneProjectile_PaperPlaneHit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PaperPlaneProjectile_PaperPlaneHit", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PaperPlaneProjectile_PaperPlaneHit(PaperPlaneProjectile_PaperPlaneHit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PaperPlaneProjectile_PaperPlaneHit", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PaperPlaneProjectile_PaperPlaneHit(PaperPlaneProjectile_PaperPlaneHit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1435};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PaperPlaneProjectile_PaperPlaneHit) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
