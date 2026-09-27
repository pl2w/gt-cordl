#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents_CameraResolutionChangedEvent.hpp"
#include "Liv/Lck/zzzz__LckEvents_CameraResolutionChangedEvent_def.hpp"
#include "Liv/Lck/zzzz__CameraResolutionDescriptor_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckEvents_CameraResolutionChangedEvent.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>* (::GlobalNamespace::LckEvents_CameraResolutionChangedEvent::*)()>(&::GlobalNamespace::LckEvents_CameraResolutionChangedEvent::get_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_CameraResolutionChangedEvent>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEvents_CameraResolutionChangedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEvents_CameraResolutionChangedEvent::*)(::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*)>(&::GlobalNamespace::LckEvents_CameraResolutionChangedEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_CameraResolutionChangedEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>* GlobalNamespace::LckEvents_CameraResolutionChangedEvent::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_CameraResolutionChangedEvent>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*>(*this, ___internal_method);
}
inline void GlobalNamespace::LckEvents_CameraResolutionChangedEvent::_ctor(::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*  cameraResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_CameraResolutionChangedEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cameraResult);
}
/// @brief Convert operator to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*>"
constexpr  GlobalNamespace::LckEvents_CameraResolutionChangedEvent::operator ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*>*()  {
return static_cast<::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*>"
constexpr ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*>* GlobalNamespace::LckEvents_CameraResolutionChangedEvent::i___Liv__Lck__LckEvents_IEventWithResult_1___Liv__Lck__LckResult_1___Liv__Lck__CameraResolutionDescriptor___()  {
return static_cast<::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Result_k__BackingField", ty: "::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckEvents_CameraResolutionChangedEvent::LckEvents_CameraResolutionChangedEvent(::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*  _Result_k__BackingField) noexcept  {
this->_Result_k__BackingField = _Result_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEvents_CameraResolutionChangedEvent::LckEvents_CameraResolutionChangedEvent()   {
}
