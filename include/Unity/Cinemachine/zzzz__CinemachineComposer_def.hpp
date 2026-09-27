#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineComposer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComposer_FovCache_def.hpp"
#include "Unity/Cinemachine/zzzz__PositionPredictor_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineComposer)
namespace GlobalNamespace {
struct CinemachineComposer_FovCache;
}
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineRotationComposer;
}
namespace Unity::Cinemachine {
struct ScreenComposerSettings;
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
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineComposer;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineComposer*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineComposer*, "Unity.Cinemachine", "CinemachineComposer");
// [Obsolete("CinemachineComposer has been deprecated. Use CinemachineRotationComposer instead")]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)1)]
// [AddComponentMenu("")]
// [SaveDuringPlay]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineComposer.html")]
// Dependencies Unity.Cinemachine.CinemachineComponentBase, Unity.Cinemachine.CinemachineComposer::FovCache, Unity.Cinemachine.PositionPredictor, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineComposer
class CORDL_TYPE CinemachineComposer : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
using FovCache = ::GlobalNamespace::CinemachineComposer_FovCache;

 __declspec(property(get=get_Composition, put=set_Composition)) ::Unity::Cinemachine::ScreenComposerSettings  Composition;

 __declspec(property(get=get_HardGuideRect, put=set_HardGuideRect)) ::UnityEngine::Rect  HardGuideRect;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_SoftGuideRect, put=set_SoftGuideRect)) ::UnityEngine::Rect  SoftGuideRect;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

 __declspec(property(get=get_TrackedPoint, put=set_TrackedPoint)) ::UnityEngine::Vector3  TrackedPoint;

/// @brief Field <TrackedPoint>k__BackingField, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get__TrackedPoint_k__BackingField, put=__cordl_internal_set__TrackedPoint_k__BackingField)) ::UnityEngine::Vector3  _TrackedPoint_k__BackingField;

/// @brief Field mCache, offset 0xd4, size 0x50 
 __declspec(property(get=__cordl_internal_get_mCache, put=__cordl_internal_set_mCache)) ::GlobalNamespace::CinemachineComposer_FovCache  mCache;

/// @brief Field m_BiasX, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BiasX, put=__cordl_internal_set_m_BiasX)) float_t  m_BiasX;

/// @brief Field m_BiasY, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BiasY, put=__cordl_internal_set_m_BiasY)) float_t  m_BiasY;

/// @brief Field m_CameraOrientationPrevFrame, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_CameraOrientationPrevFrame, put=__cordl_internal_set_m_CameraOrientationPrevFrame)) ::UnityEngine::Quaternion  m_CameraOrientationPrevFrame;

/// @brief Field m_CameraPosPrevFrame, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_CameraPosPrevFrame, put=__cordl_internal_set_m_CameraPosPrevFrame)) ::UnityEngine::Vector3  m_CameraPosPrevFrame;

/// @brief Field m_CenterOnActivate, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CenterOnActivate, put=__cordl_internal_set_m_CenterOnActivate)) bool  m_CenterOnActivate;

/// @brief Field m_DeadZoneHeight, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DeadZoneHeight, put=__cordl_internal_set_m_DeadZoneHeight)) float_t  m_DeadZoneHeight;

/// @brief Field m_DeadZoneWidth, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DeadZoneWidth, put=__cordl_internal_set_m_DeadZoneWidth)) float_t  m_DeadZoneWidth;

/// @brief Field m_HorizontalDamping, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HorizontalDamping, put=__cordl_internal_set_m_HorizontalDamping)) float_t  m_HorizontalDamping;

/// @brief Field m_LookAtPrevFrame, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LookAtPrevFrame, put=__cordl_internal_set_m_LookAtPrevFrame)) ::UnityEngine::Vector3  m_LookAtPrevFrame;

/// @brief Field m_LookaheadIgnoreY, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_LookaheadIgnoreY, put=__cordl_internal_set_m_LookaheadIgnoreY)) bool  m_LookaheadIgnoreY;

/// @brief Field m_LookaheadSmoothing, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LookaheadSmoothing, put=__cordl_internal_set_m_LookaheadSmoothing)) float_t  m_LookaheadSmoothing;

/// @brief Field m_LookaheadTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LookaheadTime, put=__cordl_internal_set_m_LookaheadTime)) float_t  m_LookaheadTime;

/// @brief Field m_Predictor, offset 0xa8, size 0x2c 
 __declspec(property(get=__cordl_internal_get_m_Predictor, put=__cordl_internal_set_m_Predictor)) ::Unity::Cinemachine::PositionPredictor  m_Predictor;

/// @brief Field m_ScreenOffsetPrevFrame, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScreenOffsetPrevFrame, put=__cordl_internal_set_m_ScreenOffsetPrevFrame)) ::UnityEngine::Vector2  m_ScreenOffsetPrevFrame;

