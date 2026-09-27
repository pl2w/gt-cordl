#pragma once
// IWYU pragma private; include "GlobalNamespace/LckBodyCameraSpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LckBodyCameraSpawner_CameraPosition_def.hpp"
#include "GlobalNamespace/zzzz__LckBodyCameraSpawner_CameraState_def.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LckBodyCameraSpawner)
namespace GlobalNamespace {
class GorillaGrabber;
}
namespace GlobalNamespace {
struct LckBodyCameraSpawner_CameraPosition;
}
namespace GlobalNamespace {
class LckBodyCameraSpawner_CameraStateDelegate;
}
namespace GlobalNamespace {
struct LckBodyCameraSpawner_CameraState;
}
namespace GlobalNamespace {
class LckDirectGrabbable;
}
namespace GlobalNamespace {
class TabletSpawnInstance;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
class ZoneData;
}
namespace Liv::Lck::Cosmetics {
class LckGameObjectSwapCosmetic;
}
namespace Liv::Lck::GorillaTag {
class GtDummyTablet;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LckBodyCameraSpawner;
}
namespace GlobalNamespace {
class LckBodyCameraSpawner_CameraStateDelegate;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LckBodyCameraSpawner*);
MARK_REF_T(::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckBodyCameraSpawner*, "", "LckBodyCameraSpawner");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*, "", "LckBodyCameraSpawner/CameraStateDelegate");
// Dependencies LckBodyCameraSpawner::CameraPosition, LckBodyCameraSpawner::CameraState, Liv.Lck.GorillaTag.CameraMode, MonoBehaviourTick, System.Nullable`1<T>, UnityEngine.Color, UnityEngine.Transform, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckBodyCameraSpawner
class CORDL_TYPE LckBodyCameraSpawner : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
using CameraPosition = ::GlobalNamespace::LckBodyCameraSpawner_CameraPosition;

using CameraState = ::GlobalNamespace::LckBodyCameraSpawner_CameraState;

using CameraStateDelegate = ::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate;

/// @brief Field OnCameraStateChange, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCameraStateChange, put=setStaticF_OnCameraStateChange)) ::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*  OnCameraStateChange;

/// @brief Field _activateDistance, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__activateDistance, put=__cordl_internal_set__activateDistance)) float_t  _activateDistance;

/// @brief Field _cameraModelGrabbable, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraModelGrabbable, put=__cordl_internal_set__cameraModelGrabbable)) ::UnityW<::GlobalNamespace::LckDirectGrabbable>  _cameraModelGrabbable;

/// @brief Field _cameraModelOriginTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraModelOriginTransform, put=__cordl_internal_set__cameraModelOriginTransform)) ::UnityW<::UnityEngine::Transform>  _cameraModelOriginTransform;

/// @brief Field _cameraModelTransform, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraModelTransform, put=__cordl_internal_set__cameraModelTransform)) ::UnityW<::UnityEngine::Transform>  _cameraModelTransform;

/// @brief Field _cameraPosition, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get__cameraPosition, put=__cordl_internal_set__cameraPosition)) ::GlobalNamespace::LckBodyCameraSpawner_CameraPosition  _cameraPosition;

/// @brief Field _cameraPositionDefault, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraPositionDefault, put=__cordl_internal_set__cameraPositionDefault)) ::UnityW<::UnityEngine::Transform>  _cameraPositionDefault;

/// @brief Field _cameraPositionSlingshot, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraPositionSlingshot, put=__cordl_internal_set__cameraPositionSlingshot)) ::UnityW<::UnityEngine::Transform>  _cameraPositionSlingshot;

/// @brief Field _cameraSpawnParentTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraSpawnParentTransform, put=__cordl_internal_set__cameraSpawnParentTransform)) ::UnityW<::UnityEngine::Transform>  _cameraSpawnParentTransform;

/// @brief Field _cameraSpawnPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraSpawnPrefab, put=__cordl_internal_set__cameraSpawnPrefab)) ::UnityW<::UnityEngine::GameObject>  _cameraSpawnPrefab;

/// @brief Field _cameraState, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get__cameraState, put=__cordl_internal_set__cameraState)) ::GlobalNamespace::LckBodyCameraSpawner_CameraState  _cameraState;

