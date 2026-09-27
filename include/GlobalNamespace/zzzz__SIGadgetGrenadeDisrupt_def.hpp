#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetGrenadeDisrupt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIGadgetGrenadeDisrupt_State_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetGrenade_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIGadgetGrenadeDisrupt)
namespace GlobalNamespace {
struct SIGadgetGrenadeDisrupt_State;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetGrenadeDisrupt;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetGrenadeDisrupt*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetGrenadeDisrupt*, "", "SIGadgetGrenadeDisrupt");
// Dependencies SIGadgetGrenade, SIGadgetGrenadeDisrupt::State
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetGrenadeDisrupt
class CORDL_TYPE SIGadgetGrenadeDisrupt : public ::GlobalNamespace::SIGadgetGrenade {
public:
// Declarations
using State = ::GlobalNamespace::SIGadgetGrenadeDisrupt_State;

/// @brief Field disruptTime, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_disruptTime, put=__cordl_internal_set_disruptTime)) float_t  disruptTime;

/// @brief Field explosionRadius, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_explosionRadius, put=__cordl_internal_set_explosionRadius)) float_t  explosionRadius;

/// @brief Field state, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::SIGadgetGrenadeDisrupt_State  state;

/// @brief Method HandleActivated, addr 0x58dede8, size 0x4, virtual true, abstract: false, final false
inline void HandleActivated() ;

/// @brief Method HandleHitSurface, addr 0x58dedec, size 0x18, virtual true, abstract: false, final false
inline void HandleHitSurface() ;

/// @brief Method HandleThrown, addr 0x58dee04, size 0x14, virtual true, abstract: false, final false
inline void HandleThrown() ;

static inline ::GlobalNamespace::SIGadgetGrenadeDisrupt* New_ctor() ;

/// @brief Method OnEnable, addr 0x58deb34, size 0x18, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUpdateRemote, addr 0x58deb4c, size 0x34, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method SetState, addr 0x58deb80, size 0x20, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::SIGadgetGrenadeDisrupt_State  newState) ;

/// @brief Method SetStateAuthority, addr 0x58deba0, size 0x38, virtual false, abstract: false, final false
inline void SetStateAuthority(::GlobalNamespace::SIGadgetGrenadeDisrupt_State  newState) ;

/// @brief Method TriggerExplosion, addr 0x58debd8, size 0x210, virtual false, abstract: false, final false
inline void TriggerExplosion() ;

constexpr float_t const& __cordl_internal_get_disruptTime() const;

constexpr float_t& __cordl_internal_get_disruptTime() ;

constexpr float_t const& __cordl_internal_get_explosionRadius() const;

constexpr float_t& __cordl_internal_get_explosionRadius() ;

constexpr ::GlobalNamespace::SIGadgetGrenadeDisrupt_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::SIGadgetGrenadeDisrupt_State& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_disruptTime(float_t  value) ;

constexpr void __cordl_internal_set_explosionRadius(float_t  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::SIGadgetGrenadeDisrupt_State  value) ;

/// @brief Method .ctor, addr 0x58dee18, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetGrenadeDisrupt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetGrenadeDisrupt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetGrenadeDisrupt(SIGadgetGrenadeDisrupt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetGrenadeDisrupt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetGrenadeDisrupt(SIGadgetGrenadeDisrupt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{262};

/// @brief Field disruptTime, offset: 0xa0, size: 0x4, def value: None
 float_t  ___disruptTime;

/// [SerializeField]
/// @brief Field explosionRadius, offset: 0xa4, size: 0x4, def value: None
 float_t  ___explosionRadius;

/// @brief Field state, offset: 0xa8, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetGrenadeDisrupt_State  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeDisrupt, ___disruptTime) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeDisrupt, ___explosionRadius) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeDisrupt, ___state) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetGrenadeDisrupt) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
