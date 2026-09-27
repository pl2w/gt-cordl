#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineGroupComposer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineComposer_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupComposer_AdjustmentMode_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupComposer_FramingMode_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineGroupComposer)
namespace GlobalNamespace {
struct CinemachineGroupComposer_AdjustmentMode;
}
namespace GlobalNamespace {
struct CinemachineGroupComposer_FramingMode;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineGroupFraming;
}
namespace Unity::Cinemachine {
class ICinemachineTargetGroup;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineGroupComposer;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineGroupComposer*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineGroupComposer*, "Unity.Cinemachine", "CinemachineGroupComposer");
// [Obsolete("CinemachineGroupTransposer has been deprecated. Use CinemachineRotationComposer and CinemachineGroupFraming instead")]
// [AddComponentMenu("")]
// [SaveDuringPlay]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)1)]
// Dependencies Unity.Cinemachine.CinemachineComposer, Unity.Cinemachine.CinemachineGroupComposer::AdjustmentMode, Unity.Cinemachine.CinemachineGroupComposer::FramingMode, UnityEngine.Bounds, UnityEngine.Matrix4x4
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineGroupComposer
class CORDL_TYPE CinemachineGroupComposer : public ::Unity::Cinemachine::CinemachineComposer {
public:
// Declarations
using AdjustmentMode = ::GlobalNamespace::CinemachineGroupComposer_AdjustmentMode;

using FramingMode = ::GlobalNamespace::CinemachineGroupComposer_FramingMode;

 __declspec(property(get=get_LastBounds, put=set_LastBounds)) ::UnityEngine::Bounds  LastBounds;

