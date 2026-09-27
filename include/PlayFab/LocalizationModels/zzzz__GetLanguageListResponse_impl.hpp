#pragma once
// IWYU pragma private; include "PlayFab/LocalizationModels/GetLanguageListResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/LocalizationModels/zzzz__GetLanguageListResponse_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::LocalizationModels::GetLanguageListResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::LocalizationModels::GetLanguageListResponse::*)()>(&::PlayFab::LocalizationModels::GetLanguageListResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::LocalizationModels::GetLanguageListResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::LocalizationModels::GetLanguageListResponse::__cordl_internal_get_LanguageList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LanguageList;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::LocalizationModels::GetLanguageListResponse::__cordl_internal_get_LanguageList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LanguageList;
}
constexpr void PlayFab::LocalizationModels::GetLanguageListResponse::__cordl_internal_set_LanguageList(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LanguageList = value;
}
inline void PlayFab::LocalizationModels::GetLanguageListResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::LocalizationModels::GetLanguageListResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::LocalizationModels::GetLanguageListResponse* PlayFab::LocalizationModels::GetLanguageListResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::LocalizationModels::GetLanguageListResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::LocalizationModels::GetLanguageListResponse::GetLanguageListResponse()   {
}
