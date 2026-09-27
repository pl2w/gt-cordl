#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents_ActiveCameraTrackTextureChangedEvent.hpp"
#include "Liv/Lck/zzzz__LckEvents_ActiveCameraTrackTextureChangedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent.get_CameraTrackTextureResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>* (::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent::*)()>(&::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent::get_CameraTrackTextureResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent>(),
                        {"get_CameraTrackTextureResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>* (::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent::*)()>(&::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent::get_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent::*)(::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*)>(&::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>* GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent::get_CameraTrackTextureResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent>(),
                        {"get_CameraTrackTextureResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*>(*this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>* GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*>(*this, ___internal_method);
}
inline void GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent::_ctor(::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*  cameraTrackTextureResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cameraTrackTextureResult);
}
/// @brief Convert operator to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*>"
constexpr  GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent::operator ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*>*()  {
return static_cast<::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*>"
constexpr ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*>* GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent::i___Liv__Lck__LckEvents_IEventWithResult_1___Liv__Lck__LckResult_1___UnityW___UnityEngine__RenderTexture____()  {
return static_cast<::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_CameraTrackTextureResult_k__BackingField", ty: "::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent::LckEvents_ActiveCameraTrackTextureChangedEvent(::Liv::Lck::LckResult_1<::UnityW<::UnityEngine::RenderTexture>>*  _CameraTrackTextureResult_k__BackingField) noexcept  {
this->_CameraTrackTextureResult_k__BackingField = _CameraTrackTextureResult_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent::LckEvents_ActiveCameraTrackTextureChangedEvent()   {
}
