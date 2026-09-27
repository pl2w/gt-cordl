#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Events/TTSStreamEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/TTS/Events/zzzz__TTSStreamEvents_def.hpp"
#include "Meta/WitAi/TTS/Events/zzzz__TTSClipErrorEvent_def.hpp"
#include "Meta/WitAi/TTS/Events/zzzz__TTSClipEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Events::TTSStreamEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Events::TTSStreamEvents::*)()>(&::Meta::WitAi::TTS::Events::TTSStreamEvents::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9e663b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::TTSStreamEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_get_OnStreamBegin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStreamBegin;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_get_OnStreamBegin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStreamBegin;
}
constexpr void Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_set_OnStreamBegin(::Meta::WitAi::TTS::Events::TTSClipEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStreamBegin = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_get_OnStreamReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStreamReady;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_get_OnStreamReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStreamReady;
}
constexpr void Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_set_OnStreamReady(::Meta::WitAi::TTS::Events::TTSClipEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStreamReady = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_get_OnStreamClipUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStreamClipUpdate;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_get_OnStreamClipUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStreamClipUpdate;
}
constexpr void Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_set_OnStreamClipUpdate(::Meta::WitAi::TTS::Events::TTSClipEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStreamClipUpdate = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_get_OnStreamComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStreamComplete;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_get_OnStreamComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStreamComplete;
}
constexpr void Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_set_OnStreamComplete(::Meta::WitAi::TTS::Events::TTSClipEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStreamComplete = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_get_OnStreamCancel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStreamCancel;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_get_OnStreamCancel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStreamCancel;
}
constexpr void Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_set_OnStreamCancel(::Meta::WitAi::TTS::Events::TTSClipEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStreamCancel = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipErrorEvent*& Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_get_OnStreamError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStreamError;
}
constexpr ::Meta::WitAi::TTS::Events::TTSClipErrorEvent* const& Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_get_OnStreamError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStreamError;
}
constexpr void Meta::WitAi::TTS::Events::TTSStreamEvents::__cordl_internal_set_OnStreamError(::Meta::WitAi::TTS::Events::TTSClipErrorEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStreamError = value;
}
inline void Meta::WitAi::TTS::Events::TTSStreamEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::TTSStreamEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Events::TTSStreamEvents* Meta::WitAi::TTS::Events::TTSStreamEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Events::TTSStreamEvents*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Events::TTSStreamEvents::TTSStreamEvents()   {
}
