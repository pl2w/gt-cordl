#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineGroupFraming.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupFraming_FramingModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupFraming_LateralAdjustmentModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupFraming_SizeAdjustmentModes_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineGroupFraming)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachineGroupFraming_FramingModes;
}
namespace GlobalNamespace {
struct CinemachineGroupFraming_LateralAdjustmentModes;
}
namespace GlobalNamespace {
struct CinemachineGroupFraming_SizeAdjustmentModes;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineConfiner2D;
}
namespace Unity::Cinemachine {
class CinemachineGroupFraming_VcamExtraState;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class ICinemachineTargetGroup;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineGroupFraming;
}
namespace Unity::Cinemachine {
class CinemachineGroupFraming_VcamExtraState;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineGroupFraming*);
MARK_REF_T(::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineGroupFraming*, "Unity.Cinemachine", "CinemachineGroupFraming");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState*, "Unity.Cinemachine", "CinemachineGroupFraming/VcamExtraState");
// [AddComponentMenu("Cinemachine/Procedural/Extensions/Cinemachine Group Framing")]
// [ExecuteAlways]
// [SaveDuringPlay]
// [RequiredTarget((Unity.Cinemachine.RequiredTargetAttribute::RequiredTargets)3)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineGroupFraming.html")]
// Dependencies Unity.Cinemachine.CinemachineExtension, Unity.Cinemachine.CinemachineGroupFraming::FramingModes, Unity.Cinemachine.CinemachineGroupFraming::LateralAdjustmentModes, Unity.Cinemachine.CinemachineGroupFraming::SizeAdjustmentModes, UnityEngine.Bounds, UnityEngine.Matrix4x4, UnityEngine.Vector2
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineGroupFraming
class CORDL_TYPE CinemachineGroupFraming : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
using FramingModes = ::GlobalNamespace::CinemachineGroupFraming_FramingModes;

using LateralAdjustmentModes = ::GlobalNamespace::CinemachineGroupFraming_LateralAdjustmentModes;

using SizeAdjustmentModes = ::GlobalNamespace::CinemachineGroupFraming_SizeAdjustmentModes;

using VcamExtraState = ::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState;

/// @brief Field CenterOffset, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_CenterOffset, put=__cordl_internal_set_CenterOffset)) ::UnityEngine::Vector2  CenterOffset;

/// @brief Field Damping, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_Damping, put=__cordl_internal_set_Damping)) float_t  Damping;

/// @brief Field DollyRange, offset 0x54, size 0x8 
 __declspec(property(get=__cordl_internal_get_DollyRange, put=__cordl_internal_set_DollyRange)) ::UnityEngine::Vector2  DollyRange;

/// @brief Field FovRange, offset 0x4c, size 0x8 
 __declspec(property(get=__cordl_internal_get_FovRange, put=__cordl_internal_set_FovRange)) ::UnityEngine::Vector2  FovRange;

/// @brief Field FramingMode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_FramingMode, put=__cordl_internal_set_FramingMode)) ::GlobalNamespace::CinemachineGroupFraming_FramingModes  FramingMode;

/// @brief Field FramingSize, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_FramingSize, put=__cordl_internal_set_FramingSize)) float_t  FramingSize;

/// @brief Field GroupBounds, offset 0x64, size 0x18 
 __declspec(property(get=__cordl_internal_get_GroupBounds, put=__cordl_internal_set_GroupBounds)) ::UnityEngine::Bounds  GroupBounds;

/// @brief Field GroupBoundsMatrix, offset 0x7c, size 0x40 
 __declspec(property(get=__cordl_internal_get_GroupBoundsMatrix, put=__cordl_internal_set_GroupBoundsMatrix)) ::UnityEngine::Matrix4x4  GroupBoundsMatrix;

/// @brief Field LateralAdjustment, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_LateralAdjustment, put=__cordl_internal_set_LateralAdjustment)) ::GlobalNamespace::CinemachineGroupFraming_LateralAdjustmentModes  LateralAdjustment;