/// @brief Field m_ScreenX, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ScreenX, put=__cordl_internal_set_m_ScreenX)) float_t  m_ScreenX;

/// @brief Field m_ScreenY, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ScreenY, put=__cordl_internal_set_m_ScreenY)) float_t  m_ScreenY;

/// @brief Field m_SoftZoneHeight, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SoftZoneHeight, put=__cordl_internal_set_m_SoftZoneHeight)) float_t  m_SoftZoneHeight;

/// @brief Field m_SoftZoneWidth, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SoftZoneWidth, put=__cordl_internal_set_m_SoftZoneWidth)) float_t  m_SoftZoneWidth;

/// @brief Field m_TrackedObjectOffset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_TrackedObjectOffset, put=__cordl_internal_set_m_TrackedObjectOffset)) ::UnityEngine::Vector3  m_TrackedObjectOffset;

/// @brief Field m_VerticalDamping, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_VerticalDamping, put=__cordl_internal_set_m_VerticalDamping)) float_t  m_VerticalDamping;

/// @brief Method ClampVerticalBounds, addr 0xaeca1ec, size 0xe0, virtual false, abstract: false, final false
inline bool ClampVerticalBounds(::by_ref<::UnityEngine::Rect>  r, ::UnityEngine::Vector3  dir, ::UnityEngine::Vector3  up, float_t  fov) ;

/// @brief Method ForceCameraPosition, addr 0xaec9424, size 0x64, virtual true, abstract: false, final false
inline void ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetLookAtPointAndSetTrackedPoint, addr 0xaec9150, size 0x1d4, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetLookAtPointAndSetTrackedPoint(::UnityEngine::Vector3  lookAt, ::UnityEngine::Vector3  up, float_t  deltaTime) ;

/// @brief Method GetMaxDampTime, addr 0xaec9488, size 0x10, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method MutateCameraState, addr 0xaec9528, size 0x738, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineComposer* New_ctor() ;

/// @brief Method OnTargetObjectWarped, addr 0xaec9324, size 0x100, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method PrePipelineMutateCameraState, addr 0xaec9498, size 0x90, virtual true, abstract: false, final false
inline void PrePipelineMutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

/// @brief Method RotateToScreenBounds, addr 0xaec9f4c, size 0x218, virtual false, abstract: false, final false
inline void RotateToScreenBounds(::by_ref<::Unity::Cinemachine::CameraState>  state, ::UnityEngine::Rect  screenRect, ::UnityEngine::Vector3  trackedPoint, ::by_ref<::UnityEngine::Quaternion>  rigOrientation, float_t  fov, float_t  fovH, float_t  deltaTime) ;

/// @brief Method UpgradeToCm3, addr 0xaeca368, size 0x98, virtual false, abstract: false, final false
inline void UpgradeToCm3(::Unity::Cinemachine::CinemachineRotationComposer*  c) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__TrackedPoint_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__TrackedPoint_k__BackingField() ;

constexpr ::GlobalNamespace::CinemachineComposer_FovCache const& __cordl_internal_get_mCache() const;

constexpr ::GlobalNamespace::CinemachineComposer_FovCache& __cordl_internal_get_mCache() ;

constexpr float_t const& __cordl_internal_get_m_BiasX() const;

constexpr float_t& __cordl_internal_get_m_BiasX() ;

constexpr float_t const& __cordl_internal_get_m_BiasY() const;

constexpr float_t& __cordl_internal_get_m_BiasY() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_CameraOrientationPrevFrame() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_CameraOrientationPrevFrame() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CameraPosPrevFrame() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CameraPosPrevFrame() ;

constexpr bool const& __cordl_internal_get_m_CenterOnActivate() const;

constexpr bool& __cordl_internal_get_m_CenterOnActivate() ;

constexpr float_t const& __cordl_internal_get_m_DeadZoneHeight() const;

constexpr float_t& __cordl_internal_get_m_DeadZoneHeight() ;

constexpr float_t const& __cordl_internal_get_m_DeadZoneWidth() const;

constexpr float_t& __cordl_internal_get_m_DeadZoneWidth() ;

constexpr float_t const& __cordl_internal_get_m_HorizontalDamping() const;

constexpr float_t& __cordl_internal_get_m_HorizontalDamping() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LookAtPrevFrame() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LookAtPrevFrame() ;

constexpr bool const& __cordl_internal_get_m_LookaheadIgnoreY() const;

constexpr bool& __cordl_internal_get_m_LookaheadIgnoreY() ;

constexpr float_t const& __cordl_internal_get_m_LookaheadSmoothing() const;

constexpr float_t& __cordl_internal_get_m_LookaheadSmoothing() ;

constexpr float_t const& __cordl_internal_get_m_LookaheadTime() const;

constexpr float_t& __cordl_internal_get_m_LookaheadTime() ;

