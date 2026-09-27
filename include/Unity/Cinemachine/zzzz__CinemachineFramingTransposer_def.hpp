#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFramingTransposer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFramingTransposer_AdjustmentMode_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFramingTransposer_FramingMode_def.hpp"
#include "Unity/Cinemachine/zzzz__PositionPredictor_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineFramingTransposer)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachineFramingTransposer_AdjustmentMode;
}
namespace GlobalNamespace {
struct CinemachineFramingTransposer_FramingMode;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineGroupFraming;
}
namespace Unity::Cinemachine {
class CinemachinePositionComposer;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace Unity::Cinemachine {
class ICinemachineTargetGroup;
}
namespace Unity::Cinemachine {
struct ScreenComposerSettings;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineFramingTransposer;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineFramingTransposer*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineFramingTransposer*, "Unity.Cinemachine", "CinemachineFramingTransposer");
// [AddComponentMenu("")]
// [Obsolete("CinemachineFramingTransposer has been deprecated. Use CinemachinePositionComposer instead")]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)0)]
// [SaveDuringPlay]
// Dependencies Unity.Cinemachine.CinemachineComponentBase, Unity.Cinemachine.CinemachineFramingTransposer::AdjustmentMode, Unity.Cinemachine.CinemachineFramingTransposer::FramingMode, Unity.Cinemachine.PositionPredictor, UnityEngine.Bounds, UnityEngine.Matrix4x4, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineFramingTransposer
class CORDL_TYPE CinemachineFramingTransposer : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
using AdjustmentMode = ::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode;

using FramingMode = ::GlobalNamespace::CinemachineFramingTransposer_FramingMode;

 __declspec(property(get=get_BodyAppliesAfterAim)) bool  BodyAppliesAfterAim;

 __declspec(property(get=get_Composition, put=set_Composition)) ::Unity::Cinemachine::ScreenComposerSettings  Composition;

 __declspec(property(get=get_HardGuideRect, put=set_HardGuideRect)) ::UnityEngine::Rect  HardGuideRect;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_LastBounds, put=set_LastBounds)) ::UnityEngine::Bounds  LastBounds;

 __declspec(property(get=get_LastBoundsMatrix, put=set_LastBoundsMatrix)) ::UnityEngine::Matrix4x4  LastBoundsMatrix;

 __declspec(property(get=get_SoftGuideRect, put=set_SoftGuideRect)) ::UnityEngine::Rect  SoftGuideRect;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

 __declspec(property(get=get_TrackedPoint, put=set_TrackedPoint)) ::UnityEngine::Vector3  TrackedPoint;

/// @brief Field <LastBoundsMatrix>k__BackingField, offset 0x120, size 0x40 
 __declspec(property(get=__cordl_internal_get__LastBoundsMatrix_k__BackingField, put=__cordl_internal_set__LastBoundsMatrix_k__BackingField)) ::UnityEngine::Matrix4x4  _LastBoundsMatrix_k__BackingField;

/// @brief Field <LastBounds>k__BackingField, offset 0x108, size 0x18 
 __declspec(property(get=__cordl_internal_get__LastBounds_k__BackingField, put=__cordl_internal_set__LastBounds_k__BackingField)) ::UnityEngine::Bounds  _LastBounds_k__BackingField;

/// @brief Field <TrackedPoint>k__BackingField, offset 0xe4, size 0xc 
 __declspec(property(get=__cordl_internal_get__TrackedPoint_k__BackingField, put=__cordl_internal_set__TrackedPoint_k__BackingField)) ::UnityEngine::Vector3  _TrackedPoint_k__BackingField;

/// @brief Field m_AdjustmentMode, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AdjustmentMode, put=__cordl_internal_set_m_AdjustmentMode)) ::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode  m_AdjustmentMode;

/// @brief Field m_BiasX, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BiasX, put=__cordl_internal_set_m_BiasX)) float_t  m_BiasX;

/// @brief Field m_BiasY, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BiasY, put=__cordl_internal_set_m_BiasY)) float_t  m_BiasY;

/// @brief Field m_CameraDistance, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CameraDistance, put=__cordl_internal_set_m_CameraDistance)) float_t  m_CameraDistance;

