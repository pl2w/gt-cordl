#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/VoiceEvents.hpp"
#include "Meta/WitAi/Events/zzzz__SpeechEvents_impl.hpp"
#include "Meta/WitAi/Events/zzzz__VoiceEvents_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitByteDataEvent_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitValidationEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Events::VoiceEvents.get_OnByteDataReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitByteDataEvent* (::Meta::WitAi::Events::VoiceEvents::*)()>(&::Meta::WitAi::Events::VoiceEvents::get_OnByteDataReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e94fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::VoiceEvents*>(),
                        {"get_OnByteDataReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::VoiceEvents.get_OnByteDataSent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitByteDataEvent* (::Meta::WitAi::Events::VoiceEvents::*)()>(&::Meta::WitAi::Events::VoiceEvents::get_OnByteDataSent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e94fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::VoiceEvents*>(),
                        {"get_OnByteDataSent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::VoiceEvents.get_OnValidatePartialResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitValidationEvent* (::Meta::WitAi::Events::VoiceEvents::*)()>(&::Meta::WitAi::Events::VoiceEvents::get_OnValidatePartialResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e94fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::VoiceEvents*>(),
                        {"get_OnValidatePartialResponse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::VoiceEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Events::VoiceEvents::*)()>(&::Meta::WitAi::Events::VoiceEvents::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e94fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::VoiceEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Events::WitByteDataEvent*& Meta::WitAi::Events::VoiceEvents::__cordl_internal_get__onByteDataReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onByteDataReady;
}
constexpr ::Meta::WitAi::Events::WitByteDataEvent* const& Meta::WitAi::Events::VoiceEvents::__cordl_internal_get__onByteDataReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onByteDataReady;
}
constexpr void Meta::WitAi::Events::VoiceEvents::__cordl_internal_set__onByteDataReady(::Meta::WitAi::Events::WitByteDataEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onByteDataReady = value;
}
constexpr ::Meta::WitAi::Events::WitByteDataEvent*& Meta::WitAi::Events::VoiceEvents::__cordl_internal_get__onByteDataSent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onByteDataSent;
}
constexpr ::Meta::WitAi::Events::WitByteDataEvent* const& Meta::WitAi::Events::VoiceEvents::__cordl_internal_get__onByteDataSent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onByteDataSent;
}
constexpr void Meta::WitAi::Events::VoiceEvents::__cordl_internal_set__onByteDataSent(::Meta::WitAi::Events::WitByteDataEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onByteDataSent = value;
}
constexpr ::Meta::WitAi::Events::WitValidationEvent*& Meta::WitAi::Events::VoiceEvents::__cordl_internal_get__onValidatePartialResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onValidatePartialResponse;
}
constexpr ::Meta::WitAi::Events::WitValidationEvent* const& Meta::WitAi::Events::VoiceEvents::__cordl_internal_get__onValidatePartialResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onValidatePartialResponse;
}
constexpr void Meta::WitAi::Events::VoiceEvents::__cordl_internal_set__onValidatePartialResponse(::Meta::WitAi::Events::WitValidationEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onValidatePartialResponse = value;
}
inline ::Meta::WitAi::Events::WitByteDataEvent* Meta::WitAi::Events::VoiceEvents::get_OnByteDataReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::VoiceEvents*>(),
                        {"get_OnByteDataReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitByteDataEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitByteDataEvent* Meta::WitAi::Events::VoiceEvents::get_OnByteDataSent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::VoiceEvents*>(),
                        {"get_OnByteDataSent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitByteDataEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitValidationEvent* Meta::WitAi::Events::VoiceEvents::get_OnValidatePartialResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::VoiceEvents*>(),
                        {"get_OnValidatePartialResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitValidationEvent*>(this, ___internal_method);
}
inline void Meta::WitAi::Events::VoiceEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::VoiceEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::VoiceEvents* Meta::WitAi::Events::VoiceEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Events::VoiceEvents*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Events::VoiceEvents::VoiceEvents()   {
}
