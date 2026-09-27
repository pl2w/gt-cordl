#pragma once
// IWYU pragma private; include "GlobalNamespace/GliderWindVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GliderWindVolume)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GliderWindVolume;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GliderWindVolume*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GliderWindVolume*, "", "GliderWindVolume");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GliderWindVolume
class CORDL_TYPE GliderWindVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_WindDirection)) ::UnityEngine::Vector3  WindDirection;

/// @brief Field localWindDirection, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_localWindDirection, put=__cordl_internal_set_localWindDirection)) ::UnityEngine::Vector3  localWindDirection;

/// @brief Field maxAccel, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxAccel, put=__cordl_internal_set_maxAccel)) float_t  maxAccel;

/// @brief Field maxSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field speedVsAccelCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_speedVsAccelCurve, put=__cordl_internal_set_speedVsAccelCurve)) ::UnityEngine::AnimationCurve*  speedVsAccelCurve;

/// @brief Method GetAccelFromVelocity, addr 0x5aba764, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetAccelFromVelocity(::UnityEngine::Vector3  velocity) ;

static inline ::GlobalNamespace::GliderWindVolume* New_ctor() ;

/// @brief Method SetProperties, addr 0x5abb830, size 0x4c, virtual false, abstract: false, final false
inline void SetProperties(float_t  speed, float_t  accel, ::UnityEngine::AnimationCurve*  svaCurve, ::UnityEngine::Vector3  windDirection) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localWindDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localWindDirection() ;

constexpr float_t const& __cordl_internal_get_maxAccel() const;

constexpr float_t& __cordl_internal_get_maxAccel() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_speedVsAccelCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_speedVsAccelCurve() ;

constexpr void __cordl_internal_set_localWindDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_maxAccel(float_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_speedVsAccelCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x5abb87c, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_WindDirection, addr 0x5aba800, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_WindDirection() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GliderWindVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GliderWindVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GliderWindVolume(GliderWindVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GliderWindVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GliderWindVolume(GliderWindVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3307};

/// [SerializeField]
/// @brief Field maxSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// [SerializeField]
/// @brief Field maxAccel, offset: 0x24, size: 0x4, def value: None
 float_t  ___maxAccel;

/// [SerializeField]
/// @brief Field speedVsAccelCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___speedVsAccelCurve;

/// [SerializeField]
/// @brief Field localWindDirection, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localWindDirection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GliderWindVolume, ___maxSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderWindVolume, ___maxAccel) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderWindVolume, ___speedVsAccelCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderWindVolume, ___localWindDirection) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GliderWindVolume) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