/// @brief Field m_CenterOnActivate, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CenterOnActivate, put=__cordl_internal_set_m_CenterOnActivate)) bool  m_CenterOnActivate;

/// @brief Field m_DeadZoneDepth, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DeadZoneDepth, put=__cordl_internal_set_m_DeadZoneDepth)) float_t  m_DeadZoneDepth;

/// @brief Field m_DeadZoneHeight, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DeadZoneHeight, put=__cordl_internal_set_m_DeadZoneHeight)) float_t  m_DeadZoneHeight;

/// @brief Field m_DeadZoneWidth, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DeadZoneWidth, put=__cordl_internal_set_m_DeadZoneWidth)) float_t  m_DeadZoneWidth;

/// @brief Field m_GroupFramingMode, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GroupFramingMode, put=__cordl_internal_set_m_GroupFramingMode)) ::GlobalNamespace::CinemachineFramingTransposer_FramingMode  m_GroupFramingMode;

/// @brief Field m_GroupFramingSize, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GroupFramingSize, put=__cordl_internal_set_m_GroupFramingSize)) float_t  m_GroupFramingSize;

/// @brief Field m_InheritingPosition, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_InheritingPosition, put=__cordl_internal_set_m_InheritingPosition)) bool  m_InheritingPosition;

/// @brief Field m_LookaheadIgnoreY, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_LookaheadIgnoreY, put=__cordl_internal_set_m_LookaheadIgnoreY)) bool  m_LookaheadIgnoreY;

/// @brief Field m_LookaheadSmoothing, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LookaheadSmoothing, put=__cordl_internal_set_m_LookaheadSmoothing)) float_t  m_LookaheadSmoothing;

/// @brief Field m_LookaheadTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LookaheadTime, put=__cordl_internal_set_m_LookaheadTime)) float_t  m_LookaheadTime;

/// @brief Field m_MaxDollyIn, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxDollyIn, put=__cordl_internal_set_m_MaxDollyIn)) float_t  m_MaxDollyIn;

/// @brief Field m_MaxDollyOut, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxDollyOut, put=__cordl_internal_set_m_MaxDollyOut)) float_t  m_MaxDollyOut;

/// @brief Field m_MaximumDistance, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaximumDistance, put=__cordl_internal_set_m_MaximumDistance)) float_t  m_MaximumDistance;

/// @brief Field m_MaximumFOV, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaximumFOV, put=__cordl_internal_set_m_MaximumFOV)) float_t  m_MaximumFOV;

/// @brief Field m_MaximumOrthoSize, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaximumOrthoSize, put=__cordl_internal_set_m_MaximumOrthoSize)) float_t  m_MaximumOrthoSize;

/// @brief Field m_MinimumDistance, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinimumDistance, put=__cordl_internal_set_m_MinimumDistance)) float_t  m_MinimumDistance;

/// @brief Field m_MinimumFOV, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinimumFOV, put=__cordl_internal_set_m_MinimumFOV)) float_t  m_MinimumFOV;

/// @brief Field m_MinimumOrthoSize, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinimumOrthoSize, put=__cordl_internal_set_m_MinimumOrthoSize)) float_t  m_MinimumOrthoSize;

/// @brief Field m_Predictor, offset 0xb8, size 0x2c 
 __declspec(property(get=__cordl_internal_get_m_Predictor, put=__cordl_internal_set_m_Predictor)) ::Unity::Cinemachine::PositionPredictor  m_Predictor;

/// @brief Field m_PreviousCameraPosition, offset 0xac, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_PreviousCameraPosition, put=__cordl_internal_set_m_PreviousCameraPosition)) ::UnityEngine::Vector3  m_PreviousCameraPosition;

/// @brief Field m_ScreenX, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ScreenX, put=__cordl_internal_set_m_ScreenX)) float_t  m_ScreenX;

/// @brief Field m_ScreenY, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ScreenY, put=__cordl_internal_set_m_ScreenY)) float_t  m_ScreenY;

/// @brief Field m_SoftZoneHeight, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SoftZoneHeight, put=__cordl_internal_set_m_SoftZoneHeight)) float_t  m_SoftZoneHeight;

