#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetBlaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIGadgetBlasterState_def.hpp"
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetBlaster)
namespace GlobalNamespace {
class GameButtonActivatable;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class SIGadgetBlasterProjectile;
}
namespace GlobalNamespace {
struct SIGadgetBlasterState;
}
namespace GlobalNamespace {
class SIGadgetBlasterType;
}
namespace GlobalNamespace {
struct SIGadgetBlaster_RPCCalls;
}
namespace GlobalNamespace {
struct SIUpgradeSet;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioSource;
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
class SIGadgetBlaster;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetBlaster*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetBlaster*, "", "SIGadgetBlaster");
// [RequireComponent(typeof(GameGrabbable))]
// [RequireComponent(typeof(GameSnappable))]
// [RequireComponent(typeof(GameButtonActivatable))]
// [RequireComponent(typeof(SIGadgetBlasterType))]
// Dependencies SIGadget, SIGadgetBlasterState, UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetBlaster
class CORDL_TYPE SIGadgetBlaster : public ::GlobalNamespace::SIGadget {
public:
// Declarations
using RPCCalls = ::GlobalNamespace::SIGadgetBlaster_RPCCalls;

 __declspec(property(get=get_LocalEquippedOrActivated)) bool  LocalEquippedOrActivated;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field activeProjectiles, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeProjectiles, put=__cordl_internal_set_activeProjectiles)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>>*  activeProjectiles;

/// @brief Field blasterProjectilePools, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_blasterProjectilePools, put=setStaticF_blasterProjectilePools)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*  blasterProjectilePools;

/// @brief Field blasterSource, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_blasterSource, put=__cordl_internal_set_blasterSource)) ::UnityW<::UnityEngine::AudioSource>  blasterSource;

/// @brief Field blasterType, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_blasterType, put=__cordl_internal_set_blasterType)) ::GlobalNamespace::SIGadgetBlasterType*  blasterType;

/// @brief Field buttonActivatable, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonActivatable, put=__cordl_internal_set_buttonActivatable)) ::UnityW<::GlobalNamespace::GameButtonActivatable>  buttonActivatable;

/// @brief Field currentState, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::SIGadgetBlasterState  currentState;

/// @brief Field environmentLayerMask, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_environmentLayerMask, put=__cordl_internal_set_environmentLayerMask)) ::UnityEngine::LayerMask  environmentLayerMask;

/// @brief Field firingPosition, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_firingPosition, put=__cordl_internal_set_firingPosition)) ::UnityW<::UnityEngine::Transform>  firingPosition;

/// @brief Field firingSource, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_firingSource, put=__cordl_internal_set_firingSource)) ::UnityW<::UnityEngine::AudioSource>  firingSource;

/// @brief Field inputActivateThreshold, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputActivateThreshold, put=__cordl_internal_set_inputActivateThreshold)) float_t  inputActivateThreshold;

/// @brief Field inputDeactivateThreshold, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputDeactivateThreshold, put=__cordl_internal_set_inputDeactivateThreshold)) float_t  inputDeactivateThreshold;

/// @brief Field lastFired, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastFired, put=__cordl_internal_set_lastFired)) float_t  lastFired;

/// @brief Field maxLagDistance, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLagDistance, put=__cordl_internal_set_maxLagDistance)) float_t  maxLagDistance;

/// @brief Field maxProjectileCount, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxProjectileCount, put=__cordl_internal_set_maxProjectileCount)) int32_t  maxProjectileCount;

/// @brief Field projectileCount, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileCount, put=__cordl_internal_set_projectileCount)) int32_t  projectileCount;

/// @brief Field projectileId, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileId, put=__cordl_internal_set_projectileId)) int32_t  projectileId;

/// @brief Field projectilesToDespawn, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectilesToDespawn, put=__cordl_internal_set_projectilesToDespawn)) ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>>*  projectilesToDespawn;

/// @brief Field projectilesToDespawnTimes, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectilesToDespawnTimes, put=__cordl_internal_set_projectilesToDespawnTimes)) ::System::Collections::Generic::Queue_1<float_t>*  projectilesToDespawnTimes;

/// @brief Field wasActivated, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasActivated, put=__cordl_internal_set_wasActivated)) bool  wasActivated;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method ApplyUpgradeNodes, addr 0x57fa268, size 0xac, virtual true, abstract: false, final false
inline void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

/// @brief Method CanChangeState, addr 0x57fa25c, size 0xc, virtual false, abstract: false, final false
static inline bool CanChangeState(int64_t  newStateIndex) ;