/// @brief Field _cameraStrapPoints, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraStrapPoints, put=__cordl_internal_set__cameraStrapPoints)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _cameraStrapPoints;

/// @brief Field _cameraStrapPositions, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraStrapPositions, put=__cordl_internal_set__cameraStrapPositions)) ::ArrayW<::UnityEngine::Vector3>  _cameraStrapPositions;

/// @brief Field _cameraStrapRenderer, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraStrapRenderer, put=__cordl_internal_set__cameraStrapRenderer)) ::UnityW<::UnityEngine::LineRenderer>  _cameraStrapRenderer;

/// @brief Field _chestSpawnRotationOffset, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get__chestSpawnRotationOffset, put=__cordl_internal_set__chestSpawnRotationOffset)) ::UnityEngine::Vector3  _chestSpawnRotationOffset;

/// @brief Field _dummyTablet, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__dummyTablet, put=__cordl_internal_set__dummyTablet)) ::UnityW<::Liv::Lck::GorillaTag::GtDummyTablet>  _dummyTablet;

/// @brief Field _followTransform, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__followTransform, put=__cordl_internal_set__followTransform)) ::UnityW<::UnityEngine::Transform>  _followTransform;

/// @brief Field _ghostColor, offset 0xe0, size 0x10 
 __declspec(property(get=__cordl_internal_get__ghostColor, put=__cordl_internal_set__ghostColor)) ::UnityEngine::Color  _ghostColor;

/// @brief Field _leftHandSpawnOffsetAndroid, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get__leftHandSpawnOffsetAndroid, put=__cordl_internal_set__leftHandSpawnOffsetAndroid)) ::UnityEngine::Vector3  _leftHandSpawnOffsetAndroid;

/// @brief Field _leftHandSpawnOffsetWindows, offset 0xa8, size 0xc 
 __declspec(property(get=__cordl_internal_get__leftHandSpawnOffsetWindows, put=__cordl_internal_set__leftHandSpawnOffsetWindows)) ::UnityEngine::Vector3  _leftHandSpawnOffsetWindows;

/// @brief Field _localRig, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__localRig, put=__cordl_internal_set__localRig)) ::UnityW<::GlobalNamespace::VRRig>  _localRig;

/// @brief Field _normalColor, offset 0xd0, size 0x10 
 __declspec(property(get=__cordl_internal_get__normalColor, put=__cordl_internal_set__normalColor)) ::UnityEngine::Color  _normalColor;

/// @brief Field _returnToCameraMode, offset 0x130, size 0x10 
 __declspec(property(get=__cordl_internal_get__returnToCameraMode, put=__cordl_internal_set__returnToCameraMode)) ::System::Nullable_1<::Liv::Lck::GorillaTag::CameraMode>  _returnToCameraMode;

/// @brief Field _rightHandSpawnOffsetAndroid, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get__rightHandSpawnOffsetAndroid, put=__cordl_internal_set__rightHandSpawnOffsetAndroid)) ::UnityEngine::Vector3  _rightHandSpawnOffsetAndroid;

/// @brief Field _rightHandSpawnOffsetWindows, offset 0x9c, size 0xc 
 __declspec(property(get=__cordl_internal_get__rightHandSpawnOffsetWindows, put=__cordl_internal_set__rightHandSpawnOffsetWindows)) ::UnityEngine::Vector3  _rightHandSpawnOffsetWindows;

/// @brief Field _rotationOffsetAndroid, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get__rotationOffsetAndroid, put=__cordl_internal_set__rotationOffsetAndroid)) ::UnityEngine::Vector3  _rotationOffsetAndroid;

/// @brief Field _rotationOffsetWindows, offset 0x90, size 0xc 
 __declspec(property(get=__cordl_internal_get__rotationOffsetWindows, put=__cordl_internal_set__rotationOffsetWindows)) ::UnityEngine::Vector3  _rotationOffsetWindows;

/// @brief Field _shouldMoveCameraToNeck, offset 0x128, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldMoveCameraToNeck, put=__cordl_internal_set__shouldMoveCameraToNeck)) bool  _shouldMoveCameraToNeck;

/// @brief Field _snapToNeckDistance, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__snapToNeckDistance, put=__cordl_internal_set__snapToNeckDistance)) float_t  _snapToNeckDistance;

