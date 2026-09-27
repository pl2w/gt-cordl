#pragma once
// IWYU pragma private; include "Unity/Cinemachine/SplineAutoDolly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineAutoDolly)
namespace Unity::Cinemachine {
class SplineAutoDolly_FixedSpeed;
}
namespace Unity::Cinemachine {
class SplineAutoDolly_ISplineAutoDolly;
}
namespace Unity::Cinemachine {
class SplineAutoDolly_NearestPointToTarget;
}
namespace UnityEngine::Splines {
struct PathIndexUnit;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Unity::Cinemachine {
class SplineAutoDolly_FixedSpeed;
}
namespace Unity::Cinemachine {
class SplineAutoDolly_ISplineAutoDolly;
}
namespace Unity::Cinemachine {
class SplineAutoDolly_NearestPointToTarget;
}
namespace Unity::Cinemachine {
struct SplineAutoDolly;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::SplineAutoDolly_FixedSpeed*);
MARK_REF_T(::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*);
MARK_REF_T(::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget*);
MARK_VAL_T(::Unity::Cinemachine::SplineAutoDolly);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::SplineAutoDolly_FixedSpeed*, "Unity.Cinemachine", "SplineAutoDolly/FixedSpeed");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*, "Unity.Cinemachine", "SplineAutoDolly/ISplineAutoDolly");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget*, "Unity.Cinemachine", "SplineAutoDolly/NearestPointToTarget");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::SplineAutoDolly, "Unity.Cinemachine", "SplineAutoDolly");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.SplineAutoDolly
struct CORDL_TYPE SplineAutoDolly {
public:
// Declarations
using FixedSpeed = ::Unity::Cinemachine::SplineAutoDolly_FixedSpeed;

using ISplineAutoDolly = ::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly;

using NearestPointToTarget = ::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget;

// Ctor Parameters []
// @brief default ctor
constexpr SplineAutoDolly() ;

// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Method", ty: "::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*", modifiers: "", def_value: None, comment: None }]
constexpr SplineAutoDolly(bool  Enabled, ::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*  Method) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22363};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Tooltip("If set, will enable the selected automatic dolly along the spline")]
/// @brief Field Enabled, offset: 0x0, size: 0x1, def value: None
 bool  Enabled;

/// [SerializeReference]
/// @brief Field Method, offset: 0x8, size: 0x8, def value: None
 ::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*  Method;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::SplineAutoDolly, Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::SplineAutoDolly, Method) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::SplineAutoDolly) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.SplineAutoDolly/NearestPointToTarget
class CORDL_TYPE SplineAutoDolly_NearestPointToTarget : public ::System::Object {
public:
// Declarations
/// @brief Field PositionOffset, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_PositionOffset, put=__cordl_internal_set_PositionOffset)) float_t  PositionOffset;

/// @brief Field SearchIteration, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_SearchIteration, put=__cordl_internal_set_SearchIteration)) int32_t  SearchIteration;

/// @brief Field SearchResolution, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_SearchResolution, put=__cordl_internal_set_SearchResolution)) int32_t  SearchResolution;

 __declspec(property(get=Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_get_RequiresTrackingTarget)) bool  Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_RequiresTrackingTarget;

/// @brief Convert operator to "::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly"
constexpr operator  ::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*() noexcept;

static inline ::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget* New_ctor() ;

/// @brief Method Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.GetSplinePosition, addr 0xaebb930, size 0x180, virtual true, abstract: false, final true
inline float_t Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_GetSplinePosition(::UnityEngine::MonoBehaviour*  sender, ::UnityEngine::Transform*  target, ::UnityEngine::Splines::SplineContainer*  spline, float_t  currentPosition, ::UnityEngine::Splines::PathIndexUnit  positionUnits, float_t  deltaTime) ;

/// @brief Method Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.Reset, addr 0xaebb924, size 0x4, virtual true, abstract: false, final true
inline void Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_Reset() ;

/// @brief Method Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.Validate, addr 0xaebb910, size 0x14, virtual true, abstract: false, final true
inline void Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_Validate() ;

/// @brief Method Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.get_RequiresTrackingTarget, addr 0xaebb928, size 0x8, virtual true, abstract: false, final true
inline bool Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_get_RequiresTrackingTarget() ;

constexpr float_t const& __cordl_internal_get_PositionOffset() const;

constexpr float_t& __cordl_internal_get_PositionOffset() ;

constexpr int32_t const& __cordl_internal_get_SearchIteration() const;

constexpr int32_t& __cordl_internal_get_SearchIteration() ;

constexpr int32_t const& __cordl_internal_get_SearchResolution() const;

constexpr int32_t& __cordl_internal_get_SearchResolution() ;

constexpr void __cordl_internal_set_PositionOffset(float_t  value) ;

constexpr void __cordl_internal_set_SearchIteration(int32_t  value) ;

constexpr void __cordl_internal_set_SearchResolution(int32_t  value) ;

/// @brief Method .ctor, addr 0xaebbab0, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly"
constexpr ::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly* i___Unity__Cinemachine__SplineAutoDolly_ISplineAutoDolly() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineAutoDolly_NearestPointToTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineAutoDolly_NearestPointToTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineAutoDolly_NearestPointToTarget(SplineAutoDolly_NearestPointToTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineAutoDolly_NearestPointToTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineAutoDolly_NearestPointToTarget(SplineAutoDolly_NearestPointToTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22362};

/// [Tooltip("Offset, in current position units, from the closest point on the spline to the follow target")]
/// @brief Field PositionOffset, offset: 0x10, size: 0x4, def value: None
 float_t  ___PositionOffset;

/// [Tooltip("Affects how many segments to split a spline into when calculating the nearest point.  Higher values mean smaller and more segments, which increases accuracy at the cost of processing time.  In most cases, the default value (4) is appropriate. Use with SearchIteration to fine-tune point accuracy.")]
/// @brief Field SearchResolution, offset: 0x14, size: 0x4, def value: None
 int32_t  ___SearchResolution;

/// [Tooltip("The nearest point is calculated by finding the nearest point on the entire length of the spline using SearchResolution to divide into equally spaced line segments. Successive iterations will then subdivide further the nearest segment, producing more accurate results. In most cases, the default value (2) is sufficient.")]
/// @brief Field SearchIteration, offset: 0x18, size: 0x4, def value: None
 int32_t  ___SearchIteration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget, ___PositionOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget, ___SearchResolution) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget, ___SearchIteration) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::SplineAutoDolly_NearestPointToTarget) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.SplineAutoDolly/FixedSpeed
