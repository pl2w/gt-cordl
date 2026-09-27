#pragma once
// IWYU pragma private; include "Oculus/Interaction/ConicalFrustum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConicalFrustum)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class ConicalFrustum;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ConicalFrustum*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ConicalFrustum*, "Oculus.Interaction", "ConicalFrustum");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ConicalFrustum
class CORDL_TYPE ConicalFrustum : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ApertureDegrees, put=set_ApertureDegrees)) float_t  ApertureDegrees;

 __declspec(property(get=get_Direction)) ::UnityEngine::Vector3  Direction;

 __declspec(property(get=get_EndPoint)) ::UnityEngine::Vector3  EndPoint;

 __declspec(property(get=get_MaxLength, put=set_MaxLength)) float_t  MaxLength;

 __declspec(property(get=get_MinLength, put=set_MinLength)) float_t  MinLength;

 __declspec(property(get=get_Pose)) ::UnityEngine::Pose  Pose;

 __declspec(property(get=get_RadiusStart, put=set_RadiusStart)) float_t  RadiusStart;

 __declspec(property(get=get_StartPoint)) ::UnityEngine::Vector3  StartPoint;

/// @brief Field _apertureDegrees, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__apertureDegrees, put=__cordl_internal_set__apertureDegrees)) float_t  _apertureDegrees;

/// @brief Field _maxLength, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxLength, put=__cordl_internal_set__maxLength)) float_t  _maxLength;

/// @brief Field _minLength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__minLength, put=__cordl_internal_set__minLength)) float_t  _minLength;

/// @brief Field _radiusStart, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__radiusStart, put=__cordl_internal_set__radiusStart)) float_t  _radiusStart;

/// @brief Method ConeFrustumRadiusAtLength, addr 0xa47c064, size 0x68, virtual false, abstract: false, final false
inline float_t ConeFrustumRadiusAtLength(float_t  length) ;

/// @brief Method HitsCollider, addr 0xa47c0cc, size 0x460, virtual false, abstract: false, final false
inline bool HitsCollider(::UnityEngine::Collider*  collider, ::by_ref<float_t>  score, ::by_ref<::UnityEngine::Vector3>  point) ;

/// @brief Method IsPointInConeFrustum, addr 0xa47bda8, size 0x2bc, virtual false, abstract: false, final false
inline bool IsPointInConeFrustum(::UnityEngine::Vector3  point) ;

/// @brief Method NearestColliderHit, addr 0xa47c52c, size 0x434, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 NearestColliderHit(::UnityEngine::Collider*  collider, ::by_ref<float_t>  score) ;

static inline ::Oculus::Interaction::ConicalFrustum* New_ctor() ;

constexpr float_t const& __cordl_internal_get__apertureDegrees() const;

constexpr float_t& __cordl_internal_get__apertureDegrees() ;

constexpr float_t const& __cordl_internal_get__maxLength() const;

constexpr float_t& __cordl_internal_get__maxLength() ;

constexpr float_t const& __cordl_internal_get__minLength() const;

constexpr float_t& __cordl_internal_get__minLength() ;

constexpr float_t const& __cordl_internal_get__radiusStart() const;

constexpr float_t& __cordl_internal_get__radiusStart() ;

constexpr void __cordl_internal_set__apertureDegrees(float_t  value) ;

constexpr void __cordl_internal_set__maxLength(float_t  value) ;

constexpr void __cordl_internal_set__minLength(float_t  value) ;

constexpr void __cordl_internal_set__radiusStart(float_t  value) ;

/// @brief Method .ctor, addr 0xa47c960, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ApertureDegrees, addr 0xa47bca8, size 0x8, virtual false, abstract: false, final false
inline float_t get_ApertureDegrees() ;

/// @brief Method get_Direction, addr 0xa47bd20, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Direction() ;

/// @brief Method get_EndPoint, addr 0xa47bd40, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_EndPoint() ;

/// @brief Method get_MaxLength, addr 0xa47bc88, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxLength() ;

/// @brief Method get_MinLength, addr 0xa47bc78, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinLength() ;

/// @brief Method get_Pose, addr 0xa47bc3c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_Pose() ;

/// @brief Method get_RadiusStart, addr 0xa47bc98, size 0x8, virtual false, abstract: false, final false
inline float_t get_RadiusStart() ;

/// @brief Method get_StartPoint, addr 0xa47bcb8, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_StartPoint() ;

/// @brief Method set_ApertureDegrees, addr 0xa47bcb0, size 0x8, virtual false, abstract: false, final false
inline void set_ApertureDegrees(float_t  value) ;

/// @brief Method set_MaxLength, addr 0xa47bc90, size 0x8, virtual false, abstract: false, final false
inline void set_MaxLength(float_t  value) ;

/// @brief Method set_MinLength, addr 0xa47bc80, size 0x8, virtual false, abstract: false, final false
inline void set_MinLength(float_t  value) ;

/// @brief Method set_RadiusStart, addr 0xa47bca0, size 0x8, virtual false, abstract: false, final false
inline void set_RadiusStart(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConicalFrustum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConicalFrustum", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConicalFrustum(ConicalFrustum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConicalFrustum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConicalFrustum(ConicalFrustum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15968};

/// [SerializeField]
/// [Min(0)]
/// @brief Field _minLength, offset: 0x20, size: 0x4, def value: None
 float_t  ____minLength;

/// [SerializeField]
/// [Min(0)]
/// @brief Field _maxLength, offset: 0x24, size: 0x4, def value: None
 float_t  ____maxLength;

/// [SerializeField]
/// [Min(0)]
/// @brief Field _radiusStart, offset: 0x28, size: 0x4, def value: None
 float_t  ____radiusStart;

/// [SerializeField]
/// [Range(0, 90)]
/// @brief Field _apertureDegrees, offset: 0x2c, size: 0x4, def value: None
 float_t  ____apertureDegrees;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ConicalFrustum, ____minLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ConicalFrustum, ____maxLength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ConicalFrustum, ____radiusStart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ConicalFrustum, ____apertureDegrees) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ConicalFrustum) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