/// @brief Field _swapEmobi, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__swapEmobi, put=__cordl_internal_set__swapEmobi)) ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>  _swapEmobi;

/// @brief Field _swapTablet, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__swapTablet, put=__cordl_internal_set__swapTablet)) ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>  _swapTablet;

/// @brief Field _tabletSpawnInstance, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__tabletSpawnInstance, put=__cordl_internal_set__tabletSpawnInstance)) ::GlobalNamespace::TabletSpawnInstance*  _tabletSpawnInstance;

 __declspec(property(get=get_cameraPosition, put=set_cameraPosition)) ::GlobalNamespace::LckBodyCameraSpawner_CameraPosition  cameraPosition;

 __declspec(property(get=get_cameraState, put=set_cameraState)) ::GlobalNamespace::LckBodyCameraSpawner_CameraState  cameraState;

 __declspec(property(get=get_cameraVisible, put=set_cameraVisible)) bool  cameraVisible;

 __declspec(property(get=get_tabletSpawnInstance)) ::GlobalNamespace::TabletSpawnInstance*  tabletSpawnInstance;

/// @brief Method Awake, addr 0x56c3a5c, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChangeCameraModelParent, addr 0x56c3910, size 0x124, virtual false, abstract: false, final false
inline void ChangeCameraModelParent(::UnityEngine::Transform*  transform) ;

/// @brief Method GetLocalRig, addr 0x56c5274, size 0xec, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> GetLocalRig() ;

/// @brief Method InitCameraStrap, addr 0x56c3d78, size 0x80, virtual false, abstract: false, final false
inline void InitCameraStrap() ;

/// @brief Method IsSlingshotActiveInHierarchy, addr 0x56c4f38, size 0xcc, virtual false, abstract: false, final false
inline bool IsSlingshotActiveInHierarchy() ;

/// @brief Method IsSlingshotHeldInHand, addr 0x56c5360, size 0xe4, virtual false, abstract: false, final false
inline bool IsSlingshotHeldInHand(::by_ref<bool>  leftHand, ::by_ref<bool>  rightHand) ;

/// [ContextMenu("Put tablet on neck")]
/// @brief Method ManuallySetCameraOnNeck, addr 0x56c5064, size 0xe0, virtual false, abstract: false, final false
inline void ManuallySetCameraOnNeck() ;

static inline ::GlobalNamespace::LckBodyCameraSpawner* New_ctor() ;

/// @brief Method OnCameraModelReleased, addr 0x56c5144, size 0x94, virtual false, abstract: false, final false
inline void OnCameraModelReleased() ;

/// @brief Method OnDestroy, addr 0x56c5050, size 0x14, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x56c3e0c, size 0x28c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56c3acc, size 0x2ac, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnZoneChanged, addr 0x56c5004, size 0x4c, virtual false, abstract: false, final false
inline void OnZoneChanged(::ArrayW<::GlobalNamespace::ZoneData*>  zones) ;

/// @brief Method ResetCameraModel, addr 0x56c36f8, size 0xb0, virtual false, abstract: false, final false
inline void ResetCameraModel() ;

/// @brief Method SetFollowTransform, addr 0x56c323c, size 0x10, virtual false, abstract: false, final false
inline void SetFollowTransform(::UnityEngine::Transform*  transform) ;

/// @brief Method SetPreviewActive, addr 0x56c37f8, size 0x110, virtual false, abstract: false, final false
inline void SetPreviewActive(bool  isActive) ;

/// @brief Method ShouldSpawnCamera, addr 0x56c4a0c, size 0xe0, virtual false, abstract: false, final false
inline bool ShouldSpawnCamera(::UnityEngine::Transform*  gorillaGrabberTransform) ;

/// @brief Method SpawnCamera, addr 0x56c4aec, size 0x340, virtual false, abstract: false, final false
inline void SpawnCamera(::GlobalNamespace::GorillaGrabber*  overrideGorillaGrabber, ::UnityEngine::Transform*  transform) ;

/// @brief Method Tick, addr 0x56c4098, size 0x798, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method Update, addr 0x56c3df8, size 0x14, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCameraStrap, addr 0x56c4830, size 0x17c, virtual false, abstract: false, final false
inline void UpdateCameraStrap() ;

constexpr float_t const& __cordl_internal_get__activateDistance() const;