/// @brief Field m_SoftZoneWidth, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SoftZoneWidth, put=__cordl_internal_set_m_SoftZoneWidth)) float_t  m_SoftZoneWidth;

/// @brief Field m_TargetMovementOnly, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TargetMovementOnly, put=__cordl_internal_set_m_TargetMovementOnly)) bool  m_TargetMovementOnly;

/// @brief Field m_TrackedObjectOffset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_TrackedObjectOffset, put=__cordl_internal_set_m_TrackedObjectOffset)) ::UnityEngine::Vector3  m_TrackedObjectOffset;

/// @brief Field m_UnlimitedSoftZone, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UnlimitedSoftZone, put=__cordl_internal_set_m_UnlimitedSoftZone)) bool  m_UnlimitedSoftZone;

/// @brief Field m_XDamping, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_XDamping, put=__cordl_internal_set_m_XDamping)) float_t  m_XDamping;

/// @brief Field m_YDamping, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_YDamping, put=__cordl_internal_set_m_YDamping)) float_t  m_YDamping;

/// @brief Field m_ZDamping, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ZDamping, put=__cordl_internal_set_m_ZDamping)) float_t  m_ZDamping;

/// @brief Field m_prevFOV, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_prevFOV, put=__cordl_internal_set_m_prevFOV)) float_t  m_prevFOV;

/// @brief Field m_prevRotation, offset 0xf8, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_prevRotation, put=__cordl_internal_set_m_prevRotation)) ::UnityEngine::Quaternion  m_prevRotation;

/// @brief Method ComputeGroupBounds, addr 0xaecd3c0, size 0x3f8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ComputeGroupBounds(::Unity::Cinemachine::ICinemachineTargetGroup*  group, ::by_ref<::Unity::Cinemachine::CameraState>  curState) ;

/// @brief Method ForceCameraPosition, addr 0xaecc3e0, size 0x68, virtual true, abstract: false, final false
inline void ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetMaxDampTime, addr 0xaecc448, size 0x1c, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method GetScreenSpaceGroupBoundingBox, addr 0xaecd878, size 0x448, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds GetScreenSpaceGroupBoundingBox(::Unity::Cinemachine::ICinemachineTargetGroup*  group, ::by_ref<::UnityEngine::Vector3>  pos, ::UnityEngine::Quaternion  orientation) ;

/// @brief Method GetTargetHeight, addr 0xaecd7b8, size 0xc0, virtual false, abstract: false, final false
inline float_t GetTargetHeight(::UnityEngine::Vector2  boundsSize) ;

/// @brief Method MutateCameraState, addr 0xaecc768, size 0xc58, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineFramingTransposer* New_ctor() ;

/// @brief Method OnTargetObjectWarped, addr 0xaecc2e4, size 0xfc, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnTransitionFromCamera, addr 0xaecc464, size 0x1b8, virtual true, abstract: false, final false
inline bool OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method OnValidate, addr 0xaecc190, size 0x9c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method OrthoOffsetToScreenBounds, addr 0xaecc670, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 OrthoOffsetToScreenBounds(::UnityEngine::Vector3  targetPos2D, ::UnityEngine::Rect  screenRect) ;

/// @brief Method ScreenToOrtho, addr 0xaecc61c, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Rect ScreenToOrtho(::UnityEngine::Rect  rScreen, float_t  orthoSize, float_t  aspect) ;

/// @brief Method UpgradeToCm3, addr 0xaecde28, size 0x4c, virtual false, abstract: false, final false
inline void UpgradeToCm3(::Unity::Cinemachine::CinemachineGroupFraming*  c) ;

/// @brief Method UpgradeToCm3, addr 0xaecdd68, size 0xc0, virtual false, abstract: false, final false
inline void UpgradeToCm3(::Unity::Cinemachine::CinemachinePositionComposer*  c) ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__LastBoundsMatrix_k__BackingField() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__LastBoundsMatrix_k__BackingField() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get__LastBounds_k__BackingField() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get__LastBounds_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__TrackedPoint_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__TrackedPoint_k__BackingField() ;

