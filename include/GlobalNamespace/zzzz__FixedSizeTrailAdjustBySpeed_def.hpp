#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedSizeTrailAdjustBySpeed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FixedSizeTrailAdjustBySpeed)
namespace GlobalNamespace {
struct FixedSizeTrailAdjustBySpeed_GradientKey;
}
namespace GlobalNamespace {
class FixedSizeTrail;
}
namespace UnityEngine {
class Gradient;
}
// Forward declare root types
namespace GlobalNamespace {
class FixedSizeTrailAdjustBySpeed;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FixedSizeTrailAdjustBySpeed*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FixedSizeTrailAdjustBySpeed*, "", "FixedSizeTrailAdjustBySpeed");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FixedSizeTrailAdjustBySpeed
class CORDL_TYPE FixedSizeTrailAdjustBySpeed : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GradientKey = ::GlobalNamespace::FixedSizeTrailAdjustBySpeed_GradientKey;

/// @brief Field _initGravity, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get__initGravity, put=__cordl_internal_set__initGravity)) ::UnityEngine::Vector3  _initGravity;

/// @brief Field _lastPosition, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastPosition, put=__cordl_internal_set__lastPosition)) ::UnityEngine::Vector3  _lastPosition;

/// @brief Field _lastSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastSpeed, put=__cordl_internal_set__lastSpeed)) float_t  _lastSpeed;

/// @brief Field _mixGradient, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__mixGradient, put=__cordl_internal_set__mixGradient)) ::UnityEngine::Gradient*  _mixGradient;

/// @brief Field _rawSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__rawSpeed, put=__cordl_internal_set__rawSpeed)) float_t  _rawSpeed;

/// @brief Field _rawVelocity, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get__rawVelocity, put=__cordl_internal_set__rawVelocity)) ::UnityEngine::Vector3  _rawVelocity;

/// @brief Field _speed, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__speed, put=__cordl_internal_set__speed)) float_t  _speed;

/// @brief Field adjustPhysics, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_adjustPhysics, put=__cordl_internal_set_adjustPhysics)) bool  adjustPhysics;

/// @brief Field expandSpeed, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_expandSpeed, put=__cordl_internal_set_expandSpeed)) float_t  expandSpeed;

/// @brief Field gravityOffset, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get_gravityOffset, put=__cordl_internal_set_gravityOffset)) ::UnityEngine::Vector3  gravityOffset;

/// @brief Field maxColors, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxColors, put=__cordl_internal_set_maxColors)) ::UnityEngine::Gradient*  maxColors;

/// @brief Field maxLength, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLength, put=__cordl_internal_set_maxLength)) float_t  maxLength;

/// @brief Field maxSpeed, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field minColors, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_minColors, put=__cordl_internal_set_minColors)) ::UnityEngine::Gradient*  minColors;

/// @brief Field minLength, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_minLength, put=__cordl_internal_set_minLength)) float_t  minLength;

/// @brief Field minSpeed, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSpeed, put=__cordl_internal_set_minSpeed)) float_t  minSpeed;

/// @brief Field retractMin, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractMin, put=__cordl_internal_set_retractMin)) float_t  retractMin;

/// @brief Field retractSpeed, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractSpeed, put=__cordl_internal_set_retractSpeed)) float_t  retractSpeed;

/// @brief Field trail, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_trail, put=__cordl_internal_set_trail)) ::UnityW<::GlobalNamespace::FixedSizeTrail>  trail;

/// @brief Method AdjustTrail, addr 0x5805e4c, size 0x228, virtual false, abstract: false, final false
inline void AdjustTrail() ;

/// @brief Method LerpTrailColors, addr 0x5805b18, size 0x1b4, virtual false, abstract: false, final false
inline void LerpTrailColors(float_t  t) ;

static inline ::GlobalNamespace::FixedSizeTrailAdjustBySpeed* New_ctor() ;

/// @brief Method OnDisable, addr 0x5805b14, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5805a10, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetTrailState, addr 0x5805a14, size 0x100, virtual false, abstract: false, final false
inline void ResetTrailState() ;

/// @brief Method Setup, addr 0x580591c, size 0xf4, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method Start, addr 0x5805918, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5805ccc, size 0x180, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initGravity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__initGravity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastPosition() ;

constexpr float_t const& __cordl_internal_get__lastSpeed() const;

constexpr float_t& __cordl_internal_get__lastSpeed() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get__mixGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get__mixGradient() ;

constexpr float_t const& __cordl_internal_get__rawSpeed() const;

constexpr float_t& __cordl_internal_get__rawSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rawVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__rawVelocity() ;

constexpr float_t const& __cordl_internal_get__speed() const;

constexpr float_t& __cordl_internal_get__speed() ;

