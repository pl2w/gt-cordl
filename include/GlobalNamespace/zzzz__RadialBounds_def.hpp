#pragma once
// IWYU pragma private; include "GlobalNamespace/RadialBounds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RadialBounds)
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityEvent_2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class RadialBounds;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RadialBounds*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RadialBounds*, "", "RadialBounds");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: RadialBounds
class CORDL_TYPE RadialBounds : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _localCenter, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get__localCenter, put=__cordl_internal_set__localCenter)) ::UnityEngine::Vector3  _localCenter;

/// @brief Field _localRadius, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__localRadius, put=__cordl_internal_set__localRadius)) float_t  _localRadius;

 __declspec(property(get=get_center)) ::UnityEngine::Vector3  center;

 __declspec(property(get=get_localCenter, put=set_localCenter)) ::UnityEngine::Vector3  localCenter;

 __declspec(property(get=get_localRadius, put=set_localRadius)) float_t  localRadius;

/// @brief Field onOverlapEnter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onOverlapEnter, put=__cordl_internal_set_onOverlapEnter)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::RadialBounds>>*  onOverlapEnter;

/// @brief Field onOverlapExit, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onOverlapExit, put=__cordl_internal_set_onOverlapExit)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::RadialBounds>>*  onOverlapExit;

/// @brief Field onOverlapStay, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onOverlapStay, put=__cordl_internal_set_onOverlapStay)) ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::RadialBounds>,float_t>*  onOverlapStay;

 __declspec(property(get=get_radius)) float_t  radius;

static inline ::GlobalNamespace::RadialBounds* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__localCenter() ;

constexpr float_t const& __cordl_internal_get__localRadius() const;

constexpr float_t& __cordl_internal_get__localRadius() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::RadialBounds>>* const& __cordl_internal_get_onOverlapEnter() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::RadialBounds>>*& __cordl_internal_get_onOverlapEnter() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::RadialBounds>>* const& __cordl_internal_get_onOverlapExit() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::RadialBounds>>*& __cordl_internal_get_onOverlapExit() ;

constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::RadialBounds>,float_t>* const& __cordl_internal_get_onOverlapStay() const;

constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::RadialBounds>,float_t>*& __cordl_internal_get_onOverlapStay() ;

constexpr void __cordl_internal_set__localCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__localRadius(float_t  value) ;

constexpr void __cordl_internal_set_onOverlapEnter(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::RadialBounds>>*  value) ;

constexpr void __cordl_internal_set_onOverlapExit(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::RadialBounds>>*  value) ;

constexpr void __cordl_internal_set_onOverlapStay(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::RadialBounds>,float_t>*  value) ;

/// @brief Method .ctor, addr 0x597de7c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_center, addr 0x597dda0, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_center() ;

/// @brief Method get_localCenter, addr 0x597dd78, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_localCenter() ;

/// @brief Method get_localRadius, addr 0x597dd90, size 0x8, virtual false, abstract: false, final false
inline float_t get_localRadius() ;

/// @brief Method get_radius, addr 0x597ddcc, size 0xb0, virtual false, abstract: false, final false
inline float_t get_radius() ;

/// @brief Method set_localCenter, addr 0x597dd84, size 0xc, virtual false, abstract: false, final false
inline void set_localCenter(::UnityEngine::Vector3  value) ;

/// @brief Method set_localRadius, addr 0x597dd98, size 0x8, virtual false, abstract: false, final false
inline void set_localRadius(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RadialBounds() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RadialBounds", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RadialBounds(RadialBounds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RadialBounds", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RadialBounds(RadialBounds const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2522};

/// [SerializeField]
/// @brief Field _localCenter, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____localCenter;

/// [SerializeField]
/// @brief Field _localRadius, offset: 0x2c, size: 0x4, def value: None
 float_t  ____localRadius;

/// [Space]
/// @brief Field onOverlapEnter, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::RadialBounds>>*  ___onOverlapEnter;

/// @brief Field onOverlapExit, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::RadialBounds>>*  ___onOverlapExit;

/// @brief Field onOverlapStay, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::RadialBounds>,float_t>*  ___onOverlapStay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RadialBounds, ____localCenter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadialBounds, ____localRadius) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadialBounds, ___onOverlapEnter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadialBounds, ___onOverlapExit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadialBounds, ___onOverlapStay) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RadialBounds) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
