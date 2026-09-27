#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetGrenadeStun.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIGadgetGrenadeStun_State_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetGrenade_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIGadgetGrenadeStun)
namespace GlobalNamespace {
struct SIGadgetGrenadeStun_State;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetGrenadeStun;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetGrenadeStun*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetGrenadeStun*, "", "SIGadgetGrenadeStun");
// Dependencies SIGadgetGrenade, SIGadgetGrenadeStun::State
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetGrenadeStun
class CORDL_TYPE SIGadgetGrenadeStun : public ::GlobalNamespace::SIGadgetGrenade {
public:
// Declarations
using State = ::GlobalNamespace::SIGadgetGrenadeStun_State;

/// @brief Field explosionRadius, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_explosionRadius, put=__cordl_internal_set_explosionRadius)) float_t  explosionRadius;

/// @brief Field knockbackStrength, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_knockbackStrength, put=__cordl_internal_set_knockbackStrength)) float_t  knockbackStrength;

/// @brief Field state, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::SIGadgetGrenadeStun_State  state;

/// @brief Method HandleActivated, addr 0x58dfb20, size 0x4, virtual true, abstract: false, final false
inline void HandleActivated() ;

/// @brief Method HandleHitSurface, addr 0x58dfb24, size 0x18, virtual true, abstract: false, final false
inline void HandleHitSurface() ;

/// @brief Method HandleThrown, addr 0x58dfb74, size 0x14, virtual true, abstract: false, final false
inline void HandleThrown() ;

static inline ::GlobalNamespace::SIGadgetGrenadeStun* New_ctor() ;

/// @brief Method OnEnable, addr 0x58dfb08, size 0x18, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUpdateAuthority, addr 0x58dfb88, size 0x4, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x58dfb8c, size 0x34, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method SetState, addr 0x58dfbc0, size 0x20, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::SIGadgetGrenadeStun_State  newState) ;

/// @brief Method SetStateAuthority, addr 0x58dfb3c, size 0x38, virtual false, abstract: false, final false
inline void SetStateAuthority(::GlobalNamespace::SIGadgetGrenadeStun_State  newState) ;

/// @brief Method TriggerExplosion, addr 0x58dfbe0, size 0x318, virtual false, abstract: false, final false
inline void TriggerExplosion() ;

constexpr float_t const& __cordl_internal_get_explosionRadius() const;

constexpr float_t& __cordl_internal_get_explosionRadius() ;

constexpr float_t const& __cordl_internal_get_knockbackStrength() const;

constexpr float_t& __cordl_internal_get_knockbackStrength() ;

constexpr ::GlobalNamespace::SIGadgetGrenadeStun_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::SIGadgetGrenadeStun_State& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_explosionRadius(float_t  value) ;

constexpr void __cordl_internal_set_knockbackStrength(float_t  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::SIGadgetGrenadeStun_State  value) ;

/// @brief Method .ctor, addr 0x58dfef8, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetGrenadeStun() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetGrenadeStun", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetGrenadeStun(SIGadgetGrenadeStun && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetGrenadeStun", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetGrenadeStun(SIGadgetGrenadeStun const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{268};

/// [SerializeField]
/// @brief Field knockbackStrength, offset: 0xa0, size: 0x4, def value: None
 float_t  ___knockbackStrength;

/// [SerializeField]
/// @brief Field explosionRadius, offset: 0xa4, size: 0x4, def value: None
 float_t  ___explosionRadius;

/// @brief Field state, offset: 0xa8, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetGrenadeStun_State  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeStun, ___knockbackStrength) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeStun, ___explosionRadius) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeStun, ___state) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetGrenadeStun) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
