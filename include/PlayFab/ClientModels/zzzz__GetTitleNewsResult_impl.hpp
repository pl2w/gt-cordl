#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetTitleNewsResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetTitleNewsResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__TitleNewsItem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetTitleNewsResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetTitleNewsResult::*)()>(&::PlayFab::ClientModels::GetTitleNewsResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84de60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetTitleNewsResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TitleNewsItem*>*& PlayFab::ClientModels::GetTitleNewsResult::__cordl_internal_get_News()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___News;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TitleNewsItem*>* const& PlayFab::ClientModels::GetTitleNewsResult::__cordl_internal_get_News() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___News;
}
constexpr void PlayFab::ClientModels::GetTitleNewsResult::__cordl_internal_set_News(::System::Collections::Generic::List_1<::PlayFab::ClientModels::TitleNewsItem*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___News = value;
}
inline void PlayFab::ClientModels::GetTitleNewsResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetTitleNewsResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetTitleNewsResult* PlayFab::ClientModels::GetTitleNewsResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetTitleNewsResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetTitleNewsResult::GetTitleNewsResult()   {
}
