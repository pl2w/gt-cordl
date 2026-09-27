#pragma once
// IWYU pragma private; include "Unity/Cinemachine/SplineContainerExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SplineContainerExtensions)
namespace Unity::Cinemachine {
class CinemachineSplineRoll;
}
namespace UnityEngine::Splines {
class ISplineContainer;
}
namespace UnityEngine::Splines {
class ISpline;
}
namespace UnityEngine::Splines {
struct PathIndexUnit;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class SplineContainerExtensions;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::SplineContainerExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::SplineContainerExtensions*, "Unity.Cinemachine", "SplineContainerExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.SplineContainerExtensions
class CORDL_TYPE SplineContainerExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method EvaluateSplinePosition, addr 0xaebc104, size 0x1f4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 EvaluateSplinePosition(::UnityEngine::Splines::ISpline*  spline, ::UnityEngine::Transform*  transform, float_t  tNormalized) ;

/// [Extension]
/// @brief Method EvaluateSplineWithRoll, addr 0xaebbf3c, size 0x1c8, virtual false, abstract: false, final false
static inline bool EvaluateSplineWithRoll(::UnityEngine::Splines::ISpline*  spline, ::UnityEngine::Transform*  transform, float_t  tNormalized, ::Unity::Cinemachine::CinemachineSplineRoll*  roll, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// [Extension]
/// @brief Method GetMaxPosition, addr 0xaebc2f8, size 0x1ac, virtual false, abstract: false, final false
static inline float_t GetMaxPosition(::UnityEngine::Splines::ISpline*  spline, ::UnityEngine::Splines::PathIndexUnit  unit) ;

/// [Extension]
/// @brief Method IsValid, addr 0xaebb788, size 0x180, virtual false, abstract: false, final false
static inline bool IsValid(::UnityEngine::Splines::ISplineContainer*  spline) ;

/// [Extension]
/// @brief Method LocalEvaluateSplineWithRoll, addr 0xaebbac4, size 0x440, virtual false, abstract: false, final false
static inline bool LocalEvaluateSplineWithRoll(::UnityEngine::Splines::ISpline*  spline, float_t  tNormalized, ::Unity::Cinemachine::CinemachineSplineRoll*  roll, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// [Extension]
/// @brief Method StandardizePosition, addr 0xaebc4a4, size 0x120, virtual false, abstract: false, final false
static inline float_t StandardizePosition(::UnityEngine::Splines::ISpline*  spline, float_t  t, ::UnityEngine::Splines::PathIndexUnit  unit, ::by_ref<float_t>  maxPos) ;

/// [CompilerGenerated]
/// @brief Method <LocalEvaluateSplineWithRoll>g__RollAroundForward|1_0, addr 0xaebbf04, size 0x38, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion _LocalEvaluateSplineWithRoll_g__RollAroundForward_1_0(float_t  angle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineContainerExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineContainerExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineContainerExtensions(SplineContainerExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineContainerExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineContainerExtensions(SplineContainerExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22364};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::SplineContainerExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
