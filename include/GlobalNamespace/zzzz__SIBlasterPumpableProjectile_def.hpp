#pragma once
// IWYU pragma private; include "GlobalNamespace/SIBlasterPumpableProjectile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIBlasterPumpableProjectile)
namespace GlobalNamespace {
class SIGadgetBlasterProjectile;
}
namespace GlobalNamespace {
class SIGadgetProjectileModifier;
}
// Forward declare root types
namespace GlobalNamespace {
class SIBlasterPumpableProjectile;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIBlasterPumpableProjectile*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIBlasterPumpableProjectile*, "", "SIBlasterPumpableProjectile");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIBlasterPumpableProjectile
class CORDL_TYPE SIBlasterPumpableProjectile : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field maxPump, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxPump, put=__cordl_internal_set_maxPump)) float_t  maxPump;

/// @brief Field pumpChargedAmount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_pumpChargedAmount, put=__cordl_internal_set_pumpChargedAmount)) float_t  pumpChargedAmount;

/// @brief Field strengthPerPumpCharge, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_strengthPerPumpCharge, put=__cordl_internal_set_strengthPerPumpCharge)) float_t  strengthPerPumpCharge;

/// @brief Field velocityPerPumpCharge, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocityPerPumpCharge, put=__cordl_internal_set_velocityPerPumpCharge)) float_t  velocityPerPumpCharge;

/// @brief Convert operator to "::GlobalNamespace::SIGadgetProjectileModifier"
constexpr operator  ::GlobalNamespace::SIGadgetProjectileModifier*() noexcept;

/// @brief Method ModifyProjectile, addr 0x57f7070, size 0x20c, virtual true, abstract: false, final true
inline void ModifyProjectile(::GlobalNamespace::SIGadgetBlasterProjectile*  projectile) ;

static inline ::GlobalNamespace::SIBlasterPumpableProjectile* New_ctor() ;

constexpr float_t const& __cordl_internal_get_maxPump() const;

constexpr float_t& __cordl_internal_get_maxPump() ;

constexpr float_t const& __cordl_internal_get_pumpChargedAmount() const;

constexpr float_t& __cordl_internal_get_pumpChargedAmount() ;

constexpr float_t const& __cordl_internal_get_strengthPerPumpCharge() const;

constexpr float_t& __cordl_internal_get_strengthPerPumpCharge() ;

constexpr float_t const& __cordl_internal_get_velocityPerPumpCharge() const;

constexpr float_t& __cordl_internal_get_velocityPerPumpCharge() ;

constexpr void __cordl_internal_set_maxPump(float_t  value) ;

constexpr void __cordl_internal_set_pumpChargedAmount(float_t  value) ;

constexpr void __cordl_internal_set_strengthPerPumpCharge(float_t  value) ;

constexpr void __cordl_internal_set_velocityPerPumpCharge(float_t  value) ;

/// @brief Method .ctor, addr 0x57f727c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::SIGadgetProjectileModifier"
constexpr ::GlobalNamespace::SIGadgetProjectileModifier* i___GlobalNamespace__SIGadgetProjectileModifier() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIBlasterPumpableProjectile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIBlasterPumpableProjectile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIBlasterPumpableProjectile(SIBlasterPumpableProjectile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIBlasterPumpableProjectile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIBlasterPumpableProjectile(SIBlasterPumpableProjectile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{217};

/// @brief Field maxPump, offset: 0x20, size: 0x4, def value: None
 float_t  ___maxPump;

/// @brief Field pumpChargedAmount, offset: 0x24, size: 0x4, def value: None
 float_t  ___pumpChargedAmount;

/// @brief Field velocityPerPumpCharge, offset: 0x28, size: 0x4, def value: None
 float_t  ___velocityPerPumpCharge;

/// @brief Field strengthPerPumpCharge, offset: 0x2c, size: 0x4, def value: None
 float_t  ___strengthPerPumpCharge;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIBlasterPumpableProjectile, ___maxPump) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIBlasterPumpableProjectile, ___pumpChargedAmount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIBlasterPumpableProjectile, ___velocityPerPumpCharge) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIBlasterPumpableProjectile, ___strengthPerPumpCharge) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIBlasterPumpableProjectile) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
