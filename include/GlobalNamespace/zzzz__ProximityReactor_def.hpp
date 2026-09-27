#pragma once
// IWYU pragma private; include "GlobalNamespace/ProximityReactor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ProximityReactor)
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ProximityReactor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ProximityReactor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProximityReactor*, "", "ProximityReactor");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProximityReactor
class CORDL_TYPE ProximityReactor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _distance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__distance, put=__cordl_internal_set__distance)) float_t  _distance;

/// @brief Field _distanceLinear, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__distanceLinear, put=__cordl_internal_set__distanceLinear)) float_t  _distanceLinear;

 __declspec(property(get=get_distance)) float_t  distance;

 __declspec(property(get=get_distanceLinear)) float_t  distanceLinear;

/// @brief Field from, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_from, put=__cordl_internal_set_from)) ::UnityW<::UnityEngine::Transform>  from;

/// @brief Field onAboveMaxProximity, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onAboveMaxProximity, put=__cordl_internal_set_onAboveMaxProximity)) ::UnityEngine::Events::UnityEvent_1<float_t>*  onAboveMaxProximity;

/// @brief Field onBelowMinProximity, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBelowMinProximity, put=__cordl_internal_set_onBelowMinProximity)) ::UnityEngine::Events::UnityEvent_1<float_t>*  onBelowMinProximity;

/// @brief Field onProximityChanged, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onProximityChanged, put=__cordl_internal_set_onProximityChanged)) ::UnityEngine::Events::UnityEvent_1<float_t>*  onProximityChanged;

/// @brief Field onProximityChangedLinear, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onProximityChangedLinear, put=__cordl_internal_set_onProximityChangedLinear)) ::UnityEngine::Events::UnityEvent_1<float_t>*  onProximityChangedLinear;

/// @brief Field proximityMax, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_proximityMax, put=__cordl_internal_set_proximityMax)) float_t  proximityMax;

/// @brief Field proximityMin, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_proximityMin, put=__cordl_internal_set_proximityMin)) float_t  proximityMin;

 __declspec(property(get=get_proximityRange)) float_t  proximityRange;

/// @brief Field to, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_to, put=__cordl_internal_set_to)) ::UnityW<::UnityEngine::Transform>  to;

static inline ::GlobalNamespace::ProximityReactor* New_ctor() ;

/// @brief Method OnEnable, addr 0x5a1f990, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetRigFrom, addr 0x5a1f7e8, size 0xc8, virtual false, abstract: false, final false
inline void SetRigFrom() ;

/// @brief Method SetRigTo, addr 0x5a1f8b0, size 0xc8, virtual false, abstract: false, final false
inline void SetRigTo() ;

/// @brief Method SetTransformFrom, addr 0x5a1f978, size 0x8, virtual false, abstract: false, final false
inline void SetTransformFrom(::UnityEngine::Transform*  t) ;

/// @brief Method SetTransformTo, addr 0x5a1f980, size 0x8, virtual false, abstract: false, final false
inline void SetTransformTo(::UnityEngine::Transform*  t) ;

/// @brief Method Setup, addr 0x5a1f988, size 0x8, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method Update, addr 0x5a1f998, size 0x2e0, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__distance() const;

constexpr float_t& __cordl_internal_get__distance() ;

constexpr float_t const& __cordl_internal_get__distanceLinear() const;

constexpr float_t& __cordl_internal_get__distanceLinear() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_from() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_from() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_onAboveMaxProximity() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_onAboveMaxProximity() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_onBelowMinProximity() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_onBelowMinProximity() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_onProximityChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_onProximityChanged() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_onProximityChangedLinear() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_onProximityChangedLinear() ;

constexpr float_t const& __cordl_internal_get_proximityMax() const;

constexpr float_t& __cordl_internal_get_proximityMax() ;

constexpr float_t const& __cordl_internal_get_proximityMin() const;

constexpr float_t& __cordl_internal_get_proximityMin() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_to() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_to() ;

constexpr void __cordl_internal_set__distance(float_t  value) ;

constexpr void __cordl_internal_set__distanceLinear(float_t  value) ;

constexpr void __cordl_internal_set_from(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_onAboveMaxProximity(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set_onBelowMinProximity(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set_onProximityChanged(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set_onProximityChangedLinear(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set_proximityMax(float_t  value) ;

constexpr void __cordl_internal_set_proximityMin(float_t  value) ;

constexpr void __cordl_internal_set_to(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5a1fc78, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_distance, addr 0x5a1f7d8, size 0x8, virtual false, abstract: false, final false
inline float_t get_distance() ;

/// @brief Method get_distanceLinear, addr 0x5a1f7e0, size 0x8, virtual false, abstract: false, final false
inline float_t get_distanceLinear() ;

/// @brief Method get_proximityRange, addr 0x5a1f7cc, size 0xc, virtual false, abstract: false, final false
inline float_t get_proximityRange() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProximityReactor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProximityReactor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProximityReactor(ProximityReactor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProximityReactor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProximityReactor(ProximityReactor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2837};

/// @brief Field from, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___from;

/// @brief Field to, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___to;

/// [Space]
/// @brief Field proximityMin, offset: 0x30, size: 0x4, def value: None
 float_t  ___proximityMin;

/// @brief Field proximityMax, offset: 0x34, size: 0x4, def value: None
 float_t  ___proximityMax;

/// [Space]
/// @brief Field _distance, offset: 0x38, size: 0x4, def value: None
 float_t  ____distance;

/// @brief Field _distanceLinear, offset: 0x3c, size: 0x4, def value: None
 float_t  ____distanceLinear;

/// [Space]
/// @brief Field onProximityChanged, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___onProximityChanged;

/// @brief Field onProximityChangedLinear, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___onProximityChangedLinear;

/// [Space]
/// @brief Field onBelowMinProximity, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___onBelowMinProximity;

/// @brief Field onAboveMaxProximity, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___onAboveMaxProximity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProximityReactor, ___from) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityReactor, ___to) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityReactor, ___proximityMin) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityReactor, ___proximityMax) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityReactor, ____distance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityReactor, ____distanceLinear) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityReactor, ___onProximityChanged) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityReactor, ___onProximityChangedLinear) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityReactor, ___onBelowMinProximity) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityReactor, ___onAboveMaxProximity) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProximityReactor) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
