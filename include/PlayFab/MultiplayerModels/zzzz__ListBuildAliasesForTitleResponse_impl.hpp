#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListBuildAliasesForTitleResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ListBuildAliasesForTitleResponse_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__BuildAliasDetailsResponse_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse::*)()>(&::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>*& PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse::__cordl_internal_get_BuildAliases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildAliases;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>* const& PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse::__cordl_internal_get_BuildAliases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildAliases;
}
constexpr void PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse::__cordl_internal_set_BuildAliases(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildAliases = value;
}
inline void PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse* PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse::ListBuildAliasesForTitleResponse()   {
}
