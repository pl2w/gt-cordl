#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetCooldownBlaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetCooldownBlaster)
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
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetCooldownBlaster;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetCooldownBlaster*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetCooldownBlaster*, "", "SIGadgetCooldownBlaster");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetCooldownBlaster
class CORDL_TYPE SIGadgetCooldownBlaster : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field availableToFireHapticDuration, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_availableToFireHapticDuration, put=__cordl_internal_set_availableToFireHapticDuration)) float_t  availableToFireHapticDuration;

/// @brief Field availableToFireHapticStrength, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_availableToFireHapticStrength, put=__cordl_internal_set_availableToFireHapticStrength)) float_t  availableToFireHapticStrength;

/// @brief Field blaster, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_blaster, put=__cordl_internal_set_blaster)) ::UnityW<::GlobalNamespace::SIGadgetBlaster>  blaster;

/// @brief Field cooldownClip, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_cooldownClip, put=__cordl_internal_set_cooldownClip)) ::UnityW<::UnityEngine::AudioClip>  cooldownClip;

/// @brief Field cooldownIndicator, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_cooldownIndicator, put=__cordl_internal_set_cooldownIndicator)) ::UnityW<::UnityEngine::MeshRenderer>  cooldownIndicator;

/// @brief Field cooldownVolume, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownVolume, put=__cordl_internal_set_cooldownVolume)) float_t  cooldownVolume;

/// @brief Field fireCooldown, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_fireCooldown, put=__cordl_internal_set_fireCooldown)) float_t  fireCooldown;

/// @brief Field fireFX, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_fireFX, put=__cordl_internal_set_fireFX)) ::UnityW<::UnityEngine::ParticleSystem>  fireFX;

/// @brief Field fireRateGracePercentage, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fireRateGracePercentage, put=__cordl_internal_set_fireRateGracePercentage)) float_t  fireRateGracePercentage;

/// @brief Field firingClip, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_firingClip, put=__cordl_internal_set_firingClip)) ::UnityW<::UnityEngine::AudioClip>  firingClip;

/// @brief Field firingHapticDuration, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_firingHapticDuration, put=__cordl_internal_set_firingHapticDuration)) float_t  firingHapticDuration;

/// @brief Field firingHapticStrength, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_firingHapticStrength, put=__cordl_internal_set_firingHapticStrength)) float_t  firingHapticStrength;

/// @brief Field firingVolume, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_firingVolume, put=__cordl_internal_set_firingVolume)) float_t  firingVolume;

/// @brief Field onCooldownMaterial, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCooldownMaterial, put=__cordl_internal_set_onCooldownMaterial)) ::UnityW<::UnityEngine::Material>  onCooldownMaterial;

/// @brief Field projectilePrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectilePrefab, put=__cordl_internal_set_projectilePrefab)) ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  projectilePrefab;

/// @brief Field readyToFireMaterial, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_readyToFireMaterial, put=__cordl_internal_set_readyToFireMaterial)) ::UnityW<::UnityEngine::Material>  readyToFireMaterial;

/// @brief Field triggerHeldDown, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_triggerHeldDown, put=__cordl_internal_set_triggerHeldDown)) bool  triggerHeldDown;

/// @brief Convert operator to "::GlobalNamespace::SIGadgetBlasterType"
constexpr operator  ::GlobalNamespace::SIGadgetBlasterType*() noexcept;

/// @brief Method ApplyUpgradeNodes, addr 0x57fcbfc, size 0x4, virtual true, abstract: false, final true
inline void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

/// @brief Method CheckInput, addr 0x57fc420, size 0x14, virtual false, abstract: false, final false
inline bool CheckInput() ;

