#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSActionEvent.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSStringEvent_impl.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSActionEvent_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSActionEvent.get_Response
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (::Meta::WitAi::TTS::Data::TTSActionEvent::*)()>(&::Meta::WitAi::TTS::Data::TTSActionEvent::get_Response)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e6659c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSActionEvent*>(),
                        {"get_Response", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSActionEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Data::TTSActionEvent::*)()>(&::Meta::WitAi::TTS::Data::TTSActionEvent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e6842c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSActionEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::WitAi::TTS::Data::TTSActionEvent::__cordl_internal_get_response()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___response;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::WitAi::TTS::Data::TTSActionEvent::__cordl_internal_get_response() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___response;
}
constexpr void Meta::WitAi::TTS::Data::TTSActionEvent::__cordl_internal_set_response(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___response = value;
}
inline void Meta::WitAi::TTS::Data::TTSActionEvent::setStaticF_EMPTY_RESPONSE(::Meta::WitAi::Json::WitResponseNode*  value)  {
::cordl_internals::setStaticField<::Meta::WitAi::Json::WitResponseNode*, "EMPTY_RESPONSE", ::Meta::WitAi::TTS::Data::TTSActionEvent*>(std::forward<::Meta::WitAi::Json::WitResponseNode*>(value));
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::WitAi::TTS::Data::TTSActionEvent::getStaticF_EMPTY_RESPONSE()  {
return ::cordl_internals::getStaticField<::Meta::WitAi::Json::WitResponseNode*, "EMPTY_RESPONSE", ::Meta::WitAi::TTS::Data::TTSActionEvent*>();
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::WitAi::TTS::Data::TTSActionEvent::get_Response()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSActionEvent*>(),
                        {"get_Response", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Data::TTSActionEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSActionEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Data::TTSActionEvent* Meta::WitAi::TTS::Data::TTSActionEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Data::TTSActionEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Data::TTSActionEvent::TTSActionEvent()   {
}
