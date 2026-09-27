#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetGrenadeKnockBack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIGadgetGrenadeKnockBack_State_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetGrenade_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIGadgetGrenadeKnockBack)
namespace GlobalNamespace {
struct SIGadgetGrenadeKnockBack_State;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetGrenadeKnockBack;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetGrenadeKnockBack*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetGrenadeKnockBack*, "", "SIGadgetGrenadeKnockBack");
// Dependencies SIGadgetGrenade, SIGadgetGrenadeKnockBack::State
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetGrenadeKnockBack
class CORDL_TYPE SIGadgetGrenadeKnockBack : public ::GlobalNamespace::SIGadgetGrenade {
public:
// Declarations
using State = ::GlobalNamespace::SIGadgetGrenadeKnockBack_State;

/// @brief Field explosionRadius, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_explosionRadius, put=__cordl_internal_set_explosionRadius)) float_t  explosionRadius;

/// @brief Field knockbackStrength, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_knockbackStrength, put=__cordl_internal_set_knockbackStrength)) float_t  knockbackStrength;

/// @brief Field state, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::SIGadgetGrenadeKnockBack_State  state;

/// @brief Method HandleActivated, addr 0x58df7ac, size 0x4, virtual true, abstract: false, final false
inline void HandleActivated() ;

/// @brief Method HandleHitSurface, addr 0x58df7b0, size 0x18, virtual true, abstract: false, final false
inline void HandleHitSurface() ;

/// @brief Method HandleThrown, addr 0x58df800, size 0x14, virtual true, abstract: false, final false
inline void HandleThrown() ;

static inline ::GlobalNamespace::SIGadgetGrenadeKnockBack* New_ctor() ;

/// @brief Method OnEnable, addr 0x58df794, size 0x18, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUpdateAuthority, addr 0x58df814, size 0x4, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x58df818, size 0x34, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method SetState, addr 0x58df84c, size 0x20, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::SIGadgetGrenadeKnockBack_State  newState) ;

/// @brief Method SetStateAuthority, addr 0x58df7c8, size 0x38, virtual false, abstract: false, final false
inline void SetStateAuthority(::GlobalNamespace::SIGadgetGrenadeKnockBack_State  newState) ;

/// @brief Method TriggerExplosion, addr 0x58df86c, size 0x298, virtual false, abstract: false, final false
inline void TriggerExplosion() ;

constexpr float_t const& __cordl_internal_get_explosionRadius() const;

constexpr float_t& __cordl_internal_get_explosionRadius() ;

constexpr float_t const& __cordl_internal_get_knockbackStrength() const;

constexpr float_t& __cordl_internal_get_knockbackStrength() ;

constexpr ::GlobalNamespace::SIGadgetGrenadeKnockBack_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::SIGadgetGrenadeKnockBack_State& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_explosionRadius(float_t  value) ;

constexpr void __cordl_internal_set_knockbackStrength(float_t  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::SIGadgetGrenadeKnockBack_State  value) ;

/// @brief Method .ctor, addr 0x58dfb04, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetGrenadeKnockBack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetGrenadeKnockBack", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetGrenadeKnockBack(SIGadgetGrenadeKnockBack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetGrenadeKnockBack", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetGrenadeKnockBack(SIGadgetGrenadeKnockBack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{266};

/// [SerializeField]
/// @brief Field knockbackStrength, offset: 0xa0, size: 0x4, def value: None
 float_t  ___knockbackStrength;

/// [SerializeField]
/// @brief Field explosionRadius, offset: 0xa4, size: 0x4, def value: None
 float_t  ___explosionRadius;

/// @brief Field state, offset: 0xa8, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetGrenadeKnockBack_State  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeKnockBack, ___knockbackStrength) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeKnockBack, ___explosionRadius) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeKnockBack, ___state) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetGrenadeKnockBack) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