/// @brief Method FireProjectile, addr 0x57fc680, size 0x2dc, virtual false, abstract: false, final false
inline void FireProjectile(int32_t  fireId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method NetworkFireProjectile, addr 0x57fc9e0, size 0x21c, virtual true, abstract: false, final true
inline void NetworkFireProjectile(::ArrayW<::System::Object*>  data) ;

static inline ::GlobalNamespace::SIGadgetCooldownBlaster* New_ctor() ;

/// @brief Method OnEnable, addr 0x57fc434, size 0x108, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUpdateAuthority, addr 0x57fc53c, size 0x144, virtual true, abstract: false, final true
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x57fc95c, size 0x14, virtual true, abstract: false, final true
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method SetStateShared, addr 0x57fc970, size 0x70, virtual true, abstract: false, final true
inline void SetStateShared() ;

constexpr float_t const& __cordl_internal_get_availableToFireHapticDuration() const;

constexpr float_t& __cordl_internal_get_availableToFireHapticDuration() ;

constexpr float_t const& __cordl_internal_get_availableToFireHapticStrength() const;

constexpr float_t& __cordl_internal_get_availableToFireHapticStrength() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlaster> const& __cordl_internal_get_blaster() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlaster>& __cordl_internal_get_blaster() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_cooldownClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_cooldownClip() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_cooldownIndicator() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_cooldownIndicator() ;

constexpr float_t const& __cordl_internal_get_cooldownVolume() const;

constexpr float_t& __cordl_internal_get_cooldownVolume() ;

constexpr float_t const& __cordl_internal_get_fireCooldown() const;

constexpr float_t& __cordl_internal_get_fireCooldown() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_fireFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_fireFX() ;

constexpr float_t const& __cordl_internal_get_fireRateGracePercentage() const;

constexpr float_t& __cordl_internal_get_fireRateGracePercentage() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_firingClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_firingClip() ;

constexpr float_t const& __cordl_internal_get_firingHapticDuration() const;

constexpr float_t& __cordl_internal_get_firingHapticDuration() ;

constexpr float_t const& __cordl_internal_get_firingHapticStrength() const;

constexpr float_t& __cordl_internal_get_firingHapticStrength() ;

constexpr float_t const& __cordl_internal_get_firingVolume() const;

constexpr float_t& __cordl_internal_get_firingVolume() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_onCooldownMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_onCooldownMaterial() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile> const& __cordl_internal_get_projectilePrefab() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>& __cordl_internal_get_projectilePrefab() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_readyToFireMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_readyToFireMaterial() ;

constexpr bool const& __cordl_internal_get_triggerHeldDown() const;

constexpr bool& __cordl_internal_get_triggerHeldDown() ;

constexpr void __cordl_internal_set_availableToFireHapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_availableToFireHapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_blaster(::UnityW<::GlobalNamespace::SIGadgetBlaster>  value) ;

constexpr void __cordl_internal_set_cooldownClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_cooldownIndicator(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_cooldownVolume(float_t  value) ;

constexpr void __cordl_internal_set_fireCooldown(float_t  value) ;

constexpr void __cordl_internal_set_fireFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_fireRateGracePercentage(float_t  value) ;

constexpr void __cordl_internal_set_firingClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_firingHapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_firingHapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_firingVolume(float_t  value) ;

constexpr void __cordl_internal_set_onCooldownMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_projectilePrefab(::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  value) ;

constexpr void __cordl_internal_set_readyToFireMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_triggerHeldDown(bool  value) ;

/// @brief Method .ctor, addr 0x57fcc00, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::SIGadgetBlasterType"
constexpr ::GlobalNamespace::SIGadgetBlasterType* i___GlobalNamespace__SIGadgetBlasterType() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetCooldownBlaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetCooldownBlaster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetCooldownBlaster(SIGadgetCooldownBlaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetCooldownBlaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetCooldownBlaster(SIGadgetCooldownBlaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{230};

/// @brief Field projectilePrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  ___projectilePrefab;

/// @brief Field fireCooldown, offset: 0x28, size: 0x4, def value: None
 float_t  ___fireCooldown;

/// @brief Field fireRateGracePercentage, offset: 0x2c, size: 0x4, def value: None
 float_t  ___fireRateGracePercentage;

/// @brief Field availableToFireHapticStrength, offset: 0x30, size: 0x4, def value: None
 float_t  ___availableToFireHapticStrength;

/// @brief Field availableToFireHapticDuration, offset: 0x34, size: 0x4, def value: None
 float_t  ___availableToFireHapticDuration;

/// @brief Field firingHapticStrength, offset: 0x38, size: 0x4, def value: None
 float_t  ___firingHapticStrength;

/// @brief Field firingHapticDuration, offset: 0x3c, size: 0x4, def value: None
 float_t  ___firingHapticDuration;

/// @brief Field firingClip, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___firingClip;

/// @brief Field cooldownClip, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___cooldownClip;

/// @brief Field firingVolume, offset: 0x50, size: 0x4, def value: None
 float_t  ___firingVolume;

/// @brief Field cooldownVolume, offset: 0x54, size: 0x4, def value: None
 float_t  ___cooldownVolume;

/// @brief Field fireFX, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___fireFX;

/// @brief Field cooldownIndicator, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___cooldownIndicator;

/// @brief Field readyToFireMaterial, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___readyToFireMaterial;

/// @brief Field onCooldownMaterial, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___onCooldownMaterial;

/// @brief Field triggerHeldDown, offset: 0x78, size: 0x1, def value: None
 bool  ___triggerHeldDown;

/// @brief Field blaster, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetBlaster>  ___blaster;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetCooldownBlaster, ___projectilePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetCooldownBlaster, ___fireCooldown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetCooldownBlaster, ___fireRateGracePercentage) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetCooldownBlaster, ___availableToFireHapticStrength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetCooldownBlaster, ___availableToFireHapticDuration) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetCooldownBlaster, ___firingHapticStrength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetCooldownBlaster, ___firingHapticDuration) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetCooldownBlaster, ___firingClip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetCooldownBlaster, ___cooldownClip) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetCooldownBlaster, ___firingVolume) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetCooldownBlaster, ___cooldownVolume) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetCooldownBlaster, ___fireFX) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetCooldownBlaster, ___cooldownIndicator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetCooldownBlaster, ___readyToFireMaterial) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetCooldownBlaster, ___onCooldownMaterial) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetCooldownBlaster, ___triggerHeldDown) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetCooldownBlaster, ___blaster) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetCooldownBlaster) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
