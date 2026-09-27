#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/SeedPacketHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SeedPacketHoldable)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GlobalNamespace {
class SeedPacketTriggerHandler;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class SeedPacketHoldable;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::SeedPacketHoldable*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::SeedPacketHoldable*, "GorillaTag.Cosmetics", "SeedPacketHoldable");
// [RequireComponent(typeof(TransferrableObject))]
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.SeedPacketHoldable
class CORDL_TYPE SeedPacketHoldable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _events, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field callLimiter, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_callLimiter, put=__cordl_internal_set_callLimiter)) ::GlobalNamespace::CallLimiter*  callLimiter;

/// @brief Field cooldown, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldown, put=__cordl_internal_set_cooldown)) float_t  cooldown;

/// @brief Field flowerEffectHash, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_flowerEffectHash, put=__cordl_internal_set_flowerEffectHash)) int32_t  flowerEffectHash;

/// @brief Field flowerEffectPrefab, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_flowerEffectPrefab, put=__cordl_internal_set_flowerEffectPrefab)) ::UnityW<::UnityEngine::GameObject>  flowerEffectPrefab;

/// @brief Field hitPoint, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get_hitPoint, put=__cordl_internal_set_hitPoint)) ::UnityEngine::Vector3  hitPoint;

/// @brief Field isPouring, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPouring, put=__cordl_internal_set_isPouring)) bool  isPouring;

/// @brief Field particles, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_particles, put=__cordl_internal_set_particles)) ::UnityW<::UnityEngine::ParticleSystem>  particles;

/// @brief Field placeEffectDelayMultiplier, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_placeEffectDelayMultiplier, put=__cordl_internal_set_placeEffectDelayMultiplier)) float_t  placeEffectDelayMultiplier;

/// @brief Field pooledObjects, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_pooledObjects, put=__cordl_internal_set_pooledObjects)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>*  pooledObjects;

/// @brief Field pouringAngle, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_pouringAngle, put=__cordl_internal_set_pouringAngle)) float_t  pouringAngle;

/// @brief Field pouringRaycastDistance, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_pouringRaycastDistance, put=__cordl_internal_set_pouringRaycastDistance)) float_t  pouringRaycastDistance;

/// @brief Field pouringStartedTime, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_pouringStartedTime, put=__cordl_internal_set_pouringStartedTime)) float_t  pouringStartedTime;

/// @brief Field raycastLayerMask, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_raycastLayerMask, put=__cordl_internal_set_raycastLayerMask)) ::UnityEngine::LayerMask  raycastLayerMask;

/// @brief Field transferrableObject, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferrableObject, put=__cordl_internal_set_transferrableObject)) ::UnityW<::GlobalNamespace::TransferrableObject>  transferrableObject;

/// @brief Method Awake, addr 0x5d768b4, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::Cosmetics::SeedPacketHoldable* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5d76ce4, size 0x70, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5d76bac, size 0x138, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d76920, size 0x28c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SpawnEffect, addr 0x5d770dc, size 0x1b8, virtual false, abstract: false, final false
inline void SpawnEffect() ;

/// @brief Method StartPouring, addr 0x5d77050, size 0x8c, virtual false, abstract: false, final false
inline void StartPouring() ;