/// @brief Field OrthoSizeRange, offset 0x5c, size 0x8 
 __declspec(property(get=__cordl_internal_get_OrthoSizeRange, put=__cordl_internal_set_OrthoSizeRange)) ::UnityEngine::Vector2  OrthoSizeRange;

/// @brief Field SizeAdjustment, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_SizeAdjustment, put=__cordl_internal_set_SizeAdjustment)) ::GlobalNamespace::CinemachineGroupFraming_SizeAdjustmentModes  SizeAdjustment;

/// @brief Method AdjustSize, addr 0xae95c6c, size 0x1b8, virtual false, abstract: false, final false
inline void AdjustSize(::Unity::Cinemachine::ICinemachineTargetGroup*  group, float_t  aspect, ::by_ref<::UnityEngine::Vector3>  camPos, ::by_ref<::UnityEngine::Quaternion>  camRot, ::by_ref<float_t>  fov, ::by_ref<float_t>  dollyAmount) ;

/// @brief Method ComputeCameraViewGroupBounds, addr 0xae95328, size 0x944, virtual false, abstract: false, final false
inline void ComputeCameraViewGroupBounds(::Unity::Cinemachine::ICinemachineTargetGroup*  group, ::by_ref<::UnityEngine::Vector3>  camPos, ::by_ref<::UnityEngine::Quaternion>  camRot, bool  moveCamera) ;

/// @brief Method GetFrameHeight, addr 0xae952b8, size 0x70, virtual false, abstract: false, final false
inline float_t GetFrameHeight(::UnityEngine::Vector2  boundsSize, float_t  aspect) ;

/// @brief Method GetMaxDampTime, addr 0xae94164, size 0x8, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

static inline ::Unity::Cinemachine::CinemachineGroupFraming* New_ctor() ;

