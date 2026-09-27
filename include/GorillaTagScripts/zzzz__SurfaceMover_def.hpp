#pragma once
// IWYU pragma private; include "GorillaTagScripts/SurfaceMover.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/Builder/zzzz__BuilderMovingPart_BuilderMovingPartType_def.hpp"
#include "GorillaTagScripts/zzzz__RotationAxis_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SurfaceMover)
namespace GT_CustomMapSupportRuntime {
class SurfaceMoverSettings;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts {
class SurfaceMover;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::SurfaceMover*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::SurfaceMover*, "GorillaTagScripts", "SurfaceMover");
// Dependencies GorillaTagScripts.Builder.BuilderMovingPart::BuilderMovingPartType, GorillaTagScripts.RotationAxis, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.SurfaceMover
class CORDL_TYPE SurfaceMover : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field currForward, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_currForward, put=__cordl_internal_set_currForward)) bool  currForward;

/// @brief Field currT, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_currT, put=__cordl_internal_set_currT)) float_t  currT;

/// @brief Field cycleDelay, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_cycleDelay, put=__cordl_internal_set_cycleDelay)) float_t  cycleDelay;

/// @brief Field cycleDuration, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_cycleDuration, put=__cordl_internal_set_cycleDuration)) float_t  cycleDuration;

/// @brief Field distance, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_distance, put=__cordl_internal_set_distance)) float_t  distance;

/// @brief Field dtSinceServerUpdate, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_dtSinceServerUpdate, put=__cordl_internal_set_dtSinceServerUpdate)) float_t  dtSinceServerUpdate;

/// @brief Field endXf, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_endXf, put=__cordl_internal_set_endXf)) ::UnityW<::UnityEngine::Transform>  endXf;

/// @brief Field lastServerTimeStamp, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastServerTimeStamp, put=__cordl_internal_set_lastServerTimeStamp)) int32_t  lastServerTimeStamp;

/// @brief Field lerpAlpha, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lerpAlpha, put=__cordl_internal_set_lerpAlpha)) ::UnityEngine::AnimationCurve*  lerpAlpha;

/// @brief Field moveType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_moveType, put=__cordl_internal_set_moveType)) ::GlobalNamespace::BuilderMovingPart_BuilderMovingPartType  moveType;

/// @brief Field percent, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_percent, put=__cordl_internal_set_percent)) float_t  percent;

/// @brief Field reverseDir, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_reverseDir, put=__cordl_internal_set_reverseDir)) bool  reverseDir;

/// @brief Field reverseDirOnCycle, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_reverseDirOnCycle, put=__cordl_internal_set_reverseDirOnCycle)) bool  reverseDirOnCycle;

/// @brief Field rotateAmt, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotateAmt, put=__cordl_internal_set_rotateAmt)) float_t  rotateAmt;

/// @brief Field rotateStartAmt, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotateStartAmt, put=__cordl_internal_set_rotateStartAmt)) float_t  rotateStartAmt;

/// @brief Field rotationAmount, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationAmount, put=__cordl_internal_set_rotationAmount)) float_t  rotationAmount;

/// @brief Field rotationAxis, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationAxis, put=__cordl_internal_set_rotationAxis)) ::GorillaTagScripts::RotationAxis  rotationAxis;

/// @brief Field rotationRelativeToStarting, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_rotationRelativeToStarting, put=__cordl_internal_set_rotationRelativeToStarting)) bool  rotationRelativeToStarting;

/// @brief Field startPercentage, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_startPercentage, put=__cordl_internal_set_startPercentage)) float_t  startPercentage;

/// @brief Field startPercentageCycleOffset, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_startPercentageCycleOffset, put=__cordl_internal_set_startPercentageCycleOffset)) uint32_t  startPercentageCycleOffset;

/// @brief Field startXf, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_startXf, put=__cordl_internal_set_startXf)) ::UnityW<::UnityEngine::Transform>  startXf;

/// @brief Field startingRotation, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_startingRotation, put=__cordl_internal_set_startingRotation)) ::UnityEngine::Vector3  startingRotation;

/// @brief Field velocity, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) float_t  velocity;

/// @brief Method CopySettings, addr 0x5b828e4, size 0x214, virtual false, abstract: false, final false
inline void CopySettings(::GT_CustomMapSupportRuntime::SurfaceMoverSettings*  settings) ;

/// @brief Method CycleCompletionPercent, addr 0x5b82520, size 0x78, virtual false, abstract: false, final false
inline float_t CycleCompletionPercent() ;

/// @brief Method CycleCount, addr 0x5b824e0, size 0x40, virtual false, abstract: false, final false
inline int32_t CycleCount() ;

/// @brief Method CycleLengthMs, addr 0x5b82460, size 0x2c, virtual false, abstract: false, final false
inline int64_t CycleLengthMs() ;

