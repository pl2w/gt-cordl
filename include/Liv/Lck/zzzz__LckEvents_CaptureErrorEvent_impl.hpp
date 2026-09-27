#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents_CaptureErrorEvent.hpp"
#include "Liv/Lck/ErrorHandling/zzzz__LckCaptureError_impl.hpp"
#include "Liv/Lck/zzzz__LckEvents_CaptureErrorEvent_def.hpp"
#include "Liv/Lck/ErrorHandling/zzzz__LckCaptureError_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckEvents_CaptureErrorEvent.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::ErrorHandling::LckCaptureError (::GlobalNamespace::LckEvents_CaptureErrorEvent::*)()>(&::GlobalNamespace::LckEvents_CaptureErrorEvent::get_Error)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ce1940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_CaptureErrorEvent>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEvents_CaptureErrorEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEvents_CaptureErrorEvent::*)(::Liv::Lck::ErrorHandling::LckCaptureError)>(&::GlobalNamespace::LckEvents_CaptureErrorEvent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9ce194c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_CaptureErrorEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ErrorHandling::LckCaptureError>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Liv::Lck::ErrorHandling::LckCaptureError GlobalNamespace::LckEvents_CaptureErrorEvent::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_CaptureErrorEvent>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::ErrorHandling::LckCaptureError>(*this, ___internal_method);
}
inline void GlobalNamespace::LckEvents_CaptureErrorEvent::_ctor(::Liv::Lck::ErrorHandling::LckCaptureError  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEvents_CaptureErrorEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ErrorHandling::LckCaptureError>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, error);
}
// Ctor Parameters [CppParam { name: "_Error_k__BackingField", ty: "::Liv::Lck::ErrorHandling::LckCaptureError", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckEvents_CaptureErrorEvent::LckEvents_CaptureErrorEvent(::Liv::Lck::ErrorHandling::LckCaptureError  _Error_k__BackingField) noexcept  {
this->_Error_k__BackingField = _Error_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEvents_CaptureErrorEvent::LckEvents_CaptureErrorEvent()   {
}
