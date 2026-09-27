#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineStoryboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineStoryboard_FillStrategy_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineStoryboard_StoryboardRenderMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineStoryboard)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachineStoryboard_FillStrategy;
}
namespace GlobalNamespace {
struct CinemachineStoryboard_StoryboardRenderMode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineBrain;
}
namespace Unity::Cinemachine {
class CinemachineStoryboard_CanvasInfo;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace UnityEngine::UI {
class RawImage;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineStoryboard;
}
namespace Unity::Cinemachine {
class CinemachineStoryboard_CanvasInfo;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineStoryboard*);
MARK_REF_T(::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineStoryboard*, "Unity.Cinemachine", "CinemachineStoryboard");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*, "Unity.Cinemachine", "CinemachineStoryboard/CanvasInfo");
// [SaveDuringPlay]
// [AddComponentMenu("Cinemachine/Procedural/Extensions/Cinemachine Storyboard")]
// [ExecuteAlways]
// [DisallowMultipleComponent]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineStoryboard.html")]
// Dependencies Unity.Cinemachine.CinemachineExtension, Unity.Cinemachine.CinemachineStoryboard::FillStrategy, Unity.Cinemachine.CinemachineStoryboard::StoryboardRenderMode, UnityEngine.Vector2, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineStoryboard
class CORDL_TYPE CinemachineStoryboard : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
using FillStrategy = ::GlobalNamespace::CinemachineStoryboard_FillStrategy;

using StoryboardRenderMode = ::GlobalNamespace::CinemachineStoryboard_StoryboardRenderMode;

using CanvasInfo = ::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo;

/// @brief Field Alpha, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_Alpha, put=__cordl_internal_set_Alpha)) float_t  Alpha;

/// @brief Field Aspect, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_Aspect, put=__cordl_internal_set_Aspect)) ::GlobalNamespace::CinemachineStoryboard_FillStrategy  Aspect;

 __declspec(property(get=get_CanvasName)) ::StringW  CanvasName;

/// @brief Field Center, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Center, put=__cordl_internal_set_Center)) ::UnityEngine::Vector2  Center;

/// @brief Field Image, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Image, put=__cordl_internal_set_Image)) ::UnityW<::UnityEngine::Texture>  Image;

/// @brief Field MuteCamera, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get_MuteCamera, put=__cordl_internal_set_MuteCamera)) bool  MuteCamera;

/// @brief Field PlaneDistance, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlaneDistance, put=__cordl_internal_set_PlaneDistance)) float_t  PlaneDistance;

/// @brief Field RenderMode, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RenderMode, put=__cordl_internal_set_RenderMode)) ::GlobalNamespace::CinemachineStoryboard_StoryboardRenderMode  RenderMode;

/// @brief Field Rotation, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_Rotation, put=__cordl_internal_set_Rotation)) ::UnityEngine::Vector3  Rotation;

/// @brief Field Scale, offset 0x5c, size 0x8 
 __declspec(property(get=__cordl_internal_get_Scale, put=__cordl_internal_set_Scale)) ::UnityEngine::Vector2  Scale;

/// @brief Field ShowImage, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowImage, put=__cordl_internal_set_ShowImage)) bool  ShowImage;

/// @brief Field SortingOrder, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_SortingOrder, put=__cordl_internal_set_SortingOrder)) int32_t  SortingOrder;

/// @brief Field SplitView, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_SplitView, put=__cordl_internal_set_SplitView)) float_t  SplitView;

/// @brief Field SyncScale, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_SyncScale, put=__cordl_internal_set_SyncScale)) bool  SyncScale;

/// @brief Field m_CanvasInfo, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CanvasInfo, put=__cordl_internal_set_m_CanvasInfo)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*>*  m_CanvasInfo;

/// @brief Field s_StoryboardGlobalMute, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_StoryboardGlobalMute, put=setStaticF_s_StoryboardGlobalMute)) bool  s_StoryboardGlobalMute;

/// @brief Method CameraUpdatedCallback, addr 0xae9a218, size 0x180, virtual false, abstract: false, final false
inline void CameraUpdatedCallback(::Unity::Cinemachine::CinemachineBrain*  brain) ;

/// @brief Method ConnectToVcam, addr 0xae99dfc, size 0x168, virtual true, abstract: false, final false
inline void ConnectToVcam(bool  connect) ;

/// @brief Method CreateCanvas, addr 0xae9a808, size 0x498, virtual false, abstract: false, final false
inline void CreateCanvas(::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*  ci) ;

/// @brief Method DestroyCanvas, addr 0xae99f64, size 0x230, virtual false, abstract: false, final false
inline void DestroyCanvas() ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method InitializeModule, addr 0xae9b3c4, size 0x11c, virtual false, abstract: false, final false
static inline void InitializeModule() ;

/// @brief Method LocateMyCanvas, addr 0xae9a398, size 0x468, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo* LocateMyCanvas(::Unity::Cinemachine::CinemachineBrain*  parent, bool  createIfNotFound) ;

static inline ::Unity::Cinemachine::CinemachineStoryboard* New_ctor() ;