constexpr ::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode const& __cordl_internal_get_m_AdjustmentMode() const;

constexpr ::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode& __cordl_internal_get_m_AdjustmentMode() ;

constexpr float_t const& __cordl_internal_get_m_BiasX() const;

constexpr float_t& __cordl_internal_get_m_BiasX() ;

constexpr float_t const& __cordl_internal_get_m_BiasY() const;

constexpr float_t& __cordl_internal_get_m_BiasY() ;

constexpr float_t const& __cordl_internal_get_m_CameraDistance() const;

constexpr float_t& __cordl_internal_get_m_CameraDistance() ;

constexpr bool const& __cordl_internal_get_m_CenterOnActivate() const;

constexpr bool& __cordl_internal_get_m_CenterOnActivate() ;

constexpr float_t const& __cordl_internal_get_m_DeadZoneDepth() const;

constexpr float_t& __cordl_internal_get_m_DeadZoneDepth() ;

constexpr float_t const& __cordl_internal_get_m_DeadZoneHeight() const;

constexpr float_t& __cordl_internal_get_m_DeadZoneHeight() ;

constexpr float_t const& __cordl_internal_get_m_DeadZoneWidth() const;

constexpr float_t& __cordl_internal_get_m_DeadZoneWidth() ;

constexpr ::GlobalNamespace::CinemachineFramingTransposer_FramingMode const& __cordl_internal_get_m_GroupFramingMode() const;

constexpr ::GlobalNamespace::CinemachineFramingTransposer_FramingMode& __cordl_internal_get_m_GroupFramingMode() ;

constexpr float_t const& __cordl_internal_get_m_GroupFramingSize() const;

constexpr float_t& __cordl_internal_get_m_GroupFramingSize() ;

constexpr bool const& __cordl_internal_get_m_InheritingPosition() const;

constexpr bool& __cordl_internal_get_m_InheritingPosition() ;

constexpr bool const& __cordl_internal_get_m_LookaheadIgnoreY() const;

constexpr bool& __cordl_internal_get_m_LookaheadIgnoreY() ;

constexpr float_t const& __cordl_internal_get_m_LookaheadSmoothing() const;

constexpr float_t& __cordl_internal_get_m_LookaheadSmoothing() ;

constexpr float_t const& __cordl_internal_get_m_LookaheadTime() const;

constexpr float_t& __cordl_internal_get_m_LookaheadTime() ;

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

constexpr ::Unity::Cinemachine::PositionPredictor const& __cordl_internal_get_m_Predictor() const;

constexpr ::Unity::Cinemachine::PositionPredictor& __cordl_internal_get_m_Predictor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PreviousCameraPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PreviousCameraPosition() ;

constexpr float_t const& __cordl_internal_get_m_ScreenX() const;

constexpr float_t& __cordl_internal_get_m_ScreenX() ;

constexpr float_t const& __cordl_internal_get_m_ScreenY() const;

constexpr float_t& __cordl_internal_get_m_ScreenY() ;

constexpr float_t const& __cordl_internal_get_m_SoftZoneHeight() const;

constexpr float_t& __cordl_internal_get_m_SoftZoneHeight() ;

constexpr float_t const& __cordl_internal_get_m_SoftZoneWidth() const;

constexpr float_t& __cordl_internal_get_m_SoftZoneWidth() ;

constexpr bool const& __cordl_internal_get_m_TargetMovementOnly() const;

constexpr bool& __cordl_internal_get_m_TargetMovementOnly() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_TrackedObjectOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_TrackedObjectOffset() ;

constexpr bool const& __cordl_internal_get_m_UnlimitedSoftZone() const;

constexpr bool& __cordl_internal_get_m_UnlimitedSoftZone() ;

constexpr float_t const& __cordl_internal_get_m_XDamping() const;

constexpr float_t& __cordl_internal_get_m_XDamping() ;

constexpr float_t const& __cordl_internal_get_m_YDamping() const;

constexpr float_t& __cordl_internal_get_m_YDamping() ;

constexpr float_t const& __cordl_internal_get_m_ZDamping() const;

