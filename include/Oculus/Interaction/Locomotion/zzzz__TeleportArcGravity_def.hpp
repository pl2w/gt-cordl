#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TeleportArcGravity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TeleportArcGravity)
namespace Oculus::Interaction {
class IPolyline;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class TeleportArcGravity;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::TeleportArcGravity*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::TeleportArcGravity*, "Oculus.Interaction.Locomotion", "TeleportArcGravity");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Vector3
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.TeleportArcGravity
class CORDL_TYPE TeleportArcGravity : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field GRAVITY, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_GRAVITY, put=setStaticF_GRAVITY)) ::UnityEngine::Vector3  GRAVITY;

/// @brief Field GROUND_MARGIN, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_GROUND_MARGIN, put=setStaticF_GROUND_MARGIN)) float_t  GROUND_MARGIN;

 __declspec(property(get=get_GravityModifier, put=set_GravityModifier)) float_t  GravityModifier;

 __declspec(property(get=get_PitchCurve, put=set_PitchCurve)) ::UnityEngine::AnimationCurve*  PitchCurve;

 __declspec(property(get=get_PointsCount, put=set_PointsCount)) int32_t  PointsCount;

 __declspec(property(get=get_RangeCurve, put=set_RangeCurve)) ::UnityEngine::AnimationCurve*  RangeCurve;

 __declspec(property(get=get_StabilizationMixCurve, put=set_StabilizationMixCurve)) ::UnityEngine::AnimationCurve*  StabilizationMixCurve;

/// @brief Field _arcPointsCount, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__arcPointsCount, put=__cordl_internal_set__arcPointsCount)) int32_t  _arcPointsCount;

/// @brief Field _gravityModifier, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__gravityModifier, put=__cordl_internal_set__gravityModifier)) float_t  _gravityModifier;

/// @brief Field _origin, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__origin, put=__cordl_internal_set__origin)) ::UnityW<::UnityEngine::Transform>  _origin;

/// @brief Field _pitchCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__pitchCurve, put=__cordl_internal_set__pitchCurve)) ::UnityEngine::AnimationCurve*  _pitchCurve;

/// @brief Field _pose, offset 0x50, size 0x1c 
 __declspec(property(get=__cordl_internal_get__pose, put=__cordl_internal_set__pose)) ::UnityEngine::Pose  _pose;

/// @brief Field _rangeCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rangeCurve, put=__cordl_internal_set__rangeCurve)) ::UnityEngine::AnimationCurve*  _rangeCurve;

/// @brief Field _speed, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__speed, put=__cordl_internal_set__speed)) float_t  _speed;

/// @brief Field _stabilizationMixCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__stabilizationMixCurve, put=__cordl_internal_set__stabilizationMixCurve)) ::UnityEngine::AnimationCurve*  _stabilizationMixCurve;

/// @brief Field _stabilizationPoint, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__stabilizationPoint, put=__cordl_internal_set__stabilizationPoint)) ::UnityW<::UnityEngine::Transform>  _stabilizationPoint;

/// @brief Field _started, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::IPolyline"
constexpr operator  ::Oculus::Interaction::IPolyline*() noexcept;

/// @brief Method CalculatePose, addr 0xa4cb904, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Pose CalculatePose() ;

/// @brief Method CalculateSpeed, addr 0xa4cb980, size 0xa8, virtual false, abstract: false, final false
inline float_t CalculateSpeed(::UnityEngine::Pose  pose) ;

/// @brief Method EvaluateGravityArc, addr 0xa4cb744, size 0x1c0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 EvaluateGravityArc(::UnityEngine::Pose  origin, float_t  speed, float_t  t) ;

/// @brief Method InjectAllTeleportArcGravity, addr 0xa4cbfc8, size 0x30, virtual false, abstract: false, final false
inline void InjectAllTeleportArcGravity(::UnityEngine::Transform*  origin, ::UnityEngine::Transform*  stabilizationPoint) ;

/// @brief Method InjectOrigin, addr 0xa4cbff8, size 0x8, virtual false, abstract: false, final false
inline void InjectOrigin(::UnityEngine::Transform*  origin) ;

/// @brief Method InjectStabilizationPoint, addr 0xa4cc000, size 0x8, virtual false, abstract: false, final false
inline void InjectStabilizationPoint(::UnityEngine::Transform*  stabilizationPoint) ;

static inline ::Oculus::Interaction::Locomotion::TeleportArcGravity* New_ctor() ;

/// @brief Method PointAtIndex, addr 0xa4cb6fc, size 0x48, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 PointAtIndex(int32_t  index) ;