constexpr ::Unity::Cinemachine::PositionPredictor const& __cordl_internal_get_m_Predictor() const;

constexpr ::Unity::Cinemachine::PositionPredictor& __cordl_internal_get_m_Predictor() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_ScreenOffsetPrevFrame() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_ScreenOffsetPrevFrame() ;

constexpr float_t const& __cordl_internal_get_m_ScreenX() const;

constexpr float_t& __cordl_internal_get_m_ScreenX() ;

constexpr float_t const& __cordl_internal_get_m_ScreenY() const;

constexpr float_t& __cordl_internal_get_m_ScreenY() ;

constexpr float_t const& __cordl_internal_get_m_SoftZoneHeight() const;

constexpr float_t& __cordl_internal_get_m_SoftZoneHeight() ;

constexpr float_t const& __cordl_internal_get_m_SoftZoneWidth() const;

constexpr float_t& __cordl_internal_get_m_SoftZoneWidth() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_TrackedObjectOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_TrackedObjectOffset() ;

constexpr float_t const& __cordl_internal_get_m_VerticalDamping() const;

constexpr float_t& __cordl_internal_get_m_VerticalDamping() ;

constexpr void __cordl_internal_set__TrackedPoint_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_mCache(::GlobalNamespace::CinemachineComposer_FovCache  value) ;

constexpr void __cordl_internal_set_m_BiasX(float_t  value) ;

constexpr void __cordl_internal_set_m_BiasY(float_t  value) ;

