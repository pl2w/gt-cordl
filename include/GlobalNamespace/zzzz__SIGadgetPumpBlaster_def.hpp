#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetPumpBlaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetPumpBlaster)
namespace GlobalNamespace {
class GameTriggerInteractable;
}
namespace GlobalNamespace {
class SIGadgetBlasterProjectile;
}
namespace GlobalNamespace {
class SIGadgetBlasterType;
}
namespace GlobalNamespace {
class SIGadgetBlaster;
}
namespace GlobalNamespace {
struct SIUpgradeSet;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class ParticleSystem;
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
class SIGadgetPumpBlaster;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetPumpBlaster*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetPumpBlaster*, "", "SIGadgetPumpBlaster");
// [RequireComponent(typeof(GameTriggerInteractable))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetPumpBlaster
class CORDL_TYPE SIGadgetPumpBlaster : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field blaster, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_blaster, put=__cordl_internal_set_blaster)) ::UnityW<::GlobalNamespace::SIGadgetBlaster>  blaster;

/// @brief Field chargePerPump, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargePerPump, put=__cordl_internal_set_chargePerPump)) float_t  chargePerPump;

/// @brief Field cooldownClip, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cooldownClip, put=__cordl_internal_set_cooldownClip)) ::UnityW<::UnityEngine::AudioClip>  cooldownClip;

/// @brief Field cooldownVolume, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownVolume, put=__cordl_internal_set_cooldownVolume)) float_t  cooldownVolume;

/// @brief Field currentPumpChargeAmount, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentPumpChargeAmount, put=__cordl_internal_set_currentPumpChargeAmount)) float_t  currentPumpChargeAmount;

/// @brief Field fireFX, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_fireFX, put=__cordl_internal_set_fireFX)) ::UnityW<::UnityEngine::ParticleSystem>  fireFX;

/// @brief Field firingClip, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_firingClip, put=__cordl_internal_set_firingClip)) ::UnityW<::UnityEngine::AudioClip>  firingClip;

/// @brief Field firingVolume, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_firingVolume, put=__cordl_internal_set_firingVolume)) float_t  firingVolume;

/// @brief Field idleClip, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_idleClip, put=__cordl_internal_set_idleClip)) ::UnityW<::UnityEngine::AudioClip>  idleClip;

/// @brief Field idleVolume, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_idleVolume, put=__cordl_internal_set_idleVolume)) float_t  idleVolume;

/// @brief Field maxPumpCharge, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxPumpCharge, put=__cordl_internal_set_maxPumpCharge)) float_t  maxPumpCharge;

/// @brief Field maxPumpDiff, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxPumpDiff, put=__cordl_internal_set_maxPumpDiff)) float_t  maxPumpDiff;

/// @brief Field projectilePrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectilePrefab, put=__cordl_internal_set_projectilePrefab)) ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  projectilePrefab;

/// @brief Field pumpFullyClosed, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_pumpFullyClosed, put=__cordl_internal_set_pumpFullyClosed)) ::UnityW<::UnityEngine::Transform>  pumpFullyClosed;

/// @brief Field pumpFullyOpen, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_pumpFullyOpen, put=__cordl_internal_set_pumpFullyOpen)) ::UnityW<::UnityEngine::Transform>  pumpFullyOpen;

/// @brief Field pumpFullyOpened, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_pumpFullyOpened, put=__cordl_internal_set_pumpFullyOpened)) bool  pumpFullyOpened;

/// @brief Field pumpHandlePosition, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_pumpHandlePosition, put=__cordl_internal_set_pumpHandlePosition)) ::UnityW<::UnityEngine::Transform>  pumpHandlePosition;

/// @brief Field pumpThresholdPercent, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_pumpThresholdPercent, put=__cordl_internal_set_pumpThresholdPercent)) float_t  pumpThresholdPercent;

/// @brief Field pumpingTransform, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_pumpingTransform, put=__cordl_internal_set_pumpingTransform)) ::UnityW<::UnityEngine::Transform>  pumpingTransform;

/// @brief Field remotePumpChargePerSecond, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_remotePumpChargePerSecond, put=__cordl_internal_set_remotePumpChargePerSecond)) float_t  remotePumpChargePerSecond;

/// @brief Field strokeLength, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_strokeLength, put=__cordl_internal_set_strokeLength)) float_t  strokeLength;

/// @brief Field triggerInteractable, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerInteractable, put=__cordl_internal_set_triggerInteractable)) ::UnityW<::GlobalNamespace::GameTriggerInteractable>  triggerInteractable;

/// @brief Convert operator to "::GlobalNamespace::SIGadgetBlasterType"
constexpr operator  ::GlobalNamespace::SIGadgetBlasterType*() noexcept;

/// @brief Method ApplyUpgradeNodes, addr 0x57fdeec, size 0x4, virtual true, abstract: false, final true
inline void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

/// @brief Method AttemptFireProjectile, addr 0x57fd5fc, size 0x2cc, virtual false, abstract: false, final false
inline void AttemptFireProjectile(int32_t  fireId, float_t  pumpChargeAmount, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method CheckInput, addr 0x57fcf3c, size 0x14, virtual false, abstract: false, final false
inline bool CheckInput() ;

/// @brief Method NetworkFireProjectile, addr 0x57fdd40, size 0x1ac, virtual true, abstract: false, final true
inline void NetworkFireProjectile(::ArrayW<::System::Object*>  data) ;

static inline ::GlobalNamespace::SIGadgetPumpBlaster* New_ctor() ;

/// @brief Method OnEnable, addr 0x57fcf50, size 0x14c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUpdateAuthority, addr 0x57fd09c, size 0x560, virtual true, abstract: false, final true
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x57fd8c8, size 0x380, virtual true, abstract: false, final true
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method SetStateShared, addr 0x57fdc48, size 0xf8, virtual true, abstract: false, final true
inline void SetStateShared() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlaster> const& __cordl_internal_get_blaster() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlaster>& __cordl_internal_get_blaster() ;

constexpr float_t const& __cordl_internal_get_chargePerPump() const;

constexpr float_t& __cordl_internal_get_chargePerPump() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_cooldownClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_cooldownClip() ;

constexpr float_t const& __cordl_internal_get_cooldownVolume() const;

constexpr float_t& __cordl_internal_get_cooldownVolume() ;

constexpr float_t const& __cordl_internal_get_currentPumpChargeAmount() const;

constexpr float_t& __cordl_internal_get_currentPumpChargeAmount() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_fireFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_fireFX() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_firingClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_firingClip() ;

constexpr float_t const& __cordl_internal_get_firingVolume() const;

constexpr float_t& __cordl_internal_get_firingVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_idleClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_idleClip() ;

constexpr float_t const& __cordl_internal_get_idleVolume() const;

constexpr float_t& __cordl_internal_get_idleVolume() ;

constexpr float_t const& __cordl_internal_get_maxPumpCharge() const;

constexpr float_t& __cordl_internal_get_maxPumpCharge() ;

constexpr float_t const& __cordl_internal_get_maxPumpDiff() const;

constexpr float_t& __cordl_internal_get_maxPumpDiff() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile> const& __cordl_internal_get_projectilePrefab() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>& __cordl_internal_get_projectilePrefab() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pumpFullyClosed() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pumpFullyClosed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pumpFullyOpen() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pumpFullyOpen() ;

constexpr bool const& __cordl_internal_get_pumpFullyOpened() const;

constexpr bool& __cordl_internal_get_pumpFullyOpened() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pumpHandlePosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pumpHandlePosition() ;

constexpr float_t const& __cordl_internal_get_pumpThresholdPercent() const;

constexpr float_t& __cordl_internal_get_pumpThresholdPercent() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pumpingTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pumpingTransform() ;

constexpr float_t const& __cordl_internal_get_remotePumpChargePerSecond() const;

constexpr float_t& __cordl_internal_get_remotePumpChargePerSecond() ;

constexpr float_t const& __cordl_internal_get_strokeLength() const;

constexpr float_t& __cordl_internal_get_strokeLength() ;

constexpr ::UnityW<::GlobalNamespace::GameTriggerInteractable> const& __cordl_internal_get_triggerInteractable() const;

constexpr ::UnityW<::GlobalNamespace::GameTriggerInteractable>& __cordl_internal_get_triggerInteractable() ;

constexpr void __cordl_internal_set_blaster(::UnityW<::GlobalNamespace::SIGadgetBlaster>  value) ;

constexpr void __cordl_internal_set_chargePerPump(float_t  value) ;

constexpr void __cordl_internal_set_cooldownClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_cooldownVolume(float_t  value) ;

constexpr void __cordl_internal_set_currentPumpChargeAmount(float_t  value) ;

constexpr void __cordl_internal_set_fireFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_firingClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_firingVolume(float_t  value) ;

constexpr void __cordl_internal_set_idleClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_idleVolume(float_t  value) ;

constexpr void __cordl_internal_set_maxPumpCharge(float_t  value) ;

constexpr void __cordl_internal_set_maxPumpDiff(float_t  value) ;

constexpr void __cordl_internal_set_projectilePrefab(::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  value) ;

constexpr void __cordl_internal_set_pumpFullyClosed(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_pumpFullyOpen(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_pumpFullyOpened(bool  value) ;

constexpr void __cordl_internal_set_pumpHandlePosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_pumpThresholdPercent(float_t  value) ;

constexpr void __cordl_internal_set_pumpingTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_remotePumpChargePerSecond(float_t  value) ;

constexpr void __cordl_internal_set_strokeLength(float_t  value) ;

constexpr void __cordl_internal_set_triggerInteractable(::UnityW<::GlobalNamespace::GameTriggerInteractable>  value) ;

/// @brief Method .ctor, addr 0x57fdef0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::SIGadgetBlasterType"
constexpr ::GlobalNamespace::SIGadgetBlasterType* i___GlobalNamespace__SIGadgetBlasterType() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetPumpBlaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetPumpBlaster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetPumpBlaster(SIGadgetPumpBlaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetPumpBlaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetPumpBlaster(SIGadgetPumpBlaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{232};

/// @brief Field projectilePrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  ___projectilePrefab;

/// @brief Field idleClip, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___idleClip;

/// @brief Field cooldownClip, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___cooldownClip;

/// @brief Field idleVolume, offset: 0x38, size: 0x4, def value: None
 float_t  ___idleVolume;

/// @brief Field cooldownVolume, offset: 0x3c, size: 0x4, def value: None
 float_t  ___cooldownVolume;

/// @brief Field firingClip, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___firingClip;

/// @brief Field firingVolume, offset: 0x48, size: 0x4, def value: None
 float_t  ___firingVolume;

/// @brief Field fireFX, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___fireFX;

/// @brief Field pumpHandlePosition, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pumpHandlePosition;

/// @brief Field pumpFullyClosed, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pumpFullyClosed;

/// @brief Field pumpFullyOpen, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pumpFullyOpen;

/// @brief Field triggerInteractable, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameTriggerInteractable>  ___triggerInteractable;

/// @brief Field blaster, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetBlaster>  ___blaster;

/// @brief Field pumpingTransform, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pumpingTransform;

/// @brief Field currentPumpChargeAmount, offset: 0x88, size: 0x4, def value: None
 float_t  ___currentPumpChargeAmount;

/// @brief Field maxPumpCharge, offset: 0x8c, size: 0x4, def value: None
 float_t  ___maxPumpCharge;

/// @brief Field remotePumpChargePerSecond, offset: 0x90, size: 0x4, def value: None
 float_t  ___remotePumpChargePerSecond;

/// @brief Field maxPumpDiff, offset: 0x94, size: 0x4, def value: None
 float_t  ___maxPumpDiff;

/// @brief Field chargePerPump, offset: 0x98, size: 0x4, def value: None
 float_t  ___chargePerPump;

/// @brief Field pumpFullyOpened, offset: 0x9c, size: 0x1, def value: None
 bool  ___pumpFullyOpened;

/// @brief Field pumpThresholdPercent, offset: 0xa0, size: 0x4, def value: None
 float_t  ___pumpThresholdPercent;

/// @brief Field strokeLength, offset: 0xa4, size: 0x4, def value: None
 float_t  ___strokeLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___projectilePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___idleClip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___cooldownClip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___idleVolume) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___cooldownVolume) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___firingClip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___firingVolume) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___fireFX) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___pumpHandlePosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___pumpFullyClosed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___pumpFullyOpen) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___triggerInteractable) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___blaster) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___pumpingTransform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___currentPumpChargeAmount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___maxPumpCharge) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___remotePumpChargePerSecond) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___maxPumpDiff) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___chargePerPump) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___pumpFullyOpened) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___pumpThresholdPercent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPumpBlaster, ___strokeLength) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetPumpBlaster) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