constexpr float_t& __cordl_internal_get__activateDistance() ;

constexpr ::UnityW<::GlobalNamespace::LckDirectGrabbable> const& __cordl_internal_get__cameraModelGrabbable() const;

constexpr ::UnityW<::GlobalNamespace::LckDirectGrabbable>& __cordl_internal_get__cameraModelGrabbable() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cameraModelOriginTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cameraModelOriginTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cameraModelTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cameraModelTransform() ;

constexpr ::GlobalNamespace::LckBodyCameraSpawner_CameraPosition const& __cordl_internal_get__cameraPosition() const;

constexpr ::GlobalNamespace::LckBodyCameraSpawner_CameraPosition& __cordl_internal_get__cameraPosition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cameraPositionDefault() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cameraPositionDefault() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cameraPositionSlingshot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cameraPositionSlingshot() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cameraSpawnParentTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cameraSpawnParentTransform() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__cameraSpawnPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__cameraSpawnPrefab() ;

constexpr ::GlobalNamespace::LckBodyCameraSpawner_CameraState const& __cordl_internal_get__cameraState() const;

constexpr ::GlobalNamespace::LckBodyCameraSpawner_CameraState& __cordl_internal_get__cameraState() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__cameraStrapPoints() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__cameraStrapPoints() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__cameraStrapPositions() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__cameraStrapPositions() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get__cameraStrapRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get__cameraStrapRenderer() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__chestSpawnRotationOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__chestSpawnRotationOffset() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtDummyTablet> const& __cordl_internal_get__dummyTablet() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtDummyTablet>& __cordl_internal_get__dummyTablet() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__followTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__followTransform() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__ghostColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__ghostColor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__leftHandSpawnOffsetAndroid() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__leftHandSpawnOffsetAndroid() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__leftHandSpawnOffsetWindows() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__leftHandSpawnOffsetWindows() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__localRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__localRig() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor() ;

constexpr ::System::Nullable_1<::Liv::Lck::GorillaTag::CameraMode> const& __cordl_internal_get__returnToCameraMode() const;

constexpr ::System::Nullable_1<::Liv::Lck::GorillaTag::CameraMode>& __cordl_internal_get__returnToCameraMode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rightHandSpawnOffsetAndroid() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__rightHandSpawnOffsetAndroid() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rightHandSpawnOffsetWindows() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__rightHandSpawnOffsetWindows() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rotationOffsetAndroid() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__rotationOffsetAndroid() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rotationOffsetWindows() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__rotationOffsetWindows() ;

constexpr bool const& __cordl_internal_get__shouldMoveCameraToNeck() const;

constexpr bool& __cordl_internal_get__shouldMoveCameraToNeck() ;

constexpr float_t const& __cordl_internal_get__snapToNeckDistance() const;

constexpr float_t& __cordl_internal_get__snapToNeckDistance() ;

constexpr ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic> const& __cordl_internal_get__swapEmobi() const;

constexpr ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>& __cordl_internal_get__swapEmobi() ;

constexpr ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic> const& __cordl_internal_get__swapTablet() const;

constexpr ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>& __cordl_internal_get__swapTablet() ;

constexpr ::GlobalNamespace::TabletSpawnInstance* const& __cordl_internal_get__tabletSpawnInstance() const;

constexpr ::GlobalNamespace::TabletSpawnInstance*& __cordl_internal_get__tabletSpawnInstance() ;

constexpr void __cordl_internal_set__activateDistance(float_t  value) ;

constexpr void __cordl_internal_set__cameraModelGrabbable(::UnityW<::GlobalNamespace::LckDirectGrabbable>  value) ;

constexpr void __cordl_internal_set__cameraModelOriginTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__cameraModelTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__cameraPosition(::GlobalNamespace::LckBodyCameraSpawner_CameraPosition  value) ;

