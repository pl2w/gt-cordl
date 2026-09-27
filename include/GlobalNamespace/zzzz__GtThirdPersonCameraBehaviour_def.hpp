#pragma once
// IWYU pragma private; include "GlobalNamespace/GtThirdPersonCameraBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GtThirdPersonCameraBehaviour)
namespace Liv::Lck::Smoothing {
class KalmanFilterQuaternion;
}
namespace Liv::Lck::Smoothing {
class KalmanFilterVector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class GtThirdPersonCameraBehaviour;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GtThirdPersonCameraBehaviour*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GtThirdPersonCameraBehaviour*, "", "GtThirdPersonCameraBehaviour");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GtThirdPersonCameraBehaviour
class CORDL_TYPE GtThirdPersonCameraBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _positionFilter, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionFilter, put=__cordl_internal_set__positionFilter)) ::Liv::Lck::Smoothing::KalmanFilterVector3*  _positionFilter;

/// @brief Field _rotationFilter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationFilter, put=__cordl_internal_set__rotationFilter)) ::Liv::Lck::Smoothing::KalmanFilterQuaternion*  _rotationFilter;

/// @brief Field cameraCollisionMask, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_cameraCollisionMask, put=__cordl_internal_set_cameraCollisionMask)) ::UnityEngine::LayerMask  cameraCollisionMask;

/// @brief Field cameraRadius, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cameraRadius, put=__cordl_internal_set_cameraRadius)) float_t  cameraRadius;

/// @brief Field distance, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_distance, put=__cordl_internal_set_distance)) float_t  distance;

/// @brief Field front, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_front, put=__cordl_internal_set_front)) bool  front;

/// @brief Field heightOffsetAngle, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightOffsetAngle, put=__cordl_internal_set_heightOffsetAngle)) float_t  heightOffsetAngle;

/// @brief Field positionalSmoothness, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_positionalSmoothness, put=__cordl_internal_set_positionalSmoothness)) float_t  positionalSmoothness;

/// @brief Field rotationalSmoothness, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationalSmoothness, put=__cordl_internal_set_rotationalSmoothness)) float_t  rotationalSmoothness;

/// @brief Field shoulderOffset, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_shoulderOffset, put=__cordl_internal_set_shoulderOffset)) float_t  shoulderOffset;

/// @brief Method LateUpdate, addr 0x9d14d74, size 0x8, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method Lerp, addr 0x9d153e0, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Lerp(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b, float_t  t) ;

/// @brief Method Lerp, addr 0x9d15428, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  t) ;

/// @brief Method Lerp, addr 0x9d15488, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 Lerp(::UnityEngine::Vector4  a, ::UnityEngine::Vector4  b, float_t  t) ;

/// @brief Method Lerp, addr 0x9d153a0, size 0x38, virtual false, abstract: false, final false
static inline float_t Lerp(float_t  a, float_t  b, float_t  t) ;

static inline ::GlobalNamespace::GtThirdPersonCameraBehaviour* New_ctor() ;

/// @brief Method OnEnable, addr 0x9d14c20, size 0x154, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method UpdateCamera, addr 0x9d14d7c, size 0x624, virtual false, abstract: false, final false
inline void UpdateCamera(bool  useLerp) ;

/// @brief Method UpdateCameraWithoutSmoothing, addr 0x9d153d8, size 0x8, virtual false, abstract: false, final false
inline void UpdateCameraWithoutSmoothing() ;

constexpr ::Liv::Lck::Smoothing::KalmanFilterVector3* const& __cordl_internal_get__positionFilter() const;

constexpr ::Liv::Lck::Smoothing::KalmanFilterVector3*& __cordl_internal_get__positionFilter() ;

constexpr ::Liv::Lck::Smoothing::KalmanFilterQuaternion* const& __cordl_internal_get__rotationFilter() const;

constexpr ::Liv::Lck::Smoothing::KalmanFilterQuaternion*& __cordl_internal_get__rotationFilter() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_cameraCollisionMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_cameraCollisionMask() ;

constexpr float_t const& __cordl_internal_get_cameraRadius() const;

constexpr float_t& __cordl_internal_get_cameraRadius() ;

