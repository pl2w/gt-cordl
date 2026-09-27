#pragma once
// IWYU pragma private; include "Oculus/Interaction/FollowTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FollowTarget)
namespace Oculus::Interaction {
class IMovement;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction {
class FollowTarget;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::FollowTarget*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::FollowTarget*, "Oculus.Interaction", "FollowTarget");
// Dependencies System.Object, UnityEngine.Pose
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.FollowTarget
class CORDL_TYPE FollowTarget : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Pose)) ::UnityEngine::Pose  Pose;

 __declspec(property(get=get_Stopped)) bool  Stopped;

/// @brief Field _localPose, offset 0x3c, size 0x1c 
 __declspec(property(get=__cordl_internal_get__localPose, put=__cordl_internal_set__localPose)) ::UnityEngine::Pose  _localPose;

/// @brief Field _localTarget, offset 0x20, size 0x1c 
 __declspec(property(get=__cordl_internal_get__localTarget, put=__cordl_internal_set__localTarget)) ::UnityEngine::Pose  _localTarget;

/// @brief Field _space, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__space, put=__cordl_internal_set__space)) ::UnityW<::UnityEngine::Transform>  _space;

/// @brief Field _speed, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__speed, put=__cordl_internal_set__speed)) float_t  _speed;

/// @brief Field _startTime, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime, put=__cordl_internal_set__startTime)) float_t  _startTime;

/// @brief Convert operator to "::Oculus::Interaction::IMovement"
constexpr operator  ::Oculus::Interaction::IMovement*() noexcept;

/// @brief Method MoveTo, addr 0xa473c94, size 0x50, virtual true, abstract: false, final true
inline void MoveTo(::UnityEngine::Pose  target) ;

static inline ::Oculus::Interaction::FollowTarget* New_ctor(float_t  speed, ::UnityEngine::Transform*  space) ;

/// @brief Method StopAndSetPose, addr 0xa473f08, size 0x30, virtual true, abstract: false, final true
inline void StopAndSetPose(::UnityEngine::Pose  source) ;

/// @brief Method Tick, addr 0xa473d1c, size 0x1ec, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method ToLocal, addr 0xa473b80, size 0x114, virtual false, abstract: false, final false
inline ::UnityEngine::Pose ToLocal(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method ToWorld, addr 0xa473a6c, size 0x10c, virtual false, abstract: false, final false
inline ::UnityEngine::Pose ToWorld(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method UpdateTarget, addr 0xa473ce4, size 0x38, virtual true, abstract: false, final true
inline void UpdateTarget(::UnityEngine::Pose  target) ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__localPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__localPose() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__localTarget() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__localTarget() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__space() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__space() ;

constexpr float_t const& __cordl_internal_get__speed() const;

constexpr float_t& __cordl_internal_get__speed() ;

constexpr float_t const& __cordl_internal_get__startTime() const;

constexpr float_t& __cordl_internal_get__startTime() ;

constexpr void __cordl_internal_set__localPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__localTarget(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__space(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__speed(float_t  value) ;

constexpr void __cordl_internal_set__startTime(float_t  value) ;

/// @brief Method .ctor, addr 0xa4739e8, size 0x40, virtual false, abstract: false, final false
inline void _ctor(float_t  speed, ::UnityEngine::Transform*  space) ;

/// @brief Method get_Pose, addr 0xa473a38, size 0x34, virtual true, abstract: false, final true
inline ::UnityEngine::Pose get_Pose() ;

/// @brief Method get_Stopped, addr 0xa473b78, size 0x8, virtual true, abstract: false, final true
inline bool get_Stopped() ;

/// @brief Convert to "::Oculus::Interaction::IMovement"
constexpr ::Oculus::Interaction::IMovement* i___Oculus__Interaction__IMovement() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FollowTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FollowTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FollowTarget(FollowTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FollowTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FollowTarget(FollowTarget const& ) = delete;

/// @brief Field ROTATION_SPEED_FACTOR offset 0xffffffff size 0x4
static constexpr float_t  ROTATION_SPEED_FACTOR{static_cast<float_t>(50.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15942};

/// @brief Field _speed, offset: 0x10, size: 0x4, def value: None
 float_t  ____speed;

/// @brief Field _space, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____space;

/// @brief Field _localTarget, offset: 0x20, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____localTarget;

/// @brief Field _localPose, offset: 0x3c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____localPose;

/// @brief Field _startTime, offset: 0x58, size: 0x4, def value: None
 float_t  ____startTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::FollowTarget, ____speed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::FollowTarget, ____space) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::FollowTarget, ____localTarget) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::FollowTarget, ____localPose) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::FollowTarget, ____startTime) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::FollowTarget) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Interaction