/// @brief Method SyncTriggerEffect, addr 0x5d77454, size 0x190, virtual false, abstract: false, final false
inline void SyncTriggerEffect(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method SyncTriggerEffectForOthers, addr 0x5d77294, size 0x1c0, virtual false, abstract: false, final false
inline void SyncTriggerEffectForOthers(::GlobalNamespace::SeedPacketTriggerHandler*  seedPacketTriggerHandlerTriggerHandlerEvent) ;

/// @brief Method Update, addr 0x5d76d54, size 0x2fc, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_callLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_callLimiter() ;

constexpr float_t const& __cordl_internal_get_cooldown() const;

constexpr float_t& __cordl_internal_get_cooldown() ;

constexpr int32_t const& __cordl_internal_get_flowerEffectHash() const;

constexpr int32_t& __cordl_internal_get_flowerEffectHash() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_flowerEffectPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_flowerEffectPrefab() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_hitPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_hitPoint() ;

constexpr bool const& __cordl_internal_get_isPouring() const;

constexpr bool& __cordl_internal_get_isPouring() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particles() ;

constexpr float_t const& __cordl_internal_get_placeEffectDelayMultiplier() const;

constexpr float_t& __cordl_internal_get_placeEffectDelayMultiplier() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>* const& __cordl_internal_get_pooledObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>*& __cordl_internal_get_pooledObjects() ;

constexpr float_t const& __cordl_internal_get_pouringAngle() const;

constexpr float_t& __cordl_internal_get_pouringAngle() ;

constexpr float_t const& __cordl_internal_get_pouringRaycastDistance() const;

constexpr float_t& __cordl_internal_get_pouringRaycastDistance() ;

constexpr float_t const& __cordl_internal_get_pouringStartedTime() const;

constexpr float_t& __cordl_internal_get_pouringStartedTime() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_raycastLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_raycastLayerMask() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_transferrableObject() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_transferrableObject() ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_cooldown(float_t  value) ;

constexpr void __cordl_internal_set_flowerEffectHash(int32_t  value) ;

constexpr void __cordl_internal_set_flowerEffectPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_hitPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_isPouring(bool  value) ;

constexpr void __cordl_internal_set_particles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_placeEffectDelayMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_pooledObjects(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>*  value) ;

constexpr void __cordl_internal_set_pouringAngle(float_t  value) ;

constexpr void __cordl_internal_set_pouringRaycastDistance(float_t  value) ;

constexpr void __cordl_internal_set_pouringStartedTime(float_t  value) ;

constexpr void __cordl_internal_set_raycastLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

/// @brief Method .ctor, addr 0x5d775e4, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SeedPacketHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SeedPacketHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SeedPacketHoldable(SeedPacketHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SeedPacketHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SeedPacketHoldable(SeedPacketHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4861};

/// [SerializeField]
/// @brief Field cooldown, offset: 0x20, size: 0x4, def value: None
 float_t  ___cooldown;

/// [SerializeField]
/// @brief Field particles, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particles;

/// [SerializeField]
/// @brief Field pouringAngle, offset: 0x30, size: 0x4, def value: None
 float_t  ___pouringAngle;

/// [SerializeField]
/// @brief Field pouringRaycastDistance, offset: 0x34, size: 0x4, def value: None
 float_t  ___pouringRaycastDistance;

/// [SerializeField]
/// @brief Field raycastLayerMask, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___raycastLayerMask;

/// [SerializeField]
/// @brief Field placeEffectDelayMultiplier, offset: 0x3c, size: 0x4, def value: None
 float_t  ___placeEffectDelayMultiplier;

/// [SerializeField]
/// @brief Field flowerEffectPrefab, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___flowerEffectPrefab;

/// @brief Field pooledObjects, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>*  ___pooledObjects;

/// @brief Field callLimiter, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___callLimiter;

/// @brief Field flowerEffectHash, offset: 0x58, size: 0x4, def value: None
 int32_t  ___flowerEffectHash;

/// @brief Field hitPoint, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___hitPoint;

/// @brief Field transferrableObject, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___transferrableObject;

/// @brief Field isPouring, offset: 0x70, size: 0x1, def value: None
 bool  ___isPouring;

/// @brief Field pouringStartedTime, offset: 0x74, size: 0x4, def value: None
 float_t  ___pouringStartedTime;

/// @brief Field _events, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::SeedPacketHoldable, ___cooldown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SeedPacketHoldable, ___particles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SeedPacketHoldable, ___pouringAngle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SeedPacketHoldable, ___pouringRaycastDistance) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SeedPacketHoldable, ___raycastLayerMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SeedPacketHoldable, ___placeEffectDelayMultiplier) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SeedPacketHoldable, ___flowerEffectPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SeedPacketHoldable, ___pooledObjects) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SeedPacketHoldable, ___callLimiter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SeedPacketHoldable, ___flowerEffectHash) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SeedPacketHoldable, ___hitPoint) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SeedPacketHoldable, ___transferrableObject) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SeedPacketHoldable, ___isPouring) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SeedPacketHoldable, ___pouringStartedTime) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SeedPacketHoldable, ____events) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::SeedPacketHoldable) == 0x80, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
