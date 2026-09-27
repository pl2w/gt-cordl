#pragma once
// IWYU pragma private; include "GlobalNamespace/MovingPlatform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasePlatform_def.hpp"
#include "GlobalNamespace/zzzz__MovingPlatform_PlatformType_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MovingPlatform)
namespace GTMathUtil {
class CriticalSpringDamper;
}
namespace GlobalNamespace {
struct MovingPlatform_PlatformType;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MovingPlatform;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MovingPlatform*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MovingPlatform*, "", "MovingPlatform");
// Dependencies BasePlatform, MovingPlatform::PlatformType, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MovingPlatform
class CORDL_TYPE MovingPlatform : public ::GlobalNamespace::BasePlatform {
public:
// Declarations
using PlatformType = ::GlobalNamespace::MovingPlatform_PlatformType;

/// @brief Field angularVelocity, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_angularVelocity, put=__cordl_internal_set_angularVelocity)) float_t  angularVelocity;

/// @brief Field currForward, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_currForward, put=__cordl_internal_set_currForward)) bool  currForward;

/// @brief Field currT, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_currT, put=__cordl_internal_set_currT)) float_t  currT;

/// @brief Field currentVelocity, offset 0xe8, size 0xc 
 __declspec(property(get=__cordl_internal_get_currentVelocity, put=__cordl_internal_set_currentVelocity)) ::UnityEngine::Vector3  currentVelocity;

/// @brief Field cycleLength, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_cycleLength, put=__cordl_internal_set_cycleLength)) float_t  cycleLength;

/// @brief Field debugMovement, offset 0x138, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugMovement, put=__cordl_internal_set_debugMovement)) bool  debugMovement;

/// @brief Field deltaPosition, offset 0x12c, size 0xc 
 __declspec(property(get=__cordl_internal_get_deltaPosition, put=__cordl_internal_set_deltaPosition)) ::UnityEngine::Vector3  deltaPosition;

/// @brief Field dtSinceServerUpdate, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_dtSinceServerUpdate, put=__cordl_internal_set_dtSinceServerUpdate)) float_t  dtSinceServerUpdate;

/// @brief Field endPos, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_endPos, put=__cordl_internal_set_endPos)) ::UnityEngine::Vector3  endPos;

/// @brief Field endRot, offset 0x8c, size 0x10 
 __declspec(property(get=__cordl_internal_get_endRot, put=__cordl_internal_set_endRot)) ::UnityEngine::Quaternion  endRot;

/// @brief Field endXf, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_endXf, put=__cordl_internal_set_endXf)) ::UnityW<::UnityEngine::Transform>  endXf;

/// @brief Field initLocalRotation, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get_initLocalRotation, put=__cordl_internal_set_initLocalRotation)) ::UnityEngine::Quaternion  initLocalRotation;

/// @brief Field initOffset, offset 0xc0, size 0xc 
 __declspec(property(get=__cordl_internal_get_initOffset, put=__cordl_internal_set_initOffset)) ::UnityEngine::Vector3  initOffset;

/// @brief Field lastNT, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastNT, put=__cordl_internal_set_lastNT)) double_t  lastNT;

/// @brief Field lastPos, offset 0x110, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPos, put=__cordl_internal_set_lastPos)) ::UnityEngine::Vector3  lastPos;

/// @brief Field lastRot, offset 0x11c, size 0x10 
 __declspec(property(get=__cordl_internal_get_lastRot, put=__cordl_internal_set_lastRot)) ::UnityEngine::Quaternion  lastRot;

/// @brief Field lastServerTime, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastServerTime, put=__cordl_internal_set_lastServerTime)) double_t  lastServerTime;

/// @brief Field lastT, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastT, put=__cordl_internal_set_lastT)) float_t  lastT;

/// @brief Field percent, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_percent, put=__cordl_internal_set_percent)) float_t  percent;

/// @brief Field pivot, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_pivot, put=__cordl_internal_set_pivot)) ::UnityW<::UnityEngine::Transform>  pivot;

/// @brief Field platformInitLocalPos, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_platformInitLocalPos, put=__cordl_internal_set_platformInitLocalPos)) ::UnityEngine::Vector3  platformInitLocalPos;

/// @brief Field platformType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_platformType, put=__cordl_internal_set_platformType)) ::GlobalNamespace::MovingPlatform_PlatformType  platformType;

/// @brief Field rb, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field reverseDir, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_reverseDir, put=__cordl_internal_set_reverseDir)) bool  reverseDir;

/// @brief Field reverseDirOnCycle, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_reverseDirOnCycle, put=__cordl_internal_set_reverseDirOnCycle)) bool  reverseDirOnCycle;

/// @brief Field rotateAmt, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotateAmt, put=__cordl_internal_set_rotateAmt)) float_t  rotateAmt;

/// @brief Field rotateStartAmt, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotateStartAmt, put=__cordl_internal_set_rotateStartAmt)) float_t  rotateStartAmt;

/// @brief Field rotationPivot, offset 0x104, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotationPivot, put=__cordl_internal_set_rotationPivot)) ::UnityEngine::Vector3  rotationPivot;

/// @brief Field rotationalAxis, offset 0xf4, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotationalAxis, put=__cordl_internal_set_rotationalAxis)) ::UnityEngine::Vector3  rotationalAxis;

/// @brief Field smoothedPercent, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothedPercent, put=__cordl_internal_set_smoothedPercent)) float_t  smoothedPercent;

/// @brief Field smoothingHalflife, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothingHalflife, put=__cordl_internal_set_smoothingHalflife)) float_t  smoothingHalflife;

/// @brief Field springCD, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_springCD, put=__cordl_internal_set_springCD)) ::GTMathUtil::CriticalSpringDamper*  springCD;

/// @brief Field startDelay, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_startDelay, put=__cordl_internal_set_startDelay)) float_t  startDelay;

/// @brief Field startNextCycle, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get_startNextCycle, put=__cordl_internal_set_startNextCycle)) bool  startNextCycle;

/// @brief Field startPercentage, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_startPercentage, put=__cordl_internal_set_startPercentage)) float_t  startPercentage;

/// @brief Field startPos, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_startPos, put=__cordl_internal_set_startPos)) ::UnityEngine::Vector3  startPos;

/// @brief Field startRot, offset 0x7c, size 0x10 
 __declspec(property(get=__cordl_internal_get_startRot, put=__cordl_internal_set_startRot)) ::UnityEngine::Quaternion  startRot;

/// @brief Field startXf, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_startXf, put=__cordl_internal_set_startXf)) ::UnityW<::UnityEngine::Transform>  startXf;

/// @brief Method Awake, addr 0x595b230, size 0x1b8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CycleCompletionPercent, addr 0x595b138, size 0xa8, virtual false, abstract: false, final false
inline float_t CycleCompletionPercent() ;

/// @brief Method CycleCount, addr 0x595b0f8, size 0x40, virtual false, abstract: false, final false
inline int32_t CycleCount() ;

/// @brief Method CycleForward, addr 0x595b1e0, size 0x50, virtual false, abstract: false, final false
inline bool CycleForward() ;

/// @brief Method CycleLengthMs, addr 0x595b078, size 0x2c, virtual false, abstract: false, final false
inline int64_t CycleLengthMs() ;

/// @brief Method InitTimeOffset, addr 0x595af58, size 0x10, virtual false, abstract: false, final false
inline float_t InitTimeOffset() ;

/// @brief Method InitTimeOffsetMs, addr 0x595af68, size 0x34, virtual false, abstract: false, final false
inline int64_t InitTimeOffsetMs() ;

/// @brief Method NetworkTimeMs, addr 0x595af9c, size 0xdc, virtual false, abstract: false, final false
inline int64_t NetworkTimeMs() ;

static inline ::GlobalNamespace::MovingPlatform* New_ctor() ;

/// @brief Method OnEnable, addr 0x595b3e8, size 0xc4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlatformTime, addr 0x595b0a4, size 0x54, virtual false, abstract: false, final false
inline double_t PlatformTime() ;

/// @brief Method SetupContext, addr 0x595b730, size 0x130, virtual false, abstract: false, final false
inline void SetupContext() ;

/// @brief Method ThisFrameMovement, addr 0x595bad4, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ThisFrameMovement() ;

/// @brief Method Update, addr 0x595b860, size 0x274, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateArc, addr 0x595b4f8, size 0xe4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 UpdateArc() ;

/// @brief Method UpdateContinuousRotation, addr 0x595b610, size 0x120, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion UpdateContinuousRotation() ;

/// @brief Method UpdatePointToPoint, addr 0x595b4ac, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 UpdatePointToPoint() ;

/// @brief Method UpdateRotation, addr 0x595b5dc, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion UpdateRotation() ;

constexpr float_t const& __cordl_internal_get_angularVelocity() const;

constexpr float_t& __cordl_internal_get_angularVelocity() ;

constexpr bool const& __cordl_internal_get_currForward() const;

constexpr bool& __cordl_internal_get_currForward() ;

constexpr float_t const& __cordl_internal_get_currT() const;

constexpr float_t& __cordl_internal_get_currT() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_currentVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_currentVelocity() ;

constexpr float_t const& __cordl_internal_get_cycleLength() const;

constexpr float_t& __cordl_internal_get_cycleLength() ;

constexpr bool const& __cordl_internal_get_debugMovement() const;

constexpr bool& __cordl_internal_get_debugMovement() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_deltaPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_deltaPosition() ;

constexpr float_t const& __cordl_internal_get_dtSinceServerUpdate() const;

constexpr float_t& __cordl_internal_get_dtSinceServerUpdate() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_endPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_endPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_endRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_endRot() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_endXf() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_endXf() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initLocalRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initLocalRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initOffset() ;

constexpr double_t const& __cordl_internal_get_lastNT() const;

constexpr double_t& __cordl_internal_get_lastNT() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastRot() ;

constexpr double_t const& __cordl_internal_get_lastServerTime() const;

constexpr double_t& __cordl_internal_get_lastServerTime() ;

constexpr float_t const& __cordl_internal_get_lastT() const;

constexpr float_t& __cordl_internal_get_lastT() ;

constexpr float_t const& __cordl_internal_get_percent() const;

constexpr float_t& __cordl_internal_get_percent() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pivot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pivot() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_platformInitLocalPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_platformInitLocalPos() ;

constexpr ::GlobalNamespace::MovingPlatform_PlatformType const& __cordl_internal_get_platformType() const;

constexpr ::GlobalNamespace::MovingPlatform_PlatformType& __cordl_internal_get_platformType() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr bool const& __cordl_internal_get_reverseDir() const;

constexpr bool& __cordl_internal_get_reverseDir() ;

constexpr bool const& __cordl_internal_get_reverseDirOnCycle() const;

constexpr bool& __cordl_internal_get_reverseDirOnCycle() ;

constexpr float_t const& __cordl_internal_get_rotateAmt() const;

constexpr float_t& __cordl_internal_get_rotateAmt() ;

constexpr float_t const& __cordl_internal_get_rotateStartAmt() const;

constexpr float_t& __cordl_internal_get_rotateStartAmt() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotationPivot() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotationPivot() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotationalAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotationalAxis() ;

constexpr float_t const& __cordl_internal_get_smoothedPercent() const;

constexpr float_t& __cordl_internal_get_smoothedPercent() ;

constexpr float_t const& __cordl_internal_get_smoothingHalflife() const;

constexpr float_t& __cordl_internal_get_smoothingHalflife() ;

constexpr ::GTMathUtil::CriticalSpringDamper* const& __cordl_internal_get_springCD() const;

constexpr ::GTMathUtil::CriticalSpringDamper*& __cordl_internal_get_springCD() ;

constexpr float_t const& __cordl_internal_get_startDelay() const;

constexpr float_t& __cordl_internal_get_startDelay() ;

constexpr bool const& __cordl_internal_get_startNextCycle() const;

constexpr bool& __cordl_internal_get_startNextCycle() ;

constexpr float_t const& __cordl_internal_get_startPercentage() const;

constexpr float_t& __cordl_internal_get_startPercentage() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_startRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_startRot() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_startXf() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_startXf() ;

constexpr void __cordl_internal_set_angularVelocity(float_t  value) ;

constexpr void __cordl_internal_set_currForward(bool  value) ;

constexpr void __cordl_internal_set_currT(float_t  value) ;

constexpr void __cordl_internal_set_currentVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_cycleLength(float_t  value) ;

constexpr void __cordl_internal_set_debugMovement(bool  value) ;

constexpr void __cordl_internal_set_deltaPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_dtSinceServerUpdate(float_t  value) ;

constexpr void __cordl_internal_set_endPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_endRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_endXf(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_initLocalRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_initOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastNT(double_t  value) ;

constexpr void __cordl_internal_set_lastPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_lastServerTime(double_t  value) ;

constexpr void __cordl_internal_set_lastT(float_t  value) ;

constexpr void __cordl_internal_set_percent(float_t  value) ;

constexpr void __cordl_internal_set_pivot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_platformInitLocalPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_platformType(::GlobalNamespace::MovingPlatform_PlatformType  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_reverseDir(bool  value) ;

constexpr void __cordl_internal_set_reverseDirOnCycle(bool  value) ;

constexpr void __cordl_internal_set_rotateAmt(float_t  value) ;

constexpr void __cordl_internal_set_rotateStartAmt(float_t  value) ;

constexpr void __cordl_internal_set_rotationPivot(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotationalAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_smoothedPercent(float_t  value) ;

constexpr void __cordl_internal_set_smoothingHalflife(float_t  value) ;

constexpr void __cordl_internal_set_springCD(::GTMathUtil::CriticalSpringDamper*  value) ;

constexpr void __cordl_internal_set_startDelay(float_t  value) ;

constexpr void __cordl_internal_set_startNextCycle(bool  value) ;

constexpr void __cordl_internal_set_startPercentage(float_t  value) ;

constexpr void __cordl_internal_set_startPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_startXf(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x595bae4, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MovingPlatform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MovingPlatform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MovingPlatform(MovingPlatform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MovingPlatform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MovingPlatform(MovingPlatform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2342};

/// @brief Field platformType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::MovingPlatform_PlatformType  ___platformType;

/// @brief Field cycleLength, offset: 0x24, size: 0x4, def value: None
 float_t  ___cycleLength;

/// @brief Field smoothingHalflife, offset: 0x28, size: 0x4, def value: None
 float_t  ___smoothingHalflife;

/// @brief Field rotateStartAmt, offset: 0x2c, size: 0x4, def value: None
 float_t  ___rotateStartAmt;

/// @brief Field rotateAmt, offset: 0x30, size: 0x4, def value: None
 float_t  ___rotateAmt;

/// @brief Field reverseDirOnCycle, offset: 0x34, size: 0x1, def value: None
 bool  ___reverseDirOnCycle;

/// @brief Field reverseDir, offset: 0x35, size: 0x1, def value: None
 bool  ___reverseDir;

/// @brief Field springCD, offset: 0x38, size: 0x8, def value: None
 ::GTMathUtil::CriticalSpringDamper*  ___springCD;

/// @brief Field rb, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field startXf, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___startXf;

/// @brief Field endXf, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___endXf;

/// @brief Field platformInitLocalPos, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___platformInitLocalPos;

/// @brief Field startPos, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startPos;

/// @brief Field endPos, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___endPos;

/// @brief Field startRot, offset: 0x7c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___startRot;

/// @brief Field endRot, offset: 0x8c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___endRot;

/// @brief Field startPercentage, offset: 0x9c, size: 0x4, def value: None
 float_t  ___startPercentage;

/// @brief Field startDelay, offset: 0xa0, size: 0x4, def value: None
 float_t  ___startDelay;

/// @brief Field startNextCycle, offset: 0xa4, size: 0x1, def value: None
 bool  ___startNextCycle;

/// @brief Field pivot, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pivot;

/// @brief Field initLocalRotation, offset: 0xb0, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initLocalRotation;

/// @brief Field initOffset, offset: 0xc0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initOffset;

/// @brief Field currT, offset: 0xcc, size: 0x4, def value: None
 float_t  ___currT;

/// @brief Field percent, offset: 0xd0, size: 0x4, def value: None
 float_t  ___percent;

/// @brief Field smoothedPercent, offset: 0xd4, size: 0x4, def value: None
 float_t  ___smoothedPercent;

/// @brief Field currForward, offset: 0xd8, size: 0x1, def value: None
 bool  ___currForward;

/// @brief Field dtSinceServerUpdate, offset: 0xdc, size: 0x4, def value: None
 float_t  ___dtSinceServerUpdate;

/// @brief Field lastServerTime, offset: 0xe0, size: 0x8, def value: None
 double_t  ___lastServerTime;

/// @brief Field currentVelocity, offset: 0xe8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___currentVelocity;

/// @brief Field rotationalAxis, offset: 0xf4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotationalAxis;

/// @brief Field angularVelocity, offset: 0x100, size: 0x4, def value: None
 float_t  ___angularVelocity;

/// @brief Field rotationPivot, offset: 0x104, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotationPivot;

/// @brief Field lastPos, offset: 0x110, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPos;

/// @brief Field lastRot, offset: 0x11c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___lastRot;

/// @brief Field deltaPosition, offset: 0x12c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___deltaPosition;

/// @brief Field debugMovement, offset: 0x138, size: 0x1, def value: None
 bool  ___debugMovement;

/// @brief Field lastNT, offset: 0x140, size: 0x8, def value: None
 double_t  ___lastNT;

/// @brief Field lastT, offset: 0x148, size: 0x4, def value: None
 float_t  ___lastT;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___platformType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___cycleLength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___smoothingHalflife) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___rotateStartAmt) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___rotateAmt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___reverseDirOnCycle) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___reverseDir) == 0x35, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___springCD) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___rb) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___startXf) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___endXf) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___platformInitLocalPos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___startPos) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___endPos) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___startRot) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___endRot) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___startPercentage) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___startDelay) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___startNextCycle) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___pivot) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___initLocalRotation) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___initOffset) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___currT) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___percent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___smoothedPercent) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___currForward) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___dtSinceServerUpdate) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___lastServerTime) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___currentVelocity) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___rotationalAxis) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___angularVelocity) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___rotationPivot) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___lastPos) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___lastRot) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___deltaPosition) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___debugMovement) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___lastNT) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MovingPlatform, ___lastT) == 0x148, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MovingPlatform) == 0x150, "Size mismatch!");

} // namespace end def GlobalNamespace
