#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/SurfaceMoverSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__SurfaceMoverSettings_MoveType_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__SurfaceMoverSettings_RotationAxis_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SurfaceMoverSettings)
namespace GlobalNamespace {
struct SurfaceMoverSettings_MoveType;
}
namespace GlobalNamespace {
struct SurfaceMoverSettings_RotationAxis;
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
namespace GT_CustomMapSupportRuntime {
class SurfaceMoverSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::SurfaceMoverSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::SurfaceMoverSettings*, "GT_CustomMapSupportRuntime", "SurfaceMoverSettings");
// Dependencies GT_CustomMapSupportRuntime.SurfaceMoverSettings::MoveType, GT_CustomMapSupportRuntime.SurfaceMoverSettings::RotationAxis, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.SurfaceMoverSettings
class CORDL_TYPE SurfaceMoverSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MoveType = ::GlobalNamespace::SurfaceMoverSettings_MoveType;

using RotationAxis = ::GlobalNamespace::SurfaceMoverSettings_RotationAxis;

/// @brief Field currForward, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_currForward, put=__cordl_internal_set_currForward)) bool  currForward;

/// @brief Field currT, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currT, put=__cordl_internal_set_currT)) float_t  currT;

/// @brief Field cycleDelay, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_cycleDelay, put=__cordl_internal_set_cycleDelay)) float_t  cycleDelay;

/// @brief Field cycleDuration, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_cycleDuration, put=__cordl_internal_set_cycleDuration)) float_t  cycleDuration;

/// @brief Field distance, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_distance, put=__cordl_internal_set_distance)) float_t  distance;

/// @brief Field end, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) ::UnityW<::UnityEngine::Transform>  end;

/// @brief Field hasBeenExported, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasBeenExported, put=__cordl_internal_set_hasBeenExported)) bool  hasBeenExported;

/// @brief Field lerpAlpha, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_lerpAlpha, put=__cordl_internal_set_lerpAlpha)) ::UnityEngine::AnimationCurve*  lerpAlpha;

/// @brief Field moveType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_moveType, put=__cordl_internal_set_moveType)) ::GlobalNamespace::SurfaceMoverSettings_MoveType  moveType;

/// @brief Field percent, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_percent, put=__cordl_internal_set_percent)) float_t  percent;

/// @brief Field reverseDir, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_reverseDir, put=__cordl_internal_set_reverseDir)) bool  reverseDir;

/// @brief Field reverseDirOnCycle, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_reverseDirOnCycle, put=__cordl_internal_set_reverseDirOnCycle)) bool  reverseDirOnCycle;

/// @brief Field rotationAmount, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationAmount, put=__cordl_internal_set_rotationAmount)) float_t  rotationAmount;

/// @brief Field rotationAxis, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationAxis, put=__cordl_internal_set_rotationAxis)) ::GlobalNamespace::SurfaceMoverSettings_RotationAxis  rotationAxis;

/// @brief Field rotationRelativeToStarting, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_rotationRelativeToStarting, put=__cordl_internal_set_rotationRelativeToStarting)) bool  rotationRelativeToStarting;

/// @brief Field start, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) ::UnityW<::UnityEngine::Transform>  start;

/// @brief Field startingRotation, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_startingRotation, put=__cordl_internal_set_startingRotation)) ::UnityEngine::Vector3  startingRotation;

/// @brief Field velocity, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) float_t  velocity;

/// @brief Method CycleCompletionPercent, addr 0x9cb875c, size 0x8c, virtual false, abstract: false, final false
inline float_t CycleCompletionPercent() ;

/// @brief Method CycleCount, addr 0x9cb8708, size 0x54, virtual false, abstract: false, final false
inline int32_t CycleCount() ;

/// @brief Method CycleLengthMs, addr 0x9cb8674, size 0x2c, virtual false, abstract: false, final false
inline int64_t CycleLengthMs() ;

/// @brief Method FixedUpdate, addr 0x9cb85b4, size 0x10, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method IsEvenCycle, addr 0x9cb87e8, size 0x5c, virtual false, abstract: false, final false
inline bool IsEvenCycle() ;

/// @brief Method Move, addr 0x9cb85c4, size 0x78, virtual false, abstract: false, final false
inline void Move() ;

/// @brief Method NetworkTimeMs, addr 0x9cb863c, size 0x38, virtual false, abstract: false, final false
inline int64_t NetworkTimeMs() ;

static inline ::GT_CustomMapSupportRuntime::SurfaceMoverSettings* New_ctor() ;

/// @brief Method OnEnable, addr 0x9cb82c8, size 0x2ec, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlatformTime, addr 0x9cb86a0, size 0x68, virtual false, abstract: false, final false
inline double_t PlatformTime() ;

/// @brief Method Progress, addr 0x9cb8844, size 0xa0, virtual false, abstract: false, final false
inline void Progress() ;

/// @brief Method UpdatePointToPoint, addr 0x9cb88e4, size 0x14c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 UpdatePointToPoint(float_t  percentage) ;

/// @brief Method UpdateRotation, addr 0x9cb8a30, size 0x1d4, virtual false, abstract: false, final false
inline void UpdateRotation(float_t  percentage) ;

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

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_end() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_end() ;

constexpr bool const& __cordl_internal_get_hasBeenExported() const;

constexpr bool& __cordl_internal_get_hasBeenExported() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_lerpAlpha() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_lerpAlpha() ;

constexpr ::GlobalNamespace::SurfaceMoverSettings_MoveType const& __cordl_internal_get_moveType() const;

constexpr ::GlobalNamespace::SurfaceMoverSettings_MoveType& __cordl_internal_get_moveType() ;

constexpr float_t const& __cordl_internal_get_percent() const;

constexpr float_t& __cordl_internal_get_percent() ;

constexpr bool const& __cordl_internal_get_reverseDir() const;

constexpr bool& __cordl_internal_get_reverseDir() ;

constexpr bool const& __cordl_internal_get_reverseDirOnCycle() const;

constexpr bool& __cordl_internal_get_reverseDirOnCycle() ;

constexpr float_t const& __cordl_internal_get_rotationAmount() const;

constexpr float_t& __cordl_internal_get_rotationAmount() ;

constexpr ::GlobalNamespace::SurfaceMoverSettings_RotationAxis const& __cordl_internal_get_rotationAxis() const;

constexpr ::GlobalNamespace::SurfaceMoverSettings_RotationAxis& __cordl_internal_get_rotationAxis() ;

constexpr bool const& __cordl_internal_get_rotationRelativeToStarting() const;

constexpr bool& __cordl_internal_get_rotationRelativeToStarting() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_start() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_start() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startingRotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startingRotation() ;

constexpr float_t const& __cordl_internal_get_velocity() const;

constexpr float_t& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_currForward(bool  value) ;

constexpr void __cordl_internal_set_currT(float_t  value) ;

constexpr void __cordl_internal_set_cycleDelay(float_t  value) ;

constexpr void __cordl_internal_set_cycleDuration(float_t  value) ;

constexpr void __cordl_internal_set_distance(float_t  value) ;

constexpr void __cordl_internal_set_end(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hasBeenExported(bool  value) ;

constexpr void __cordl_internal_set_lerpAlpha(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_moveType(::GlobalNamespace::SurfaceMoverSettings_MoveType  value) ;

constexpr void __cordl_internal_set_percent(float_t  value) ;

constexpr void __cordl_internal_set_reverseDir(bool  value) ;

constexpr void __cordl_internal_set_reverseDirOnCycle(bool  value) ;

constexpr void __cordl_internal_set_rotationAmount(float_t  value) ;

constexpr void __cordl_internal_set_rotationAxis(::GlobalNamespace::SurfaceMoverSettings_RotationAxis  value) ;

constexpr void __cordl_internal_set_rotationRelativeToStarting(bool  value) ;

constexpr void __cordl_internal_set_start(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_startingRotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_velocity(float_t  value) ;

/// @brief Method .ctor, addr 0x9cb8c04, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SurfaceMoverSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SurfaceMoverSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SurfaceMoverSettings(SurfaceMoverSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceMoverSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SurfaceMoverSettings(SurfaceMoverSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30928};

/// [SerializeField]
/// @brief Field moveType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SurfaceMoverSettings_MoveType  ___moveType;

/// [Range(0.001, 340282350000000000000000000000000000000)]
/// [Tooltip("Meters per second for Translation | Revolutions per second for Rotation")]
/// [SerializeField]
/// @brief Field velocity, offset: 0x24, size: 0x4, def value: None
 float_t  ___velocity;

/// [Range(0, 340282350000000000000000000000000000000)]
/// [Tooltip("How long in seconds should the cycle be delayed?")]
/// [SerializeField]
/// @brief Field cycleDelay, offset: 0x28, size: 0x4, def value: None
 float_t  ___cycleDelay;

/// [Tooltip("If TRUE, Translation mode will move from End to Start; Rotation mode will rotate in the negative direction.")]
/// [SerializeField]
/// @brief Field reverseDir, offset: 0x2c, size: 0x1, def value: None
 bool  ___reverseDir;

/// [Tooltip("If TRUE, Translation mode movement direction will be reversed when it reaches Start or End; Rotation mode rotation direction will be reversed once it\'s rotated the full Rotation Amount")]
/// [SerializeField]
/// @brief Field reverseDirOnCycle, offset: 0x2d, size: 0x1, def value: None
 bool  ___reverseDirOnCycle;

/// [Nullable(2)]
/// [SerializeField]
/// @brief Field start, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___start;

/// [Nullable(2)]
/// [SerializeField]
/// @brief Field end, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___end;

/// [Tooltip("Which local axis should the object rotate around?")]
/// [SerializeField]
/// @brief Field rotationAxis, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::SurfaceMoverSettings_RotationAxis  ___rotationAxis;

/// [Range(0.001, 360)]
/// [Tooltip("How far should the object rotate per-cycle (in degrees)")]
/// [SerializeField]
/// @brief Field rotationAmount, offset: 0x44, size: 0x4, def value: None
 float_t  ___rotationAmount;

/// [Tooltip("If TRUE the rotation starting point will be the initial Y-axis rotation value of the object when the map is loaded, otherwise it will start at 0")]
/// [SerializeField]
/// @brief Field rotationRelativeToStarting, offset: 0x48, size: 0x1, def value: None
 bool  ___rotationRelativeToStarting;

/// @brief Field hasBeenExported, offset: 0x49, size: 0x1, def value: None
 bool  ___hasBeenExported;

/// [Nullable(2)]
/// @brief Field lerpAlpha, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___lerpAlpha;

/// @brief Field startingRotation, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startingRotation;

/// @brief Field cycleDuration, offset: 0x64, size: 0x4, def value: None
 float_t  ___cycleDuration;

/// @brief Field distance, offset: 0x68, size: 0x4, def value: None
 float_t  ___distance;

/// @brief Field currT, offset: 0x6c, size: 0x4, def value: None
 float_t  ___currT;

/// @brief Field percent, offset: 0x70, size: 0x4, def value: None
 float_t  ___percent;

/// @brief Field currForward, offset: 0x74, size: 0x1, def value: None
 bool  ___currForward;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___moveType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___velocity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___cycleDelay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___reverseDir) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___reverseDirOnCycle) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___start) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___end) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___rotationAxis) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___rotationAmount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___rotationRelativeToStarting) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___hasBeenExported) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___lerpAlpha) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___startingRotation) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___cycleDuration) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___distance) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___currT) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___percent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings, ___currForward) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::SurfaceMoverSettings) == 0x78, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