/// @brief Method InitMovingSurface, addr 0x5b81bbc, size 0x2f0, virtual false, abstract: false, final false
inline void InitMovingSurface() ;

/// @brief Method IsEvenCycle, addr 0x5b82598, size 0x48, virtual false, abstract: false, final false
inline bool IsEvenCycle() ;

/// @brief Method Move, addr 0x5b82100, size 0x78, virtual false, abstract: false, final false
inline void Move() ;

/// @brief Method NetworkTimeMs, addr 0x5b823b0, size 0xb0, virtual false, abstract: false, final false
inline int64_t NetworkTimeMs() ;

static inline ::GorillaTagScripts::SurfaceMover* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5b822fc, size 0xb4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PlatformTime, addr 0x5b8248c, size 0x54, virtual false, abstract: false, final false
inline double_t PlatformTime() ;

/// @brief Method Progress, addr 0x5b825e0, size 0x90, virtual false, abstract: false, final false
inline void Progress() ;

/// @brief Method Start, addr 0x5b8225c, size 0xa0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdatePointToPoint, addr 0x5b82670, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 UpdatePointToPoint(float_t  perc) ;

/// @brief Method UpdateRotation, addr 0x5b82710, size 0x1d4, virtual false, abstract: false, final false
inline void UpdateRotation(float_t  perc) ;

constexpr bool const& __cordl_internal_get_currForward() const;

constexpr bool& __cordl_internal_get_currForward() ;

constexpr float_t const& __cordl_internal_get_currT() const;

constexpr float_t& __cordl_internal_get_currT() ;

constexpr float_t const& __cordl_internal_get_cycleDelay() const;

constexpr float_t& __cordl_internal_get_cycleDelay() ;

constexpr float_t const& __cordl_internal_get_cycleDuration() const;

constexpr float_t& __cordl_internal_get_cycleDuration() ;

constexpr float_t const& __cordl_internal_get_distance() const;

constexpr float_t& __cordl_internal_get_distance() ;

constexpr float_t const& __cordl_internal_get_dtSinceServerUpdate() const;

constexpr float_t& __cordl_internal_get_dtSinceServerUpdate() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_endXf() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_endXf() ;

constexpr int32_t const& __cordl_internal_get_lastServerTimeStamp() const;

constexpr int32_t& __cordl_internal_get_lastServerTimeStamp() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_lerpAlpha() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_lerpAlpha() ;

constexpr ::GlobalNamespace::BuilderMovingPart_BuilderMovingPartType const& __cordl_internal_get_moveType() const;

constexpr ::GlobalNamespace::BuilderMovingPart_BuilderMovingPartType& __cordl_internal_get_moveType() ;

constexpr float_t const& __cordl_internal_get_percent() const;

constexpr float_t& __cordl_internal_get_percent() ;

constexpr bool const& __cordl_internal_get_reverseDir() const;

constexpr bool& __cordl_internal_get_reverseDir() ;

constexpr bool const& __cordl_internal_get_reverseDirOnCycle() const;

constexpr bool& __cordl_internal_get_reverseDirOnCycle() ;

constexpr float_t const& __cordl_internal_get_rotateAmt() const;

constexpr float_t& __cordl_internal_get_rotateAmt() ;

constexpr float_t const& __cordl_internal_get_rotateStartAmt() const;

constexpr float_t& __cordl_internal_get_rotateStartAmt() ;

constexpr float_t const& __cordl_internal_get_rotationAmount() const;

constexpr float_t& __cordl_internal_get_rotationAmount() ;

constexpr ::GorillaTagScripts::RotationAxis const& __cordl_internal_get_rotationAxis() const;

constexpr ::GorillaTagScripts::RotationAxis& __cordl_internal_get_rotationAxis() ;

constexpr bool const& __cordl_internal_get_rotationRelativeToStarting() const;

constexpr bool& __cordl_internal_get_rotationRelativeToStarting() ;

constexpr float_t const& __cordl_internal_get_startPercentage() const;

constexpr float_t& __cordl_internal_get_startPercentage() ;

constexpr uint32_t const& __cordl_internal_get_startPercentageCycleOffset() const;

constexpr uint32_t& __cordl_internal_get_startPercentageCycleOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_startXf() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_startXf() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startingRotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startingRotation() ;

constexpr float_t const& __cordl_internal_get_velocity() const;

constexpr float_t& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_currForward(bool  value) ;

constexpr void __cordl_internal_set_currT(float_t  value) ;

constexpr void __cordl_internal_set_cycleDelay(float_t  value) ;

constexpr void __cordl_internal_set_cycleDuration(float_t  value) ;

constexpr void __cordl_internal_set_distance(float_t  value) ;

constexpr void __cordl_internal_set_dtSinceServerUpdate(float_t  value) ;

