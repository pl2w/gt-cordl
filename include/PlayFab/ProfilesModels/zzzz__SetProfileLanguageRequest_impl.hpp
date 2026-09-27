#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/SetProfileLanguageRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__SetProfileLanguageRequest_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::SetProfileLanguageRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::SetProfileLanguageRequest::*)()>(&::PlayFab::ProfilesModels::SetProfileLanguageRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::SetProfileLanguageRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ProfilesModels::EntityKey*& PlayFab::ProfilesModels::SetProfileLanguageRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::ProfilesModels::EntityKey* const& PlayFab::ProfilesModels::SetProfileLanguageRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::ProfilesModels::SetProfileLanguageRequest::__cordl_internal_set_Entity(::PlayFab::ProfilesModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::ProfilesModels::SetProfileLanguageRequest::__cordl_internal_get_ExpectedVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedVersion;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ProfilesModels::SetProfileLanguageRequest::__cordl_internal_get_ExpectedVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedVersion;
}
constexpr void PlayFab::ProfilesModels::SetProfileLanguageRequest::__cordl_internal_set_ExpectedVersion(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpectedVersion = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::SetProfileLanguageRequest::__cordl_internal_get_Language()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Language;
}
constexpr ::StringW const& PlayFab::ProfilesModels::SetProfileLanguageRequest::__cordl_internal_get_Language() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Language;
}
constexpr void PlayFab::ProfilesModels::SetProfileLanguageRequest::__cordl_internal_set_Language(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Language = value;
}
inline void PlayFab::ProfilesModels::SetProfileLanguageRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::SetProfileLanguageRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::SetProfileLanguageRequest* PlayFab::ProfilesModels::SetProfileLanguageRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::SetProfileLanguageRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::SetProfileLanguageRequest::SetProfileLanguageRequest()   {
}
