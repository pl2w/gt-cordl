#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents_ActiveCameraChangedEvent.hpp"
#include "Liv/Lck/zzzz__LckEvents_ActiveCameraChangedEvent_def.hpp"
#include "Liv/Lck/zzzz__ILckCamera_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckEvents_ActiveCameraChangedEvent.get_CameraResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* (::GlobalNamespace::LckEvents_ActiveCameraChangedEvent::*)()>(&::GlobalNamespace::LckEvents_ActiveCameraChangedEvent::get_CameraResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce18f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_ActiveCameraChangedEvent>(),
                        {"get_CameraResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEvents_ActiveCameraChangedEvent.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* (::GlobalNamespace::LckEvents_ActiveCameraChangedEvent::*)()>(&::GlobalNamespace::LckEvents_ActiveCameraChangedEvent::get_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce18f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_ActiveCameraChangedEvent>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEvents_ActiveCameraChangedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEvents_ActiveCameraChangedEvent::*)(::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*)>(&::GlobalNamespace::LckEvents_ActiveCameraChangedEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_ActiveCameraChangedEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* GlobalNamespace::LckEvents_ActiveCameraChangedEvent::get_CameraResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_ActiveCameraChangedEvent>(),
                        {"get_CameraResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>(*this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* GlobalNamespace::LckEvents_ActiveCameraChangedEvent::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_ActiveCameraChangedEvent>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>(*this, ___internal_method);
}
inline void GlobalNamespace::LckEvents_ActiveCameraChangedEvent::_ctor(::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*  cameraResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_ActiveCameraChangedEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cameraResult);
}
/// @brief Convert operator to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>"
constexpr  GlobalNamespace::LckEvents_ActiveCameraChangedEvent::operator ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*()  {
return static_cast<::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>"
constexpr ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>* GlobalNamespace::LckEvents_ActiveCameraChangedEvent::i___Liv__Lck__LckEvents_IEventWithResult_1___Liv__Lck__LckResult_1___Liv__Lck__ILckCamera____()  {
return static_cast<::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_CameraResult_k__BackingField", ty: "::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckEvents_ActiveCameraChangedEvent::LckEvents_ActiveCameraChangedEvent(::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*  _CameraResult_k__BackingField) noexcept  {
this->_CameraResult_k__BackingField = _CameraResult_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEvents_ActiveCameraChangedEvent::LckEvents_ActiveCameraChangedEvent()   {
}
