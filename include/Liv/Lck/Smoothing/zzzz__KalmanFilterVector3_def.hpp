#pragma once
// IWYU pragma private; include "Liv/Lck/Smoothing/KalmanFilterVector3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(KalmanFilterVector3)
namespace Liv::Lck::Smoothing {
class KalmanFilter;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Liv::Lck::Smoothing {
class KalmanFilterVector3;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Smoothing::KalmanFilterVector3*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Smoothing::KalmanFilterVector3*, "Liv.Lck.Smoothing", "KalmanFilterVector3");
// Dependencies System.Object
namespace Liv::Lck::Smoothing {
// Is value type: false
// CS Name: Liv.Lck.Smoothing.KalmanFilterVector3
class CORDL_TYPE KalmanFilterVector3 : public ::System::Object {
public:
// Declarations
/// @brief Field _filterX, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__filterX, put=__cordl_internal_set__filterX)) ::Liv::Lck::Smoothing::KalmanFilter*  _filterX;

/// @brief Field _filterY, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__filterY, put=__cordl_internal_set__filterY)) ::Liv::Lck::Smoothing::KalmanFilter*  _filterY;

/// @brief Field _filterZ, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__filterZ, put=__cordl_internal_set__filterZ)) ::Liv::Lck::Smoothing::KalmanFilter*  _filterZ;

static inline ::Liv::Lck::Smoothing::KalmanFilterVector3* New_ctor(::UnityEngine::Vector3  initialEstimate, float_t  initialCovariance) ;

/// @brief Method Update, addr 0x9d3da74, size 0xe8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 Update(::UnityEngine::Vector3  measurement, float_t  deltaTime, float_t  smoothing) ;

constexpr ::Liv::Lck::Smoothing::KalmanFilter* const& __cordl_internal_get__filterX() const;

constexpr ::Liv::Lck::Smoothing::KalmanFilter*& __cordl_internal_get__filterX() ;

constexpr ::Liv::Lck::Smoothing::KalmanFilter* const& __cordl_internal_get__filterY() const;

constexpr ::Liv::Lck::Smoothing::KalmanFilter*& __cordl_internal_get__filterY() ;

constexpr ::Liv::Lck::Smoothing::KalmanFilter* const& __cordl_internal_get__filterZ() const;

constexpr ::Liv::Lck::Smoothing::KalmanFilter*& __cordl_internal_get__filterZ() ;

constexpr void __cordl_internal_set__filterX(::Liv::Lck::Smoothing::KalmanFilter*  value) ;

constexpr void __cordl_internal_set__filterY(::Liv::Lck::Smoothing::KalmanFilter*  value) ;

constexpr void __cordl_internal_set__filterZ(::Liv::Lck::Smoothing::KalmanFilter*  value) ;

/// @brief Method .ctor, addr 0x9d3d994, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  initialEstimate, float_t  initialCovariance) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KalmanFilterVector3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KalmanFilterVector3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KalmanFilterVector3(KalmanFilterVector3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KalmanFilterVector3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KalmanFilterVector3(KalmanFilterVector3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24846};

/// @brief Field _filterX, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::Smoothing::KalmanFilter*  ____filterX;

/// @brief Field _filterY, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::Smoothing::KalmanFilter*  ____filterY;

/// @brief Field _filterZ, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::Smoothing::KalmanFilter*  ____filterZ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Smoothing::KalmanFilterVector3, ____filterX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::KalmanFilterVector3, ____filterY) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::KalmanFilterVector3, ____filterZ) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Smoothing::KalmanFilterVector3) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::Smoothing
