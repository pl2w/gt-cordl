#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/VoiceSession.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Data/zzzz__VoiceSession_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/zzzz__VoiceService_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::VoiceSession._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::VoiceSession::*)()>(&::Meta::WitAi::Data::VoiceSession::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9a850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::VoiceSession*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::VoiceService>& Meta::WitAi::Data::VoiceSession::__cordl_internal_get_service()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___service;
}
constexpr ::UnityW<::Meta::WitAi::VoiceService> const& Meta::WitAi::Data::VoiceSession::__cordl_internal_get_service() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___service;
}
constexpr void Meta::WitAi::Data::VoiceSession::__cordl_internal_set_service(::UnityW<::Meta::WitAi::VoiceService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___service = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::WitAi::Data::VoiceSession::__cordl_internal_get_response()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___response;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::WitAi::Data::VoiceSession::__cordl_internal_get_response() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___response;
}
constexpr void Meta::WitAi::Data::VoiceSession::__cordl_internal_set_response(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___response = value;
}
constexpr bool& Meta::WitAi::Data::VoiceSession::__cordl_internal_get_validResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validResponse;
}
constexpr bool const& Meta::WitAi::Data::VoiceSession::__cordl_internal_get_validResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validResponse;
}
constexpr void Meta::WitAi::Data::VoiceSession::__cordl_internal_set_validResponse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validResponse = value;
}
inline void Meta::WitAi::Data::VoiceSession::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::VoiceSession*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::VoiceSession* Meta::WitAi::Data::VoiceSession::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::VoiceSession*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::VoiceSession::VoiceSession()   {
}