/// @brief Method CheckInput, addr 0x57fa314, size 0x44, virtual false, abstract: false, final false
inline bool CheckInput() ;

/// @brief Method CurrentFireRate, addr 0x57faf30, size 0xb4, virtual false, abstract: false, final false
inline float_t CurrentFireRate() ;

/// @brief Method DespawnProjectile, addr 0x57fa6a4, size 0xe0, virtual false, abstract: false, final false
inline void DespawnProjectile(::GlobalNamespace::SIGadgetBlasterProjectile*  projectile) ;

/// @brief Method FireProjectileHaptics, addr 0x57fae5c, size 0xd4, virtual false, abstract: false, final false
inline void FireProjectileHaptics(float_t  strength, float_t  duration) ;

/// @brief Method InstantiateProjectile, addr 0x57fa784, size 0x488, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> InstantiateProjectile(::GlobalNamespace::SIGadgetBlasterProjectile*  projectilePrefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  thisFireId) ;

static inline ::GlobalNamespace::SIGadgetBlaster* New_ctor() ;

/// @brief Method NextFireId, addr 0x57fa358, size 0x14, virtual false, abstract: false, final false
inline int32_t NextFireId() ;

/// @brief Method OnDisable, addr 0x57f9ce0, size 0x78, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57f99a0, size 0x340, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUpdateAuthority, addr 0x57f9fb4, size 0xc0, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x57fa074, size 0xe4, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method ProcessClientToClientRPC, addr 0x57fa36c, size 0x2f4, virtual true, abstract: false, final false
inline void ProcessClientToClientRPC(::Photon::Pun::PhotonMessageInfo  info, int32_t  rpcID, ::ArrayW<::System::Object*>  data) ;

/// @brief Method SetStateAuthority, addr 0x57fa224, size 0x38, virtual false, abstract: false, final false
inline void SetStateAuthority(::GlobalNamespace::SIGadgetBlasterState  newState) ;

/// @brief Method SetStateShared, addr 0x57fa158, size 0xcc, virtual false, abstract: false, final false
inline void SetStateShared(::GlobalNamespace::SIGadgetBlasterState  newState) ;

/// @brief Method StartGrabbing, addr 0x57fa660, size 0x3c, virtual false, abstract: false, final false
inline void StartGrabbing() ;

/// @brief Method StopGrabbing, addr 0x57fa69c, size 0x8, virtual false, abstract: false, final false
inline void StopGrabbing() ;

/// @brief Method Tick, addr 0x57f9d58, size 0x25c, virtual true, abstract: false, final true
inline void Tick() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>>* const& __cordl_internal_get_activeProjectiles() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>>*& __cordl_internal_get_activeProjectiles() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_blasterSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_blasterSource() ;

constexpr ::GlobalNamespace::SIGadgetBlasterType* const& __cordl_internal_get_blasterType() const;

constexpr ::GlobalNamespace::SIGadgetBlasterType*& __cordl_internal_get_blasterType() ;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& __cordl_internal_get_buttonActivatable() const;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& __cordl_internal_get_buttonActivatable() ;

constexpr ::GlobalNamespace::SIGadgetBlasterState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::SIGadgetBlasterState& __cordl_internal_get_currentState() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_environmentLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_environmentLayerMask() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_firingPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_firingPosition() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_firingSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_firingSource() ;

constexpr float_t const& __cordl_internal_get_inputActivateThreshold() const;

constexpr float_t& __cordl_internal_get_inputActivateThreshold() ;

constexpr float_t const& __cordl_internal_get_inputDeactivateThreshold() const;

constexpr float_t& __cordl_internal_get_inputDeactivateThreshold() ;

constexpr float_t const& __cordl_internal_get_lastFired() const;

constexpr float_t& __cordl_internal_get_lastFired() ;

constexpr float_t const& __cordl_internal_get_maxLagDistance() const;

constexpr float_t& __cordl_internal_get_maxLagDistance() ;

constexpr int32_t const& __cordl_internal_get_maxProjectileCount() const;

constexpr int32_t& __cordl_internal_get_maxProjectileCount() ;

constexpr int32_t const& __cordl_internal_get_projectileCount() const;

constexpr int32_t& __cordl_internal_get_projectileCount() ;

constexpr int32_t const& __cordl_internal_get_projectileId() const;

constexpr int32_t& __cordl_internal_get_projectileId() ;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>>* const& __cordl_internal_get_projectilesToDespawn() const;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>>*& __cordl_internal_get_projectilesToDespawn() ;

constexpr ::System::Collections::Generic::Queue_1<float_t>* const& __cordl_internal_get_projectilesToDespawnTimes() const;

