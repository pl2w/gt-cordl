#pragma once
// IWYU pragma private; include "GlobalNamespace/LongScarfSim.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LongScarfSim)
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
// Forward declare root types
namespace GlobalNamespace {
class LongScarfSim;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LongScarfSim*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LongScarfSim*, "", "LongScarfSim");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: LongScarfSim
class CORDL_TYPE LongScarfSim : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field baseLocalRotations, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseLocalRotations, put=__cordl_internal_set_baseLocalRotations)) ::ArrayW<::UnityEngine::Quaternion>  baseLocalRotations;

/// @brief Field blendAmountPerSecond, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_blendAmountPerSecond, put=__cordl_internal_set_blendAmountPerSecond)) float_t  blendAmountPerSecond;

/// @brief Field centerOfMassLength, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_centerOfMassLength, put=__cordl_internal_set_centerOfMassLength)) float_t  centerOfMassLength;

/// @brief Field clampToPlane, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_clampToPlane, put=__cordl_internal_set_clampToPlane)) ::UnityEngine::Vector3  clampToPlane;

/// @brief Field currentBlend, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentBlend, put=__cordl_internal_set_currentBlend)) float_t  currentBlend;

/// @brief Field drag, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_drag, put=__cordl_internal_set_drag)) float_t  drag;

/// @brief Field gameObjects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjects, put=__cordl_internal_set_gameObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  gameObjects;

/// @brief Field gravityStrength, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityStrength, put=__cordl_internal_set_gravityStrength)) float_t  gravityStrength;

/// @brief Field lastCenterPos, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastCenterPos, put=__cordl_internal_set_lastCenterPos)) ::UnityEngine::Vector3  lastCenterPos;

/// @brief Field speedThreshold, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_speedThreshold, put=__cordl_internal_set_speedThreshold)) float_t  speedThreshold;

/// @brief Field velocity, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Field velocityEstimator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimator, put=__cordl_internal_set_velocityEstimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  velocityEstimator;

/// @brief Method LateUpdate, addr 0x5655e3c, size 0x4b8, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::LongScarfSim* New_ctor() ;

/// @brief Method Start, addr 0x5655c50, size 0x1ec, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::UnityEngine::Quaternion> const& __cordl_internal_get_baseLocalRotations() const;

constexpr ::ArrayW<::UnityEngine::Quaternion>& __cordl_internal_get_baseLocalRotations() ;

constexpr float_t const& __cordl_internal_get_blendAmountPerSecond() const;

constexpr float_t& __cordl_internal_get_blendAmountPerSecond() ;

constexpr float_t const& __cordl_internal_get_centerOfMassLength() const;

constexpr float_t& __cordl_internal_get_centerOfMassLength() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_clampToPlane() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_clampToPlane() ;

constexpr float_t const& __cordl_internal_get_currentBlend() const;

constexpr float_t& __cordl_internal_get_currentBlend() ;

constexpr float_t const& __cordl_internal_get_drag() const;

constexpr float_t& __cordl_internal_get_drag() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_gameObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_gameObjects() ;

constexpr float_t const& __cordl_internal_get_gravityStrength() const;

constexpr float_t& __cordl_internal_get_gravityStrength() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastCenterPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastCenterPos() ;

constexpr float_t const& __cordl_internal_get_speedThreshold() const;

constexpr float_t& __cordl_internal_get_speedThreshold() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_velocityEstimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_velocityEstimator() ;

constexpr void __cordl_internal_set_baseLocalRotations(::ArrayW<::UnityEngine::Quaternion>  value) ;

constexpr void __cordl_internal_set_blendAmountPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_centerOfMassLength(float_t  value) ;

constexpr void __cordl_internal_set_clampToPlane(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_currentBlend(float_t  value) ;

constexpr void __cordl_internal_set_drag(float_t  value) ;

constexpr void __cordl_internal_set_gameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_gravityStrength(float_t  value) ;

constexpr void __cordl_internal_set_lastCenterPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_speedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

/// @brief Method .ctor, addr 0x56562f4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LongScarfSim() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LongScarfSim", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LongScarfSim(LongScarfSim && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LongScarfSim", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LongScarfSim(LongScarfSim const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{746};

/// [SerializeField]
/// @brief Field gameObjects, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___gameObjects;

/// [SerializeField]
/// @brief Field speedThreshold, offset: 0x28, size: 0x4, def value: None
 float_t  ___speedThreshold;

/// [SerializeField]
/// @brief Field blendAmountPerSecond, offset: 0x2c, size: 0x4, def value: None
 float_t  ___blendAmountPerSecond;

/// @brief Field velocityEstimator, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___velocityEstimator;

/// @brief Field baseLocalRotations, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Quaternion>  ___baseLocalRotations;

/// @brief Field currentBlend, offset: 0x40, size: 0x4, def value: None
 float_t  ___currentBlend;

/// [SerializeField]
/// @brief Field centerOfMassLength, offset: 0x44, size: 0x4, def value: None
 float_t  ___centerOfMassLength;

/// [SerializeField]
/// @brief Field gravityStrength, offset: 0x48, size: 0x4, def value: None
 float_t  ___gravityStrength;

/// [SerializeField]
/// @brief Field drag, offset: 0x4c, size: 0x4, def value: None
 float_t  ___drag;

/// [SerializeField]
/// @brief Field clampToPlane, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___clampToPlane;

/// @brief Field lastCenterPos, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastCenterPos;

/// @brief Field velocity, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LongScarfSim, ___gameObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LongScarfSim, ___speedThreshold) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LongScarfSim, ___blendAmountPerSecond) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LongScarfSim, ___velocityEstimator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LongScarfSim, ___baseLocalRotations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LongScarfSim, ___currentBlend) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LongScarfSim, ___centerOfMassLength) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LongScarfSim, ___gravityStrength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LongScarfSim, ___drag) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LongScarfSim, ___clampToPlane) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LongScarfSim, ___lastCenterPos) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LongScarfSim, ___velocity) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LongScarfSim) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
