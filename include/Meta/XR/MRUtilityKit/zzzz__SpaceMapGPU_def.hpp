#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SpaceMapGPU.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_RoomFilter_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpaceMapGPU)
namespace GlobalNamespace {
struct MRUK_RoomFilter;
}
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
namespace Meta::XR::MRUtilityKit {
class MRUKRoom;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class SpaceMapGPU;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SpaceMapGPU*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SpaceMapGPU*, "Meta.XR.MRUtilityKit", "SpaceMapGPU");
// Dependencies Meta.XR.MRUtilityKit.MRUK::RoomFilter, Meta.XR.MRUtilityKit.MRUKAnchor::SceneLabels, UnityEngine.Color, UnityEngine.Matrix4x4, UnityEngine.MonoBehaviour, UnityEngine.Rect, UnityEngine.RenderTexture
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SpaceMapGPU
class CORDL_TYPE SpaceMapGPU : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field CSSpaceMap, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_CSSpaceMap, put=__cordl_internal_set_CSSpaceMap)) ::UnityW<::UnityEngine::ComputeShader>  CSSpaceMap;

/// @brief Field CameraCaptureBorderBuffer, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_CameraCaptureBorderBuffer, put=__cordl_internal_set_CameraCaptureBorderBuffer)) float_t  CameraCaptureBorderBuffer;

/// @brief Field ColorFloorWallID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ColorFloorWallID, put=setStaticF_ColorFloorWallID)) int32_t  ColorFloorWallID;

/// @brief Field ColorSceneObjectsID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ColorSceneObjectsID, put=setStaticF_ColorSceneObjectsID)) int32_t  ColorSceneObjectsID;

/// @brief Field ColorVirtualObjectsID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ColorVirtualObjectsID, put=setStaticF_ColorVirtualObjectsID)) int32_t  ColorVirtualObjectsID;

/// @brief Field CreateOnStart, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_CreateOnStart, put=__cordl_internal_set_CreateOnStart)) ::GlobalNamespace::MRUK_RoomFilter  CreateOnStart;

/// @brief Field CreateOutputTexture, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_CreateOutputTexture, put=__cordl_internal_set_CreateOutputTexture)) bool  CreateOutputTexture;

/// @brief Field DebugPlane, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_DebugPlane, put=__cordl_internal_set_DebugPlane)) ::UnityW<::UnityEngine::GameObject>  DebugPlane;

/// @brief Field HeightID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_HeightID, put=setStaticF_HeightID)) int32_t  HeightID;

/// @brief Field InsideObjectColor, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get_InsideObjectColor, put=__cordl_internal_set_InsideObjectColor)) ::UnityEngine::Color  InsideObjectColor;

/// @brief Field MapGradient, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_MapGradient, put=__cordl_internal_set_MapGradient)) ::UnityEngine::Gradient*  MapGradient;

/// @brief Field OutputTexture, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OutputTexture, put=__cordl_internal_set_OutputTexture)) ::UnityW<::UnityEngine::Texture2D>  OutputTexture;

/// @brief Field RenderTexture, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_RenderTexture, put=__cordl_internal_set_RenderTexture)) ::UnityW<::UnityEngine::RenderTexture>  RenderTexture;

/// @brief Field ResultID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ResultID, put=setStaticF_ResultID)) int32_t  ResultID;

/// @brief Field SceneObjectLabels, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_SceneObjectLabels, put=__cordl_internal_set_SceneObjectLabels)) ::GlobalNamespace::MRUKAnchor_SceneLabels  SceneObjectLabels;

/// @brief Field ShowDebugPlane, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowDebugPlane, put=__cordl_internal_set_ShowDebugPlane)) bool  ShowDebugPlane;

/// @brief Field SourceID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SourceID, put=setStaticF_SourceID)) int32_t  SourceID;

