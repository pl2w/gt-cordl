#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Events/TTSServiceEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/TTS/Events/zzzz__TTSServiceEvents_def.hpp"
#include "Meta/WitAi/TTS/Events/zzzz__TTSClipEvent_def.hpp"
#include "Meta/WitAi/TTS/Events/zzzz__TTSDownloadEvents_def.hpp"
#include "Meta/WitAi/TTS/Events/zzzz__TTSStreamEvents_def.hpp"
#include "Meta/WitAi/TTS/Events/zzzz__TTSWebRequestEvents_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Events::TTSServiceEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Events::TTSServiceEvents::*)()>(&::Meta::WitAi::TTS::Events::TTSServiceEvents::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9e66114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::TTSServiceEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& Meta::WitAi::TTS::Events::TTSServiceEvents::__cordl_internal_get_OnClipCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipCreated;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& Meta::WitAi::TTS::Events::TTSServiceEvents::__cordl_internal_get_OnClipCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipCreated;
}
constexpr void Meta::WitAi::TTS::Events::TTSServiceEvents::__cordl_internal_set_OnClipCreated(::Meta::WitAi::TTS::Events::TTSClipEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClipCreated = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& Meta::WitAi::TTS::Events::TTSServiceEvents::__cordl_internal_get_OnClipUnloaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipUnloaded;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& Meta::WitAi::TTS::Events::TTSServiceEvents::__cordl_internal_get_OnClipUnloaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipUnloaded;
}
constexpr void Meta::WitAi::TTS::Events::TTSServiceEvents::__cordl_internal_set_OnClipUnloaded(::Meta::WitAi::TTS::Events::TTSClipEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClipUnloaded = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSWebRequestEvents*& Meta::WitAi::TTS::Events::TTSServiceEvents::__cordl_internal_get_WebRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WebRequest;
}
constexpr ::Meta::WitAi::TTS::Events::TTSWebRequestEvents* const& Meta::WitAi::TTS::Events::TTSServiceEvents::__cordl_internal_get_WebRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WebRequest;
}
constexpr void Meta::WitAi::TTS::Events::TTSServiceEvents::__cordl_internal_set_WebRequest(::Meta::WitAi::TTS::Events::TTSWebRequestEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WebRequest = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSStreamEvents*& Meta::WitAi::TTS::Events::TTSServiceEvents::__cordl_internal_get_Stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stream;
}
constexpr ::Meta::WitAi::TTS::Events::TTSStreamEvents* const& Meta::WitAi::TTS::Events::TTSServiceEvents::__cordl_internal_get_Stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stream;
}
constexpr void Meta::WitAi::TTS::Events::TTSServiceEvents::__cordl_internal_set_Stream(::Meta::WitAi::TTS::Events::TTSStreamEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Stream = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSDownloadEvents*& Meta::WitAi::TTS::Events::TTSServiceEvents::__cordl_internal_get_Download()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Download;
}
constexpr ::Meta::WitAi::TTS::Events::TTSDownloadEvents* const& Meta::WitAi::TTS::Events::TTSServiceEvents::__cordl_internal_get_Download() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Download;
}
constexpr void Meta::WitAi::TTS::Events::TTSServiceEvents::__cordl_internal_set_Download(::Meta::WitAi::TTS::Events::TTSDownloadEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Download = value;
}
inline void Meta::WitAi::TTS::Events::TTSServiceEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::TTSServiceEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Events::TTSServiceEvents* Meta::WitAi::TTS::Events::TTSServiceEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Events::TTSServiceEvents*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Events::TTSServiceEvents::TTSServiceEvents()   {
}