/// @brief Method PlaceImage, addr 0xae9aca0, size 0x538, virtual false, abstract: false, final false
inline void PlaceImage(::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*  ci, float_t  alpha) ;

/// @brief Method PostPipelineStageCallback, addr 0xae99b38, size 0x120, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method StaticBlendingHandler, addr 0xae9b1d8, size 0x1ec, virtual false, abstract: false, final false
static inline void StaticBlendingHandler(::Unity::Cinemachine::CinemachineBrain*  brain) ;

/// @brief Method UpdateRenderCanvas, addr 0xae99c58, size 0x1a4, virtual false, abstract: false, final false
inline void UpdateRenderCanvas() ;

constexpr float_t const& __cordl_internal_get_Alpha() const;

constexpr float_t& __cordl_internal_get_Alpha() ;

constexpr ::GlobalNamespace::CinemachineStoryboard_FillStrategy const& __cordl_internal_get_Aspect() const;

constexpr ::GlobalNamespace::CinemachineStoryboard_FillStrategy& __cordl_internal_get_Aspect() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_Center() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_Center() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_Image() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_Image() ;

constexpr bool const& __cordl_internal_get_MuteCamera() const;

constexpr bool& __cordl_internal_get_MuteCamera() ;

constexpr float_t const& __cordl_internal_get_PlaneDistance() const;

constexpr float_t& __cordl_internal_get_PlaneDistance() ;

constexpr ::GlobalNamespace::CinemachineStoryboard_StoryboardRenderMode const& __cordl_internal_get_RenderMode() const;

constexpr ::GlobalNamespace::CinemachineStoryboard_StoryboardRenderMode& __cordl_internal_get_RenderMode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Rotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Rotation() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_Scale() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_Scale() ;

constexpr bool const& __cordl_internal_get_ShowImage() const;

constexpr bool& __cordl_internal_get_ShowImage() ;

constexpr int32_t const& __cordl_internal_get_SortingOrder() const;

constexpr int32_t& __cordl_internal_get_SortingOrder() ;

constexpr float_t const& __cordl_internal_get_SplitView() const;

constexpr float_t& __cordl_internal_get_SplitView() ;

constexpr bool const& __cordl_internal_get_SyncScale() const;

constexpr bool& __cordl_internal_get_SyncScale() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*>* const& __cordl_internal_get_m_CanvasInfo() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*>*& __cordl_internal_get_m_CanvasInfo() ;

constexpr void __cordl_internal_set_Alpha(float_t  value) ;

constexpr void __cordl_internal_set_Aspect(::GlobalNamespace::CinemachineStoryboard_FillStrategy  value) ;

