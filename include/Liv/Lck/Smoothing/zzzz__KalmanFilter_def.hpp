#pragma once
// IWYU pragma private; include "Liv/Lck/Smoothing/KalmanFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(KalmanFilter)
// Forward declare root types
namespace Liv::Lck::Smoothing {
class KalmanFilter;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Smoothing::KalmanFilter*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Smoothing::KalmanFilter*, "Liv.Lck.Smoothing", "KalmanFilter");
// Dependencies System.Object
namespace Liv::Lck::Smoothing {
// Is value type: false
// CS Name: Liv.Lck.Smoothing.KalmanFilter
class CORDL_TYPE KalmanFilter : public ::System::Object {
public:
// Declarations
/// @brief Field _estimationErrorCovariance, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__estimationErrorCovariance, put=__cordl_internal_set__estimationErrorCovariance)) float_t  _estimationErrorCovariance;

/// @brief Field _filteredValue, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__filteredValue, put=__cordl_internal_set__filteredValue)) float_t  _filteredValue;

/// @brief Field _kalmanGain, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__kalmanGain, put=__cordl_internal_set__kalmanGain)) float_t  _kalmanGain;

static inline ::Liv::Lck::Smoothing::KalmanFilter* New_ctor(float_t  initialEstimate, float_t  initialCovariance) ;

/// @brief Method Update, addr 0x9d3d82c, size 0x68, virtual false, abstract: false, final false
inline float_t Update(float_t  measurement, float_t  deltaTime, float_t  smoothing) ;

constexpr float_t const& __cordl_internal_get__estimationErrorCovariance() const;

constexpr float_t& __cordl_internal_get__estimationErrorCovariance() ;

constexpr float_t const& __cordl_internal_get__filteredValue() const;

constexpr float_t& __cordl_internal_get__filteredValue() ;

constexpr float_t const& __cordl_internal_get__kalmanGain() const;

constexpr float_t& __cordl_internal_get__kalmanGain() ;

constexpr void __cordl_internal_set__estimationErrorCovariance(float_t  value) ;

constexpr void __cordl_internal_set__filteredValue(float_t  value) ;

constexpr void __cordl_internal_set__kalmanGain(float_t  value) ;

/// @brief Method .ctor, addr 0x9d3d800, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(float_t  initialEstimate, float_t  initialCovariance) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KalmanFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KalmanFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KalmanFilter(KalmanFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KalmanFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KalmanFilter(KalmanFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24844};

/// @brief Field _estimationErrorCovariance, offset: 0x10, size: 0x4, def value: None
 float_t  ____estimationErrorCovariance;

/// @brief Field _filteredValue, offset: 0x14, size: 0x4, def value: None
 float_t  ____filteredValue;

/// @brief Field _kalmanGain, offset: 0x18, size: 0x4, def value: None
 float_t  ____kalmanGain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Smoothing::KalmanFilter, ____estimationErrorCovariance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::KalmanFilter, ____filteredValue) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::KalmanFilter, ____kalmanGain) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Smoothing::KalmanFilter) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Smoothing