/// @brief Method RemapPitch, addr 0xa4cbc28, size 0x3a0, virtual false, abstract: false, final false
inline void RemapPitch(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method StabilizeDirection, addr 0xa4cba28, size 0x200, virtual false, abstract: false, final false
inline void StabilizeDirection(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method Start, addr 0xa4cb61c, size 0x60, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa4cb6bc, size 0x40, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateArcParameters, addr 0xa4cb67c, size 0x40, virtual false, abstract: false, final false
inline void UpdateArcParameters() ;

constexpr int32_t const& __cordl_internal_get__arcPointsCount() const;

constexpr int32_t& __cordl_internal_get__arcPointsCount() ;

constexpr float_t const& __cordl_internal_get__gravityModifier() const;

constexpr float_t& __cordl_internal_get__gravityModifier() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__origin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__origin() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__pitchCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__pitchCurve() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__pose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__pose() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__rangeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__rangeCurve() ;

constexpr float_t const& __cordl_internal_get__speed() const;

constexpr float_t& __cordl_internal_get__speed() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__stabilizationMixCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__stabilizationMixCurve() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__stabilizationPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__stabilizationPoint() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__arcPointsCount(int32_t  value) ;

constexpr void __cordl_internal_set__gravityModifier(float_t  value) ;

constexpr void __cordl_internal_set__origin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__pitchCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__pose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__rangeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__speed(float_t  value) ;

constexpr void __cordl_internal_set__stabilizationMixCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__stabilizationPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4cc008, size 0x27c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Vector3 getStaticF_GRAVITY() ;

static inline float_t getStaticF_GROUND_MARGIN() ;

/// @brief Method get_GravityModifier, addr 0xa4cb5fc, size 0x8, virtual false, abstract: false, final false
inline float_t get_GravityModifier() ;

/// @brief Method get_PitchCurve, addr 0xa4cb5ec, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_PitchCurve() ;

/// @brief Method get_PointsCount, addr 0xa4cb60c, size 0x8, virtual true, abstract: false, final true
inline int32_t get_PointsCount() ;

/// @brief Method get_RangeCurve, addr 0xa4cb5cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_RangeCurve() ;

/// @brief Method get_StabilizationMixCurve, addr 0xa4cb5dc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_StabilizationMixCurve() ;

/// @brief Convert to "::Oculus::Interaction::IPolyline"
constexpr ::Oculus::Interaction::IPolyline* i___Oculus__Interaction__IPolyline() noexcept;

static inline void setStaticF_GRAVITY(::UnityEngine::Vector3  value) ;

static inline void setStaticF_GROUND_MARGIN(float_t  value) ;

/// @brief Method set_GravityModifier, addr 0xa4cb604, size 0x8, virtual false, abstract: false, final false
inline void set_GravityModifier(float_t  value) ;

/// @brief Method set_PitchCurve, addr 0xa4cb5f4, size 0x8, virtual false, abstract: false, final false
inline void set_PitchCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_PointsCount, addr 0xa4cb614, size 0x8, virtual false, abstract: false, final false
inline void set_PointsCount(int32_t  value) ;

/// @brief Method set_RangeCurve, addr 0xa4cb5d4, size 0x8, virtual false, abstract: false, final false
inline void set_RangeCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_StabilizationMixCurve, addr 0xa4cb5e4, size 0x8, virtual false, abstract: false, final false
inline void set_StabilizationMixCurve(::UnityEngine::AnimationCurve*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportArcGravity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportArcGravity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportArcGravity(TeleportArcGravity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportArcGravity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportArcGravity(TeleportArcGravity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16277};

/// [SerializeField]
/// [Tooltip("The transform from which the arc will be casted")]
/// @brief Field _origin, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____origin;

/// [SerializeField]
/// [Tooltip("A point behind the origin used to stabilize the aiming direction.")]
/// @brief Field _stabilizationPoint, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____stabilizationPoint;

/// [SerializeField]
/// [Tooltip("Increases the range of the arc based on the distance from the origin to the stabilization point.")]
/// @brief Field _rangeCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____rangeCurve;

/// [SerializeField]
/// [Tooltip("Mixes the direction of the origin with the stabilized direction based on the pitch.")]
/// @brief Field _stabilizationMixCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____stabilizationMixCurve;

/// [SerializeField]
/// [Tooltip("Alters the pitch of the origin based on the entry pitch")]
/// @brief Field _pitchCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____pitchCurve;

/// [SerializeField]
/// [Tooltip("Multiplier for the gravity force")]
/// @brief Field _gravityModifier, offset: 0x48, size: 0x4, def value: None
 float_t  ____gravityModifier;

/// [SerializeField]
/// [Min(2)]
/// @brief Field _arcPointsCount, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____arcPointsCount;

/// @brief Field _pose, offset: 0x50, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____pose;

/// @brief Field _speed, offset: 0x6c, size: 0x4, def value: None
 float_t  ____speed;

/// @brief Field _started, offset: 0x70, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportArcGravity, ____origin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportArcGravity, ____stabilizationPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportArcGravity, ____rangeCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportArcGravity, ____stabilizationMixCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportArcGravity, ____pitchCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportArcGravity, ____gravityModifier) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportArcGravity, ____arcPointsCount) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportArcGravity, ____pose) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportArcGravity, ____speed) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportArcGravity, ____started) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::TeleportArcGravity) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
