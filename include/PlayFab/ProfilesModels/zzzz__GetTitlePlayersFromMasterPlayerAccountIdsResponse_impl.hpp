#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/GetTitlePlayersFromMasterPlayerAccountIdsResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__GetTitlePlayersFromMasterPlayerAccountIdsResponse_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityKey_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse::*)()>(&::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityKey*>*& PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse::__cordl_internal_get_TitlePlayerAccounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitlePlayerAccounts;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityKey*>* const& PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse::__cordl_internal_get_TitlePlayerAccounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitlePlayerAccounts;
}
constexpr void PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse::__cordl_internal_set_TitlePlayerAccounts(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityKey*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitlePlayerAccounts = value;
}
inline void PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse* PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse::GetTitlePlayersFromMasterPlayerAccountIdsResponse()   {
}