constexpr float_t& __cordl_internal_get_m_ZDamping() ;

constexpr float_t const& __cordl_internal_get_m_prevFOV() const;

constexpr float_t& __cordl_internal_get_m_prevFOV() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_prevRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_prevRotation() ;

constexpr void __cordl_internal_set__LastBoundsMatrix_k__BackingField(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set__LastBounds_k__BackingField(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set__TrackedPoint_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_AdjustmentMode(::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode  value) ;

constexpr void __cordl_internal_set_m_BiasX(float_t  value) ;

constexpr void __cordl_internal_set_m_BiasY(float_t  value) ;

constexpr void __cordl_internal_set_m_CameraDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_CenterOnActivate(bool  value) ;

constexpr void __cordl_internal_set_m_DeadZoneDepth(float_t  value) ;

constexpr void __cordl_internal_set_m_DeadZoneHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_DeadZoneWidth(float_t  value) ;

constexpr void __cordl_internal_set_m_GroupFramingMode(::GlobalNamespace::CinemachineFramingTransposer_FramingMode  value) ;

constexpr void __cordl_internal_set_m_GroupFramingSize(float_t  value) ;

constexpr void __cordl_internal_set_m_InheritingPosition(bool  value) ;

constexpr void __cordl_internal_set_m_LookaheadIgnoreY(bool  value) ;

constexpr void __cordl_internal_set_m_LookaheadSmoothing(float_t  value) ;

constexpr void __cordl_internal_set_m_LookaheadTime(float_t  value) ;

constexpr void __cordl_internal_set_m_MaxDollyIn(float_t  value) ;

constexpr void __cordl_internal_set_m_MaxDollyOut(float_t  value) ;

constexpr void __cordl_internal_set_m_MaximumDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_MaximumFOV(float_t  value) ;

constexpr void __cordl_internal_set_m_MaximumOrthoSize(float_t  value) ;

constexpr void __cordl_internal_set_m_MinimumDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_MinimumFOV(float_t  value) ;

constexpr void __cordl_internal_set_m_MinimumOrthoSize(float_t  value) ;

constexpr void __cordl_internal_set_m_Predictor(::Unity::Cinemachine::PositionPredictor  value) ;

constexpr void __cordl_internal_set_m_PreviousCameraPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_ScreenX(float_t  value) ;

constexpr void __cordl_internal_set_m_ScreenY(float_t  value) ;

constexpr void __cordl_internal_set_m_SoftZoneHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_SoftZoneWidth(float_t  value) ;

constexpr void __cordl_internal_set_m_TargetMovementOnly(bool  value) ;

constexpr void __cordl_internal_set_m_TrackedObjectOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_UnlimitedSoftZone(bool  value) ;

constexpr void __cordl_internal_set_m_XDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_YDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_ZDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_prevFOV(float_t  value) ;

constexpr void __cordl_internal_set_m_prevRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0xaecde74, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BodyAppliesAfterAim, addr 0xaecc2c4, size 0x8, virtual true, abstract: false, final false
inline bool get_BodyAppliesAfterAim() ;

/// @brief Method get_Composition, addr 0xaecdcc0, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::ScreenComposerSettings get_Composition() ;

/// @brief Method get_HardGuideRect, addr 0xaecc12c, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_HardGuideRect() ;

/// @brief Method get_IsValid, addr 0xaecc22c, size 0x90, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// [CompilerGenerated]
/// @brief Method get_LastBounds, addr 0xaecc710, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_LastBounds() ;

/// [CompilerGenerated]
/// @brief Method get_LastBoundsMatrix, addr 0xaecc740, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_LastBoundsMatrix() ;

/// @brief Method get_SoftGuideRect, addr 0xaecc0ac, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_SoftGuideRect() ;

/// @brief Method get_Stage, addr 0xaecc2bc, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

/// [CompilerGenerated]
/// @brief Method get_TrackedPoint, addr 0xaecc2cc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_TrackedPoint() ;

/// @brief Method set_Composition, addr 0xaecdd10, size 0x58, virtual false, abstract: false, final false
inline void set_Composition(::Unity::Cinemachine::ScreenComposerSettings  value) ;

/// @brief Method set_HardGuideRect, addr 0xaecc160, size 0x30, virtual false, abstract: false, final false
inline void set_HardGuideRect(::UnityEngine::Rect  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastBounds, addr 0xaecc728, size 0x18, virtual false, abstract: false, final false
inline void set_LastBounds(::UnityEngine::Bounds  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastBoundsMatrix, addr 0xaecc754, size 0x14, virtual false, abstract: false, final false
inline void set_LastBoundsMatrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method set_SoftGuideRect, addr 0xaecc0cc, size 0x60, virtual false, abstract: false, final false
inline void set_SoftGuideRect(::UnityEngine::Rect  value) ;

/// [CompilerGenerated]
/// @brief Method set_TrackedPoint, addr 0xaecc2d8, size 0xc, virtual false, abstract: false, final false
inline void set_TrackedPoint(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFramingTransposer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFramingTransposer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineFramingTransposer(CinemachineFramingTransposer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineFramingTransposer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineFramingTransposer(CinemachineFramingTransposer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22404};

/// @brief Field kMinimumCameraDistance offset 0xffffffff size 0x4
static constexpr float_t  kMinimumCameraDistance{static_cast<float_t>(0.01f)};

/// @brief Field kMinimumGroupSize offset 0xffffffff size 0x4
static constexpr float_t  kMinimumGroupSize{static_cast<float_t>(0.01f)};

/// [Tooltip("Offset from the Follow Target object (in target-local co-ordinates).  The camera will attempt to frame the point which is the target\'s position plus this offset.  Use it to correct for cases when the target\'s origin is not the point of interest for the camera.")]
/// @brief Field m_TrackedObjectOffset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_TrackedObjectOffset;

/// [Tooltip("This setting will instruct the composer to adjust its target offset based on the motion of the target.  The composer will look at a point where it estimates the target will be this many seconds into the future.  Note that this setting is sensitive to noisy animation, and can amplify the noise, resulting in undesirable camera jitter.  If the camera jitters unacceptably when the target is in motion, turn down this setting, or animate the target more smoothly.")]
/// [Range(0, 1)]
/// [Space]
/// @brief Field m_LookaheadTime, offset: 0x34, size: 0x4, def value: None
 float_t  ___m_LookaheadTime;

/// [Tooltip("Controls the smoothness of the lookahead algorithm.  Larger values smooth out jittery predictions and also increase prediction lag")]
/// [Range(0, 30)]
/// @brief Field m_LookaheadSmoothing, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_LookaheadSmoothing;

/// [Tooltip("If checked, movement along the Y axis will be ignored for lookahead calculations")]
/// @brief Field m_LookaheadIgnoreY, offset: 0x3c, size: 0x1, def value: None
 bool  ___m_LookaheadIgnoreY;

/// [Space]
/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to maintain the offset in the X-axis.  Small numbers are more responsive, rapidly translating the camera to keep the target\'s x-axis offset.  Larger numbers give a more heavy slowly responding camera.  Using different settings per axis can yield a wide range of camera behaviors.")]
/// @brief Field m_XDamping, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_XDamping;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to maintain the offset in the Y-axis.  Small numbers are more responsive, rapidly translating the camera to keep the target\'s y-axis offset.  Larger numbers give a more heavy slowly responding camera.  Using different settings per axis can yield a wide range of camera behaviors.")]
/// @brief Field m_YDamping, offset: 0x44, size: 0x4, def value: None
 float_t  ___m_YDamping;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to maintain the offset in the Z-axis.  Small numbers are more responsive, rapidly translating the camera to keep the target\'s z-axis offset.  Larger numbers give a more heavy slowly responding camera.  Using different settings per axis can yield a wide range of camera behaviors.")]
/// @brief Field m_ZDamping, offset: 0x48, size: 0x4, def value: None
 float_t  ___m_ZDamping;

/// [Tooltip("If set, damping will apply  only to target motion, but not to camera rotation changes.  Turn this on to get an instant response when the rotation changes.  ")]
/// @brief Field m_TargetMovementOnly, offset: 0x4c, size: 0x1, def value: None
 bool  ___m_TargetMovementOnly;

/// [Space]
/// [Range(-0.5, 1.5)]
/// [Tooltip("Horizontal screen position for target. The camera will move to position the tracked object here.")]
/// @brief Field m_ScreenX, offset: 0x50, size: 0x4, def value: None
 float_t  ___m_ScreenX;

/// [Range(-0.5, 1.5)]
/// [Tooltip("Vertical screen position for target, The camera will move to position the tracked object here.")]
/// @brief Field m_ScreenY, offset: 0x54, size: 0x4, def value: None
 float_t  ___m_ScreenY;

/// [Tooltip("The distance along the camera axis that will be maintained from the Follow target")]
/// @brief Field m_CameraDistance, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_CameraDistance;

/// [Space]
/// [Range(0, 2)]
/// [Tooltip("Camera will not move horizontally if the target is within this range of the position.")]
/// @brief Field m_DeadZoneWidth, offset: 0x5c, size: 0x4, def value: None
 float_t  ___m_DeadZoneWidth;

/// [Range(0, 2)]
/// [Tooltip("Camera will not move vertically if the target is within this range of the position.")]
/// @brief Field m_DeadZoneHeight, offset: 0x60, size: 0x4, def value: None
 float_t  ___m_DeadZoneHeight;

/// [Tooltip("The camera will not move along its z-axis if the Follow target is within this distance of the specified camera distance")]
/// [FormerlySerializedAs("m_DistanceDeadZoneSize")]
/// @brief Field m_DeadZoneDepth, offset: 0x64, size: 0x4, def value: None
 float_t  ___m_DeadZoneDepth;

/// [Space]
/// [Tooltip("If checked, then then soft zone will be unlimited in size.")]
/// @brief Field m_UnlimitedSoftZone, offset: 0x68, size: 0x1, def value: None
 bool  ___m_UnlimitedSoftZone;

/// [Range(0, 2)]
/// [Tooltip("When target is within this region, camera will gradually move horizontally to re-align towards the desired position, depending on the damping speed.")]
/// @brief Field m_SoftZoneWidth, offset: 0x6c, size: 0x4, def value: None
 float_t  ___m_SoftZoneWidth;

/// [Range(0, 2)]
/// [Tooltip("When target is within this region, camera will gradually move vertically to re-align towards the desired position, depending on the damping speed.")]
/// @brief Field m_SoftZoneHeight, offset: 0x70, size: 0x4, def value: None
 float_t  ___m_SoftZoneHeight;

/// [Range(-0.5, 0.5)]
/// [Tooltip("A non-zero bias will move the target position horizontally away from the center of the soft zone.")]
/// @brief Field m_BiasX, offset: 0x74, size: 0x4, def value: None
 float_t  ___m_BiasX;

/// [Range(-0.5, 0.5)]
/// [Tooltip("A non-zero bias will move the target position vertically away from the center of the soft zone.")]
/// @brief Field m_BiasY, offset: 0x78, size: 0x4, def value: None
 float_t  ___m_BiasY;

/// [Tooltip("Force target to center of screen when this camera activates.  If false, will clamp target to the edges of the dead zone")]
/// @brief Field m_CenterOnActivate, offset: 0x7c, size: 0x1, def value: None
 bool  ___m_CenterOnActivate;

/// [Space]
/// [Tooltip("What screen dimensions to consider when framing.  Can be Horizontal, Vertical, or both")]
/// [FormerlySerializedAs("m_FramingMode")]
/// @brief Field m_GroupFramingMode, offset: 0x80, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineFramingTransposer_FramingMode  ___m_GroupFramingMode;

/// [Tooltip("How to adjust the camera to get the desired framing.  You can zoom, dolly in/out, or do both.")]
/// @brief Field m_AdjustmentMode, offset: 0x84, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode  ___m_AdjustmentMode;

/// [Tooltip("The bounding box of the targets should occupy this amount of the screen space.  1 means fill the whole screen.  0.5 means fill half the screen, etc.")]
/// @brief Field m_GroupFramingSize, offset: 0x88, size: 0x4, def value: None
 float_t  ___m_GroupFramingSize;

/// [Tooltip("The maximum distance toward the target that this behaviour is allowed to move the camera.")]
/// @brief Field m_MaxDollyIn, offset: 0x8c, size: 0x4, def value: None
 float_t  ___m_MaxDollyIn;

/// [Tooltip("The maximum distance away the target that this behaviour is allowed to move the camera.")]
/// @brief Field m_MaxDollyOut, offset: 0x90, size: 0x4, def value: None
 float_t  ___m_MaxDollyOut;

/// [Tooltip("Set this to limit how close to the target the camera can get.")]
/// @brief Field m_MinimumDistance, offset: 0x94, size: 0x4, def value: None
 float_t  ___m_MinimumDistance;

/// [Tooltip("Set this to limit how far from the target the camera can get.")]
/// @brief Field m_MaximumDistance, offset: 0x98, size: 0x4, def value: None
 float_t  ___m_MaximumDistance;

/// [Range(1, 179)]
/// [Tooltip("If adjusting FOV, will not set the FOV lower than this.")]
/// @brief Field m_MinimumFOV, offset: 0x9c, size: 0x4, def value: None
 float_t  ___m_MinimumFOV;

/// [Range(1, 179)]
/// [Tooltip("If adjusting FOV, will not set the FOV higher than this.")]
/// @brief Field m_MaximumFOV, offset: 0xa0, size: 0x4, def value: None
 float_t  ___m_MaximumFOV;

/// [Tooltip("If adjusting Orthographic Size, will not set it lower than this.")]
/// @brief Field m_MinimumOrthoSize, offset: 0xa4, size: 0x4, def value: None
 float_t  ___m_MinimumOrthoSize;

/// [Tooltip("If adjusting Orthographic Size, will not set it higher than this.")]
/// @brief Field m_MaximumOrthoSize, offset: 0xa8, size: 0x4, def value: None
 float_t  ___m_MaximumOrthoSize;

/// @brief Field m_PreviousCameraPosition, offset: 0xac, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_PreviousCameraPosition;

/// @brief Field m_Predictor, offset: 0xb8, size: 0x2c, def value: None
 ::Unity::Cinemachine::PositionPredictor  ___m_Predictor;

/// [CompilerGenerated]
/// @brief Field <TrackedPoint>k__BackingField, offset: 0xe4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____TrackedPoint_k__BackingField;

/// @brief Field m_InheritingPosition, offset: 0xf0, size: 0x1, def value: None
 bool  ___m_InheritingPosition;

/// @brief Field m_prevFOV, offset: 0xf4, size: 0x4, def value: None
 float_t  ___m_prevFOV;

/// @brief Field m_prevRotation, offset: 0xf8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_prevRotation;

/// [CompilerGenerated]
/// @brief Field <LastBounds>k__BackingField, offset: 0x108, size: 0x18, def value: None
 ::UnityEngine::Bounds  ____LastBounds_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LastBoundsMatrix>k__BackingField, offset: 0x120, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ____LastBoundsMatrix_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_TrackedObjectOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_LookaheadTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_LookaheadSmoothing) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_LookaheadIgnoreY) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_XDamping) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_YDamping) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_ZDamping) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_TargetMovementOnly) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_ScreenX) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_ScreenY) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_CameraDistance) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_DeadZoneWidth) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_DeadZoneHeight) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_DeadZoneDepth) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_UnlimitedSoftZone) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_SoftZoneWidth) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_SoftZoneHeight) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_BiasX) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_BiasY) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_CenterOnActivate) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_GroupFramingMode) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_AdjustmentMode) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_GroupFramingSize) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_MaxDollyIn) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_MaxDollyOut) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_MinimumDistance) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_MaximumDistance) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_MinimumFOV) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_MaximumFOV) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_MinimumOrthoSize) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_MaximumOrthoSize) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_PreviousCameraPosition) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_Predictor) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ____TrackedPoint_k__BackingField) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_InheritingPosition) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_prevFOV) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ___m_prevRotation) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ____LastBounds_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineFramingTransposer, ____LastBoundsMatrix_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineFramingTransposer) == 0x160, "Size mismatch!");

} // namespace end def Unity::Cinemachine