constexpr ::System::Collections::Generic::Queue_1<float_t>*& __cordl_internal_get_projectilesToDespawnTimes() ;

constexpr bool const& __cordl_internal_get_wasActivated() const;

constexpr bool& __cordl_internal_get_wasActivated() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_activeProjectiles(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>>*  value) ;

constexpr void __cordl_internal_set_blasterSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_blasterType(::GlobalNamespace::SIGadgetBlasterType*  value) ;

constexpr void __cordl_internal_set_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::SIGadgetBlasterState  value) ;

constexpr void __cordl_internal_set_environmentLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_firingPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_firingSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_inputActivateThreshold(float_t  value) ;

constexpr void __cordl_internal_set_inputDeactivateThreshold(float_t  value) ;

constexpr void __cordl_internal_set_lastFired(float_t  value) ;

constexpr void __cordl_internal_set_maxLagDistance(float_t  value) ;

constexpr void __cordl_internal_set_maxProjectileCount(int32_t  value) ;

constexpr void __cordl_internal_set_projectileCount(int32_t  value) ;

constexpr void __cordl_internal_set_projectileId(int32_t  value) ;

constexpr void __cordl_internal_set_projectilesToDespawn(::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>>*  value) ;

constexpr void __cordl_internal_set_projectilesToDespawnTimes(::System::Collections::Generic::Queue_1<float_t>*  value) ;

constexpr void __cordl_internal_set_wasActivated(bool  value) ;

/// @brief Method .ctor, addr 0x57fafe4, size 0x16c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>* getStaticF_blasterProjectilePools() ;

/// @brief Method get_LocalEquippedOrActivated, addr 0x57f9958, size 0x38, virtual false, abstract: false, final false
inline bool get_LocalEquippedOrActivated() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x57f9990, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

static inline void setStaticF_blasterProjectilePools(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x57f9998, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetBlaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetBlaster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetBlaster(SIGadgetBlaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetBlaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetBlaster(SIGadgetBlaster const& ) = delete;

/// @brief Field PROJECTILE_MAX_LATENCY offset 0xffffffff size 0x4
static constexpr float_t  PROJECTILE_MAX_LATENCY{static_cast<float_t>(1.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{222};

/// @brief Field blasterType, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::SIGadgetBlasterType*  ___blasterType;

/// @brief Field currentState, offset: 0x80, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetBlasterState  ___currentState;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x84, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// [SerializeField]
/// @brief Field buttonActivatable, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameButtonActivatable>  ___buttonActivatable;

/// [SerializeField]
/// @brief Field inputActivateThreshold, offset: 0x90, size: 0x4, def value: None
 float_t  ___inputActivateThreshold;

/// [SerializeField]
/// @brief Field inputDeactivateThreshold, offset: 0x94, size: 0x4, def value: None
 float_t  ___inputDeactivateThreshold;

/// @brief Field maxProjectileCount, offset: 0x98, size: 0x4, def value: None
 int32_t  ___maxProjectileCount;

/// @brief Field maxLagDistance, offset: 0x9c, size: 0x4, def value: None
 float_t  ___maxLagDistance;

/// @brief Field wasActivated, offset: 0xa0, size: 0x1, def value: None
 bool  ___wasActivated;

/// @brief Field lastFired, offset: 0xa4, size: 0x4, def value: None
 float_t  ___lastFired;

/// @brief Field projectileCount, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___projectileCount;

/// @brief Field projectileId, offset: 0xac, size: 0x4, def value: None
 int32_t  ___projectileId;

/// @brief Field activeProjectiles, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>>*  ___activeProjectiles;

/// @brief Field projectilesToDespawn, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>>*  ___projectilesToDespawn;

/// @brief Field projectilesToDespawnTimes, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<float_t>*  ___projectilesToDespawnTimes;

/// @brief Field firingPosition, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___firingPosition;

/// @brief Field firingSource, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___firingSource;

/// @brief Field blasterSource, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___blasterSource;

/// @brief Field environmentLayerMask, offset: 0xe0, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___environmentLayerMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___blasterType) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___currentState) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ____TickRunning_k__BackingField) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___buttonActivatable) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___inputActivateThreshold) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___inputDeactivateThreshold) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___maxProjectileCount) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___maxLagDistance) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___wasActivated) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___lastFired) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___projectileCount) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___projectileId) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___activeProjectiles) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___projectilesToDespawn) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___projectilesToDespawnTimes) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___firingPosition) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___firingSource) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___blasterSource) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster, ___environmentLayerMask) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetBlaster) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