constexpr void __cordl_internal_set_Center(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_Image(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_MuteCamera(bool  value) ;

constexpr void __cordl_internal_set_PlaneDistance(float_t  value) ;

constexpr void __cordl_internal_set_RenderMode(::GlobalNamespace::CinemachineStoryboard_StoryboardRenderMode  value) ;

constexpr void __cordl_internal_set_Rotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Scale(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_ShowImage(bool  value) ;

constexpr void __cordl_internal_set_SortingOrder(int32_t  value) ;

constexpr void __cordl_internal_set_SplitView(float_t  value) ;

constexpr void __cordl_internal_set_SyncScale(bool  value) ;

constexpr void __cordl_internal_set_m_CanvasInfo(::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*>*  value) ;

/// @brief Method .ctor, addr 0xae9b4e0, size 0x148, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_s_StoryboardGlobalMute() ;

/// @brief Method get_CanvasName, addr 0xae9a194, size 0x84, virtual false, abstract: false, final false
inline ::StringW get_CanvasName() ;

static inline void setStaticF_s_StoryboardGlobalMute(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineStoryboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineStoryboard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineStoryboard(CinemachineStoryboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineStoryboard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineStoryboard(CinemachineStoryboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22213};

/// [Tooltip("If checked, the specified image will be displayed as an overlay over the virtual camera\'s output")]
/// [FormerlySerializedAs("m_ShowImage")]
/// @brief Field ShowImage, offset: 0x30, size: 0x1, def value: None
 bool  ___ShowImage;

/// [Tooltip("The image to display")]
/// [FormerlySerializedAs("m_Image")]
/// @brief Field Image, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___Image;

/// [Tooltip("How to handle differences between image aspect and screen aspect")]
/// [FormerlySerializedAs("m_Aspect")]
/// @brief Field Aspect, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineStoryboard_FillStrategy  ___Aspect;

/// [Tooltip("The opacity of the image.  0 is transparent, 1 is opaque")]
/// [FormerlySerializedAs("m_Alpha")]
/// [Range(0, 1)]
/// @brief Field Alpha, offset: 0x44, size: 0x4, def value: None
 float_t  ___Alpha;

/// [Tooltip("The screen-space position at which to display the image.  Zero is center")]
/// [FormerlySerializedAs("m_Center")]
/// @brief Field Center, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___Center;

/// [Tooltip("The screen-space rotation to apply to the image")]
/// [FormerlySerializedAs("m_Rotation")]
/// @brief Field Rotation, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Rotation;

/// [Tooltip("The screen-space scaling to apply to the image")]
/// [FormerlySerializedAs("m_Scale")]
/// @brief Field Scale, offset: 0x5c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___Scale;

/// [Tooltip("If checked, X and Y scale are synchronized")]
/// [FormerlySerializedAs("m_SyncScale")]
/// @brief Field SyncScale, offset: 0x64, size: 0x1, def value: None
 bool  ___SyncScale;

/// [Tooltip("If checked, Camera transform will not be controlled by this virtual camera")]
/// [FormerlySerializedAs("m_MuteCamera")]
/// @brief Field MuteCamera, offset: 0x65, size: 0x1, def value: None
 bool  ___MuteCamera;

/// [Range(-1, 1)]
/// [Tooltip("Wipe the image on and off horizontally")]
/// [FormerlySerializedAs("m_SplitView")]
/// @brief Field SplitView, offset: 0x68, size: 0x4, def value: None
 float_t  ___SplitView;

/// [Tooltip("The render mode of the canvas on which the storyboard is drawn.")]
/// [FormerlySerializedAs("m_RenderMode")]
/// @brief Field RenderMode, offset: 0x6c, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineStoryboard_StoryboardRenderMode  ___RenderMode;

/// [Tooltip("Allows ordering canvases to render on top or below other canvases.")]
/// [FormerlySerializedAs("m_SortingOrder")]
/// @brief Field SortingOrder, offset: 0x70, size: 0x4, def value: None
 int32_t  ___SortingOrder;

/// [Tooltip("How far away from the camera is the Canvas generated.")]
/// [FormerlySerializedAs("m_PlaneDistance")]
/// @brief Field PlaneDistance, offset: 0x74, size: 0x4, def value: None
 float_t  ___PlaneDistance;

/// @brief Field m_CanvasInfo, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*>*  ___m_CanvasInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard, ___ShowImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard, ___Image) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard, ___Aspect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard, ___Alpha) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard, ___Center) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard, ___Rotation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard, ___Scale) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard, ___SyncScale) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard, ___MuteCamera) == 0x65, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard, ___SplitView) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard, ___RenderMode) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard, ___SortingOrder) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard, ___PlaneDistance) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard, ___m_CanvasInfo) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineStoryboard) == 0x80, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineStoryboard/CanvasInfo
class CORDL_TYPE CinemachineStoryboard_CanvasInfo : public ::System::Object {
public:
// Declarations
/// @brief Field Canvas, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Canvas, put=__cordl_internal_set_Canvas)) ::UnityW<::UnityEngine::GameObject>  Canvas;

/// @brief Field CanvasComponent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CanvasComponent, put=__cordl_internal_set_CanvasComponent)) ::UnityW<::UnityEngine::Canvas>  CanvasComponent;

/// @brief Field CanvasParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CanvasParent, put=__cordl_internal_set_CanvasParent)) ::UnityW<::Unity::Cinemachine::CinemachineBrain>  CanvasParent;

/// @brief Field RawImage, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_RawImage, put=__cordl_internal_set_RawImage)) ::UnityW<::UnityEngine::UI::RawImage>  RawImage;

/// @brief Field Viewport, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Viewport, put=__cordl_internal_set_Viewport)) ::UnityW<::UnityEngine::RectTransform>  Viewport;

static inline ::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Canvas() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Canvas() ;

constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_CanvasComponent() const;

constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_CanvasComponent() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineBrain> const& __cordl_internal_get_CanvasParent() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineBrain>& __cordl_internal_get_CanvasParent() ;

constexpr ::UnityW<::UnityEngine::UI::RawImage> const& __cordl_internal_get_RawImage() const;

constexpr ::UnityW<::UnityEngine::UI::RawImage>& __cordl_internal_get_RawImage() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_Viewport() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_Viewport() ;

constexpr void __cordl_internal_set_Canvas(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_CanvasComponent(::UnityW<::UnityEngine::Canvas>  value) ;

constexpr void __cordl_internal_set_CanvasParent(::UnityW<::Unity::Cinemachine::CinemachineBrain>  value) ;

constexpr void __cordl_internal_set_RawImage(::UnityW<::UnityEngine::UI::RawImage>  value) ;

constexpr void __cordl_internal_set_Viewport(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0xae9a800, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineStoryboard_CanvasInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineStoryboard_CanvasInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineStoryboard_CanvasInfo(CinemachineStoryboard_CanvasInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineStoryboard_CanvasInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineStoryboard_CanvasInfo(CinemachineStoryboard_CanvasInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22211};

/// @brief Field Canvas, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Canvas;

/// @brief Field CanvasComponent, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Canvas>  ___CanvasComponent;

/// @brief Field CanvasParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineBrain>  ___CanvasParent;

/// @brief Field Viewport, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___Viewport;

/// @brief Field RawImage, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::RawImage>  ___RawImage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo, ___Canvas) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo, ___CanvasComponent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo, ___CanvasParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo, ___Viewport) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo, ___RawImage) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo) == 0x38, "Size mismatch!");

} // namespace end def Unity::Cinemachine
