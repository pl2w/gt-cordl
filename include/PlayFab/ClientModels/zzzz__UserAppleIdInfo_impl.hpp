#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserAppleIdInfo.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UserAppleIdInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UserAppleIdInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UserAppleIdInfo::*)()>(&::PlayFab::ClientModels::UserAppleIdInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserAppleIdInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UserAppleIdInfo::__cordl_internal_get_AppleSubjectId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppleSubjectId;
}
constexpr ::StringW const& PlayFab::ClientModels::UserAppleIdInfo::__cordl_internal_get_AppleSubjectId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppleSubjectId;
}
constexpr void PlayFab::ClientModels::UserAppleIdInfo::__cordl_internal_set_AppleSubjectId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppleSubjectId = value;
}
inline void PlayFab::ClientModels::UserAppleIdInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserAppleIdInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UserAppleIdInfo* PlayFab::ClientModels::UserAppleIdInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UserAppleIdInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserAppleIdInfo::UserAppleIdInfo()   {
}