/// @brief Method OnValidate, addr 0xae94044, size 0x94, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method OrthoFraming, addr 0xae944f0, size 0x3dc, virtual false, abstract: false, final false
inline void OrthoFraming(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::Unity::Cinemachine::ICinemachineTargetGroup*  group, ::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState*  extra, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method PerspectiveFraming, addr 0xae948cc, size 0x9ec, virtual false, abstract: false, final false
inline void PerspectiveFraming(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::Unity::Cinemachine::ICinemachineTargetGroup*  group, ::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState*  extra, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method PostPipelineStageCallback, addr 0xae9416c, size 0x2ec, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xae940d8, size 0x8c, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_CenterOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_CenterOffset() ;

constexpr float_t const& __cordl_internal_get_Damping() const;

constexpr float_t& __cordl_internal_get_Damping() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_DollyRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_DollyRange() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_FovRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_FovRange() ;

constexpr ::GlobalNamespace::CinemachineGroupFraming_FramingModes const& __cordl_internal_get_FramingMode() const;

constexpr ::GlobalNamespace::CinemachineGroupFraming_FramingModes& __cordl_internal_get_FramingMode() ;

constexpr float_t const& __cordl_internal_get_FramingSize() const;

constexpr float_t& __cordl_internal_get_FramingSize() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_GroupBounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_GroupBounds() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_GroupBoundsMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_GroupBoundsMatrix() ;

constexpr ::GlobalNamespace::CinemachineGroupFraming_LateralAdjustmentModes const& __cordl_internal_get_LateralAdjustment() const;

constexpr ::GlobalNamespace::CinemachineGroupFraming_LateralAdjustmentModes& __cordl_internal_get_LateralAdjustment() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_OrthoSizeRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_OrthoSizeRange() ;

constexpr ::GlobalNamespace::CinemachineGroupFraming_SizeAdjustmentModes const& __cordl_internal_get_SizeAdjustment() const;

constexpr ::GlobalNamespace::CinemachineGroupFraming_SizeAdjustmentModes& __cordl_internal_get_SizeAdjustment() ;

constexpr void __cordl_internal_set_CenterOffset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_Damping(float_t  value) ;

constexpr void __cordl_internal_set_DollyRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_FovRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_FramingMode(::GlobalNamespace::CinemachineGroupFraming_FramingModes  value) ;

constexpr void __cordl_internal_set_FramingSize(float_t  value) ;

constexpr void __cordl_internal_set_GroupBounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_GroupBoundsMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_LateralAdjustment(::GlobalNamespace::CinemachineGroupFraming_LateralAdjustmentModes  value) ;

constexpr void __cordl_internal_set_OrthoSizeRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_SizeAdjustment(::GlobalNamespace::CinemachineGroupFraming_SizeAdjustmentModes  value) ;

/// @brief Method .ctor, addr 0xae95e24, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineGroupFraming() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineGroupFraming", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineGroupFraming(CinemachineGroupFraming && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineGroupFraming", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineGroupFraming(CinemachineGroupFraming const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22191};

/// @brief Field k_MinimumGroupSize offset 0xffffffff size 0x4
static constexpr float_t  k_MinimumGroupSize{static_cast<float_t>(0.01f)};

/// [Tooltip("What screen dimensions to consider when framing.  Can be Horizontal, Vertical, or both")]
/// @brief Field FramingMode, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineGroupFraming_FramingModes  ___FramingMode;

/// [Tooltip("The bounding box of the targets should occupy this amount of the screen space.  1 means fill the whole screen.  0.5 means fill half the screen, etc.")]
/// [Range(0, 2)]
/// @brief Field FramingSize, offset: 0x34, size: 0x4, def value: None
 float_t  ___FramingSize;

/// [Tooltip("A nonzero value will offset the group in the camera frame.")]
/// @brief Field CenterOffset, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___CenterOffset;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to frame the group. Small numbers are more responsive, rapidly adjusting the camera to keep the group in the frame.  Larger numbers give a heavier more slowly responding camera.")]
/// @brief Field Damping, offset: 0x40, size: 0x4, def value: None
 float_t  ___Damping;

/// [Tooltip("How to adjust the camera to get the desired framing size.  You can zoom, dolly in/out, or do both.")]
/// @brief Field SizeAdjustment, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineGroupFraming_SizeAdjustmentModes  ___SizeAdjustment;

/// [Tooltip("How to adjust the camera to get the desired horizontal and vertical framing.")]
/// @brief Field LateralAdjustment, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineGroupFraming_LateralAdjustmentModes  ___LateralAdjustment;

/// [Tooltip("Allowable FOV range, if adjusting FOV.")]
/// [MinMaxRangeSlider(1, 179)]
/// @brief Field FovRange, offset: 0x4c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___FovRange;

/// [Tooltip("Allowable range for the camera to move.  0 is the undollied position.  Negative values move the camera closer to the target.")]
/// [Vector2AsRange]
/// @brief Field DollyRange, offset: 0x54, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___DollyRange;

/// [Tooltip("Allowable orthographic size range, if adjusting orthographic size.")]
/// [Vector2AsRange]
/// @brief Field OrthoSizeRange, offset: 0x5c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___OrthoSizeRange;

/// @brief Field GroupBounds, offset: 0x64, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___GroupBounds;

/// @brief Field GroupBoundsMatrix, offset: 0x7c, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___GroupBoundsMatrix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupFraming, ___FramingMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupFraming, ___FramingSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupFraming, ___CenterOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupFraming, ___Damping) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupFraming, ___SizeAdjustment) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupFraming, ___LateralAdjustment) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupFraming, ___FovRange) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupFraming, ___DollyRange) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupFraming, ___OrthoSizeRange) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupFraming, ___GroupBounds) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupFraming, ___GroupBoundsMatrix) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineGroupFraming) == 0xc0, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.CinemachineCore::Stage, Unity.Cinemachine.CinemachineExtension::VcamExtraStateBase, UnityEngine.Vector2, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineGroupFraming/VcamExtraState
class CORDL_TYPE CinemachineGroupFraming_VcamExtraState : public ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase {
public:
// Declarations
/// @brief Field Confiner, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Confiner, put=__cordl_internal_set_Confiner)) ::UnityW<::Unity::Cinemachine::CinemachineConfiner2D>  Confiner;

/// @brief Field FovAdjustment, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_FovAdjustment, put=__cordl_internal_set_FovAdjustment)) float_t  FovAdjustment;

/// @brief Field PosAdjustment, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_PosAdjustment, put=__cordl_internal_set_PosAdjustment)) ::UnityEngine::Vector3  PosAdjustment;

/// @brief Field PreviousOrthoSize, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_PreviousOrthoSize, put=__cordl_internal_set_PreviousOrthoSize)) float_t  PreviousOrthoSize;

/// @brief Field RotAdjustment, offset 0x24, size 0x8 
 __declspec(property(get=__cordl_internal_get_RotAdjustment, put=__cordl_internal_set_RotAdjustment)) ::UnityEngine::Vector2  RotAdjustment;

/// @brief Field Stage, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Stage, put=__cordl_internal_set_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

static inline ::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState* New_ctor() ;

/// @brief Method Reset, addr 0xae94458, size 0x98, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineConfiner2D> const& __cordl_internal_get_Confiner() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineConfiner2D>& __cordl_internal_get_Confiner() ;

constexpr float_t const& __cordl_internal_get_FovAdjustment() const;

constexpr float_t& __cordl_internal_get_FovAdjustment() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PosAdjustment() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PosAdjustment() ;

constexpr float_t const& __cordl_internal_get_PreviousOrthoSize() const;

constexpr float_t& __cordl_internal_get_PreviousOrthoSize() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_RotAdjustment() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_RotAdjustment() ;

constexpr ::GlobalNamespace::CinemachineCore_Stage const& __cordl_internal_get_Stage() const;

constexpr ::GlobalNamespace::CinemachineCore_Stage& __cordl_internal_get_Stage() ;

constexpr void __cordl_internal_set_Confiner(::UnityW<::Unity::Cinemachine::CinemachineConfiner2D>  value) ;

constexpr void __cordl_internal_set_FovAdjustment(float_t  value) ;

constexpr void __cordl_internal_set_PosAdjustment(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_PreviousOrthoSize(float_t  value) ;

constexpr void __cordl_internal_set_RotAdjustment(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_Stage(::GlobalNamespace::CinemachineCore_Stage  value) ;

/// @brief Method .ctor, addr 0xae95eb0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineGroupFraming_VcamExtraState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineGroupFraming_VcamExtraState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineGroupFraming_VcamExtraState(CinemachineGroupFraming_VcamExtraState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineGroupFraming_VcamExtraState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineGroupFraming_VcamExtraState(CinemachineGroupFraming_VcamExtraState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22190};

/// @brief Field PosAdjustment, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PosAdjustment;

/// @brief Field RotAdjustment, offset: 0x24, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___RotAdjustment;

/// @brief Field FovAdjustment, offset: 0x2c, size: 0x4, def value: None
 float_t  ___FovAdjustment;

/// @brief Field Stage, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineCore_Stage  ___Stage;

/// @brief Field Confiner, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineConfiner2D>  ___Confiner;

/// @brief Field PreviousOrthoSize, offset: 0x40, size: 0x4, def value: None
 float_t  ___PreviousOrthoSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState, ___PosAdjustment) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState, ___RotAdjustment) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState, ___FovAdjustment) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState, ___Stage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState, ___Confiner) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState, ___PreviousOrthoSize) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState) == 0x48, "Size mismatch!");

} // namespace end def Unity::Cinemachine