constexpr bool const& __cordl_internal_get_adjustPhysics() const;

constexpr bool& __cordl_internal_get_adjustPhysics() ;

constexpr float_t const& __cordl_internal_get_expandSpeed() const;

constexpr float_t& __cordl_internal_get_expandSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_gravityOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_gravityOffset() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_maxColors() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_maxColors() ;

constexpr float_t const& __cordl_internal_get_maxLength() const;

constexpr float_t& __cordl_internal_get_maxLength() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_minColors() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_minColors() ;

constexpr float_t const& __cordl_internal_get_minLength() const;

constexpr float_t& __cordl_internal_get_minLength() ;

constexpr float_t const& __cordl_internal_get_minSpeed() const;

constexpr float_t& __cordl_internal_get_minSpeed() ;

constexpr float_t const& __cordl_internal_get_retractMin() const;

constexpr float_t& __cordl_internal_get_retractMin() ;

constexpr float_t const& __cordl_internal_get_retractSpeed() const;

constexpr float_t& __cordl_internal_get_retractSpeed() ;

constexpr ::UnityW<::GlobalNamespace::FixedSizeTrail> const& __cordl_internal_get_trail() const;

constexpr ::UnityW<::GlobalNamespace::FixedSizeTrail>& __cordl_internal_get_trail() ;

constexpr void __cordl_internal_set__initGravity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__lastSpeed(float_t  value) ;

constexpr void __cordl_internal_set__mixGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set__rawSpeed(float_t  value) ;

constexpr void __cordl_internal_set__rawVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__speed(float_t  value) ;

constexpr void __cordl_internal_set_adjustPhysics(bool  value) ;

constexpr void __cordl_internal_set_expandSpeed(float_t  value) ;

constexpr void __cordl_internal_set_gravityOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_maxColors(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_maxLength(float_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_minColors(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_minLength(float_t  value) ;

constexpr void __cordl_internal_set_minSpeed(float_t  value) ;

constexpr void __cordl_internal_set_retractMin(float_t  value) ;

constexpr void __cordl_internal_set_retractSpeed(float_t  value) ;

constexpr void __cordl_internal_set_trail(::UnityW<::GlobalNamespace::FixedSizeTrail>  value) ;

/// @brief Method .ctor, addr 0x5806074, size 0x1e0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedSizeTrailAdjustBySpeed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedSizeTrailAdjustBySpeed", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedSizeTrailAdjustBySpeed(FixedSizeTrailAdjustBySpeed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedSizeTrailAdjustBySpeed", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedSizeTrailAdjustBySpeed(FixedSizeTrailAdjustBySpeed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1694};

/// @brief Field trail, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FixedSizeTrail>  ___trail;

/// @brief Field adjustPhysics, offset: 0x28, size: 0x1, def value: None
 bool  ___adjustPhysics;

/// @brief Field _rawVelocity, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____rawVelocity;

/// @brief Field _rawSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ____rawSpeed;

/// @brief Field _speed, offset: 0x3c, size: 0x4, def value: None
 float_t  ____speed;

/// @brief Field _lastSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ____lastSpeed;

/// @brief Field _lastPosition, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastPosition;

/// @brief Field _initGravity, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____initGravity;

/// @brief Field gravityOffset, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___gravityOffset;

/// [Space]
/// @brief Field retractMin, offset: 0x68, size: 0x4, def value: None
 float_t  ___retractMin;

/// [Space]
/// [FormerlySerializedAs("sizeIncreaseSpeed")]
/// @brief Field expandSpeed, offset: 0x6c, size: 0x4, def value: None
 float_t  ___expandSpeed;

/// [FormerlySerializedAs("sizeDecreaseSpeed")]
/// @brief Field retractSpeed, offset: 0x70, size: 0x4, def value: None
 float_t  ___retractSpeed;

/// [Space]
/// @brief Field minSpeed, offset: 0x74, size: 0x4, def value: None
 float_t  ___minSpeed;

/// @brief Field minLength, offset: 0x78, size: 0x4, def value: None
 float_t  ___minLength;

/// @brief Field minColors, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___minColors;

/// [Space]
/// @brief Field maxSpeed, offset: 0x88, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// @brief Field maxLength, offset: 0x8c, size: 0x4, def value: None
 float_t  ___maxLength;

/// @brief Field maxColors, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___maxColors;

/// [Space]
/// [SerializeField]
/// @brief Field _mixGradient, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ____mixGradient;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ___trail) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ___adjustPhysics) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ____rawVelocity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ____rawSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ____speed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ____lastSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ____lastPosition) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ____initGravity) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ___gravityOffset) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ___retractMin) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ___expandSpeed) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ___retractSpeed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ___minSpeed) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ___minLength) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ___minColors) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ___maxSpeed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ___maxLength) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ___maxColors) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed, ____mixGradient) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
