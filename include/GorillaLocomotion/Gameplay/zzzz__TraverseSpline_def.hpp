#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/TraverseSpline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "GlobalNamespace/zzzz__SplineWalkerMode_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TraverseSpline)
namespace GlobalNamespace {
class BezierSpline;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
class TraverseSpline;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Gameplay::TraverseSpline*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::TraverseSpline*, "GorillaLocomotion.Gameplay", "TraverseSpline");
// [NetworkBehaviourWeaved(1)]
// Dependencies NetworkComponent, SplineWalkerMode
namespace GorillaLocomotion::Gameplay {
// Is value type: false
// CS Name: GorillaLocomotion.Gameplay.TraverseSpline
class CORDL_TYPE TraverseSpline : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
/// [Networked]
/// @brief [NetworkedWeaved(0, 1)]
 __declspec(property(get=get_Data, put=set_Data)) float_t  Data;

/// @brief Field SplineProgressOffet, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_SplineProgressOffet, put=__cordl_internal_set_SplineProgressOffet)) float_t  SplineProgressOffet;

/// @brief Field _Data, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) float_t  _Data;

/// @brief Field acceleration, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_acceleration, put=__cordl_internal_set_acceleration)) float_t  acceleration;

/// @brief Field constantVelocity, offset 0xd9, size 0x1 
 __declspec(property(get=__cordl_internal_get_constantVelocity, put=__cordl_internal_set_constantVelocity)) bool  constantVelocity;

/// @brief Field currentSpeedMultiplier, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSpeedMultiplier, put=__cordl_internal_set_currentSpeedMultiplier)) float_t  currentSpeedMultiplier;

/// @brief Field deceleration, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_deceleration, put=__cordl_internal_set_deceleration)) float_t  deceleration;

/// @brief Field duration, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field goingForward, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_goingForward, put=__cordl_internal_set_goingForward)) bool  goingForward;

/// @brief Field isHeldByLocalPlayer, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHeldByLocalPlayer, put=__cordl_internal_set_isHeldByLocalPlayer)) bool  isHeldByLocalPlayer;

/// @brief Field lookForward, offset 0xbd, size 0x1 
 __declspec(property(get=__cordl_internal_get_lookForward, put=__cordl_internal_set_lookForward)) bool  lookForward;

/// @brief Field mode, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::SplineWalkerMode  mode;

/// @brief Field progress, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) float_t  progress;

/// @brief Field progressLerpEnd, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_progressLerpEnd, put=__cordl_internal_set_progressLerpEnd)) float_t  progressLerpEnd;

/// @brief Field progressLerpStart, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_progressLerpStart, put=__cordl_internal_set_progressLerpStart)) float_t  progressLerpStart;

/// @brief Field progressLerpStartTime, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_progressLerpStartTime, put=__cordl_internal_set_progressLerpStartTime)) float_t  progressLerpStartTime;

/// @brief Field speedMultiplierWhileHeld, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_speedMultiplierWhileHeld, put=__cordl_internal_set_speedMultiplierWhileHeld)) float_t  speedMultiplierWhileHeld;

/// @brief Field spline, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_spline, put=__cordl_internal_set_spline)) ::UnityW<::GlobalNamespace::BezierSpline>  spline;

/// @brief Method Awake, addr 0x5cf150c, size 0x28, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5cf19b8, size 0x20, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5cf19d8, size 0x24, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method FixedUpdate, addr 0x5cf1534, size 0x234, virtual true, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetCurrentSpeed, addr 0x5cf1988, size 0x8, virtual false, abstract: false, final false
inline float_t GetCurrentSpeed() ;

/// @brief Method GetProgress, addr 0x5cf1980, size 0x8, virtual false, abstract: false, final false
inline float_t GetProgress() ;

static inline ::GorillaLocomotion::Gameplay::TraverseSpline* New_ctor() ;

/// @brief Method ReadDataFusion, addr 0x5cf1838, size 0x1c, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5cf1924, size 0x5c, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReadDataShared, addr 0x5cf1854, size 0x74, virtual false, abstract: false, final false
inline void ReadDataShared() ;

/// @brief Method WriteDataFusion, addr 0x5cf1820, size 0x18, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5cf18c8, size 0x5c, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr float_t const& __cordl_internal_get_SplineProgressOffet() const;

constexpr float_t& __cordl_internal_get_SplineProgressOffet() ;

constexpr float_t const& __cordl_internal_get__Data() const;

constexpr float_t& __cordl_internal_get__Data() ;

constexpr float_t const& __cordl_internal_get_acceleration() const;

constexpr float_t& __cordl_internal_get_acceleration() ;

constexpr bool const& __cordl_internal_get_constantVelocity() const;

constexpr bool& __cordl_internal_get_constantVelocity() ;

constexpr float_t const& __cordl_internal_get_currentSpeedMultiplier() const;

constexpr float_t& __cordl_internal_get_currentSpeedMultiplier() ;

constexpr float_t const& __cordl_internal_get_deceleration() const;

constexpr float_t& __cordl_internal_get_deceleration() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr bool const& __cordl_internal_get_goingForward() const;

constexpr bool& __cordl_internal_get_goingForward() ;

constexpr bool const& __cordl_internal_get_isHeldByLocalPlayer() const;

constexpr bool& __cordl_internal_get_isHeldByLocalPlayer() ;

constexpr bool const& __cordl_internal_get_lookForward() const;

constexpr bool& __cordl_internal_get_lookForward() ;

constexpr ::GlobalNamespace::SplineWalkerMode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::SplineWalkerMode& __cordl_internal_get_mode() ;

constexpr float_t const& __cordl_internal_get_progress() const;

constexpr float_t& __cordl_internal_get_progress() ;

constexpr float_t const& __cordl_internal_get_progressLerpEnd() const;

constexpr float_t& __cordl_internal_get_progressLerpEnd() ;

constexpr float_t const& __cordl_internal_get_progressLerpStart() const;

constexpr float_t& __cordl_internal_get_progressLerpStart() ;

constexpr float_t const& __cordl_internal_get_progressLerpStartTime() const;

constexpr float_t& __cordl_internal_get_progressLerpStartTime() ;

constexpr float_t const& __cordl_internal_get_speedMultiplierWhileHeld() const;

constexpr float_t& __cordl_internal_get_speedMultiplierWhileHeld() ;

constexpr ::UnityW<::GlobalNamespace::BezierSpline> const& __cordl_internal_get_spline() const;

constexpr ::UnityW<::GlobalNamespace::BezierSpline>& __cordl_internal_get_spline() ;

constexpr void __cordl_internal_set_SplineProgressOffet(float_t  value) ;

constexpr void __cordl_internal_set__Data(float_t  value) ;

constexpr void __cordl_internal_set_acceleration(float_t  value) ;

constexpr void __cordl_internal_set_constantVelocity(bool  value) ;

constexpr void __cordl_internal_set_currentSpeedMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_deceleration(float_t  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_goingForward(bool  value) ;

constexpr void __cordl_internal_set_isHeldByLocalPlayer(bool  value) ;

constexpr void __cordl_internal_set_lookForward(bool  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::SplineWalkerMode  value) ;

constexpr void __cordl_internal_set_progress(float_t  value) ;

constexpr void __cordl_internal_set_progressLerpEnd(float_t  value) ;

constexpr void __cordl_internal_set_progressLerpStart(float_t  value) ;

constexpr void __cordl_internal_set_progressLerpStartTime(float_t  value) ;

constexpr void __cordl_internal_set_speedMultiplierWhileHeld(float_t  value) ;

constexpr void __cordl_internal_set_spline(::UnityW<::GlobalNamespace::BezierSpline>  value) ;

/// @brief Method .ctor, addr 0x5cf1990, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x5cf1768, size 0x5c, virtual false, abstract: false, final false
inline float_t get_Data() ;

/// @brief Method set_Data, addr 0x5cf17c4, size 0x5c, virtual false, abstract: false, final false
inline void set_Data(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TraverseSpline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TraverseSpline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TraverseSpline(TraverseSpline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TraverseSpline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TraverseSpline(TraverseSpline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4542};

/// @brief Field progressLerpDuration offset 0xffffffff size 0x4
static constexpr float_t  progressLerpDuration{static_cast<float_t>(1.0f)};

/// @brief Field spline, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BezierSpline>  ___spline;

/// @brief Field duration, offset: 0xa8, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field speedMultiplierWhileHeld, offset: 0xac, size: 0x4, def value: None
 float_t  ___speedMultiplierWhileHeld;

/// @brief Field currentSpeedMultiplier, offset: 0xb0, size: 0x4, def value: None
 float_t  ___currentSpeedMultiplier;

/// @brief Field acceleration, offset: 0xb4, size: 0x4, def value: None
 float_t  ___acceleration;

/// @brief Field deceleration, offset: 0xb8, size: 0x4, def value: None
 float_t  ___deceleration;

/// @brief Field isHeldByLocalPlayer, offset: 0xbc, size: 0x1, def value: None
 bool  ___isHeldByLocalPlayer;

/// @brief Field lookForward, offset: 0xbd, size: 0x1, def value: None
 bool  ___lookForward;

/// @brief Field mode, offset: 0xc0, size: 0x4, def value: None
 ::GlobalNamespace::SplineWalkerMode  ___mode;

/// [SerializeField]
/// @brief Field SplineProgressOffet, offset: 0xc4, size: 0x4, def value: None
 float_t  ___SplineProgressOffet;

/// @brief Field progress, offset: 0xc8, size: 0x4, def value: None
 float_t  ___progress;

/// @brief Field progressLerpStart, offset: 0xcc, size: 0x4, def value: None
 float_t  ___progressLerpStart;

/// @brief Field progressLerpEnd, offset: 0xd0, size: 0x4, def value: None
 float_t  ___progressLerpEnd;

/// @brief Field progressLerpStartTime, offset: 0xd4, size: 0x4, def value: None
 float_t  ___progressLerpStartTime;

/// @brief Field goingForward, offset: 0xd8, size: 0x1, def value: None
 bool  ___goingForward;

/// [SerializeField]
/// @brief Field constantVelocity, offset: 0xd9, size: 0x1, def value: None
 bool  ___constantVelocity;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("Data", 0, 1)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0xdc, size: 0x4, def value: None
 float_t  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::TraverseSpline, ___spline) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::TraverseSpline, ___duration) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::TraverseSpline, ___speedMultiplierWhileHeld) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::TraverseSpline, ___currentSpeedMultiplier) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::TraverseSpline, ___acceleration) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::TraverseSpline, ___deceleration) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::TraverseSpline, ___isHeldByLocalPlayer) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::TraverseSpline, ___lookForward) == 0xbd, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::TraverseSpline, ___mode) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::TraverseSpline, ___SplineProgressOffet) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::TraverseSpline, ___progress) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::TraverseSpline, ___progressLerpStart) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::TraverseSpline, ___progressLerpEnd) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::TraverseSpline, ___progressLerpStartTime) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::TraverseSpline, ___goingForward) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::TraverseSpline, ___constantVelocity) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::TraverseSpline, ____Data) == 0xdc, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::TraverseSpline) == 0xe0, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay
