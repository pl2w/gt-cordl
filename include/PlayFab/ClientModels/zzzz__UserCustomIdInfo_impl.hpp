#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserCustomIdInfo.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UserCustomIdInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UserCustomIdInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UserCustomIdInfo::*)()>(&::PlayFab::ClientModels::UserCustomIdInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserCustomIdInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UserCustomIdInfo::__cordl_internal_get_CustomId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomId;
}
constexpr ::StringW const& PlayFab::ClientModels::UserCustomIdInfo::__cordl_internal_get_CustomId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomId;
}
constexpr void PlayFab::ClientModels::UserCustomIdInfo::__cordl_internal_set_CustomId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomId = value;
}
inline void PlayFab::ClientModels::UserCustomIdInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserCustomIdInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UserCustomIdInfo* PlayFab::ClientModels::UserCustomIdInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UserCustomIdInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserCustomIdInfo::UserCustomIdInfo()   {
}
