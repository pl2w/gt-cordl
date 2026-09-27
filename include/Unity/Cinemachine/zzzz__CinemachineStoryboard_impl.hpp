#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineStoryboard.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineStoryboard_FillStrategy_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineStoryboard_StoryboardRenderMode_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineStoryboard_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBrain_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineStoryboard_FillStrategy_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineStoryboard_StoryboardRenderMode_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineStoryboard_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "UnityEngine/UI/zzzz__RawImage_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStoryboard.PostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineStoryboard::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineStoryboard::PostPipelineStageCallback)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xae99b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStoryboard.UpdateRenderCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineStoryboard::*)()>(&::Unity::Cinemachine::CinemachineStoryboard::UpdateRenderCanvas)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xae99c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"UpdateRenderCanvas", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStoryboard.ConnectToVcam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineStoryboard::*)(bool)>(&::Unity::Cinemachine::CinemachineStoryboard::ConnectToVcam)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xae99dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStoryboard.get_CanvasName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Cinemachine::CinemachineStoryboard::*)()>(&::Unity::Cinemachine::CinemachineStoryboard::get_CanvasName)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae9a194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"get_CanvasName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStoryboard.CameraUpdatedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineStoryboard::*)(::Unity::Cinemachine::CinemachineBrain*)>(&::Unity::Cinemachine::CinemachineStoryboard::CameraUpdatedCallback)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xae9a218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"CameraUpdatedCallback", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStoryboard.LocateMyCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo* (::Unity::Cinemachine::CinemachineStoryboard::*)(::Unity::Cinemachine::CinemachineBrain*, bool)>(&::Unity::Cinemachine::CinemachineStoryboard::LocateMyCanvas)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0xae9a398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"LocateMyCanvas", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBrain*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStoryboard.CreateCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineStoryboard::*)(::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*)>(&::Unity::Cinemachine::CinemachineStoryboard::CreateCanvas)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0xae9a808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"CreateCanvas", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStoryboard.DestroyCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineStoryboard::*)()>(&::Unity::Cinemachine::CinemachineStoryboard::DestroyCanvas)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xae99f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"DestroyCanvas", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStoryboard.PlaceImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineStoryboard::*)(::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*, float_t)>(&::Unity::Cinemachine::CinemachineStoryboard::PlaceImage)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0xae9aca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"PlaceImage", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStoryboard.StaticBlendingHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::CinemachineBrain*)>(&::Unity::Cinemachine::CinemachineStoryboard::StaticBlendingHandler)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xae9b1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"StaticBlendingHandler", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStoryboard.InitializeModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Cinemachine::CinemachineStoryboard::InitializeModule)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xae9b3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"InitializeModule", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStoryboard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineStoryboard::*)()>(&::Unity::Cinemachine::CinemachineStoryboard::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xae9b4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_ShowImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowImage;
}
constexpr bool const& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_ShowImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowImage;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_set_ShowImage(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowImage = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_Image()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Image;
}
constexpr ::UnityW<::UnityEngine::Texture> const& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_Image() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Image;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_set_Image(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Image = value;
}
constexpr ::GlobalNamespace::CinemachineStoryboard_FillStrategy& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_Aspect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Aspect;
}
constexpr ::GlobalNamespace::CinemachineStoryboard_FillStrategy const& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_Aspect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Aspect;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_set_Aspect(::GlobalNamespace::CinemachineStoryboard_FillStrategy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Aspect = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_Alpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Alpha;
}
constexpr float_t const& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_Alpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Alpha;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_set_Alpha(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Alpha = value;
}
constexpr ::UnityEngine::Vector2& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_Center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Center;
}
constexpr ::UnityEngine::Vector2 const& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_Center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Center;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_set_Center(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Center = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_Rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rotation;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_Rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rotation;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_set_Rotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Rotation = value;
}
constexpr ::UnityEngine::Vector2& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_Scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr ::UnityEngine::Vector2 const& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_Scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_set_Scale(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Scale = value;
}
constexpr bool& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_SyncScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SyncScale;
}
constexpr bool const& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_SyncScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SyncScale;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_set_SyncScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SyncScale = value;
}
constexpr bool& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_MuteCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MuteCamera;
}
constexpr bool const& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_MuteCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MuteCamera;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_set_MuteCamera(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MuteCamera = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_SplitView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SplitView;
}
constexpr float_t const& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_SplitView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SplitView;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_set_SplitView(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SplitView = value;
}
constexpr ::GlobalNamespace::CinemachineStoryboard_StoryboardRenderMode& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_RenderMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderMode;
}
constexpr ::GlobalNamespace::CinemachineStoryboard_StoryboardRenderMode const& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_RenderMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderMode;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_set_RenderMode(::GlobalNamespace::CinemachineStoryboard_StoryboardRenderMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RenderMode = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_SortingOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SortingOrder;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_SortingOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SortingOrder;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_set_SortingOrder(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SortingOrder = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_PlaneDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlaneDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_PlaneDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlaneDistance;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_set_PlaneDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlaneDistance = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*>*& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_m_CanvasInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CanvasInfo;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*>* const& Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_get_m_CanvasInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CanvasInfo;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard::__cordl_internal_set_m_CanvasInfo(::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CanvasInfo = value;
}
inline void Unity::Cinemachine::CinemachineStoryboard::setStaticF_s_StoryboardGlobalMute(bool  value)  {
::cordl_internals::setStaticField<bool, "s_StoryboardGlobalMute", ::Unity::Cinemachine::CinemachineStoryboard*>(std::forward<bool>(value));
}
inline bool Unity::Cinemachine::CinemachineStoryboard::getStaticF_s_StoryboardGlobalMute()  {
return ::cordl_internals::getStaticField<bool, "s_StoryboardGlobalMute", ::Unity::Cinemachine::CinemachineStoryboard*>();
}
inline void Unity::Cinemachine::CinemachineStoryboard::PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline void Unity::Cinemachine::CinemachineStoryboard::UpdateRenderCanvas()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"UpdateRenderCanvas", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineStoryboard::ConnectToVcam(bool  connect)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connect);
}
inline ::StringW Unity::Cinemachine::CinemachineStoryboard::get_CanvasName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"get_CanvasName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineStoryboard::CameraUpdatedCallback(::Unity::Cinemachine::CinemachineBrain*  brain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"CameraUpdatedCallback", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, brain);
}
inline ::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo* Unity::Cinemachine::CinemachineStoryboard::LocateMyCanvas(::Unity::Cinemachine::CinemachineBrain*  parent, bool  createIfNotFound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"LocateMyCanvas", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBrain*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*>(this, ___internal_method, parent, createIfNotFound);
}
inline void Unity::Cinemachine::CinemachineStoryboard::CreateCanvas(::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*  ci)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"CreateCanvas", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ci);
}
inline void Unity::Cinemachine::CinemachineStoryboard::DestroyCanvas()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"DestroyCanvas", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineStoryboard::PlaceImage(::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*  ci, float_t  alpha)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"PlaceImage", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ci, alpha);
}
inline void Unity::Cinemachine::CinemachineStoryboard::StaticBlendingHandler(::Unity::Cinemachine::CinemachineBrain*  brain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"StaticBlendingHandler", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, brain);
}
inline void Unity::Cinemachine::CinemachineStoryboard::InitializeModule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {"InitializeModule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineStoryboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineStoryboard* Unity::Cinemachine::CinemachineStoryboard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineStoryboard*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineStoryboard::CinemachineStoryboard()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::*)()>(&::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae9a800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::__cordl_internal_get_Canvas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Canvas;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::__cordl_internal_get_Canvas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Canvas;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::__cordl_internal_set_Canvas(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Canvas = value;
}
constexpr ::UnityW<::UnityEngine::Canvas>& Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::__cordl_internal_get_CanvasComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CanvasComponent;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::__cordl_internal_get_CanvasComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CanvasComponent;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::__cordl_internal_set_CanvasComponent(::UnityW<::UnityEngine::Canvas>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CanvasComponent = value;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineBrain>& Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::__cordl_internal_get_CanvasParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CanvasParent;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineBrain> const& Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::__cordl_internal_get_CanvasParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CanvasParent;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::__cordl_internal_set_CanvasParent(::UnityW<::Unity::Cinemachine::CinemachineBrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CanvasParent = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::__cordl_internal_get_Viewport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Viewport;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::__cordl_internal_get_Viewport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Viewport;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::__cordl_internal_set_Viewport(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Viewport = value;
}
constexpr ::UnityW<::UnityEngine::UI::RawImage>& Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::__cordl_internal_get_RawImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RawImage;
}
constexpr ::UnityW<::UnityEngine::UI::RawImage> const& Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::__cordl_internal_get_RawImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RawImage;
}
constexpr void Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::__cordl_internal_set_RawImage(::UnityW<::UnityEngine::UI::RawImage>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RawImage = value;
}
inline void Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo* Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineStoryboard_CanvasInfo::CinemachineStoryboard_CanvasInfo()   {
}
