#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Events/TTSWebRequestEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/TTS/Events/zzzz__TTSWebRequestEvents_def.hpp"
#include "Meta/WitAi/TTS/Events/zzzz__TTSClipErrorEvent_def.hpp"
#include "Meta/WitAi/TTS/Events/zzzz__TTSClipEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Events::TTSWebRequestEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Events::TTSWebRequestEvents::*)()>(&::Meta::WitAi::TTS::Events::TTSWebRequestEvents::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9e66290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::TTSWebRequestEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_get_OnRequestBegin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestBegin;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_get_OnRequestBegin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestBegin;
}
constexpr void Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_set_OnRequestBegin(::Meta::WitAi::TTS::Events::TTSClipEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRequestBegin = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_get_OnRequestCancel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestCancel;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_get_OnRequestCancel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestCancel;
}
constexpr void Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_set_OnRequestCancel(::Meta::WitAi::TTS::Events::TTSClipEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRequestCancel = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipErrorEvent*& Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_get_OnRequestError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestError;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipErrorEvent* const& Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_get_OnRequestError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestError;
}
constexpr void Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_set_OnRequestError(::Meta::WitAi::TTS::Events::TTSClipErrorEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRequestError = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_get_OnRequestFirstResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestFirstResponse;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_get_OnRequestFirstResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestFirstResponse;
}
constexpr void Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_set_OnRequestFirstResponse(::Meta::WitAi::TTS::Events::TTSClipEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRequestFirstResponse = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_get_OnRequestReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestReady;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_get_OnRequestReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestReady;
}
constexpr void Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_set_OnRequestReady(::Meta::WitAi::TTS::Events::TTSClipEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRequestReady = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_get_OnRequestComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestComplete;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_get_OnRequestComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestComplete;
}
constexpr void Meta::WitAi::TTS::Events::TTSWebRequestEvents::__cordl_internal_set_OnRequestComplete(::Meta::WitAi::TTS::Events::TTSClipEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRequestComplete = value;
}
inline void Meta::WitAi::TTS::Events::TTSWebRequestEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::TTSWebRequestEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Events::TTSWebRequestEvents* Meta::WitAi::TTS::Events::TTSWebRequestEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Events::TTSWebRequestEvents*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Events::TTSWebRequestEvents::TTSWebRequestEvents()   {
}
