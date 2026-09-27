#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/GorillaZipline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaZipline)
namespace GlobalNamespace {
class BezierSpline;
}
namespace GorillaLocomotion::Climbing {
class GorillaClimbableRef;
}
namespace GorillaLocomotion::Climbing {
class GorillaClimbable;
}
namespace GorillaLocomotion::Climbing {
class GorillaHandClimber;
}
namespace GorillaLocomotion::Gameplay {
class GorillaZiplineSettings;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
class GorillaZipline;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Gameplay::GorillaZipline*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::GorillaZipline*, "GorillaLocomotion.Gameplay", "GorillaZipline");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaLocomotion::Gameplay {
// Is value type: false
// CS Name: GorillaLocomotion.Gameplay.GorillaZipline
class CORDL_TYPE GorillaZipline : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <currentSpeed>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentSpeed_k__BackingField, put=__cordl_internal_set__currentSpeed_k__BackingField)) float_t  _currentSpeed_k__BackingField;

/// @brief Field audioSlide, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSlide, put=__cordl_internal_set_audioSlide)) ::UnityW<::UnityEngine::AudioSource>  audioSlide;

/// @brief Field climbOffsetHelper, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_climbOffsetHelper, put=__cordl_internal_set_climbOffsetHelper)) ::UnityW<::UnityEngine::Transform>  climbOffsetHelper;

/// @brief Field currentClimber, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentClimber, put=__cordl_internal_set_currentClimber)) ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  currentClimber;

/// @brief Field currentInheritVelocityMulti, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentInheritVelocityMulti, put=__cordl_internal_set_currentInheritVelocityMulti)) float_t  currentInheritVelocityMulti;

 __declspec(property(get=get_currentSpeed, put=set_currentSpeed)) float_t  currentSpeed;

/// @brief Field currentT, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentT, put=__cordl_internal_set_currentT)) float_t  currentT;

/// @brief Field segmentDistance, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_segmentDistance, put=__cordl_internal_set_segmentDistance)) float_t  segmentDistance;

/// @brief Field segmentPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_segmentPrefab, put=__cordl_internal_set_segmentPrefab)) ::UnityW<::UnityEngine::GameObject>  segmentPrefab;

/// @brief Field segmentsRoot, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_segmentsRoot, put=__cordl_internal_set_segmentsRoot)) ::UnityW<::UnityEngine::Transform>  segmentsRoot;

/// @brief Field settings, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::UnityW<::GorillaLocomotion::Gameplay::GorillaZiplineSettings>  settings;

/// @brief Field slideHelper, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_slideHelper, put=__cordl_internal_set_slideHelper)) ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  slideHelper;

/// @brief Field spline, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_spline, put=__cordl_internal_set_spline)) ::UnityW<::GlobalNamespace::BezierSpline>  spline;

/// @brief Field ziplineDistance, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ziplineDistance, put=__cordl_internal_set_ziplineDistance)) float_t  ziplineDistance;

/// @brief Method FindSlideHelperSpot, addr 0x5ced4ac, size 0xf4, virtual false, abstract: false, final false
inline float_t FindSlideHelperSpot(::UnityEngine::Vector3  grabPoint) ;

/// @brief Method FindTFromDistance, addr 0x5ced364, size 0x148, virtual false, abstract: false, final false
inline void FindTFromDistance(::by_ref<float_t>  t, float_t  distance, int32_t  steps) ;

/// @brief Method GetCurrentDirection, addr 0x5ced77c, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetCurrentDirection() ;

static inline ::GorillaLocomotion::Gameplay::GorillaZipline* New_ctor() ;

/// @brief Method OnBeforeClimb, addr 0x5ced79c, size 0x30c, virtual true, abstract: false, final false
inline void OnBeforeClimb(::GorillaLocomotion::Climbing::GorillaHandClimber*  hand, ::GorillaLocomotion::Climbing::GorillaClimbableRef*  climbRef) ;

/// @brief Method OnDestroy, addr 0x5ced6a8, size 0xd4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x5ced5a0, size 0x108, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Stop, addr 0x5cedf7c, size 0x70, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Update, addr 0x5cedaa8, size 0x4a8, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__currentSpeed_k__BackingField() const;

constexpr float_t& __cordl_internal_get__currentSpeed_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSlide() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSlide() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_climbOffsetHelper() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_climbOffsetHelper() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> const& __cordl_internal_get_currentClimber() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>& __cordl_internal_get_currentClimber() ;

constexpr float_t const& __cordl_internal_get_currentInheritVelocityMulti() const;

constexpr float_t& __cordl_internal_get_currentInheritVelocityMulti() ;

