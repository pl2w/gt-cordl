#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/SetProfileLanguageResponse.hpp"
#include "PlayFab/ProfilesModels/zzzz__OperationTypes_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__SetProfileLanguageResponse_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::SetProfileLanguageResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::SetProfileLanguageResponse::*)()>(&::PlayFab::ProfilesModels::SetProfileLanguageResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::SetProfileLanguageResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::PlayFab::ProfilesModels::OperationTypes>& PlayFab::ProfilesModels::SetProfileLanguageResponse::__cordl_internal_get_OperationResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationResult;
}
constexpr ::System::Nullable_1<::PlayFab::ProfilesModels::OperationTypes> const& PlayFab::ProfilesModels::SetProfileLanguageResponse::__cordl_internal_get_OperationResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationResult;
}
constexpr void PlayFab::ProfilesModels::SetProfileLanguageResponse::__cordl_internal_set_OperationResult(::System::Nullable_1<::PlayFab::ProfilesModels::OperationTypes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OperationResult = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::ProfilesModels::SetProfileLanguageResponse::__cordl_internal_get_VersionNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VersionNumber;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ProfilesModels::SetProfileLanguageResponse::__cordl_internal_get_VersionNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VersionNumber;
}
constexpr void PlayFab::ProfilesModels::SetProfileLanguageResponse::__cordl_internal_set_VersionNumber(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VersionNumber = value;
}
inline void PlayFab::ProfilesModels::SetProfileLanguageResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::SetProfileLanguageResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::SetProfileLanguageResponse* PlayFab::ProfilesModels::SetProfileLanguageResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::SetProfileLanguageResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::SetProfileLanguageResponse::SetProfileLanguageResponse()   {
}