constexpr void __cordl_internal_set__cameraPositionDefault(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__cameraPositionSlingshot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__cameraSpawnParentTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__cameraSpawnPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__cameraState(::GlobalNamespace::LckBodyCameraSpawner_CameraState  value) ;

constexpr void __cordl_internal_set__cameraStrapPoints(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__cameraStrapPositions(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__cameraStrapRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set__chestSpawnRotationOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__dummyTablet(::UnityW<::Liv::Lck::GorillaTag::GtDummyTablet>  value) ;

constexpr void __cordl_internal_set__followTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__ghostColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__leftHandSpawnOffsetAndroid(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__leftHandSpawnOffsetWindows(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__localRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__returnToCameraMode(::System::Nullable_1<::Liv::Lck::GorillaTag::CameraMode>  value) ;

constexpr void __cordl_internal_set__rightHandSpawnOffsetAndroid(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rightHandSpawnOffsetWindows(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rotationOffsetAndroid(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rotationOffsetWindows(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__shouldMoveCameraToNeck(bool  value) ;

constexpr void __cordl_internal_set__snapToNeckDistance(float_t  value) ;

constexpr void __cordl_internal_set__swapEmobi(::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>  value) ;

constexpr void __cordl_internal_set__swapTablet(::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>  value) ;

constexpr void __cordl_internal_set__tabletSpawnInstance(::GlobalNamespace::TabletSpawnInstance*  value) ;

/// @brief Method .ctor, addr 0x56c5444, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnCameraStateChange, addr 0x56c3254, size 0xb8, virtual false, abstract: false, final false
static inline void add_OnCameraStateChange(::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*  value) ;

static inline ::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate* getStaticF_OnCameraStateChange() ;

/// @brief Method get_cameraPosition, addr 0x56c3908, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::LckBodyCameraSpawner_CameraPosition get_cameraPosition() ;

/// @brief Method get_cameraState, addr 0x56c33c4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::LckBodyCameraSpawner_CameraState get_cameraState() ;

/// @brief Method get_cameraVisible, addr 0x56c3a34, size 0x28, virtual false, abstract: false, final false
inline bool get_cameraVisible() ;

/// @brief Method get_tabletSpawnInstance, addr 0x56c324c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TabletSpawnInstance* get_tabletSpawnInstance() ;

/// [CompilerGenerated]
/// @brief Method remove_OnCameraStateChange, addr 0x56c330c, size 0xb8, virtual false, abstract: false, final false
static inline void remove_OnCameraStateChange(::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*  value) ;

static inline void setStaticF_OnCameraStateChange(::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*  value) ;

/// @brief Method set_cameraPosition, addr 0x56c3650, size 0xa8, virtual false, abstract: false, final false
inline void set_cameraPosition(::GlobalNamespace::LckBodyCameraSpawner_CameraPosition  value) ;

/// @brief Method set_cameraState, addr 0x56c33cc, size 0x284, virtual false, abstract: false, final false
inline void set_cameraState(::GlobalNamespace::LckBodyCameraSpawner_CameraState  value) ;

/// @brief Method set_cameraVisible, addr 0x56c37a8, size 0x50, virtual false, abstract: false, final false
inline void set_cameraVisible(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckBodyCameraSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckBodyCameraSpawner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckBodyCameraSpawner(LckBodyCameraSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckBodyCameraSpawner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckBodyCameraSpawner(LckBodyCameraSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1014};

/// [SerializeField]
/// @brief Field _cameraSpawnPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____cameraSpawnPrefab;

/// [SerializeField]
/// @brief Field _cameraSpawnParentTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____cameraSpawnParentTransform;

/// [SerializeField]
/// @brief Field _cameraModelOriginTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____cameraModelOriginTransform;

/// [SerializeField]
/// @brief Field _cameraModelTransform, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____cameraModelTransform;

/// [SerializeField]
/// @brief Field _cameraModelGrabbable, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LckDirectGrabbable>  ____cameraModelGrabbable;

/// [SerializeField]
/// @brief Field _cameraPositionDefault, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____cameraPositionDefault;

/// [SerializeField]
/// @brief Field _cameraPositionSlingshot, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____cameraPositionSlingshot;

/// @brief Field _chestSpawnRotationOffset, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____chestSpawnRotationOffset;

/// @brief Field _rightHandSpawnOffsetAndroid, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____rightHandSpawnOffsetAndroid;

/// @brief Field _leftHandSpawnOffsetAndroid, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____leftHandSpawnOffsetAndroid;

/// @brief Field _rotationOffsetAndroid, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____rotationOffsetAndroid;

/// @brief Field _rotationOffsetWindows, offset: 0x90, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____rotationOffsetWindows;

/// @brief Field _rightHandSpawnOffsetWindows, offset: 0x9c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____rightHandSpawnOffsetWindows;

/// @brief Field _leftHandSpawnOffsetWindows, offset: 0xa8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____leftHandSpawnOffsetWindows;

/// [SerializeField]
/// @brief Field _activateDistance, offset: 0xb4, size: 0x4, def value: None
 float_t  ____activateDistance;

/// [SerializeField]
/// @brief Field _snapToNeckDistance, offset: 0xb8, size: 0x4, def value: None
 float_t  ____snapToNeckDistance;

/// [SerializeField]
/// @brief Field _cameraStrapRenderer, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ____cameraStrapRenderer;

/// [SerializeField]
/// @brief Field _cameraStrapPoints, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____cameraStrapPoints;

/// [SerializeField]
/// @brief Field _normalColor, offset: 0xd0, size: 0x10, def value: None
 ::UnityEngine::Color  ____normalColor;

/// [SerializeField]
/// @brief Field _ghostColor, offset: 0xe0, size: 0x10, def value: None
 ::UnityEngine::Color  ____ghostColor;

/// [Header("Cosmetics References")]
/// [SerializeField]
/// @brief Field _dummyTablet, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtDummyTablet>  ____dummyTablet;

/// [SerializeField]
/// @brief Field _swapTablet, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>  ____swapTablet;

/// [SerializeField]
/// @brief Field _swapEmobi, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>  ____swapEmobi;

/// @brief Field _followTransform, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____followTransform;

/// @brief Field _cameraStrapPositions, offset: 0x110, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____cameraStrapPositions;

/// @brief Field _tabletSpawnInstance, offset: 0x118, size: 0x8, def value: None
 ::GlobalNamespace::TabletSpawnInstance*  ____tabletSpawnInstance;

/// @brief Field _localRig, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____localRig;

/// @brief Field _shouldMoveCameraToNeck, offset: 0x128, size: 0x1, def value: None
 bool  ____shouldMoveCameraToNeck;

/// @brief Field _returnToCameraMode, offset: 0x130, size: 0x10, def value: None
 ::System::Nullable_1<::Liv::Lck::GorillaTag::CameraMode>  ____returnToCameraMode;

/// @brief Field _cameraState, offset: 0x140, size: 0x4, def value: None
 ::GlobalNamespace::LckBodyCameraSpawner_CameraState  ____cameraState;

/// @brief Size padding 0x140 - 0x148 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

/// @brief Field _cameraPosition, offset: 0x144, size: 0x4, def value: None
 ::GlobalNamespace::LckBodyCameraSpawner_CameraPosition  ____cameraPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____cameraSpawnPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____cameraSpawnParentTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____cameraModelOriginTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____cameraModelTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____cameraModelGrabbable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____cameraPositionDefault) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____cameraPositionSlingshot) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____chestSpawnRotationOffset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____rightHandSpawnOffsetAndroid) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____leftHandSpawnOffsetAndroid) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____rotationOffsetAndroid) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____rotationOffsetWindows) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____rightHandSpawnOffsetWindows) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____leftHandSpawnOffsetWindows) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____activateDistance) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____snapToNeckDistance) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____cameraStrapRenderer) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____cameraStrapPoints) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____normalColor) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____ghostColor) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____dummyTablet) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____swapTablet) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____swapEmobi) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____followTransform) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____cameraStrapPositions) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____tabletSpawnInstance) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____localRig) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____shouldMoveCameraToNeck) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____returnToCameraMode) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____cameraState) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckBodyCameraSpawner, ____cameraPosition) == 0x144, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckBodyCameraSpawner) == 0x140, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckBodyCameraSpawner/CameraStateDelegate
class CORDL_TYPE LckBodyCameraSpawner_CameraStateDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x56c5574, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::LckBodyCameraSpawner_CameraState  state, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x56c55f8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x56c5560, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::LckBodyCameraSpawner_CameraState  state) ;

static inline ::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x56c54c0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckBodyCameraSpawner_CameraStateDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckBodyCameraSpawner_CameraStateDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckBodyCameraSpawner_CameraStateDelegate(LckBodyCameraSpawner_CameraStateDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckBodyCameraSpawner_CameraStateDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckBodyCameraSpawner_CameraStateDelegate(LckBodyCameraSpawner_CameraStateDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1013};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
