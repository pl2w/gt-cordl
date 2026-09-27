#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetGrenadeBlackHole.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIGadgetGrenadeBlackHole_State_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetGrenade_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIGadgetGrenadeBlackHole)
namespace GlobalNamespace {
struct SIGadgetGrenadeBlackHole_State;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetGrenadeBlackHole;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetGrenadeBlackHole*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetGrenadeBlackHole*, "", "SIGadgetGrenadeBlackHole");
// Dependencies SIGadgetGrenade, SIGadgetGrenadeBlackHole::State
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetGrenadeBlackHole
class CORDL_TYPE SIGadgetGrenadeBlackHole : public ::GlobalNamespace::SIGadgetGrenade {
public:
// Declarations
using State = ::GlobalNamespace::SIGadgetGrenadeBlackHole_State;

/// @brief Field explosionRadius, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_explosionRadius, put=__cordl_internal_set_explosionRadius)) float_t  explosionRadius;

/// @brief Field knockbackStrength, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_knockbackStrength, put=__cordl_internal_set_knockbackStrength)) float_t  knockbackStrength;

/// @brief Field state, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::SIGadgetGrenadeBlackHole_State  state;

/// @brief Method HandleActivated, addr 0x58de7f0, size 0x4, virtual true, abstract: false, final false
inline void HandleActivated() ;

/// @brief Method HandleHitSurface, addr 0x58de7f4, size 0x18, virtual true, abstract: false, final false
inline void HandleHitSurface() ;

/// @brief Method HandleThrown, addr 0x58de844, size 0x14, virtual true, abstract: false, final false
inline void HandleThrown() ;

static inline ::GlobalNamespace::SIGadgetGrenadeBlackHole* New_ctor() ;

/// @brief Method OnEnable, addr 0x58de7d8, size 0x18, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUpdateAuthority, addr 0x58de858, size 0x4, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x58de85c, size 0x34, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method SetState, addr 0x58de890, size 0x20, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::SIGadgetGrenadeBlackHole_State  newState) ;

/// @brief Method SetStateAuthority, addr 0x58de80c, size 0x38, virtual false, abstract: false, final false
inline void SetStateAuthority(::GlobalNamespace::SIGadgetGrenadeBlackHole_State  newState) ;

/// @brief Method TriggerExplosion, addr 0x58de8b0, size 0x280, virtual false, abstract: false, final false
inline void TriggerExplosion() ;

constexpr float_t const& __cordl_internal_get_explosionRadius() const;

constexpr float_t& __cordl_internal_get_explosionRadius() ;

constexpr float_t const& __cordl_internal_get_knockbackStrength() const;

constexpr float_t& __cordl_internal_get_knockbackStrength() ;

constexpr ::GlobalNamespace::SIGadgetGrenadeBlackHole_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::SIGadgetGrenadeBlackHole_State& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_explosionRadius(float_t  value) ;

constexpr void __cordl_internal_set_knockbackStrength(float_t  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::SIGadgetGrenadeBlackHole_State  value) ;

/// @brief Method .ctor, addr 0x58deb30, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetGrenadeBlackHole() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetGrenadeBlackHole", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetGrenadeBlackHole(SIGadgetGrenadeBlackHole && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetGrenadeBlackHole", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetGrenadeBlackHole(SIGadgetGrenadeBlackHole const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{260};

/// [SerializeField]
/// @brief Field knockbackStrength, offset: 0xa0, size: 0x4, def value: None
 float_t  ___knockbackStrength;

/// [SerializeField]
/// @brief Field explosionRadius, offset: 0xa4, size: 0x4, def value: None
 float_t  ___explosionRadius;

/// @brief Field state, offset: 0xa8, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetGrenadeBlackHole_State  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeBlackHole, ___knockbackStrength) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeBlackHole, ___explosionRadius) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeBlackHole, ___state) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetGrenadeBlackHole) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