/// @brief Field SpaceMapCameraMatrixID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SpaceMapCameraMatrixID, put=setStaticF_SpaceMapCameraMatrixID)) int32_t  SpaceMapCameraMatrixID;

 __declspec(property(get=get_SpaceMapCreatedEvent, put=set_SpaceMapCreatedEvent)) ::UnityEngine::Events::UnityEvent*  SpaceMapCreatedEvent;

 __declspec(property(get=get_SpaceMapRoomCreatedEvent, put=set_SpaceMapRoomCreatedEvent)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  SpaceMapRoomCreatedEvent;

 __declspec(property(get=get_SpaceMapUpdatedEvent, put=set_SpaceMapUpdatedEvent)) ::UnityEngine::Events::UnityEvent*  SpaceMapUpdatedEvent;

/// @brief Field StepID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_StepID, put=setStaticF_StepID)) int32_t  StepID;

/// @brief Field TextureDimension, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_TextureDimension, put=__cordl_internal_set_TextureDimension)) int32_t  TextureDimension;

/// @brief Field TrackUpdates, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_TrackUpdates, put=__cordl_internal_set_TrackUpdates)) bool  TrackUpdates;

/// @brief Field WidthID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_WidthID, put=setStaticF_WidthID)) int32_t  WidthID;

/// @brief Field _RTextures, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get__RTextures, put=__cordl_internal_set__RTextures)) ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  _RTextures;

/// @brief Field <SpaceMapCreatedEvent>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__SpaceMapCreatedEvent_k__BackingField, put=__cordl_internal_set__SpaceMapCreatedEvent_k__BackingField)) ::UnityEngine::Events::UnityEvent*  _SpaceMapCreatedEvent_k__BackingField;

/// @brief Field <SpaceMapRoomCreatedEvent>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__SpaceMapRoomCreatedEvent_k__BackingField, put=__cordl_internal_set__SpaceMapRoomCreatedEvent_k__BackingField)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  _SpaceMapRoomCreatedEvent_k__BackingField;

/// @brief Field <SpaceMapUpdatedEvent>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__SpaceMapUpdatedEvent_k__BackingField, put=__cordl_internal_set__SpaceMapUpdatedEvent_k__BackingField)) ::UnityEngine::Events::UnityEvent*  _SpaceMapUpdatedEvent_k__BackingField;

/// @brief Field _colorFloorWall, offset 0x94, size 0x10 
 __declspec(property(get=__cordl_internal_get__colorFloorWall, put=__cordl_internal_set__colorFloorWall)) ::UnityEngine::Color  _colorFloorWall;

/// @brief Field _colorSceneObjects, offset 0xa4, size 0x10 
 __declspec(property(get=__cordl_internal_get__colorSceneObjects, put=__cordl_internal_set__colorSceneObjects)) ::UnityEngine::Color  _colorSceneObjects;

/// @brief Field _colorVirtualObjects, offset 0xb4, size 0x10 
 __declspec(property(get=__cordl_internal_get__colorVirtualObjects, put=__cordl_internal_set__colorVirtualObjects)) ::UnityEngine::Color  _colorVirtualObjects;

/// @brief Field _csFillSpaceMapKernel, offset 0x1c4, size 0x4 
 __declspec(property(get=__cordl_internal_get__csFillSpaceMapKernel, put=__cordl_internal_set__csFillSpaceMapKernel)) int32_t  _csFillSpaceMapKernel;

/// @brief Field _csPrepareSpaceMapKernel, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get__csPrepareSpaceMapKernel, put=__cordl_internal_set__csPrepareSpaceMapKernel)) int32_t  _csPrepareSpaceMapKernel;

/// @brief Field _csSpaceMapKernel, offset 0x1c0, size 0x4 
 __declspec(property(get=__cordl_internal_get__csSpaceMapKernel, put=__cordl_internal_set__csSpaceMapKernel)) int32_t  _csSpaceMapKernel;

/// @brief Field _currentRoomBounds, offset 0x19c, size 0x10 
 __declspec(property(get=__cordl_internal_get__currentRoomBounds, put=__cordl_internal_set__currentRoomBounds)) ::UnityEngine::Rect  _currentRoomBounds;

/// @brief Field _gradientTexture, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__gradientTexture, put=__cordl_internal_set__gradientTexture)) ::UnityW<::UnityEngine::Texture2D>  _gradientTexture;

/// @brief Field _isOrthoCameraInitialized, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isOrthoCameraInitialized, put=__cordl_internal_set__isOrthoCameraInitialized)) bool  _isOrthoCameraInitialized;

/// @brief Field _matFloor, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__matFloor, put=__cordl_internal_set__matFloor)) ::UnityW<::UnityEngine::Material>  _matFloor;

/// @brief Field _matObjects, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__matObjects, put=__cordl_internal_set__matObjects)) ::UnityW<::UnityEngine::Material>  _matObjects;

/// @brief Field _orthoCamProjectionMatrix, offset 0xdc, size 0x40 
 __declspec(property(get=__cordl_internal_get__orthoCamProjectionMatrix, put=__cordl_internal_set__orthoCamProjectionMatrix)) ::UnityEngine::Matrix4x4  _orthoCamProjectionMatrix;

/// @brief Field _orthoCamProjectionViewMatrix, offset 0x15c, size 0x40 
 __declspec(property(get=__cordl_internal_get__orthoCamProjectionViewMatrix, put=__cordl_internal_set__orthoCamProjectionViewMatrix)) ::UnityEngine::Matrix4x4  _orthoCamProjectionViewMatrix;

/// @brief Field _orthoCamViewMatrix, offset 0x11c, size 0x40 
 __declspec(property(get=__cordl_internal_get__orthoCamViewMatrix, put=__cordl_internal_set__orthoCamViewMatrix)) ::UnityEngine::Matrix4x4  _orthoCamViewMatrix;

/// @brief Field _roomTextures, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__roomTextures, put=__cordl_internal_set__roomTextures)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>,::UnityW<::UnityEngine::RenderTexture>>*  _roomTextures;

/// @brief Field gradientMaterial, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_gradientMaterial, put=__cordl_internal_set_gradientMaterial)) ::UnityW<::UnityEngine::Material>  gradientMaterial;

/// @brief Method ApplyMaterial, addr 0x9f493f8, size 0x104, virtual false, abstract: false, final false
inline void ApplyMaterial() ;

/// @brief Method Awake, addr 0x9f49068, size 0x198, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateOrthographicProjMatrix, addr 0x9f4bac8, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 CalculateOrthographicProjMatrix(float_t  size, float_t  aspect, float_t  near, float_t  far) ;

/// @brief Method CalculateViewMatrix, addr 0x9f4bb18, size 0xd4, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 CalculateViewMatrix() ;

/// @brief Method CreateNewRenderTexture, addr 0x9f48ee0, size 0x90, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> CreateNewRenderTexture(int32_t  wh) ;

/// @brief Method DrawRoomsIntoCB, addr 0x9f4a76c, size 0x3d4, virtual false, abstract: false, final false
inline void DrawRoomsIntoCB(::UnityEngine::Rendering::CommandBuffer*  commandBuffer, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms) ;

/// @brief Method GetBoundingBox, addr 0x9f49c74, size 0x320, virtual false, abstract: false, final false
inline ::UnityEngine::Rect GetBoundingBox(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms) ;

/// @brief Method GetColorAtPosition, addr 0x9f48f70, size 0xf8, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColorAtPosition(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method GetSpaceMap, addr 0x9f48964, size 0x110, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> GetSpaceMap(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method HandleDebugPlane, addr 0x9f4bbec, size 0x170, virtual false, abstract: false, final false
inline void HandleDebugPlane(::UnityEngine::Rect  rect) ;

/// @brief Method InitUpdateGradientTexture, addr 0x9f492ac, size 0x14c, virtual false, abstract: false, final false
inline void InitUpdateGradientTexture() ;

/// @brief Method InitializeOrthoCameraMatrixParameters, addr 0x9f49f94, size 0x12c, virtual false, abstract: false, final false
inline void InitializeOrthoCameraMatrixParameters(::UnityEngine::Rect  roomBounds) ;

/// @brief Method IsInitialized, addr 0x9f4a4ac, size 0x94, virtual false, abstract: false, final false
inline bool IsInitialized() ;

static inline ::Meta::XR::MRUtilityKit::SpaceMapGPU* New_ctor() ;

/// @brief Method OnDisable, addr 0x9f49818, size 0x360, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9f494fc, size 0x31c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReceiveAnchorCreatedEvent, addr 0x9f4ba80, size 0x48, virtual false, abstract: false, final false
inline void ReceiveAnchorCreatedEvent(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method ReceiveAnchorRemovedCallback, addr 0x9f4ba40, size 0x40, virtual false, abstract: false, final false
inline void ReceiveAnchorRemovedCallback(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method ReceiveAnchorUpdatedCallback, addr 0x9f4b9f8, size 0x48, virtual false, abstract: false, final false
inline void ReceiveAnchorUpdatedCallback(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method ReceiveCreatedRoom, addr 0x9f4b7f8, size 0x58, virtual false, abstract: false, final false
inline void ReceiveCreatedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method ReceiveRemovedRoom, addr 0x9f4b850, size 0x64, virtual false, abstract: false, final false
inline void ReceiveRemovedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method ReceiveUpdatedRoom, addr 0x9f4b66c, size 0x48, virtual false, abstract: false, final false
inline void ReceiveUpdatedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method RegisterAnchorUpdates, addr 0x9f4b6b4, size 0x144, virtual false, abstract: false, final false
inline void RegisterAnchorUpdates(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method RunSpaceMap, addr 0x9f4ab40, size 0x530, virtual false, abstract: false, final false
inline void RunSpaceMap(::UnityEngine::RenderTexture*  rt) ;

/// @brief Method SceneLoaded, addr 0x9f4a49c, size 0x10, virtual false, abstract: false, final false
inline void SceneLoaded() ;

/// @brief Method Start, addr 0x9f49200, size 0xac, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartSpaceMap, addr 0x9f48d0c, size 0x1d4, virtual false, abstract: false, final false
inline void StartSpaceMap(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method StartSpaceMap, addr 0x9f48a74, size 0x260, virtual false, abstract: false, final false
inline void StartSpaceMap(::GlobalNamespace::MRUK_RoomFilter  roomFilter) ;

/// @brief Method StartSpaceMapInternal, addr 0x9f48cd4, size 0x38, virtual false, abstract: false, final false
inline void StartSpaceMapInternal(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms, ::UnityEngine::RenderTexture*  rt) ;

/// @brief Method TryReleaseRT, addr 0x9f4a6ec, size 0x80, virtual false, abstract: false, final false
static inline void TryReleaseRT(::UnityEngine::RenderTexture*  renderTexture) ;

/// @brief Method UnregisterAnchorUpdates, addr 0x9f4b8b4, size 0x144, virtual false, abstract: false, final false
inline void UnregisterAnchorUpdates(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method Update, addr 0x9f49b78, size 0xfc, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateBuffer, addr 0x9f4a540, size 0x1ac, virtual false, abstract: false, final false
inline void UpdateBuffer(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method UpdateBuffer, addr 0x9f4a0c0, size 0x3dc, virtual false, abstract: false, final false
inline void UpdateBuffer(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms, ::UnityEngine::RenderTexture*  rt) ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_CSSpaceMap() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_CSSpaceMap() ;

constexpr float_t const& __cordl_internal_get_CameraCaptureBorderBuffer() const;

constexpr float_t& __cordl_internal_get_CameraCaptureBorderBuffer() ;

constexpr ::GlobalNamespace::MRUK_RoomFilter const& __cordl_internal_get_CreateOnStart() const;

constexpr ::GlobalNamespace::MRUK_RoomFilter& __cordl_internal_get_CreateOnStart() ;

constexpr bool const& __cordl_internal_get_CreateOutputTexture() const;

constexpr bool& __cordl_internal_get_CreateOutputTexture() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_DebugPlane() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_DebugPlane() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_InsideObjectColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_InsideObjectColor() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_MapGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_MapGradient() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_OutputTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_OutputTexture() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_RenderTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_RenderTexture() ;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& __cordl_internal_get_SceneObjectLabels() const;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& __cordl_internal_get_SceneObjectLabels() ;

constexpr bool const& __cordl_internal_get_ShowDebugPlane() const;

constexpr bool& __cordl_internal_get_ShowDebugPlane() ;

constexpr int32_t const& __cordl_internal_get_TextureDimension() const;

constexpr int32_t& __cordl_internal_get_TextureDimension() ;

constexpr bool const& __cordl_internal_get_TrackUpdates() const;

constexpr bool& __cordl_internal_get_TrackUpdates() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& __cordl_internal_get__RTextures() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& __cordl_internal_get__RTextures() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__SpaceMapCreatedEvent_k__BackingField() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__SpaceMapCreatedEvent_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* const& __cordl_internal_get__SpaceMapRoomCreatedEvent_k__BackingField() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*& __cordl_internal_get__SpaceMapRoomCreatedEvent_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__SpaceMapUpdatedEvent_k__BackingField() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__SpaceMapUpdatedEvent_k__BackingField() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__colorFloorWall() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__colorFloorWall() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__colorSceneObjects() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__colorSceneObjects() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__colorVirtualObjects() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__colorVirtualObjects() ;

constexpr int32_t const& __cordl_internal_get__csFillSpaceMapKernel() const;

constexpr int32_t& __cordl_internal_get__csFillSpaceMapKernel() ;

constexpr int32_t const& __cordl_internal_get__csPrepareSpaceMapKernel() const;

constexpr int32_t& __cordl_internal_get__csPrepareSpaceMapKernel() ;

constexpr int32_t const& __cordl_internal_get__csSpaceMapKernel() const;

constexpr int32_t& __cordl_internal_get__csSpaceMapKernel() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get__currentRoomBounds() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get__currentRoomBounds() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__gradientTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__gradientTexture() ;

constexpr bool const& __cordl_internal_get__isOrthoCameraInitialized() const;

constexpr bool& __cordl_internal_get__isOrthoCameraInitialized() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__matFloor() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__matFloor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__matObjects() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__matObjects() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__orthoCamProjectionMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__orthoCamProjectionMatrix() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__orthoCamProjectionViewMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__orthoCamProjectionViewMatrix() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__orthoCamViewMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__orthoCamViewMatrix() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>,::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get__roomTextures() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>,::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get__roomTextures() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_gradientMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_gradientMaterial() ;

constexpr void __cordl_internal_set_CSSpaceMap(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_CameraCaptureBorderBuffer(float_t  value) ;

constexpr void __cordl_internal_set_CreateOnStart(::GlobalNamespace::MRUK_RoomFilter  value) ;

constexpr void __cordl_internal_set_CreateOutputTexture(bool  value) ;

constexpr void __cordl_internal_set_DebugPlane(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_InsideObjectColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_MapGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_OutputTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_RenderTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_SceneObjectLabels(::GlobalNamespace::MRUKAnchor_SceneLabels  value) ;

constexpr void __cordl_internal_set_ShowDebugPlane(bool  value) ;

constexpr void __cordl_internal_set_TextureDimension(int32_t  value) ;

constexpr void __cordl_internal_set_TrackUpdates(bool  value) ;

constexpr void __cordl_internal_set__RTextures(::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  value) ;

constexpr void __cordl_internal_set__SpaceMapCreatedEvent_k__BackingField(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__SpaceMapRoomCreatedEvent_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value) ;

constexpr void __cordl_internal_set__SpaceMapUpdatedEvent_k__BackingField(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__colorFloorWall(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__colorSceneObjects(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__colorVirtualObjects(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__csFillSpaceMapKernel(int32_t  value) ;

constexpr void __cordl_internal_set__csPrepareSpaceMapKernel(int32_t  value) ;

constexpr void __cordl_internal_set__csSpaceMapKernel(int32_t  value) ;

constexpr void __cordl_internal_set__currentRoomBounds(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set__gradientTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__isOrthoCameraInitialized(bool  value) ;

constexpr void __cordl_internal_set__matFloor(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__matObjects(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__orthoCamProjectionMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set__orthoCamProjectionViewMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set__orthoCamViewMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set__roomTextures(::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>,::UnityW<::UnityEngine::RenderTexture>>*  value) ;

constexpr void __cordl_internal_set_gradientMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x9f4bd5c, size 0x1e8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_ColorFloorWallID() ;

static inline int32_t getStaticF_ColorSceneObjectsID() ;

static inline int32_t getStaticF_ColorVirtualObjectsID() ;

static inline int32_t getStaticF_HeightID() ;

static inline int32_t getStaticF_ResultID() ;

static inline int32_t getStaticF_SourceID() ;

static inline int32_t getStaticF_SpaceMapCameraMatrixID() ;

static inline int32_t getStaticF_StepID() ;

static inline int32_t getStaticF_WidthID() ;

/// [CompilerGenerated]
/// @brief Method get_SpaceMapCreatedEvent, addr 0x9f48934, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_SpaceMapCreatedEvent() ;

/// [CompilerGenerated]
/// @brief Method get_SpaceMapRoomCreatedEvent, addr 0x9f48944, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* get_SpaceMapRoomCreatedEvent() ;

/// [CompilerGenerated]
/// @brief Method get_SpaceMapUpdatedEvent, addr 0x9f48954, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_SpaceMapUpdatedEvent() ;

static inline void setStaticF_ColorFloorWallID(int32_t  value) ;

static inline void setStaticF_ColorSceneObjectsID(int32_t  value) ;

static inline void setStaticF_ColorVirtualObjectsID(int32_t  value) ;

static inline void setStaticF_HeightID(int32_t  value) ;

static inline void setStaticF_ResultID(int32_t  value) ;

static inline void setStaticF_SourceID(int32_t  value) ;

static inline void setStaticF_SpaceMapCameraMatrixID(int32_t  value) ;

static inline void setStaticF_StepID(int32_t  value) ;

static inline void setStaticF_WidthID(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SpaceMapCreatedEvent, addr 0x9f4893c, size 0x8, virtual false, abstract: false, final false
inline void set_SpaceMapCreatedEvent(::UnityEngine::Events::UnityEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SpaceMapRoomCreatedEvent, addr 0x9f4894c, size 0x8, virtual false, abstract: false, final false
inline void set_SpaceMapRoomCreatedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SpaceMapUpdatedEvent, addr 0x9f4895c, size 0x8, virtual false, abstract: false, final false
inline void set_SpaceMapUpdatedEvent(::UnityEngine::Events::UnityEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpaceMapGPU() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpaceMapGPU", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpaceMapGPU(SpaceMapGPU && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpaceMapGPU", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpaceMapGPU(SpaceMapGPU const& ) = delete;

/// @brief Field AspectRatio offset 0xffffffff size 0x4
static constexpr float_t  AspectRatio{static_cast<float_t>(1.0f)};

/// @brief Field CameraDistance offset 0xffffffff size 0x4
static constexpr float_t  CameraDistance{static_cast<float_t>(10.0f)};

/// @brief Field FarClipPlane offset 0xffffffff size 0x4
static constexpr float_t  FarClipPlane{static_cast<float_t>(100.0f)};

/// @brief Field NearClipPlane offset 0xffffffff size 0x4
static constexpr float_t  NearClipPlane{static_cast<float_t>(0.1f)};

/// @brief Field OculusUnlitShader offset 0xffffffff size 0x8
static constexpr ::ConstString  OculusUnlitShader{u"Oculus/Unlit"};

/// @brief Field SHADER_GLOBAL_SPACEMAPCAMERAMATRIX offset 0xffffffff size 0x8
static constexpr ::ConstString  SHADER_GLOBAL_SPACEMAPCAMERAMATRIX{u"_SpaceMapProjectionViewMatrix"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25903};

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <SpaceMapCreatedEvent>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____SpaceMapCreatedEvent_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SpaceMapRoomCreatedEvent>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  ____SpaceMapRoomCreatedEvent_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <SpaceMapUpdatedEvent>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____SpaceMapUpdatedEvent_k__BackingField;

/// [Tooltip("When the scene data is loaded, this controls what room(s) the spacemap will run on.")]
/// [Header("Scene and Room Settings")]
/// @brief Field CreateOnStart, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::MRUK_RoomFilter  ___CreateOnStart;

/// [Tooltip("If enabled, updates on scene elements such as rooms and anchors will be handled by this class")]
/// @brief Field TrackUpdates, offset: 0x3c, size: 0x1, def value: None
 bool  ___TrackUpdates;

/// [Space]
/// [Header("Textures")]
/// [SerializeField]
/// [Tooltip("Use this dimension for SpaceMap in X and Y")]
/// @brief Field TextureDimension, offset: 0x40, size: 0x4, def value: None
 int32_t  ___TextureDimension;

/// [Tooltip("Colorize the SpaceMap with this Gradient")]
/// @brief Field MapGradient, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___MapGradient;

/// [Space]
/// [Header("SpaceMap Settings")]
/// [SerializeField]
/// @brief Field gradientMaterial, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___gradientMaterial;

/// [SerializeField]
/// @brief Field CSSpaceMap, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___CSSpaceMap;

/// [Tooltip("Those Labels will be taken into account when running the SpaceMap")]
/// [SerializeField]
/// @brief Field SceneObjectLabels, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::MRUKAnchor_SceneLabels  ___SceneObjectLabels;

/// [Tooltip("Set a color for the inside of an Object")]
/// [SerializeField]
/// @brief Field InsideObjectColor, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::Color  ___InsideObjectColor;

/// [Tooltip("Add this to the border of the capture Camera")]
/// [SerializeField]
/// @brief Field CameraCaptureBorderBuffer, offset: 0x74, size: 0x4, def value: None
 float_t  ___CameraCaptureBorderBuffer;

/// [Space]
/// [Header("SpaceMap Debug Settings")]
/// [SerializeField]
/// [Tooltip("This setting affects your performance. If enabled, the TextureMap will be filled with the SpaceMap")]
/// @brief Field CreateOutputTexture, offset: 0x78, size: 0x1, def value: None
 bool  ___CreateOutputTexture;

/// [Tooltip("The Spacemap will be rendered into this Texture.")]
/// [SerializeField]
/// @brief Field OutputTexture, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___OutputTexture;

/// [Tooltip("Add here a debug plane")]
/// [SerializeField]
/// @brief Field DebugPlane, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___DebugPlane;

/// [SerializeField]
/// @brief Field ShowDebugPlane, offset: 0x90, size: 0x1, def value: None
 bool  ___ShowDebugPlane;

/// @brief Field _colorFloorWall, offset: 0x94, size: 0x10, def value: None
 ::UnityEngine::Color  ____colorFloorWall;

/// @brief Field _colorSceneObjects, offset: 0xa4, size: 0x10, def value: None
 ::UnityEngine::Color  ____colorSceneObjects;

/// @brief Field _colorVirtualObjects, offset: 0xb4, size: 0x10, def value: None
 ::UnityEngine::Color  ____colorVirtualObjects;

/// @brief Field _matFloor, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____matFloor;

/// @brief Field _matObjects, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____matObjects;

/// @brief Field _isOrthoCameraInitialized, offset: 0xd8, size: 0x1, def value: None
 bool  ____isOrthoCameraInitialized;

/// @brief Field _orthoCamProjectionMatrix, offset: 0xdc, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ____orthoCamProjectionMatrix;

/// @brief Field _orthoCamViewMatrix, offset: 0x11c, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ____orthoCamViewMatrix;

/// @brief Field _orthoCamProjectionViewMatrix, offset: 0x15c, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ____orthoCamProjectionViewMatrix;

/// @brief Field _currentRoomBounds, offset: 0x19c, size: 0x10, def value: None
 ::UnityEngine::Rect  ____currentRoomBounds;

/// @brief Field _RTextures, offset: 0x1b0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  ____RTextures;

/// @brief Field _gradientTexture, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____gradientTexture;

/// @brief Field _csSpaceMapKernel, offset: 0x1c0, size: 0x4, def value: None
 int32_t  ____csSpaceMapKernel;

/// @brief Field _csFillSpaceMapKernel, offset: 0x1c4, size: 0x4, def value: None
 int32_t  ____csFillSpaceMapKernel;

/// @brief Field _csPrepareSpaceMapKernel, offset: 0x1c8, size: 0x4, def value: None
 int32_t  ____csPrepareSpaceMapKernel;

/// [SerializeField]
/// @brief Field RenderTexture, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___RenderTexture;

/// @brief Field _roomTextures, offset: 0x1d8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>,::UnityW<::UnityEngine::RenderTexture>>*  ____roomTextures;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____SpaceMapCreatedEvent_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____SpaceMapRoomCreatedEvent_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____SpaceMapUpdatedEvent_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ___CreateOnStart) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ___TrackUpdates) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ___TextureDimension) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ___MapGradient) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ___gradientMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ___CSSpaceMap) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ___SceneObjectLabels) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ___InsideObjectColor) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ___CameraCaptureBorderBuffer) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ___CreateOutputTexture) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ___OutputTexture) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ___DebugPlane) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ___ShowDebugPlane) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____colorFloorWall) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____colorSceneObjects) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____colorVirtualObjects) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____matFloor) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____matObjects) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____isOrthoCameraInitialized) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____orthoCamProjectionMatrix) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____orthoCamViewMatrix) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____orthoCamProjectionViewMatrix) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____currentRoomBounds) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____RTextures) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____gradientTexture) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____csSpaceMapKernel) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____csFillSpaceMapKernel) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____csPrepareSpaceMapKernel) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ___RenderTexture) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SpaceMapGPU, ____roomTextures) == 0x1d8, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SpaceMapGPU) == 0x1e0, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
