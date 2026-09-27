#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/FirecrackerProjectile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FirecrackerProjectile)
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
struct TransferrableObject_SyncOptions;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Cosmetics {
class IProjectile;
}
namespace GorillaTag::Shared::Scripts {
class FirecrackerProjectile__Sizzle_d__43;
}
namespace GorillaTag {
class TickSystemTimer;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityEvent_2;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Shared::Scripts {
class FirecrackerProjectile;
}
namespace GorillaTag::Shared::Scripts {
class FirecrackerProjectile__Sizzle_d__43;
}
// Write type traits
MARK_REF_T(::GorillaTag::Shared::Scripts::FirecrackerProjectile*);
MARK_REF_T(::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Shared::Scripts::FirecrackerProjectile*, "GorillaTag.Shared.Scripts", "FirecrackerProjectile");
DEFINE_IL2CPP_CLASS(::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43*, "GorillaTag.Shared.Scripts", "FirecrackerProjectile/<Sizzle>d__43");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Shared::Scripts {
// Is value type: false
// CS Name: GorillaTag.Shared.Scripts.FirecrackerProjectile
class CORDL_TYPE FirecrackerProjectile : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Sizzle_d__43 = ::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43;

/// @brief Field OnCollisionEntered, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCollisionEntered, put=__cordl_internal_set_OnCollisionEntered)) ::UnityEngine::Events::UnityEvent_2<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>,::UnityEngine::Vector3>*  OnCollisionEntered;

/// @brief Field OnDetonationComplete, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDetonationComplete, put=__cordl_internal_set_OnDetonationComplete)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>>*  OnDetonationComplete;

/// @brief Field OnDetonationStart, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDetonationStart, put=__cordl_internal_set_OnDetonationStart)) ::UnityEngine::Events::UnityEvent_2<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>,::UnityEngine::Vector3>*  OnDetonationStart;

/// @brief Field OnEnableObject, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEnableObject, put=__cordl_internal_set_OnEnableObject)) ::UnityEngine::Events::UnityEvent*  OnEnableObject;

/// @brief Field OnItemStateBoolAFalse, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolAFalse, put=__cordl_internal_set_OnItemStateBoolAFalse)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolAFalse;

/// @brief Field OnItemStateBoolATrue, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolATrue, put=__cordl_internal_set_OnItemStateBoolATrue)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolATrue;

/// @brief Field OnItemStateBoolBFalse, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolBFalse, put=__cordl_internal_set_OnItemStateBoolBFalse)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolBFalse;

/// @brief Field OnItemStateBoolBTrue, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolBTrue, put=__cordl_internal_set_OnItemStateBoolBTrue)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolBTrue;

/// @brief Field OnItemStateBoolCFalse, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolCFalse, put=__cordl_internal_set_OnItemStateBoolCFalse)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolCFalse;

/// @brief Field OnItemStateBoolCTrue, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolCTrue, put=__cordl_internal_set_OnItemStateBoolCTrue)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolCTrue;

/// @brief Field OnItemStateBoolDFalse, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolDFalse, put=__cordl_internal_set_OnItemStateBoolDFalse)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolDFalse;

/// @brief Field OnItemStateBoolDTrue, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateBoolDTrue, put=__cordl_internal_set_OnItemStateBoolDTrue)) ::UnityEngine::Events::UnityEvent*  OnItemStateBoolDTrue;

/// @brief Field OnItemStateIntChanged, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateIntChanged, put=__cordl_internal_set_OnItemStateIntChanged)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  OnItemStateIntChanged;

/// @brief Field OnResetProjectileState, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnResetProjectileState, put=__cordl_internal_set_OnResetProjectileState)) ::UnityEngine::Events::UnityEvent*  OnResetProjectileState;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field audioSource, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field boolADebugName, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_boolADebugName, put=__cordl_internal_set_boolADebugName)) ::StringW  boolADebugName;

/// @brief Field boolBDebugName, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_boolBDebugName, put=__cordl_internal_set_boolBDebugName)) ::StringW  boolBDebugName;

/// @brief Field boolCDebugName, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_boolCDebugName, put=__cordl_internal_set_boolCDebugName)) ::StringW  boolCDebugName;

/// @brief Field boolDDebugName, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_boolDDebugName, put=__cordl_internal_set_boolDDebugName)) ::StringW  boolDDebugName;

/// @brief Field collisionEntered, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_collisionEntered, put=__cordl_internal_set_collisionEntered)) bool  collisionEntered;

/// @brief Field disableWhenHit, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableWhenHit, put=__cordl_internal_set_disableWhenHit)) ::UnityW<::UnityEngine::GameObject>  disableWhenHit;

/// @brief Field explosionEffect, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_explosionEffect, put=__cordl_internal_set_explosionEffect)) ::UnityW<::UnityEngine::GameObject>  explosionEffect;

/// @brief Field explosionTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_explosionTime, put=__cordl_internal_set_explosionTime)) float_t  explosionTime;

/// @brief Field forceBackToPoolAfterSec, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_forceBackToPoolAfterSec, put=__cordl_internal_set_forceBackToPoolAfterSec)) float_t  forceBackToPoolAfterSec;

/// @brief Field m_timer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_timer, put=__cordl_internal_set_m_timer)) ::GorillaTag::TickSystemTimer*  m_timer;

/// @brief Field rb, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field sizzleAudioClip, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_sizzleAudioClip, put=__cordl_internal_set_sizzleAudioClip)) ::UnityW<::UnityEngine::AudioClip>  sizzleAudioClip;

/// @brief Field sizzleDuration, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_sizzleDuration, put=__cordl_internal_set_sizzleDuration)) float_t  sizzleDuration;

/// @brief Field timeCreated, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeCreated, put=__cordl_internal_set_timeCreated)) float_t  timeCreated;

/// @brief Field timeExploded, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeExploded, put=__cordl_internal_set_timeExploded)) float_t  timeExploded;

/// @brief Field useTransferrableObjectState, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_useTransferrableObjectState, put=__cordl_internal_set_useTransferrableObjectState)) bool  useTransferrableObjectState;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Convert operator to "::GorillaTag::Cosmetics::IProjectile"
constexpr operator  ::GorillaTag::Cosmetics::IProjectile*() noexcept;

/// @brief Method Awake, addr 0x5d4cd80, size 0xf8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Detonate, addr 0x5d4ce78, size 0xa0, virtual false, abstract: false, final false
inline void Detonate() ;

/// @brief Method Detonate, addr 0x5d4d390, size 0x1e4, virtual false, abstract: false, final false
inline void Detonate(::UnityEngine::Vector3  contactPoint, ::UnityEngine::Vector3  normal) ;

/// @brief Method Launch, addr 0x5d4d028, size 0x140, virtual true, abstract: false, final true
inline void Launch(::UnityEngine::Vector3  startPosition, ::UnityEngine::Quaternion  startRotation, ::UnityEngine::Vector3  velocity, float_t  chargeFrac, ::GlobalNamespace::VRRig*  ownerRig, int32_t  progress) ;

static inline ::GorillaTag::Shared::Scripts::FirecrackerProjectile* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x5d4d168, size 0x180, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  other) ;

/// @brief Method OnDisable, addr 0x5d4ccd8, size 0xa8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d4cbdc, size 0xfc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetTransferrableState, addr 0x5d4cf18, size 0x110, virtual false, abstract: false, final false
inline void SetTransferrableState(::GlobalNamespace::TransferrableObject_SyncOptions  syncType, int32_t  state) ;

/// [IteratorStateMachine(typeof(GorillaTag.Shared.Scripts.FirecrackerProjectile::<Sizzle>d__43))]
/// @brief Method Sizzle, addr 0x5d4d2e8, size 0xa8, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Sizzle(::UnityEngine::Vector3  contactPoint, ::UnityEngine::Vector3  normal) ;

/// @brief Method Tick, addr 0x5d4cb48, size 0x94, virtual true, abstract: false, final true
inline void Tick() ;

constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>,::UnityEngine::Vector3>* const& __cordl_internal_get_OnCollisionEntered() const;

constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>,::UnityEngine::Vector3>*& __cordl_internal_get_OnCollisionEntered() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>>* const& __cordl_internal_get_OnDetonationComplete() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>>*& __cordl_internal_get_OnDetonationComplete() ;

constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>,::UnityEngine::Vector3>* const& __cordl_internal_get_OnDetonationStart() const;

constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>,::UnityEngine::Vector3>*& __cordl_internal_get_OnDetonationStart() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnEnableObject() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnEnableObject() ;

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

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::StringW const& __cordl_internal_get_boolADebugName() const;

constexpr ::StringW& __cordl_internal_get_boolADebugName() ;

constexpr ::StringW const& __cordl_internal_get_boolBDebugName() const;

constexpr ::StringW& __cordl_internal_get_boolBDebugName() ;

constexpr ::StringW const& __cordl_internal_get_boolCDebugName() const;

constexpr ::StringW& __cordl_internal_get_boolCDebugName() ;

constexpr ::StringW const& __cordl_internal_get_boolDDebugName() const;

constexpr ::StringW& __cordl_internal_get_boolDDebugName() ;

constexpr bool const& __cordl_internal_get_collisionEntered() const;

constexpr bool& __cordl_internal_get_collisionEntered() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_disableWhenHit() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_disableWhenHit() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_explosionEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_explosionEffect() ;

constexpr float_t const& __cordl_internal_get_explosionTime() const;

constexpr float_t& __cordl_internal_get_explosionTime() ;

constexpr float_t const& __cordl_internal_get_forceBackToPoolAfterSec() const;

constexpr float_t& __cordl_internal_get_forceBackToPoolAfterSec() ;

constexpr ::GorillaTag::TickSystemTimer* const& __cordl_internal_get_m_timer() const;

constexpr ::GorillaTag::TickSystemTimer*& __cordl_internal_get_m_timer() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_sizzleAudioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_sizzleAudioClip() ;

constexpr float_t const& __cordl_internal_get_sizzleDuration() const;

constexpr float_t& __cordl_internal_get_sizzleDuration() ;

constexpr float_t const& __cordl_internal_get_timeCreated() const;

constexpr float_t& __cordl_internal_get_timeCreated() ;

constexpr float_t const& __cordl_internal_get_timeExploded() const;

constexpr float_t& __cordl_internal_get_timeExploded() ;

constexpr bool const& __cordl_internal_get_useTransferrableObjectState() const;

constexpr bool& __cordl_internal_get_useTransferrableObjectState() ;

constexpr void __cordl_internal_set_OnCollisionEntered(::UnityEngine::Events::UnityEvent_2<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>,::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_OnDetonationComplete(::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>>*  value) ;

constexpr void __cordl_internal_set_OnDetonationStart(::UnityEngine::Events::UnityEvent_2<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>,::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_OnEnableObject(::UnityEngine::Events::UnityEvent*  value) ;

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

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_boolADebugName(::StringW  value) ;

constexpr void __cordl_internal_set_boolBDebugName(::StringW  value) ;

constexpr void __cordl_internal_set_boolCDebugName(::StringW  value) ;

constexpr void __cordl_internal_set_boolDDebugName(::StringW  value) ;

constexpr void __cordl_internal_set_collisionEntered(bool  value) ;

constexpr void __cordl_internal_set_disableWhenHit(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_explosionEffect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_explosionTime(float_t  value) ;

constexpr void __cordl_internal_set_forceBackToPoolAfterSec(float_t  value) ;

constexpr void __cordl_internal_set_m_timer(::GorillaTag::TickSystemTimer*  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_sizzleAudioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_sizzleDuration(float_t  value) ;

constexpr void __cordl_internal_set_timeCreated(float_t  value) ;

constexpr void __cordl_internal_set_timeExploded(float_t  value) ;

constexpr void __cordl_internal_set_useTransferrableObjectState(bool  value) ;

/// @brief Method .ctor, addr 0x5d4d59c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5d4cb38, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// @brief Convert to "::GorillaTag::Cosmetics::IProjectile"
constexpr ::GorillaTag::Cosmetics::IProjectile* i___GorillaTag__Cosmetics__IProjectile() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5d4cb40, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirecrackerProjectile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirecrackerProjectile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FirecrackerProjectile(FirecrackerProjectile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirecrackerProjectile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirecrackerProjectile(FirecrackerProjectile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4767};

/// [SerializeField]
/// @brief Field explosionEffect, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___explosionEffect;

/// [SerializeField]
/// @brief Field forceBackToPoolAfterSec, offset: 0x28, size: 0x4, def value: None
 float_t  ___forceBackToPoolAfterSec;

/// [SerializeField]
/// @brief Field explosionTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ___explosionTime;

/// [SerializeField]
/// @brief Field disableWhenHit, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___disableWhenHit;

/// [SerializeField]
/// @brief Field sizzleDuration, offset: 0x38, size: 0x4, def value: None
 float_t  ___sizzleDuration;

/// [SerializeField]
/// @brief Field sizzleAudioClip, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___sizzleAudioClip;

/// [Space]
/// @brief Field OnEnableObject, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnEnableObject;

/// @brief Field OnCollisionEntered, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>,::UnityEngine::Vector3>*  ___OnCollisionEntered;

/// @brief Field OnDetonationStart, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>,::UnityEngine::Vector3>*  ___OnDetonationStart;

/// @brief Field OnDetonationComplete, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>>*  ___OnDetonationComplete;

/// @brief Field rb, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field timeCreated, offset: 0x70, size: 0x4, def value: None
 float_t  ___timeCreated;

/// @brief Field timeExploded, offset: 0x74, size: 0x4, def value: None
 float_t  ___timeExploded;

/// @brief Field audioSource, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field m_timer, offset: 0x80, size: 0x8, def value: None
 ::GorillaTag::TickSystemTimer*  ___m_timer;

/// @brief Field collisionEntered, offset: 0x88, size: 0x1, def value: None
 bool  ___collisionEntered;

/// [SerializeField]
/// @brief Field useTransferrableObjectState, offset: 0x89, size: 0x1, def value: None
 bool  ___useTransferrableObjectState;

/// [SerializeField]
/// @brief Field OnResetProjectileState, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnResetProjectileState;

/// [SerializeField]
/// @brief Field boolADebugName, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___boolADebugName;

/// [SerializeField]
/// @brief Field OnItemStateBoolATrue, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolATrue;

/// [SerializeField]
/// @brief Field OnItemStateBoolAFalse, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolAFalse;

/// [SerializeField]
/// @brief Field boolBDebugName, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___boolBDebugName;

/// [SerializeField]
/// @brief Field OnItemStateBoolBTrue, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolBTrue;

/// [SerializeField]
/// @brief Field OnItemStateBoolBFalse, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolBFalse;

/// [SerializeField]
/// @brief Field boolCDebugName, offset: 0xc8, size: 0x8, def value: None
 ::StringW  ___boolCDebugName;

/// [SerializeField]
/// @brief Field OnItemStateBoolCTrue, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolCTrue;

/// [SerializeField]
/// @brief Field OnItemStateBoolCFalse, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolCFalse;

/// [SerializeField]
/// @brief Field boolDDebugName, offset: 0xe0, size: 0x8, def value: None
 ::StringW  ___boolDDebugName;

/// [SerializeField]
/// @brief Field OnItemStateBoolDTrue, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolDTrue;

/// [SerializeField]
/// @brief Field OnItemStateBoolDFalse, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateBoolDFalse;

/// [SerializeField]
/// @brief Field OnItemStateIntChanged, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___OnItemStateIntChanged;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x100, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___explosionEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___forceBackToPoolAfterSec) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___explosionTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___disableWhenHit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___sizzleDuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___sizzleAudioClip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___OnEnableObject) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___OnCollisionEntered) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___OnDetonationStart) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___OnDetonationComplete) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___rb) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___timeCreated) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___timeExploded) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___audioSource) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___m_timer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___collisionEntered) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___useTransferrableObjectState) == 0x89, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___OnResetProjectileState) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___boolADebugName) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___OnItemStateBoolATrue) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___OnItemStateBoolAFalse) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___boolBDebugName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___OnItemStateBoolBTrue) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___OnItemStateBoolBFalse) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___boolCDebugName) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___OnItemStateBoolCTrue) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___OnItemStateBoolCFalse) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___boolDDebugName) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___OnItemStateBoolDTrue) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___OnItemStateBoolDFalse) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ___OnItemStateIntChanged) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile, ____TickRunning_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Shared::Scripts::FirecrackerProjectile) == 0x108, "Size mismatch!");

} // namespace end def GorillaTag::Shared::Scripts
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Vector3
namespace GorillaTag::Shared::Scripts {
// Is value type: false
// CS Name: GorillaTag.Shared.Scripts.FirecrackerProjectile/<Sizzle>d__43
class CORDL_TYPE FirecrackerProjectile__Sizzle_d__43 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>  __4__this;

/// @brief Field contactPoint, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_contactPoint, put=__cordl_internal_set_contactPoint)) ::UnityEngine::Vector3  contactPoint;

/// @brief Field normal, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_normal, put=__cordl_internal_set_normal)) ::UnityEngine::Vector3  normal;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5d4d62c, size 0x17c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5d4d7a8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5d4d7b0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5d4d7e8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5d4d628, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_contactPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_contactPoint() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_normal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_normal() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>  value) ;

constexpr void __cordl_internal_set_contactPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_normal(::UnityEngine::Vector3  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5d4d574, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirecrackerProjectile__Sizzle_d__43() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirecrackerProjectile__Sizzle_d__43", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FirecrackerProjectile__Sizzle_d__43(FirecrackerProjectile__Sizzle_d__43 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirecrackerProjectile__Sizzle_d__43", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirecrackerProjectile__Sizzle_d__43(FirecrackerProjectile__Sizzle_d__43 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4766};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Shared::Scripts::FirecrackerProjectile>  _____4__this;

/// @brief Field contactPoint, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___contactPoint;

/// @brief Field normal, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___normal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43, ___contactPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43, ___normal) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Shared::Scripts::FirecrackerProjectile__Sizzle_d__43) == 0x40, "Size mismatch!");

} // namespace end def GorillaTag::Shared::Scripts
