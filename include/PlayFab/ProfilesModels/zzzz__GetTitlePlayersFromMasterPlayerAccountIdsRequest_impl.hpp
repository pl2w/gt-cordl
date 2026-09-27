#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/GetTitlePlayersFromMasterPlayerAccountIdsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__GetTitlePlayersFromMasterPlayerAccountIdsRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest::*)()>(&::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest::__cordl_internal_get_MasterPlayerAccountIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MasterPlayerAccountIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest::__cordl_internal_get_MasterPlayerAccountIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MasterPlayerAccountIds;
}
constexpr void PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest::__cordl_internal_set_MasterPlayerAccountIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MasterPlayerAccountIds = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
inline void PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest* PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest::GetTitlePlayersFromMasterPlayerAccountIdsRequest()   {
}
