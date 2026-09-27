#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderMovingPart.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/Builder/zzzz__BuilderMovingPart_BuilderMovingPartType_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderAttachGridPlane_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderMovingPart)
namespace GlobalNamespace {
struct BuilderMovingPart_BuilderMovingPartType;
}
namespace GlobalNamespace {
class BuilderPiece;
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
namespace GorillaTagScripts::Builder {
class BuilderMovingPart;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderMovingPart*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderMovingPart*, "GorillaTagScripts.Builder", "BuilderMovingPart");
// Dependencies GorillaTagScripts.Builder.BuilderMovingPart::BuilderMovingPartType, GorillaTagScripts.BuilderAttachGridPlane, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderMovingPart
class CORDL_TYPE BuilderMovingPart : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BuilderMovingPartType = ::GlobalNamespace::BuilderMovingPart_BuilderMovingPartType;

/// @brief Field NUM_PAUSE_NODES, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_NUM_PAUSE_NODES, put=setStaticF_NUM_PAUSE_NODES)) int32_t  NUM_PAUSE_NODES;

/// @brief Field currForward, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_currForward, put=__cordl_internal_set_currForward)) bool  currForward;

/// @brief Field currT, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_currT, put=__cordl_internal_set_currT)) float_t  currT;

/// @brief Field cycleDelay, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_cycleDelay, put=__cordl_internal_set_cycleDelay)) float_t  cycleDelay;

/// @brief Field cycleDuration, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_cycleDuration, put=__cordl_internal_set_cycleDuration)) float_t  cycleDuration;

/// @brief Field distance, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_distance, put=__cordl_internal_set_distance)) float_t  distance;

/// @brief Field dtSinceServerUpdate, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_dtSinceServerUpdate, put=__cordl_internal_set_dtSinceServerUpdate)) float_t  dtSinceServerUpdate;

/// @brief Field endXf, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_endXf, put=__cordl_internal_set_endXf)) ::UnityW<::UnityEngine::Transform>  endXf;

/// @brief Field initLocalPos, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_initLocalPos, put=__cordl_internal_set_initLocalPos)) ::UnityEngine::Vector3  initLocalPos;

/// @brief Field initLocalRotation, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get_initLocalRotation, put=__cordl_internal_set_initLocalRotation)) ::UnityEngine::Quaternion  initLocalRotation;

/// @brief Field isMoving, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_isMoving, put=__cordl_internal_set_isMoving)) bool  isMoving;

/// @brief Field lastServerTimeStamp, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastServerTimeStamp, put=__cordl_internal_set_lastServerTimeStamp)) int32_t  lastServerTimeStamp;

/// @brief Field lerpAlpha, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lerpAlpha, put=__cordl_internal_set_lerpAlpha)) ::UnityEngine::AnimationCurve*  lerpAlpha;

/// @brief Field moveType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_moveType, put=__cordl_internal_set_moveType)) ::GlobalNamespace::BuilderMovingPart_BuilderMovingPartType  moveType;

/// @brief Field myGridPlanes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myGridPlanes, put=__cordl_internal_set_myGridPlanes)) ::ArrayW<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>  myGridPlanes;

/// @brief Field myPiece, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPiece, put=__cordl_internal_set_myPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  myPiece;

/// @brief Field percent, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_percent, put=__cordl_internal_set_percent)) float_t  percent;

/// @brief Field reverseDir, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_reverseDir, put=__cordl_internal_set_reverseDir)) bool  reverseDir;

/// @brief Field reverseDirOnCycle, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_reverseDirOnCycle, put=__cordl_internal_set_reverseDirOnCycle)) bool  reverseDirOnCycle;

/// @brief Field rotateAmt, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotateAmt, put=__cordl_internal_set_rotateAmt)) float_t  rotateAmt;

/// @brief Field rotateStartAmt, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotateStartAmt, put=__cordl_internal_set_rotateStartAmt)) float_t  rotateStartAmt;

/// @brief Field startPercentage, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_startPercentage, put=__cordl_internal_set_startPercentage)) float_t  startPercentage;

/// @brief Field startPercentageCycleOffset, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_startPercentageCycleOffset, put=__cordl_internal_set_startPercentageCycleOffset)) uint32_t  startPercentageCycleOffset;

/// @brief Field startXf, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_startXf, put=__cordl_internal_set_startXf)) ::UnityW<::UnityEngine::Transform>  startXf;

/// @brief Field velocity, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) float_t  velocity;

/// @brief Method ActivateAtNode, addr 0x5c209f4, size 0x1c4, virtual false, abstract: false, final false
inline void ActivateAtNode(uint8_t  node, int32_t  timestamp) ;

/// @brief Method Awake, addr 0x5c206f8, size 0xb8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CycleCompletionPercent, addr 0x5c20934, size 0x78, virtual false, abstract: false, final false
inline float_t CycleCompletionPercent() ;

/// @brief Method CycleCount, addr 0x5c208f4, size 0x40, virtual false, abstract: false, final false
inline int32_t CycleCount() ;

/// @brief Method CycleLengthMs, addr 0x5c20874, size 0x2c, virtual false, abstract: false, final false
inline int64_t CycleLengthMs() ;

/// @brief Method GetNearestNode, addr 0x5c20cac, size 0x190, virtual false, abstract: false, final false
inline uint8_t GetNearestNode() ;

/// @brief Method GetStartNode, addr 0x5c20e3c, size 0x130, virtual false, abstract: false, final false
inline uint8_t GetStartNode() ;

/// @brief Method GetTimeOffsetMS, addr 0x5c20c20, size 0x8c, virtual false, abstract: false, final false
inline int32_t GetTimeOffsetMS() ;

/// @brief Method InitMovingGrid, addr 0x5c2126c, size 0x2a8, virtual false, abstract: false, final false
inline void InitMovingGrid() ;

/// @brief Method IsAnchoredToTable, addr 0x5c21644, size 0x78, virtual false, abstract: false, final false
inline bool IsAnchoredToTable() ;

/// @brief Method IsEvenCycle, addr 0x5c209ac, size 0x48, virtual false, abstract: false, final false
inline bool IsEvenCycle() ;

/// @brief Method NetworkTimeMs, addr 0x5c207b0, size 0xc4, virtual false, abstract: false, final false
inline int64_t NetworkTimeMs() ;

static inline ::GorillaTagScripts::Builder::BuilderMovingPart* New_ctor() ;

/// @brief Method OnPieceDestroy, addr 0x5c216bc, size 0x4, virtual false, abstract: false, final false
inline void OnPieceDestroy() ;

/// @brief Method PauseMovement, addr 0x5c20f6c, size 0x17c, virtual false, abstract: false, final false
inline void PauseMovement(uint8_t  node) ;

/// @brief Method PlatformTime, addr 0x5c208a0, size 0x54, virtual false, abstract: false, final false
inline double_t PlatformTime() ;

/// @brief Method Progress, addr 0x5c215b4, size 0x90, virtual false, abstract: false, final false
inline void Progress() ;

/// @brief Method ResetMovingGrid, addr 0x5c21238, size 0x34, virtual false, abstract: false, final false
inline void ResetMovingGrid() ;

/// @brief Method SetMoving, addr 0x5c20bb8, size 0x68, virtual false, abstract: false, final false
inline void SetMoving(bool  isMoving) ;

/// @brief Method UpdateMovingGrid, addr 0x5c21514, size 0xa0, virtual false, abstract: false, final false
inline void UpdateMovingGrid() ;

/// @brief Method UpdatePointToPoint, addr 0x5c210e8, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 UpdatePointToPoint(float_t  perc) ;

/// @brief Method UpdateRotation, addr 0x5c21188, size 0xb0, virtual false, abstract: false, final false
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

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initLocalPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initLocalPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initLocalRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initLocalRotation() ;

constexpr bool const& __cordl_internal_get_isMoving() const;

constexpr bool& __cordl_internal_get_isMoving() ;

constexpr int32_t const& __cordl_internal_get_lastServerTimeStamp() const;

constexpr int32_t& __cordl_internal_get_lastServerTimeStamp() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_lerpAlpha() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_lerpAlpha() ;

constexpr ::GlobalNamespace::BuilderMovingPart_BuilderMovingPartType const& __cordl_internal_get_moveType() const;

constexpr ::GlobalNamespace::BuilderMovingPart_BuilderMovingPartType& __cordl_internal_get_moveType() ;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>> const& __cordl_internal_get_myGridPlanes() const;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>& __cordl_internal_get_myGridPlanes() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_myPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_myPiece() ;

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

constexpr float_t const& __cordl_internal_get_startPercentage() const;

constexpr float_t& __cordl_internal_get_startPercentage() ;

constexpr uint32_t const& __cordl_internal_get_startPercentageCycleOffset() const;

constexpr uint32_t& __cordl_internal_get_startPercentageCycleOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_startXf() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_startXf() ;

constexpr float_t const& __cordl_internal_get_velocity() const;

constexpr float_t& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_currForward(bool  value) ;

constexpr void __cordl_internal_set_currT(float_t  value) ;

constexpr void __cordl_internal_set_cycleDelay(float_t  value) ;

constexpr void __cordl_internal_set_cycleDuration(float_t  value) ;

constexpr void __cordl_internal_set_distance(float_t  value) ;

constexpr void __cordl_internal_set_dtSinceServerUpdate(float_t  value) ;

constexpr void __cordl_internal_set_endXf(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_initLocalPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_initLocalRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_isMoving(bool  value) ;

constexpr void __cordl_internal_set_lastServerTimeStamp(int32_t  value) ;

constexpr void __cordl_internal_set_lerpAlpha(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_moveType(::GlobalNamespace::BuilderMovingPart_BuilderMovingPartType  value) ;

constexpr void __cordl_internal_set_myGridPlanes(::ArrayW<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>  value) ;

constexpr void __cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_percent(float_t  value) ;

constexpr void __cordl_internal_set_reverseDir(bool  value) ;

constexpr void __cordl_internal_set_reverseDirOnCycle(bool  value) ;

constexpr void __cordl_internal_set_rotateAmt(float_t  value) ;

constexpr void __cordl_internal_set_rotateStartAmt(float_t  value) ;

constexpr void __cordl_internal_set_startPercentage(float_t  value) ;

constexpr void __cordl_internal_set_startPercentageCycleOffset(uint32_t  value) ;

constexpr void __cordl_internal_set_startXf(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_velocity(float_t  value) ;

/// @brief Method .ctor, addr 0x5c216c0, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_NUM_PAUSE_NODES() ;

static inline void setStaticF_NUM_PAUSE_NODES(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderMovingPart() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderMovingPart", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderMovingPart(BuilderMovingPart && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderMovingPart", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderMovingPart(BuilderMovingPart const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4147};

/// @brief Field myPiece, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___myPiece;

/// @brief Field myGridPlanes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>  ___myGridPlanes;

/// [SerializeField]
/// @brief Field moveType, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::BuilderMovingPart_BuilderMovingPartType  ___moveType;

/// [SerializeField]
/// @brief Field startPercentage, offset: 0x34, size: 0x4, def value: None
 float_t  ___startPercentage;

/// [SerializeField]
/// @brief Field velocity, offset: 0x38, size: 0x4, def value: None
 float_t  ___velocity;

/// [SerializeField]
/// @brief Field reverseDirOnCycle, offset: 0x3c, size: 0x1, def value: None
 bool  ___reverseDirOnCycle;

/// [SerializeField]
/// @brief Field reverseDir, offset: 0x3d, size: 0x1, def value: None
 bool  ___reverseDir;

/// [SerializeField]
/// @brief Field cycleDelay, offset: 0x40, size: 0x4, def value: None
 float_t  ___cycleDelay;

/// [SerializeField]
/// @brief Field startXf, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___startXf;

/// [SerializeField]
/// @brief Field endXf, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___endXf;

/// @brief Field lerpAlpha, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___lerpAlpha;

/// @brief Field isMoving, offset: 0x60, size: 0x1, def value: None
 bool  ___isMoving;

/// @brief Field initLocalRotation, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initLocalRotation;

/// @brief Field initLocalPos, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initLocalPos;

/// @brief Field cycleDuration, offset: 0x80, size: 0x4, def value: None
 float_t  ___cycleDuration;

/// @brief Field distance, offset: 0x84, size: 0x4, def value: None
 float_t  ___distance;

/// @brief Field currT, offset: 0x88, size: 0x4, def value: None
 float_t  ___currT;

/// @brief Field percent, offset: 0x8c, size: 0x4, def value: None
 float_t  ___percent;

/// @brief Field currForward, offset: 0x90, size: 0x1, def value: None
 bool  ___currForward;

/// @brief Field dtSinceServerUpdate, offset: 0x94, size: 0x4, def value: None
 float_t  ___dtSinceServerUpdate;

/// @brief Field lastServerTimeStamp, offset: 0x98, size: 0x4, def value: None
 int32_t  ___lastServerTimeStamp;

/// @brief Field rotateStartAmt, offset: 0x9c, size: 0x4, def value: None
 float_t  ___rotateStartAmt;

/// @brief Field rotateAmt, offset: 0xa0, size: 0x4, def value: None
 float_t  ___rotateAmt;

/// @brief Field startPercentageCycleOffset, offset: 0xa4, size: 0x4, def value: None
 uint32_t  ___startPercentageCycleOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___myPiece) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___myGridPlanes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___moveType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___startPercentage) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___velocity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___reverseDirOnCycle) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___reverseDir) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___cycleDelay) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___startXf) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___endXf) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___lerpAlpha) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___isMoving) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___initLocalRotation) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___initLocalPos) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___cycleDuration) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___distance) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___currT) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___percent) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___currForward) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___dtSinceServerUpdate) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___lastServerTimeStamp) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___rotateStartAmt) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___rotateAmt) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderMovingPart, ___startPercentageCycleOffset) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderMovingPart) == 0xa8, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
