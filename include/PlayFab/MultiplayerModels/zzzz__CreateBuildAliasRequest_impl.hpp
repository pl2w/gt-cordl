#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CreateBuildAliasRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CreateBuildAliasRequest_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__BuildSelectionCriterion_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CreateBuildAliasRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CreateBuildAliasRequest::*)()>(&::PlayFab::MultiplayerModels::CreateBuildAliasRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CreateBuildAliasRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::CreateBuildAliasRequest::__cordl_internal_get_AliasName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AliasName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::CreateBuildAliasRequest::__cordl_internal_get_AliasName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AliasName;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildAliasRequest::__cordl_internal_set_AliasName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AliasName = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>*& PlayFab::MultiplayerModels::CreateBuildAliasRequest::__cordl_internal_get_BuildSelectionCriteria()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildSelectionCriteria;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>* const& PlayFab::MultiplayerModels::CreateBuildAliasRequest::__cordl_internal_get_BuildSelectionCriteria() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildSelectionCriteria;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildAliasRequest::__cordl_internal_set_BuildSelectionCriteria(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildSelectionCriteria = value;
}
inline void PlayFab::MultiplayerModels::CreateBuildAliasRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CreateBuildAliasRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CreateBuildAliasRequest* PlayFab::MultiplayerModels::CreateBuildAliasRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CreateBuildAliasRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CreateBuildAliasRequest::CreateBuildAliasRequest()   {
}
