#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/SplineFollow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Splines/zzzz__NativeSpline_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineFollow)
namespace GlobalNamespace {
struct SplineFollow_SplineNode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
class SplineFollow;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Gameplay::SplineFollow*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::SplineFollow*, "GorillaLocomotion.Gameplay", "SplineFollow");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Splines.NativeSpline
namespace GorillaLocomotion::Gameplay {
// Is value type: false
// CS Name: GorillaLocomotion.Gameplay.SplineFollow
class CORDL_TYPE SplineFollow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SplineNode = ::GlobalNamespace::SplineFollow_SplineNode;

/// @brief Field _approximate, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__approximate, put=__cordl_internal_set__approximate)) bool  _approximate;

/// @brief Field _approximationNodes, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__approximationNodes, put=__cordl_internal_set__approximationNodes)) ::System::Collections::Generic::List_1<::GlobalNamespace::SplineFollow_SplineNode>*  _approximationNodes;

/// @brief Field _approximationResolution, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__approximationResolution, put=__cordl_internal_set__approximationResolution)) int32_t  _approximationResolution;

/// @brief Field _duration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__duration, put=__cordl_internal_set__duration)) float_t  _duration;

/// @brief Field _nativeSpline, offset 0x60, size 0x48 
 __declspec(property(get=__cordl_internal_get__nativeSpline, put=__cordl_internal_set__nativeSpline)) ::UnityEngine::Splines::NativeSpline  _nativeSpline;

/// @brief Field _progress, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__progress, put=__cordl_internal_set__progress)) float_t  _progress;

/// @brief Field _progressPerFixedUpdate, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__progressPerFixedUpdate, put=__cordl_internal_set__progressPerFixedUpdate)) float_t  _progressPerFixedUpdate;

/// @brief Field _rotationFix, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__rotationFix, put=__cordl_internal_set__rotationFix)) ::UnityEngine::Quaternion  _rotationFix;

/// @brief Field _secondsToCycles, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__secondsToCycles, put=__cordl_internal_set__secondsToCycles)) double_t  _secondsToCycles;

/// @brief Field _smoothRotationTrackingRate, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__smoothRotationTrackingRate, put=__cordl_internal_set__smoothRotationTrackingRate)) float_t  _smoothRotationTrackingRate;

/// @brief Field _smoothRotationTrackingRateExp, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__smoothRotationTrackingRateExp, put=__cordl_internal_set__smoothRotationTrackingRateExp)) float_t  _smoothRotationTrackingRateExp;

/// @brief Field _splineProgressOffset, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__splineProgressOffset, put=__cordl_internal_set__splineProgressOffset)) float_t  _splineProgressOffset;

/// @brief Field _unitySpline, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__unitySpline, put=__cordl_internal_set__unitySpline)) ::UnityW<::UnityEngine::Splines::SplineContainer>  _unitySpline;

/// @brief Method CalculateApproximationNodes, addr 0x5cf0bac, size 0x28c, virtual false, abstract: false, final false
inline void CalculateApproximationNodes() ;

/// @brief Method EvaluateSpline, addr 0x5cf10bc, size 0x230, virtual false, abstract: false, final false
inline ::GlobalNamespace::SplineFollow_SplineNode EvaluateSpline(float_t  t) ;

/// @brief Method FixedUpdate, addr 0x5cf0e5c, size 0x10, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method FollowSpline, addr 0x5cf0e6c, size 0x240, virtual false, abstract: false, final false
inline void FollowSpline() ;

static inline ::GorillaLocomotion::Gameplay::SplineFollow* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5cf1344, size 0xc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x5cf09f8, size 0x1b4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5cf10ac, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__approximate() const;

constexpr bool& __cordl_internal_get__approximate() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineFollow_SplineNode>* const& __cordl_internal_get__approximationNodes() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SplineFollow_SplineNode>*& __cordl_internal_get__approximationNodes() ;

constexpr int32_t const& __cordl_internal_get__approximationResolution() const;

constexpr int32_t& __cordl_internal_get__approximationResolution() ;

constexpr float_t const& __cordl_internal_get__duration() const;

constexpr float_t& __cordl_internal_get__duration() ;

constexpr ::UnityEngine::Splines::NativeSpline const& __cordl_internal_get__nativeSpline() const;

constexpr ::UnityEngine::Splines::NativeSpline& __cordl_internal_get__nativeSpline() ;

constexpr float_t const& __cordl_internal_get__progress() const;

constexpr float_t& __cordl_internal_get__progress() ;

constexpr float_t const& __cordl_internal_get__progressPerFixedUpdate() const;

constexpr float_t& __cordl_internal_get__progressPerFixedUpdate() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__rotationFix() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__rotationFix() ;

constexpr double_t const& __cordl_internal_get__secondsToCycles() const;

constexpr double_t& __cordl_internal_get__secondsToCycles() ;

constexpr float_t const& __cordl_internal_get__smoothRotationTrackingRate() const;

constexpr float_t& __cordl_internal_get__smoothRotationTrackingRate() ;

constexpr float_t const& __cordl_internal_get__smoothRotationTrackingRateExp() const;

constexpr float_t& __cordl_internal_get__smoothRotationTrackingRateExp() ;

constexpr float_t const& __cordl_internal_get__splineProgressOffset() const;

constexpr float_t& __cordl_internal_get__splineProgressOffset() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get__unitySpline() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get__unitySpline() ;

constexpr void __cordl_internal_set__approximate(bool  value) ;

constexpr void __cordl_internal_set__approximationNodes(::System::Collections::Generic::List_1<::GlobalNamespace::SplineFollow_SplineNode>*  value) ;

constexpr void __cordl_internal_set__approximationResolution(int32_t  value) ;

constexpr void __cordl_internal_set__duration(float_t  value) ;

constexpr void __cordl_internal_set__nativeSpline(::UnityEngine::Splines::NativeSpline  value) ;

constexpr void __cordl_internal_set__progress(float_t  value) ;

constexpr void __cordl_internal_set__progressPerFixedUpdate(float_t  value) ;

constexpr void __cordl_internal_set__rotationFix(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__secondsToCycles(double_t  value) ;

constexpr void __cordl_internal_set__smoothRotationTrackingRate(float_t  value) ;

constexpr void __cordl_internal_set__smoothRotationTrackingRateExp(float_t  value) ;

constexpr void __cordl_internal_set__splineProgressOffset(float_t  value) ;

constexpr void __cordl_internal_set__unitySpline(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

/// @brief Method .ctor, addr 0x5cf1350, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineFollow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineFollow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineFollow(SplineFollow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineFollow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineFollow(SplineFollow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4539};

/// [SerializeField]
/// [Tooltip("If true, approximates the spline position. Only use when exact position does not matter.")]
/// @brief Field _approximate, offset: 0x20, size: 0x1, def value: None
 bool  ____approximate;

/// [SerializeField]
/// @brief Field _unitySpline, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ____unitySpline;

/// [SerializeField]
/// @brief Field _duration, offset: 0x30, size: 0x4, def value: None
 float_t  ____duration;

/// @brief Field _secondsToCycles, offset: 0x38, size: 0x8, def value: None
 double_t  ____secondsToCycles;

/// [SerializeField]
/// @brief Field _smoothRotationTrackingRate, offset: 0x40, size: 0x4, def value: None
 float_t  ____smoothRotationTrackingRate;

/// @brief Field _smoothRotationTrackingRateExp, offset: 0x44, size: 0x4, def value: None
 float_t  ____smoothRotationTrackingRateExp;

/// @brief Field _progressPerFixedUpdate, offset: 0x48, size: 0x4, def value: None
 float_t  ____progressPerFixedUpdate;

/// [SerializeField]
/// @brief Field _splineProgressOffset, offset: 0x4c, size: 0x4, def value: None
 float_t  ____splineProgressOffset;

/// [SerializeField]
/// @brief Field _rotationFix, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____rotationFix;

/// @brief Field _nativeSpline, offset: 0x60, size: 0x48, def value: None
 ::UnityEngine::Splines::NativeSpline  ____nativeSpline;

/// @brief Field _progress, offset: 0xa8, size: 0x4, def value: None
 float_t  ____progress;

/// [Header("Approximate Spline Parameters")]
/// [SerializeField]
/// [Range(4, 200)]
/// @brief Field _approximationResolution, offset: 0xac, size: 0x4, def value: None
 int32_t  ____approximationResolution;

/// @brief Field _approximationNodes, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SplineFollow_SplineNode>*  ____approximationNodes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::SplineFollow, ____approximate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::SplineFollow, ____unitySpline) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::SplineFollow, ____duration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::SplineFollow, ____secondsToCycles) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::SplineFollow, ____smoothRotationTrackingRate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::SplineFollow, ____smoothRotationTrackingRateExp) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::SplineFollow, ____progressPerFixedUpdate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::SplineFollow, ____splineProgressOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::SplineFollow, ____rotationFix) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::SplineFollow, ____nativeSpline) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::SplineFollow, ____progress) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::SplineFollow, ____approximationResolution) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::SplineFollow, ____approximationNodes) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::SplineFollow) == 0xb8, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay
