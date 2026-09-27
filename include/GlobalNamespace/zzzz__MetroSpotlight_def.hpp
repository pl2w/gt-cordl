#pragma once
// IWYU pragma private; include "GlobalNamespace/MetroSpotlight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MetroSpotlight)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MetroSpotlight;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetroSpotlight*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetroSpotlight*, "", "MetroSpotlight");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetroSpotlight
class CORDL_TYPE MetroSpotlight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _blimp, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__blimp, put=__cordl_internal_set__blimp)) ::UnityW<::UnityEngine::Transform>  _blimp;

/// @brief Field _light, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__light, put=__cordl_internal_set__light)) ::UnityW<::UnityEngine::Transform>  _light;

/// @brief Field _offset, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) float_t  _offset;

/// @brief Field _radius, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__radius, put=__cordl_internal_set__radius)) float_t  _radius;

/// @brief Field _target, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::Transform>  _target;

/// @brief Field _theta, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__theta, put=__cordl_internal_set__theta)) float_t  _theta;

/// @brief Field _time, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__time, put=__cordl_internal_set__time)) float_t  _time;

/// @brief Field speed, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Method Figure8, addr 0x5d09344, size 0x178, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Figure8(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  xDir, ::UnityEngine::Vector3  yDir, float_t  scale, float_t  t, float_t  offset, float_t  theta) ;

static inline ::GlobalNamespace::MetroSpotlight* New_ctor() ;

/// @brief Method Tick, addr 0x5d09034, size 0x274, virtual false, abstract: false, final false
inline void Tick() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__blimp() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__blimp() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__light() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__light() ;

constexpr float_t const& __cordl_internal_get__offset() const;

constexpr float_t& __cordl_internal_get__offset() ;

constexpr float_t const& __cordl_internal_get__radius() const;

constexpr float_t& __cordl_internal_get__radius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__target() ;

constexpr float_t const& __cordl_internal_get__theta() const;

constexpr float_t& __cordl_internal_get__theta() ;

constexpr float_t const& __cordl_internal_get__time() const;

constexpr float_t& __cordl_internal_get__time() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr void __cordl_internal_set__blimp(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__light(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__offset(float_t  value) ;

constexpr void __cordl_internal_set__radius(float_t  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__theta(float_t  value) ;

constexpr void __cordl_internal_set__time(float_t  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

/// @brief Method .ctor, addr 0x5d094bc, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetroSpotlight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetroSpotlight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetroSpotlight(MetroSpotlight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetroSpotlight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetroSpotlight(MetroSpotlight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{448};

/// [SerializeField]
/// @brief Field _blimp, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____blimp;

/// [SerializeField]
/// @brief Field _light, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____light;

/// [SerializeField]
/// @brief Field _target, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____target;

/// [FormerlySerializedAs("_scale")]
/// [SerializeField]
/// @brief Field _radius, offset: 0x38, size: 0x4, def value: None
 float_t  ____radius;

/// [SerializeField]
/// @brief Field _offset, offset: 0x3c, size: 0x4, def value: None
 float_t  ____offset;

/// [SerializeField]
/// @brief Field _theta, offset: 0x40, size: 0x4, def value: None
 float_t  ____theta;

/// @brief Field speed, offset: 0x44, size: 0x4, def value: None
 float_t  ___speed;

/// [Space]
/// @brief Field _time, offset: 0x48, size: 0x4, def value: None
 float_t  ____time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetroSpotlight, ____blimp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroSpotlight, ____light) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroSpotlight, ____target) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroSpotlight, ____radius) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroSpotlight, ____offset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroSpotlight, ____theta) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroSpotlight, ___speed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroSpotlight, ____time) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetroSpotlight) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
