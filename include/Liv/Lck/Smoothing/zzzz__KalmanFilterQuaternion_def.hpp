#pragma once
// IWYU pragma private; include "Liv/Lck/Smoothing/KalmanFilterQuaternion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(KalmanFilterQuaternion)
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace Liv::Lck::Smoothing {
class KalmanFilterQuaternion;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Smoothing::KalmanFilterQuaternion*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Smoothing::KalmanFilterQuaternion*, "Liv.Lck.Smoothing", "KalmanFilterQuaternion");
// Dependencies System.Object, UnityEngine.Quaternion
namespace Liv::Lck::Smoothing {
// Is value type: false
// CS Name: Liv.Lck.Smoothing.KalmanFilterQuaternion
class CORDL_TYPE KalmanFilterQuaternion : public ::System::Object {
public:
// Declarations
/// @brief Field _estimationErrorCovariance, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__estimationErrorCovariance, put=__cordl_internal_set__estimationErrorCovariance)) float_t  _estimationErrorCovariance;

/// @brief Field _filteredValue, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__filteredValue, put=__cordl_internal_set__filteredValue)) ::UnityEngine::Quaternion  _filteredValue;

/// @brief Field _kalmanGain, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__kalmanGain, put=__cordl_internal_set__kalmanGain)) float_t  _kalmanGain;

static inline ::Liv::Lck::Smoothing::KalmanFilterQuaternion* New_ctor(::UnityEngine::Quaternion  initialEstimate, float_t  initialCovariance) ;

/// @brief Method Update, addr 0x9d3d8e4, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion Update(::UnityEngine::Quaternion  measurement, float_t  deltaTime, float_t  smoothing) ;

constexpr float_t const& __cordl_internal_get__estimationErrorCovariance() const;

constexpr float_t& __cordl_internal_get__estimationErrorCovariance() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__filteredValue() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__filteredValue() ;

constexpr float_t const& __cordl_internal_get__kalmanGain() const;

constexpr float_t& __cordl_internal_get__kalmanGain() ;

constexpr void __cordl_internal_set__estimationErrorCovariance(float_t  value) ;

constexpr void __cordl_internal_set__filteredValue(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__kalmanGain(float_t  value) ;

/// @brief Method .ctor, addr 0x9d3d894, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Quaternion  initialEstimate, float_t  initialCovariance) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KalmanFilterQuaternion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KalmanFilterQuaternion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KalmanFilterQuaternion(KalmanFilterQuaternion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KalmanFilterQuaternion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KalmanFilterQuaternion(KalmanFilterQuaternion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24845};

/// @brief Field _estimationErrorCovariance, offset: 0x10, size: 0x4, def value: None
 float_t  ____estimationErrorCovariance;

/// @brief Field _kalmanGain, offset: 0x14, size: 0x4, def value: None
 float_t  ____kalmanGain;

/// @brief Field _filteredValue, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____filteredValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Smoothing::KalmanFilterQuaternion, ____estimationErrorCovariance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::KalmanFilterQuaternion, ____kalmanGain) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::KalmanFilterQuaternion, ____filteredValue) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Smoothing::KalmanFilterQuaternion) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::Smoothing
