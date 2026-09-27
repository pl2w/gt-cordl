#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserPsnInfo.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UserPsnInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UserPsnInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UserPsnInfo::*)()>(&::PlayFab::ClientModels::UserPsnInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserPsnInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UserPsnInfo::__cordl_internal_get_PsnAccountId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PsnAccountId;
}
constexpr ::StringW const& PlayFab::ClientModels::UserPsnInfo::__cordl_internal_get_PsnAccountId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PsnAccountId;
}
constexpr void PlayFab::ClientModels::UserPsnInfo::__cordl_internal_set_PsnAccountId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PsnAccountId = value;
}
constexpr ::StringW& PlayFab::ClientModels::UserPsnInfo::__cordl_internal_get_PsnOnlineId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PsnOnlineId;
}
constexpr ::StringW const& PlayFab::ClientModels::UserPsnInfo::__cordl_internal_get_PsnOnlineId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PsnOnlineId;
}
constexpr void PlayFab::ClientModels::UserPsnInfo::__cordl_internal_set_PsnOnlineId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PsnOnlineId = value;
}
inline void PlayFab::ClientModels::UserPsnInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserPsnInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UserPsnInfo* PlayFab::ClientModels::UserPsnInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UserPsnInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserPsnInfo::UserPsnInfo()   {
}