class CORDL_TYPE SplineAutoDolly_FixedSpeed : public ::System::Object {
public:
// Declarations
/// @brief Field Speed, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Speed, put=__cordl_internal_set_Speed)) float_t  Speed;

 __declspec(property(get=Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_get_RequiresTrackingTarget)) bool  Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_RequiresTrackingTarget;

/// @brief Convert operator to "::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly"
constexpr operator  ::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly*() noexcept;

static inline ::Unity::Cinemachine::SplineAutoDolly_FixedSpeed* New_ctor() ;

/// @brief Method Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.GetSplinePosition, addr 0xaebb6ec, size 0x9c, virtual true, abstract: false, final true
inline float_t Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_GetSplinePosition(::UnityEngine::MonoBehaviour*  sender, ::UnityEngine::Transform*  target, ::UnityEngine::Splines::SplineContainer*  spline, float_t  currentPosition, ::UnityEngine::Splines::PathIndexUnit  positionUnits, float_t  deltaTime) ;

/// @brief Method Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.Reset, addr 0xaebb6e0, size 0x4, virtual true, abstract: false, final true
inline void Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_Reset() ;

/// @brief Method Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.Validate, addr 0xaebb6dc, size 0x4, virtual true, abstract: false, final true
inline void Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_Validate() ;

/// @brief Method Unity.Cinemachine.SplineAutoDolly.ISplineAutoDolly.get_RequiresTrackingTarget, addr 0xaebb6e4, size 0x8, virtual true, abstract: false, final true
inline bool Unity_Cinemachine_SplineAutoDolly_ISplineAutoDolly_get_RequiresTrackingTarget() ;

constexpr float_t const& __cordl_internal_get_Speed() const;

constexpr float_t& __cordl_internal_get_Speed() ;

constexpr void __cordl_internal_set_Speed(float_t  value) ;

/// @brief Method .ctor, addr 0xaebb908, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly"
constexpr ::Unity::Cinemachine::SplineAutoDolly_ISplineAutoDolly* i___Unity__Cinemachine__SplineAutoDolly_ISplineAutoDolly() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineAutoDolly_FixedSpeed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineAutoDolly_FixedSpeed", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineAutoDolly_FixedSpeed(SplineAutoDolly_FixedSpeed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineAutoDolly_FixedSpeed", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineAutoDolly_FixedSpeed(SplineAutoDolly_FixedSpeed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22361};

/// [Tooltip("Speed of travel, in current position units per second.")]
/// @brief Field Speed, offset: 0x10, size: 0x4, def value: None
 float_t  ___Speed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::SplineAutoDolly_FixedSpeed, ___Speed) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::SplineAutoDolly_FixedSpeed) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.SplineAutoDolly/ISplineAutoDolly
class CORDL_TYPE SplineAutoDolly_ISplineAutoDolly {
public:
// Declarations
 __declspec(property(get=get_RequiresTrackingTarget)) bool  RequiresTrackingTarget;

/// @brief Method GetSplinePosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t GetSplinePosition(::UnityEngine::MonoBehaviour*  sender, ::UnityEngine::Transform*  target, ::UnityEngine::Splines::SplineContainer*  spline, float_t  currentPosition, ::UnityEngine::Splines::PathIndexUnit  positionUnits, float_t  deltaTime) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Reset() ;

/// @brief Method Validate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Validate() ;

/// @brief Method get_RequiresTrackingTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_RequiresTrackingTarget() ;

// Ctor Parameters [CppParam { name: "", ty: "SplineAutoDolly_ISplineAutoDolly", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineAutoDolly_ISplineAutoDolly(SplineAutoDolly_ISplineAutoDolly const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22360};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