constexpr void __cordl_internal_set_endXf(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lastServerTimeStamp(int32_t  value) ;

constexpr void __cordl_internal_set_lerpAlpha(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_moveType(::GlobalNamespace::BuilderMovingPart_BuilderMovingPartType  value) ;

constexpr void __cordl_internal_set_percent(float_t  value) ;

constexpr void __cordl_internal_set_reverseDir(bool  value) ;

constexpr void __cordl_internal_set_reverseDirOnCycle(bool  value) ;

constexpr void __cordl_internal_set_rotateAmt(float_t  value) ;

constexpr void __cordl_internal_set_rotateStartAmt(float_t  value) ;

constexpr void __cordl_internal_set_rotationAmount(float_t  value) ;

constexpr void __cordl_internal_set_rotationAxis(::GorillaTagScripts::RotationAxis  value) ;

constexpr void __cordl_internal_set_rotationRelativeToStarting(bool  value) ;

constexpr void __cordl_internal_set_startPercentage(float_t  value) ;

constexpr void __cordl_internal_set_startPercentageCycleOffset(uint32_t  value) ;

constexpr void __cordl_internal_set_startXf(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_startingRotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_velocity(float_t  value) ;

/// @brief Method .ctor, addr 0x5b82af8, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SurfaceMover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SurfaceMover", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SurfaceMover(SurfaceMover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceMover", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SurfaceMover(SurfaceMover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3923};

/// [SerializeField]
/// @brief Field moveType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::BuilderMovingPart_BuilderMovingPartType  ___moveType;

/// [SerializeField]
/// @brief Field startPercentage, offset: 0x24, size: 0x4, def value: None
 float_t  ___startPercentage;

/// [SerializeField]
/// @brief Field velocity, offset: 0x28, size: 0x4, def value: None
 float_t  ___velocity;

/// [SerializeField]
/// @brief Field reverseDirOnCycle, offset: 0x2c, size: 0x1, def value: None
 bool  ___reverseDirOnCycle;

/// [SerializeField]
/// @brief Field reverseDir, offset: 0x2d, size: 0x1, def value: None
 bool  ___reverseDir;

/// [SerializeField]
/// @brief Field cycleDelay, offset: 0x30, size: 0x4, def value: None
 float_t  ___cycleDelay;

/// [SerializeField]
/// @brief Field startXf, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___startXf;

/// [SerializeField]
/// @brief Field endXf, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___endXf;

/// [SerializeField]
/// @brief Field rotationAxis, offset: 0x48, size: 0x4, def value: None
 ::GorillaTagScripts::RotationAxis  ___rotationAxis;

/// [SerializeField]
/// @brief Field rotationAmount, offset: 0x4c, size: 0x4, def value: None
 float_t  ___rotationAmount;

/// [SerializeField]
/// @brief Field rotationRelativeToStarting, offset: 0x50, size: 0x1, def value: None
 bool  ___rotationRelativeToStarting;

/// @brief Field lerpAlpha, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___lerpAlpha;

/// @brief Field cycleDuration, offset: 0x60, size: 0x4, def value: None
 float_t  ___cycleDuration;

/// @brief Field distance, offset: 0x64, size: 0x4, def value: None
 float_t  ___distance;

/// @brief Field startingRotation, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startingRotation;

/// @brief Field currT, offset: 0x74, size: 0x4, def value: None
 float_t  ___currT;

/// @brief Field percent, offset: 0x78, size: 0x4, def value: None
 float_t  ___percent;

/// @brief Field currForward, offset: 0x7c, size: 0x1, def value: None
 bool  ___currForward;

/// @brief Field dtSinceServerUpdate, offset: 0x80, size: 0x4, def value: None
 float_t  ___dtSinceServerUpdate;

/// @brief Field lastServerTimeStamp, offset: 0x84, size: 0x4, def value: None
 int32_t  ___lastServerTimeStamp;

/// @brief Field rotateStartAmt, offset: 0x88, size: 0x4, def value: None
 float_t  ___rotateStartAmt;

/// @brief Field rotateAmt, offset: 0x8c, size: 0x4, def value: None
 float_t  ___rotateAmt;

/// @brief Field startPercentageCycleOffset, offset: 0x90, size: 0x4, def value: None
 uint32_t  ___startPercentageCycleOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___moveType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___startPercentage) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___velocity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___reverseDirOnCycle) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___reverseDir) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___cycleDelay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___startXf) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___endXf) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___rotationAxis) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___rotationAmount) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___rotationRelativeToStarting) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___lerpAlpha) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___cycleDuration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___distance) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___startingRotation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___currT) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___percent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___currForward) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___dtSinceServerUpdate) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___lastServerTimeStamp) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___rotateStartAmt) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___rotateAmt) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SurfaceMover, ___startPercentageCycleOffset) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::SurfaceMover) == 0x98, "Size mismatch!");

} // namespace end def GorillaTagScripts
