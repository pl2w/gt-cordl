#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/DeleteBuildRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__DeleteBuildRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::DeleteBuildRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::DeleteBuildRequest::*)()>(&::PlayFab::MultiplayerModels::DeleteBuildRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8408f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::DeleteBuildRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::DeleteBuildRequest::__cordl_internal_get_BuildId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::DeleteBuildRequest::__cordl_internal_get_BuildId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr void PlayFab::MultiplayerModels::DeleteBuildRequest::__cordl_internal_set_BuildId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildId = value;
}
inline void PlayFab::MultiplayerModels::DeleteBuildRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::DeleteBuildRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::DeleteBuildRequest* PlayFab::MultiplayerModels::DeleteBuildRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::DeleteBuildRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::DeleteBuildRequest::DeleteBuildRequest()   {
}