constexpr float_t const& __cordl_internal_get_currentT() const;

constexpr float_t& __cordl_internal_get_currentT() ;

constexpr float_t const& __cordl_internal_get_segmentDistance() const;

constexpr float_t& __cordl_internal_get_segmentDistance() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_segmentPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_segmentPrefab() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_segmentsRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_segmentsRoot() ;

constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaZiplineSettings> const& __cordl_internal_get_settings() const;

constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaZiplineSettings>& __cordl_internal_get_settings() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> const& __cordl_internal_get_slideHelper() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>& __cordl_internal_get_slideHelper() ;

constexpr ::UnityW<::GlobalNamespace::BezierSpline> const& __cordl_internal_get_spline() const;

constexpr ::UnityW<::GlobalNamespace::BezierSpline>& __cordl_internal_get_spline() ;

constexpr float_t const& __cordl_internal_get_ziplineDistance() const;

constexpr float_t& __cordl_internal_get_ziplineDistance() ;

constexpr void __cordl_internal_set__currentSpeed_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_audioSlide(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_climbOffsetHelper(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_currentClimber(::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  value) ;

constexpr void __cordl_internal_set_currentInheritVelocityMulti(float_t  value) ;

constexpr void __cordl_internal_set_currentT(float_t  value) ;

constexpr void __cordl_internal_set_segmentDistance(float_t  value) ;

constexpr void __cordl_internal_set_segmentPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_segmentsRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_settings(::UnityW<::GorillaLocomotion::Gameplay::GorillaZiplineSettings>  value) ;

constexpr void __cordl_internal_set_slideHelper(::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  value) ;

constexpr void __cordl_internal_set_spline(::UnityW<::GlobalNamespace::BezierSpline>  value) ;

constexpr void __cordl_internal_set_ziplineDistance(float_t  value) ;

/// @brief Method .ctor, addr 0x5cedfec, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_currentSpeed, addr 0x5ced354, size 0x8, virtual false, abstract: false, final false
inline float_t get_currentSpeed() ;

/// [CompilerGenerated]
/// @brief Method set_currentSpeed, addr 0x5ced35c, size 0x8, virtual false, abstract: false, final false
inline void set_currentSpeed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaZipline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaZipline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaZipline(GorillaZipline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaZipline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaZipline(GorillaZipline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4531};

/// @brief Field inheritVelocityRechargeRate offset 0xffffffff size 0x4
static constexpr float_t  inheritVelocityRechargeRate{static_cast<float_t>(0.2f)};

/// @brief Field inheritVelocityValueOnRelease offset 0xffffffff size 0x4
static constexpr float_t  inheritVelocityValueOnRelease{static_cast<float_t>(0.55f)};

/// [SerializeField]
/// @brief Field segmentsRoot, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___segmentsRoot;

/// [SerializeField]
/// @brief Field segmentPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___segmentPrefab;

/// [SerializeField]
/// @brief Field slideHelper, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  ___slideHelper;

/// [SerializeField]
/// @brief Field audioSlide, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSlide;

/// @brief Field spline, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BezierSpline>  ___spline;

/// [SerializeField]
/// @brief Field climbOffsetHelper, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___climbOffsetHelper;

/// [SerializeField]
/// @brief Field settings, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Gameplay::GorillaZiplineSettings>  ___settings;

/// [CompilerGenerated]
/// @brief Field <currentSpeed>k__BackingField, offset: 0x58, size: 0x4, def value: None
 float_t  ____currentSpeed_k__BackingField;

/// [SerializeField]
/// @brief Field ziplineDistance, offset: 0x5c, size: 0x4, def value: None
 float_t  ___ziplineDistance;

/// [SerializeField]
/// @brief Field segmentDistance, offset: 0x60, size: 0x4, def value: None
 float_t  ___segmentDistance;

/// @brief Field currentClimber, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  ___currentClimber;

/// @brief Field currentT, offset: 0x70, size: 0x4, def value: None
 float_t  ___currentT;

/// @brief Field currentInheritVelocityMulti, offset: 0x74, size: 0x4, def value: None
 float_t  ___currentInheritVelocityMulti;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZipline, ___segmentsRoot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZipline, ___segmentPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZipline, ___slideHelper) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZipline, ___audioSlide) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZipline, ___spline) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZipline, ___climbOffsetHelper) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZipline, ___settings) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZipline, ____currentSpeed_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZipline, ___ziplineDistance) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZipline, ___segmentDistance) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZipline, ___currentClimber) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZipline, ___currentT) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZipline, ___currentInheritVelocityMulti) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::GorillaZipline) == 0x78, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay
