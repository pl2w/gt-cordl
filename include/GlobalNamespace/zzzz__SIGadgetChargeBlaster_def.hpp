#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetChargeBlaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIGadgetChargeBlaster_BlasterChargeLevel_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetChargeBlaster)
namespace GlobalNamespace {
class SIGadgetBlasterType;
}
namespace GlobalNamespace {
class SIGadgetBlaster;
}
namespace GlobalNamespace {
struct SIGadgetChargeBlaster_BlasterChargeLevel;
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
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetChargeBlaster;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetChargeBlaster*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetChargeBlaster*, "", "SIGadgetChargeBlaster");
// Dependencies SIGadgetChargeBlaster::BlasterChargeLevel, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetChargeBlaster
class CORDL_TYPE SIGadgetChargeBlaster : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BlasterChargeLevel = ::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel;

/// @brief Field blaster, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_blaster, put=__cordl_internal_set_blaster)) ::UnityW<::GlobalNamespace::SIGadgetBlaster>  blaster;

/// @brief Field chargeLevels, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_chargeLevels, put=__cordl_internal_set_chargeLevels)) ::ArrayW<::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel>  chargeLevels;

/// @brief Field chargeRatePerSecond, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeRatePerSecond, put=__cordl_internal_set_chargeRatePerSecond)) float_t  chargeRatePerSecond;

/// @brief Field chargingClip, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_chargingClip, put=__cordl_internal_set_chargingClip)) ::UnityW<::UnityEngine::AudioClip>  chargingClip;

/// @brief Field currentCharge, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentCharge, put=__cordl_internal_set_currentCharge)) float_t  currentCharge;

/// @brief Field fireCooldown, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_fireCooldown, put=__cordl_internal_set_fireCooldown)) float_t  fireCooldown;

/// @brief Field fireRateGracePercentage, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_fireRateGracePercentage, put=__cordl_internal_set_fireRateGracePercentage)) float_t  fireRateGracePercentage;

/// @brief Field maxChargeDiff, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxChargeDiff, put=__cordl_internal_set_maxChargeDiff)) float_t  maxChargeDiff;

/// @brief Convert operator to "::GlobalNamespace::SIGadgetBlasterType"
constexpr operator  ::GlobalNamespace::SIGadgetBlasterType*() noexcept;

/// @brief Method ApplyUpgradeNodes, addr 0x57fc408, size 0x4, virtual true, abstract: false, final true
inline void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

/// @brief Method CheckInput, addr 0x57fb6bc, size 0x14, virtual false, abstract: false, final false
inline bool CheckInput() ;

/// @brief Method CurrentBlasterChargeLevel, addr 0x57fbfb8, size 0x70, virtual false, abstract: false, final false
inline int32_t CurrentBlasterChargeLevel() ;

/// @brief Method FireProjectile, addr 0x57fb988, size 0x440, virtual false, abstract: false, final false
inline void FireProjectile(float_t  firedAtChargeLevel, int32_t  fireId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method NetworkFireProjectile, addr 0x57fc18c, size 0x27c, virtual true, abstract: false, final true
inline void NetworkFireProjectile(::ArrayW<::System::Object*>  data) ;

static inline ::GlobalNamespace::SIGadgetChargeBlaster* New_ctor() ;

/// @brief Method OnEnable, addr 0x57fb6d0, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUpdateAuthority, addr 0x57fb730, size 0x258, virtual true, abstract: false, final true
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x57fc028, size 0x5c, virtual true, abstract: false, final true
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method SetStateShared, addr 0x57fc084, size 0x108, virtual true, abstract: false, final true
inline void SetStateShared() ;

/// @brief Method UpdateChargingVisuals, addr 0x57fbdc8, size 0x1f0, virtual false, abstract: false, final false
inline void UpdateChargingVisuals() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlaster> const& __cordl_internal_get_blaster() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlaster>& __cordl_internal_get_blaster() ;

constexpr ::ArrayW<::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel> const& __cordl_internal_get_chargeLevels() const;

constexpr ::ArrayW<::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel>& __cordl_internal_get_chargeLevels() ;

constexpr float_t const& __cordl_internal_get_chargeRatePerSecond() const;

constexpr float_t& __cordl_internal_get_chargeRatePerSecond() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_chargingClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_chargingClip() ;

constexpr float_t const& __cordl_internal_get_currentCharge() const;

constexpr float_t& __cordl_internal_get_currentCharge() ;

constexpr float_t const& __cordl_internal_get_fireCooldown() const;

constexpr float_t& __cordl_internal_get_fireCooldown() ;

constexpr float_t const& __cordl_internal_get_fireRateGracePercentage() const;

constexpr float_t& __cordl_internal_get_fireRateGracePercentage() ;

constexpr float_t const& __cordl_internal_get_maxChargeDiff() const;

constexpr float_t& __cordl_internal_get_maxChargeDiff() ;

constexpr void __cordl_internal_set_blaster(::UnityW<::GlobalNamespace::SIGadgetBlaster>  value) ;

constexpr void __cordl_internal_set_chargeLevels(::ArrayW<::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel>  value) ;

constexpr void __cordl_internal_set_chargeRatePerSecond(float_t  value) ;

constexpr void __cordl_internal_set_chargingClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_currentCharge(float_t  value) ;

constexpr void __cordl_internal_set_fireCooldown(float_t  value) ;

constexpr void __cordl_internal_set_fireRateGracePercentage(float_t  value) ;

constexpr void __cordl_internal_set_maxChargeDiff(float_t  value) ;

/// @brief Method .ctor, addr 0x57fc40c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::SIGadgetBlasterType"
constexpr ::GlobalNamespace::SIGadgetBlasterType* i___GlobalNamespace__SIGadgetBlasterType() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetChargeBlaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetChargeBlaster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetChargeBlaster(SIGadgetChargeBlaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetChargeBlaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetChargeBlaster(SIGadgetChargeBlaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{229};

/// [SerializeField]
/// @brief Field fireCooldown, offset: 0x20, size: 0x4, def value: None
 float_t  ___fireCooldown;

/// [SerializeField]
/// @brief Field chargeRatePerSecond, offset: 0x24, size: 0x4, def value: None
 float_t  ___chargeRatePerSecond;

/// @brief Field fireRateGracePercentage, offset: 0x28, size: 0x4, def value: None
 float_t  ___fireRateGracePercentage;

/// @brief Field maxChargeDiff, offset: 0x2c, size: 0x4, def value: None
 float_t  ___maxChargeDiff;

/// @brief Field currentCharge, offset: 0x30, size: 0x4, def value: None
 float_t  ___currentCharge;

/// @brief Field chargingClip, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___chargingClip;

/// @brief Field chargeLevels, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel>  ___chargeLevels;

/// @brief Field blaster, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetBlaster>  ___blaster;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster, ___fireCooldown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster, ___chargeRatePerSecond) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster, ___fireRateGracePercentage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster, ___maxChargeDiff) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster, ___currentCharge) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster, ___chargingClip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster, ___chargeLevels) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetChargeBlaster, ___blaster) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetChargeBlaster) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