constexpr void __cordl_internal_set_m_CameraOrientationPrevFrame(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_CameraPosPrevFrame(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_CenterOnActivate(bool  value) ;

constexpr void __cordl_internal_set_m_DeadZoneHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_DeadZoneWidth(float_t  value) ;

constexpr void __cordl_internal_set_m_HorizontalDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_LookAtPrevFrame(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_LookaheadIgnoreY(bool  value) ;

constexpr void __cordl_internal_set_m_LookaheadSmoothing(float_t  value) ;

constexpr void __cordl_internal_set_m_LookaheadTime(float_t  value) ;

constexpr void __cordl_internal_set_m_Predictor(::Unity::Cinemachine::PositionPredictor  value) ;

constexpr void __cordl_internal_set_m_ScreenOffsetPrevFrame(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_ScreenX(float_t  value) ;

constexpr void __cordl_internal_set_m_ScreenY(float_t  value) ;

constexpr void __cordl_internal_set_m_SoftZoneHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_SoftZoneWidth(float_t  value) ;

constexpr void __cordl_internal_set_m_TrackedObjectOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_VerticalDamping(float_t  value) ;

/// @brief Method .ctor, addr 0xaeca400, size 0x114, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Composition, addr 0xaeca2cc, size 0x44, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::ScreenComposerSettings get_Composition() ;

/// @brief Method get_HardGuideRect, addr 0xaec9c7c, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_HardGuideRect() ;

/// @brief Method get_IsValid, addr 0xaec90a0, size 0x90, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_SoftGuideRect, addr 0xaec9c60, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_SoftGuideRect() ;

/// @brief Method get_Stage, addr 0xaec9130, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

/// [CompilerGenerated]
/// @brief Method get_TrackedPoint, addr 0xaec9138, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_TrackedPoint() ;

/// @brief Method set_Composition, addr 0xaeca310, size 0x58, virtual false, abstract: false, final false
inline void set_Composition(::Unity::Cinemachine::ScreenComposerSettings  value) ;

/// @brief Method set_HardGuideRect, addr 0xaeca1c0, size 0x2c, virtual false, abstract: false, final false
inline void set_HardGuideRect(::UnityEngine::Rect  value) ;

/// @brief Method set_SoftGuideRect, addr 0xaeca164, size 0x5c, virtual false, abstract: false, final false
inline void set_SoftGuideRect(::UnityEngine::Rect  value) ;

/// [CompilerGenerated]
/// @brief Method set_TrackedPoint, addr 0xaec9144, size 0xc, virtual false, abstract: false, final false
inline void set_TrackedPoint(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineComposer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineComposer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineComposer(CinemachineComposer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineComposer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineComposer(CinemachineComposer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22395};

/// [Tooltip("Target offset from the target object\'s center in target-local space. Use this to fine-tune the tracking target position when the desired area is not the tracked object\'s center.")]
/// @brief Field m_TrackedObjectOffset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_TrackedObjectOffset;

/// [Space]
/// [Tooltip("This setting will instruct the composer to adjust its target offset based on the motion of the target.  The composer will look at a point where it estimates the target will be this many seconds into the future.  Note that this setting is sensitive to noisy animation, and can amplify the noise, resulting in undesirable camera jitter.  If the camera jitters unacceptably when the target is in motion, turn down this setting, or animate the target more smoothly.")]
/// [Range(0, 1)]
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
/// [Tooltip("How aggressively the camera tries to follow the target in the screen-horizontal direction. Small numbers are more responsive, rapidly orienting the camera to keep the target in the dead zone. Larger numbers give a more heavy slowly responding camera. Using different vertical and horizontal settings can yield a wide range of camera behaviors.")]
/// @brief Field m_HorizontalDamping, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_HorizontalDamping;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to follow the target in the screen-vertical direction. Small numbers are more responsive, rapidly orienting the camera to keep the target in the dead zone. Larger numbers give a more heavy slowly responding camera. Using different vertical and horizontal settings can yield a wide range of camera behaviors.")]
/// @brief Field m_VerticalDamping, offset: 0x44, size: 0x4, def value: None
 float_t  ___m_VerticalDamping;

/// [Space]
/// [Range(-0.5, 1.5)]
/// [Tooltip("Horizontal screen position for target. The camera will rotate to position the tracked object here.")]
/// @brief Field m_ScreenX, offset: 0x48, size: 0x4, def value: None
 float_t  ___m_ScreenX;

/// [Range(-0.5, 1.5)]
/// [Tooltip("Vertical screen position for target, The camera will rotate to position the tracked object here.")]
/// @brief Field m_ScreenY, offset: 0x4c, size: 0x4, def value: None
 float_t  ___m_ScreenY;

/// [Range(0, 2)]
/// [Tooltip("Camera will not rotate horizontally if the target is within this range of the position.")]
/// @brief Field m_DeadZoneWidth, offset: 0x50, size: 0x4, def value: None
 float_t  ___m_DeadZoneWidth;

/// [Range(0, 2)]
/// [Tooltip("Camera will not rotate vertically if the target is within this range of the position.")]
/// @brief Field m_DeadZoneHeight, offset: 0x54, size: 0x4, def value: None
 float_t  ___m_DeadZoneHeight;

/// [Range(0, 2)]
/// [Tooltip("When target is within this region, camera will gradually rotate horizontally to re-align towards the desired position, depending on the damping speed.")]
/// @brief Field m_SoftZoneWidth, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_SoftZoneWidth;

/// [Range(0, 2)]
/// [Tooltip("When target is within this region, camera will gradually rotate vertically to re-align towards the desired position, depending on the damping speed.")]
/// @brief Field m_SoftZoneHeight, offset: 0x5c, size: 0x4, def value: None
 float_t  ___m_SoftZoneHeight;

/// [Range(-0.5, 0.5)]
/// [Tooltip("A non-zero bias will move the target position horizontally away from the center of the soft zone.")]
/// @brief Field m_BiasX, offset: 0x60, size: 0x4, def value: None
 float_t  ___m_BiasX;

/// [Range(-0.5, 0.5)]
/// [Tooltip("A non-zero bias will move the target position vertically away from the center of the soft zone.")]
/// @brief Field m_BiasY, offset: 0x64, size: 0x4, def value: None
 float_t  ___m_BiasY;

/// [Tooltip("Force target to center of screen when this camera activates.  If false, will clamp target to the edges of the dead zone")]
/// @brief Field m_CenterOnActivate, offset: 0x68, size: 0x1, def value: None
 bool  ___m_CenterOnActivate;

/// [CompilerGenerated]
/// @brief Field <TrackedPoint>k__BackingField, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____TrackedPoint_k__BackingField;

/// @brief Field m_CameraPosPrevFrame, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_CameraPosPrevFrame;

/// @brief Field m_LookAtPrevFrame, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LookAtPrevFrame;

/// @brief Field m_ScreenOffsetPrevFrame, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_ScreenOffsetPrevFrame;

/// @brief Field m_CameraOrientationPrevFrame, offset: 0x98, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_CameraOrientationPrevFrame;

/// @brief Field m_Predictor, offset: 0xa8, size: 0x2c, def value: None
 ::Unity::Cinemachine::PositionPredictor  ___m_Predictor;

/// @brief Field mCache, offset: 0xd4, size: 0x50, def value: None
 ::GlobalNamespace::CinemachineComposer_FovCache  ___mCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_TrackedObjectOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_LookaheadTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_LookaheadSmoothing) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_LookaheadIgnoreY) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_HorizontalDamping) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_VerticalDamping) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_ScreenX) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_ScreenY) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_DeadZoneWidth) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_DeadZoneHeight) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_SoftZoneWidth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_SoftZoneHeight) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_BiasX) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_BiasY) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_CenterOnActivate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ____TrackedPoint_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_CameraPosPrevFrame) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_LookAtPrevFrame) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_ScreenOffsetPrevFrame) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_CameraOrientationPrevFrame) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___m_Predictor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineComposer, ___mCache) == 0xd4, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineComposer) == 0x128, "Size mismatch!");

} // namespace end def Unity::Cinemachine
