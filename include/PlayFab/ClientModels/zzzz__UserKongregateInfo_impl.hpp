#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserKongregateInfo.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UserKongregateInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UserKongregateInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UserKongregateInfo::*)()>(&::PlayFab::ClientModels::UserKongregateInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserKongregateInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UserKongregateInfo::__cordl_internal_get_KongregateId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KongregateId;
}
constexpr ::StringW const& PlayFab::ClientModels::UserKongregateInfo::__cordl_internal_get_KongregateId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KongregateId;
}
constexpr void PlayFab::ClientModels::UserKongregateInfo::__cordl_internal_set_KongregateId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KongregateId = value;
}
constexpr ::StringW& PlayFab::ClientModels::UserKongregateInfo::__cordl_internal_get_KongregateName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KongregateName;
}
constexpr ::StringW const& PlayFab::ClientModels::UserKongregateInfo::__cordl_internal_get_KongregateName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KongregateName;
}
constexpr void PlayFab::ClientModels::UserKongregateInfo::__cordl_internal_set_KongregateName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KongregateName = value;
}
inline void PlayFab::ClientModels::UserKongregateInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserKongregateInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UserKongregateInfo* PlayFab::ClientModels::UserKongregateInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UserKongregateInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserKongregateInfo::UserKongregateInfo()   {
}
