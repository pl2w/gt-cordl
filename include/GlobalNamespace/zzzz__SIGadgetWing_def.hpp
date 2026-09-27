#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetWing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIGadgetWing_EState_def.hpp"
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetWing)
namespace GlobalNamespace {
class GTAnimator;
}
namespace GlobalNamespace {
class GameButtonActivatable;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetWing;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetWing*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetWing*, "", "SIGadgetWing");
// Dependencies SIGadget, SIGadgetWing_EState, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetWing
class CORDL_TYPE SIGadgetWing : public ::GlobalNamespace::SIGadget {
public:
// Declarations
/// @brief Field _lastWingPos, offset 0xa8, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastWingPos, put=__cordl_internal_set__lastWingPos)) ::UnityEngine::Vector3  _lastWingPos;

/// @brief Field _state, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::GlobalNamespace::SIGadgetWing_EState  _state;

/// @brief Field m_buttonActivatable, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_buttonActivatable, put=__cordl_internal_set_m_buttonActivatable)) ::UnityW<::GlobalNamespace::GameButtonActivatable>  m_buttonActivatable;

/// @brief Field m_decayDuration, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_decayDuration, put=__cordl_internal_set_m_decayDuration)) float_t  m_decayDuration;

/// @brief Field m_flapDecayedStrength, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_flapDecayedStrength, put=__cordl_internal_set_m_flapDecayedStrength)) float_t  m_flapDecayedStrength;

/// @brief Field m_flapStrength, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_flapStrength, put=__cordl_internal_set_m_flapStrength)) float_t  m_flapStrength;

/// @brief Field m_gtAnimator, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_gtAnimator, put=__cordl_internal_set_m_gtAnimator)) ::UnityW<::GlobalNamespace::GTAnimator>  m_gtAnimator;

/// @brief Field m_liftCap, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_liftCap, put=__cordl_internal_set_m_liftCap)) float_t  m_liftCap;

/// @brief Field m_liftStrength, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_liftStrength, put=__cordl_internal_set_m_liftStrength)) float_t  m_liftStrength;

/// @brief Field m_wingCenter, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_wingCenter, put=__cordl_internal_set_m_wingCenter)) ::UnityW<::UnityEngine::Transform>  m_wingCenter;

/// @brief Method Awake, addr 0x58d6590, size 0x2dc, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SIGadgetWing* New_ctor() ;

/// @brief Method OnEntityStateChange, addr 0x58d6b74, size 0x30, virtual true, abstract: false, final false
inline void OnEntityStateChange(int64_t  prevState, int64_t  newState) ;

/// @brief Method OnGrabbed, addr 0x58d686c, size 0x38, virtual false, abstract: false, final false
inline void OnGrabbed() ;

/// @brief Method OnReleased, addr 0x58d68dc, size 0x4, virtual false, abstract: false, final false
inline void OnReleased() ;

/// @brief Method OnSnapped, addr 0x58d68a4, size 0x38, virtual false, abstract: false, final false
inline void OnSnapped() ;

/// @brief Method OnUnsnapped, addr 0x58d68e0, size 0x4, virtual false, abstract: false, final false
inline void OnUnsnapped() ;

/// @brief Method OnUpdateAuthority, addr 0x58d68e4, size 0x28c, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x58d6b70, size 0x4, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastWingPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastWingPos() ;

constexpr ::GlobalNamespace::SIGadgetWing_EState const& __cordl_internal_get__state() const;

constexpr ::GlobalNamespace::SIGadgetWing_EState& __cordl_internal_get__state() ;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& __cordl_internal_get_m_buttonActivatable() const;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& __cordl_internal_get_m_buttonActivatable() ;

constexpr float_t const& __cordl_internal_get_m_decayDuration() const;

constexpr float_t& __cordl_internal_get_m_decayDuration() ;

constexpr float_t const& __cordl_internal_get_m_flapDecayedStrength() const;

constexpr float_t& __cordl_internal_get_m_flapDecayedStrength() ;

constexpr float_t const& __cordl_internal_get_m_flapStrength() const;

constexpr float_t& __cordl_internal_get_m_flapStrength() ;

constexpr ::UnityW<::GlobalNamespace::GTAnimator> const& __cordl_internal_get_m_gtAnimator() const;

constexpr ::UnityW<::GlobalNamespace::GTAnimator>& __cordl_internal_get_m_gtAnimator() ;

constexpr float_t const& __cordl_internal_get_m_liftCap() const;

constexpr float_t& __cordl_internal_get_m_liftCap() ;

constexpr float_t const& __cordl_internal_get_m_liftStrength() const;

constexpr float_t& __cordl_internal_get_m_liftStrength() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_wingCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_wingCenter() ;

constexpr void __cordl_internal_set__lastWingPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__state(::GlobalNamespace::SIGadgetWing_EState  value) ;

constexpr void __cordl_internal_set_m_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value) ;

constexpr void __cordl_internal_set_m_decayDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_flapDecayedStrength(float_t  value) ;

constexpr void __cordl_internal_set_m_flapStrength(float_t  value) ;

constexpr void __cordl_internal_set_m_gtAnimator(::UnityW<::GlobalNamespace::GTAnimator>  value) ;

constexpr void __cordl_internal_set_m_liftCap(float_t  value) ;

constexpr void __cordl_internal_set_m_liftStrength(float_t  value) ;

constexpr void __cordl_internal_set_m_wingCenter(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x58d6ba4, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetWing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetWing", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetWing(SIGadgetWing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetWing", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetWing(SIGadgetWing const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{239};

/// [SerializeField]
/// @brief Field m_buttonActivatable, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameButtonActivatable>  ___m_buttonActivatable;

/// [SerializeField]
/// @brief Field m_flapStrength, offset: 0x80, size: 0x4, def value: None
 float_t  ___m_flapStrength;

/// [SerializeField]
/// @brief Field m_flapDecayedStrength, offset: 0x84, size: 0x4, def value: None
 float_t  ___m_flapDecayedStrength;

/// [SerializeField]
/// @brief Field m_decayDuration, offset: 0x88, size: 0x4, def value: None
 float_t  ___m_decayDuration;

/// [SerializeField]
/// @brief Field m_liftStrength, offset: 0x8c, size: 0x4, def value: None
 float_t  ___m_liftStrength;

/// [SerializeField]
/// @brief Field m_liftCap, offset: 0x90, size: 0x4, def value: None
 float_t  ___m_liftCap;

/// [SerializeField]
/// @brief Field m_wingCenter, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_wingCenter;

/// [SerializeField]
/// @brief Field m_gtAnimator, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GTAnimator>  ___m_gtAnimator;

/// @brief Field _lastWingPos, offset: 0xa8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastWingPos;

/// @brief Field _state, offset: 0xb4, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetWing_EState  ____state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetWing, ___m_buttonActivatable) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWing, ___m_flapStrength) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWing, ___m_flapDecayedStrength) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWing, ___m_decayDuration) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWing, ___m_liftStrength) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWing, ___m_liftCap) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWing, ___m_wingCenter) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWing, ___m_gtAnimator) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWing, ____lastWingPos) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWing, ____state) == 0xb4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetWing) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
