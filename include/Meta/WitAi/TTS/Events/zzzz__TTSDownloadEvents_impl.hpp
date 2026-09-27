#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Events/TTSDownloadEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/TTS/Events/zzzz__TTSDownloadEvents_def.hpp"
#include "Meta/WitAi/TTS/Events/zzzz__TTSClipDownloadErrorEvent_def.hpp"
#include "Meta/WitAi/TTS/Events/zzzz__TTSClipDownloadEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Events::TTSDownloadEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Events::TTSDownloadEvents::*)()>(&::Meta::WitAi::TTS::Events::TTSDownloadEvents::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9e66030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::TTSDownloadEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*& Meta::WitAi::TTS::Events::TTSDownloadEvents::__cordl_internal_get_OnDownloadBegin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDownloadBegin;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent* const& Meta::WitAi::TTS::Events::TTSDownloadEvents::__cordl_internal_get_OnDownloadBegin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDownloadBegin;
}
constexpr void Meta::WitAi::TTS::Events::TTSDownloadEvents::__cordl_internal_set_OnDownloadBegin(::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDownloadBegin = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*& Meta::WitAi::TTS::Events::TTSDownloadEvents::__cordl_internal_get_OnDownloadSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDownloadSuccess;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent* const& Meta::WitAi::TTS::Events::TTSDownloadEvents::__cordl_internal_get_OnDownloadSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDownloadSuccess;
}
constexpr void Meta::WitAi::TTS::Events::TTSDownloadEvents::__cordl_internal_set_OnDownloadSuccess(::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDownloadSuccess = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*& Meta::WitAi::TTS::Events::TTSDownloadEvents::__cordl_internal_get_OnDownloadCancel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDownloadCancel;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent* const& Meta::WitAi::TTS::Events::TTSDownloadEvents::__cordl_internal_get_OnDownloadCancel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDownloadCancel;
}
constexpr void Meta::WitAi::TTS::Events::TTSDownloadEvents::__cordl_internal_set_OnDownloadCancel(::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDownloadCancel = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipDownloadErrorEvent*& Meta::WitAi::TTS::Events::TTSDownloadEvents::__cordl_internal_get_OnDownloadError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDownloadError;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipDownloadErrorEvent* const& Meta::WitAi::TTS::Events::TTSDownloadEvents::__cordl_internal_get_OnDownloadError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDownloadError;
}
constexpr void Meta::WitAi::TTS::Events::TTSDownloadEvents::__cordl_internal_set_OnDownloadError(::Meta::WitAi::TTS::Events::TTSClipDownloadErrorEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDownloadError = value;
}
inline void Meta::WitAi::TTS::Events::TTSDownloadEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::TTSDownloadEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Events::TTSDownloadEvents* Meta::WitAi::TTS::Events::TTSDownloadEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Events::TTSDownloadEvents*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Events::TTSDownloadEvents::TTSDownloadEvents()   {
}