 __declspec(property(get=get_LastBoundsMatrix, put=set_LastBoundsMatrix)) ::UnityEngine::Matrix4x4  LastBoundsMatrix;

/// @brief Field <LastBoundsMatrix>k__BackingField, offset 0x174, size 0x40 
 __declspec(property(get=__cordl_internal_get__LastBoundsMatrix_k__BackingField, put=__cordl_internal_set__LastBoundsMatrix_k__BackingField)) ::UnityEngine::Matrix4x4  _LastBoundsMatrix_k__BackingField;

/// @brief Field <LastBounds>k__BackingField, offset 0x15c, size 0x18 
 __declspec(property(get=__cordl_internal_get__LastBounds_k__BackingField, put=__cordl_internal_set__LastBounds_k__BackingField)) ::UnityEngine::Bounds  _LastBounds_k__BackingField;

/// @brief Field m_AdjustmentMode, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AdjustmentMode, put=__cordl_internal_set_m_AdjustmentMode)) ::GlobalNamespace::CinemachineGroupComposer_AdjustmentMode  m_AdjustmentMode;

/// @brief Field m_FrameDamping, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FrameDamping, put=__cordl_internal_set_m_FrameDamping)) float_t  m_FrameDamping;

/// @brief Field m_FramingMode, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FramingMode, put=__cordl_internal_set_m_FramingMode)) ::GlobalNamespace::CinemachineGroupComposer_FramingMode  m_FramingMode;

/// @brief Field m_GroupFramingSize, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GroupFramingSize, put=__cordl_internal_set_m_GroupFramingSize)) float_t  m_GroupFramingSize;

/// @brief Field m_MaxDollyIn, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxDollyIn, put=__cordl_internal_set_m_MaxDollyIn)) float_t  m_MaxDollyIn;

/// @brief Field m_MaxDollyOut, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxDollyOut, put=__cordl_internal_set_m_MaxDollyOut)) float_t  m_MaxDollyOut;

/// @brief Field m_MaximumDistance, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaximumDistance, put=__cordl_internal_set_m_MaximumDistance)) float_t  m_MaximumDistance;

/// @brief Field m_MaximumFOV, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaximumFOV, put=__cordl_internal_set_m_MaximumFOV)) float_t  m_MaximumFOV;

/// @brief Field m_MaximumOrthoSize, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaximumOrthoSize, put=__cordl_internal_set_m_MaximumOrthoSize)) float_t  m_MaximumOrthoSize;

/// @brief Field m_MinimumDistance, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinimumDistance, put=__cordl_internal_set_m_MinimumDistance)) float_t  m_MinimumDistance;

/// @brief Field m_MinimumFOV, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinimumFOV, put=__cordl_internal_set_m_MinimumFOV)) float_t  m_MinimumFOV;

/// @brief Field m_MinimumOrthoSize, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinimumOrthoSize, put=__cordl_internal_set_m_MinimumOrthoSize)) float_t  m_MinimumOrthoSize;

/// @brief Field m_prevFOV, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_prevFOV, put=__cordl_internal_set_m_prevFOV)) float_t  m_prevFOV;

/// @brief Field m_prevFramingDistance, offset 0x154, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_prevFramingDistance, put=__cordl_internal_set_m_prevFramingDistance)) float_t  m_prevFramingDistance;

/// @brief Method GetMaxDampTime, addr 0xaed272c, size 0x24, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method GetScreenSpaceGroupBoundingBox, addr 0xaed30b8, size 0x2d0, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds GetScreenSpaceGroupBoundingBox(::Unity::Cinemachine::ICinemachineTargetGroup*  group, ::UnityEngine::Matrix4x4  observer, ::by_ref<::UnityEngine::Vector3>  newFwd) ;

/// @brief Method GetTargetHeight, addr 0xaed3388, size 0x100, virtual false, abstract: false, final false
inline float_t GetTargetHeight(::UnityEngine::Vector2  boundsSize) ;

/// @brief Method MutateCameraState, addr 0xaed2750, size 0x968, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineGroupComposer* New_ctor() ;

/// @brief Method OnValidate, addr 0xaed25f4, size 0x9c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Reset, addr 0xaed2690, size 0x3c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method UpgradeToCm3, addr 0xaed3488, size 0x5c, virtual false, abstract: false, final false
inline void UpgradeToCm3(::Unity::Cinemachine::CinemachineGroupFraming*  c) ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__LastBoundsMatrix_k__BackingField() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__LastBoundsMatrix_k__BackingField() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get__LastBounds_k__BackingField() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get__LastBounds_k__BackingField() ;

constexpr ::GlobalNamespace::CinemachineGroupComposer_AdjustmentMode const& __cordl_internal_get_m_AdjustmentMode() const;

constexpr ::GlobalNamespace::CinemachineGroupComposer_AdjustmentMode& __cordl_internal_get_m_AdjustmentMode() ;

constexpr float_t const& __cordl_internal_get_m_FrameDamping() const;

constexpr float_t& __cordl_internal_get_m_FrameDamping() ;

constexpr ::GlobalNamespace::CinemachineGroupComposer_FramingMode const& __cordl_internal_get_m_FramingMode() const;

constexpr ::GlobalNamespace::CinemachineGroupComposer_FramingMode& __cordl_internal_get_m_FramingMode() ;

constexpr float_t const& __cordl_internal_get_m_GroupFramingSize() const;

constexpr float_t& __cordl_internal_get_m_GroupFramingSize() ;

constexpr float_t const& __cordl_internal_get_m_MaxDollyIn() const;

constexpr float_t& __cordl_internal_get_m_MaxDollyIn() ;

constexpr float_t const& __cordl_internal_get_m_MaxDollyOut() const;

constexpr float_t& __cordl_internal_get_m_MaxDollyOut() ;

constexpr float_t const& __cordl_internal_get_m_MaximumDistance() const;

constexpr float_t& __cordl_internal_get_m_MaximumDistance() ;

constexpr float_t const& __cordl_internal_get_m_MaximumFOV() const;

constexpr float_t& __cordl_internal_get_m_MaximumFOV() ;

constexpr float_t const& __cordl_internal_get_m_MaximumOrthoSize() const;

constexpr float_t& __cordl_internal_get_m_MaximumOrthoSize() ;

constexpr float_t const& __cordl_internal_get_m_MinimumDistance() const;

constexpr float_t& __cordl_internal_get_m_MinimumDistance() ;

constexpr float_t const& __cordl_internal_get_m_MinimumFOV() const;

constexpr float_t& __cordl_internal_get_m_MinimumFOV() ;

constexpr float_t const& __cordl_internal_get_m_MinimumOrthoSize() const;

constexpr float_t& __cordl_internal_get_m_MinimumOrthoSize() ;

constexpr float_t const& __cordl_internal_get_m_prevFOV() const;

constexpr float_t& __cordl_internal_get_m_prevFOV() ;

constexpr float_t const& __cordl_internal_get_m_prevFramingDistance() const;

constexpr float_t& __cordl_internal_get_m_prevFramingDistance() ;

constexpr void __cordl_internal_set__LastBoundsMatrix_k__BackingField(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set__LastBounds_k__BackingField(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_m_AdjustmentMode(::GlobalNamespace::CinemachineGroupComposer_AdjustmentMode  value) ;

constexpr void __cordl_internal_set_m_FrameDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_FramingMode(::GlobalNamespace::CinemachineGroupComposer_FramingMode  value) ;

constexpr void __cordl_internal_set_m_GroupFramingSize(float_t  value) ;

constexpr void __cordl_internal_set_m_MaxDollyIn(float_t  value) ;

constexpr void __cordl_internal_set_m_MaxDollyOut(float_t  value) ;

constexpr void __cordl_internal_set_m_MaximumDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_MaximumFOV(float_t  value) ;

constexpr void __cordl_internal_set_m_MaximumOrthoSize(float_t  value) ;

constexpr void __cordl_internal_set_m_MinimumDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_MinimumFOV(float_t  value) ;

constexpr void __cordl_internal_set_m_MinimumOrthoSize(float_t  value) ;

constexpr void __cordl_internal_set_m_prevFOV(float_t  value) ;

constexpr void __cordl_internal_set_m_prevFramingDistance(float_t  value) ;

/// @brief Method .ctor, addr 0xaed34e4, size 0x3c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_LastBounds, addr 0xaed26cc, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_LastBounds() ;

/// [CompilerGenerated]
/// @brief Method get_LastBoundsMatrix, addr 0xaed26fc, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_LastBoundsMatrix() ;

/// [CompilerGenerated]
/// @brief Method set_LastBounds, addr 0xaed26e4, size 0x18, virtual false, abstract: false, final false
inline void set_LastBounds(::UnityEngine::Bounds  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastBoundsMatrix, addr 0xaed2714, size 0x18, virtual false, abstract: false, final false
inline void set_LastBoundsMatrix(::UnityEngine::Matrix4x4  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineGroupComposer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineGroupComposer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineGroupComposer(CinemachineGroupComposer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineGroupComposer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineGroupComposer(CinemachineGroupComposer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22414};

/// [Tooltip("The bounding box of the targets should occupy this amount of the screen space.  1 means fill the whole screen.  0.5 means fill half the screen, etc.")]
/// @brief Field m_GroupFramingSize, offset: 0x124, size: 0x4, def value: None
 float_t  ___m_GroupFramingSize;

/// [Tooltip("What screen dimensions to consider when framing.  Can be Horizontal, Vertical, or both")]
/// @brief Field m_FramingMode, offset: 0x128, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineGroupComposer_FramingMode  ___m_FramingMode;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to frame the group. Small numbers are more responsive, rapidly adjusting the camera to keep the group in the frame.  Larger numbers give a heavier more slowly responding camera.")]
/// @brief Field m_FrameDamping, offset: 0x12c, size: 0x4, def value: None
 float_t  ___m_FrameDamping;

/// [Tooltip("How to adjust the camera to get the desired framing.  You can zoom, dolly in/out, or do both.")]
/// @brief Field m_AdjustmentMode, offset: 0x130, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineGroupComposer_AdjustmentMode  ___m_AdjustmentMode;

/// [Tooltip("The maximum distance toward the target that this behaviour is allowed to move the camera.")]
/// @brief Field m_MaxDollyIn, offset: 0x134, size: 0x4, def value: None
 float_t  ___m_MaxDollyIn;

/// [Tooltip("The maximum distance away the target that this behaviour is allowed to move the camera.")]
/// @brief Field m_MaxDollyOut, offset: 0x138, size: 0x4, def value: None
 float_t  ___m_MaxDollyOut;

/// [Tooltip("Set this to limit how close to the target the camera can get.")]
/// @brief Field m_MinimumDistance, offset: 0x13c, size: 0x4, def value: None
 float_t  ___m_MinimumDistance;

/// [Tooltip("Set this to limit how far from the target the camera can get.")]
/// @brief Field m_MaximumDistance, offset: 0x140, size: 0x4, def value: None
 float_t  ___m_MaximumDistance;

/// [Range(1, 179)]
/// [Tooltip("If adjusting FOV, will not set the FOV lower than this.")]
/// @brief Field m_MinimumFOV, offset: 0x144, size: 0x4, def value: None
 float_t  ___m_MinimumFOV;

/// [Range(1, 179)]
/// [Tooltip("If adjusting FOV, will not set the FOV higher than this.")]
/// @brief Field m_MaximumFOV, offset: 0x148, size: 0x4, def value: None
 float_t  ___m_MaximumFOV;

/// [Tooltip("If adjusting Orthographic Size, will not set it lower than this.")]
/// @brief Field m_MinimumOrthoSize, offset: 0x14c, size: 0x4, def value: None
 float_t  ___m_MinimumOrthoSize;

/// [Tooltip("If adjusting Orthographic Size, will not set it higher than this.")]
/// @brief Field m_MaximumOrthoSize, offset: 0x150, size: 0x4, def value: None
 float_t  ___m_MaximumOrthoSize;

/// @brief Field m_prevFramingDistance, offset: 0x154, size: 0x4, def value: None
 float_t  ___m_prevFramingDistance;

/// @brief Field m_prevFOV, offset: 0x158, size: 0x4, def value: None
 float_t  ___m_prevFOV;

/// [CompilerGenerated]
/// @brief Field <LastBounds>k__BackingField, offset: 0x15c, size: 0x18, def value: None
 ::UnityEngine::Bounds  ____LastBounds_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LastBoundsMatrix>k__BackingField, offset: 0x174, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ____LastBoundsMatrix_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupComposer, ___m_GroupFramingSize) == 0x124, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupComposer, ___m_FramingMode) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupComposer, ___m_FrameDamping) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupComposer, ___m_AdjustmentMode) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupComposer, ___m_MaxDollyIn) == 0x134, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupComposer, ___m_MaxDollyOut) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupComposer, ___m_MinimumDistance) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupComposer, ___m_MaximumDistance) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupComposer, ___m_MinimumFOV) == 0x144, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupComposer, ___m_MaximumFOV) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupComposer, ___m_MinimumOrthoSize) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupComposer, ___m_MaximumOrthoSize) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupComposer, ___m_prevFramingDistance) == 0x154, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupComposer, ___m_prevFOV) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupComposer, ____LastBounds_k__BackingField) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupComposer, ____LastBoundsMatrix_k__BackingField) == 0x174, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineGroupComposer) == 0x1b8, "Size mismatch!");

} // namespace end def Unity::Cinemachine