constexpr float_t const& __cordl_internal_get_distance() const;

constexpr float_t& __cordl_internal_get_distance() ;

constexpr bool const& __cordl_internal_get_front() const;

constexpr bool& __cordl_internal_get_front() ;

constexpr float_t const& __cordl_internal_get_heightOffsetAngle() const;

constexpr float_t& __cordl_internal_get_heightOffsetAngle() ;

constexpr float_t const& __cordl_internal_get_positionalSmoothness() const;

constexpr float_t& __cordl_internal_get_positionalSmoothness() ;

constexpr float_t const& __cordl_internal_get_rotationalSmoothness() const;

constexpr float_t& __cordl_internal_get_rotationalSmoothness() ;

constexpr float_t const& __cordl_internal_get_shoulderOffset() const;

constexpr float_t& __cordl_internal_get_shoulderOffset() ;

constexpr void __cordl_internal_set__positionFilter(::Liv::Lck::Smoothing::KalmanFilterVector3*  value) ;

constexpr void __cordl_internal_set__rotationFilter(::Liv::Lck::Smoothing::KalmanFilterQuaternion*  value) ;

constexpr void __cordl_internal_set_cameraCollisionMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_cameraRadius(float_t  value) ;

constexpr void __cordl_internal_set_distance(float_t  value) ;

constexpr void __cordl_internal_set_front(bool  value) ;

constexpr void __cordl_internal_set_heightOffsetAngle(float_t  value) ;

constexpr void __cordl_internal_set_positionalSmoothness(float_t  value) ;

constexpr void __cordl_internal_set_rotationalSmoothness(float_t  value) ;

constexpr void __cordl_internal_set_shoulderOffset(float_t  value) ;

/// @brief Method .ctor, addr 0x9d15504, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtThirdPersonCameraBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtThirdPersonCameraBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtThirdPersonCameraBehaviour(GtThirdPersonCameraBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtThirdPersonCameraBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtThirdPersonCameraBehaviour(GtThirdPersonCameraBehaviour const& ) = delete;

/// @brief Field DECAY offset 0xffffffff size 0x4
static constexpr float_t  DECAY{static_cast<float_t>(16.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29585};

/// @brief Field front, offset: 0x20, size: 0x1, def value: None
 bool  ___front;

/// @brief Field distance, offset: 0x24, size: 0x4, def value: None
 float_t  ___distance;

/// @brief Field heightOffsetAngle, offset: 0x28, size: 0x4, def value: None
 float_t  ___heightOffsetAngle;

/// @brief Field shoulderOffset, offset: 0x2c, size: 0x4, def value: None
 float_t  ___shoulderOffset;

/// @brief Field positionalSmoothness, offset: 0x30, size: 0x4, def value: None
 float_t  ___positionalSmoothness;

/// @brief Field rotationalSmoothness, offset: 0x34, size: 0x4, def value: None
 float_t  ___rotationalSmoothness;

/// @brief Field cameraCollisionMask, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___cameraCollisionMask;

/// @brief Field cameraRadius, offset: 0x3c, size: 0x4, def value: None
 float_t  ___cameraRadius;

/// @brief Field _positionFilter, offset: 0x40, size: 0x8, def value: None
 ::Liv::Lck::Smoothing::KalmanFilterVector3*  ____positionFilter;

/// @brief Field _rotationFilter, offset: 0x48, size: 0x8, def value: None
 ::Liv::Lck::Smoothing::KalmanFilterQuaternion*  ____rotationFilter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GtThirdPersonCameraBehaviour, ___front) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GtThirdPersonCameraBehaviour, ___distance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GtThirdPersonCameraBehaviour, ___heightOffsetAngle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GtThirdPersonCameraBehaviour, ___shoulderOffset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GtThirdPersonCameraBehaviour, ___positionalSmoothness) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GtThirdPersonCameraBehaviour, ___rotationalSmoothness) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GtThirdPersonCameraBehaviour, ___cameraCollisionMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GtThirdPersonCameraBehaviour, ___cameraRadius) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GtThirdPersonCameraBehaviour, ____positionFilter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GtThirdPersonCameraBehaviour, ____rotationFilter) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GtThirdPersonCameraBehaviour) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
