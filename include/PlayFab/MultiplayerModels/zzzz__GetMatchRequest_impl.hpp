#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetMatchRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GetMatchRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::GetMatchRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::GetMatchRequest::*)()>(&::PlayFab::MultiplayerModels::GetMatchRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8409b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMatchRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& PlayFab::MultiplayerModels::GetMatchRequest::__cordl_internal_get_EscapeObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EscapeObject;
}
constexpr bool const& PlayFab::MultiplayerModels::GetMatchRequest::__cordl_internal_get_EscapeObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EscapeObject;
}
constexpr void PlayFab::MultiplayerModels::GetMatchRequest::__cordl_internal_set_EscapeObject(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EscapeObject = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetMatchRequest::__cordl_internal_get_MatchId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMatchRequest::__cordl_internal_get_MatchId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchId;
}
constexpr void PlayFab::MultiplayerModels::GetMatchRequest::__cordl_internal_set_MatchId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MatchId = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetMatchRequest::__cordl_internal_get_QueueName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMatchRequest::__cordl_internal_get_QueueName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr void PlayFab::MultiplayerModels::GetMatchRequest::__cordl_internal_set_QueueName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QueueName = value;
}
constexpr bool& PlayFab::MultiplayerModels::GetMatchRequest::__cordl_internal_get_ReturnMemberAttributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReturnMemberAttributes;
}
constexpr bool const& PlayFab::MultiplayerModels::GetMatchRequest::__cordl_internal_get_ReturnMemberAttributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReturnMemberAttributes;
}
constexpr void PlayFab::MultiplayerModels::GetMatchRequest::__cordl_internal_set_ReturnMemberAttributes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReturnMemberAttributes = value;
}
inline void PlayFab::MultiplayerModels::GetMatchRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMatchRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::GetMatchRequest* PlayFab::MultiplayerModels::GetMatchRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::GetMatchRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::GetMatchRequest::GetMatchRequest()   {
}
