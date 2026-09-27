#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ReportPlayerClientRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ReportPlayerClientRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ReportPlayerClientRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ReportPlayerClientRequest::*)()>(&::PlayFab::ClientModels::ReportPlayerClientRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ReportPlayerClientRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::ReportPlayerClientRequest::__cordl_internal_get_Comment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Comment;
}
constexpr ::StringW const& PlayFab::ClientModels::ReportPlayerClientRequest::__cordl_internal_get_Comment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Comment;
}
constexpr void PlayFab::ClientModels::ReportPlayerClientRequest::__cordl_internal_set_Comment(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Comment = value;
}
constexpr ::StringW& PlayFab::ClientModels::ReportPlayerClientRequest::__cordl_internal_get_ReporteeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReporteeId;
}
constexpr ::StringW const& PlayFab::ClientModels::ReportPlayerClientRequest::__cordl_internal_get_ReporteeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReporteeId;
}
constexpr void PlayFab::ClientModels::ReportPlayerClientRequest::__cordl_internal_set_ReporteeId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReporteeId = value;
}
inline void PlayFab::ClientModels::ReportPlayerClientRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ReportPlayerClientRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ReportPlayerClientRequest* PlayFab::ClientModels::ReportPlayerClientRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ReportPlayerClientRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ReportPlayerClientRequest::ReportPlayerClientRequest()   {
}
