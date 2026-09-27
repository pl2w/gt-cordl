#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CurrentGamesResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__CurrentGamesResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__GameInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::CurrentGamesResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::CurrentGamesResult::*)()>(&::PlayFab::ClientModels::CurrentGamesResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84db38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CurrentGamesResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::ClientModels::CurrentGamesResult::__cordl_internal_get_GameCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCount;
}
constexpr int32_t const& PlayFab::ClientModels::CurrentGamesResult::__cordl_internal_get_GameCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCount;
}
constexpr void PlayFab::ClientModels::CurrentGamesResult::__cordl_internal_set_GameCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameCount = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GameInfo*>*& PlayFab::ClientModels::CurrentGamesResult::__cordl_internal_get_Games()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Games;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GameInfo*>* const& PlayFab::ClientModels::CurrentGamesResult::__cordl_internal_get_Games() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Games;
}
constexpr void PlayFab::ClientModels::CurrentGamesResult::__cordl_internal_set_Games(::System::Collections::Generic::List_1<::PlayFab::ClientModels::GameInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Games = value;
}
constexpr int32_t& PlayFab::ClientModels::CurrentGamesResult::__cordl_internal_get_PlayerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerCount;
}
constexpr int32_t const& PlayFab::ClientModels::CurrentGamesResult::__cordl_internal_get_PlayerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerCount;
}
constexpr void PlayFab::ClientModels::CurrentGamesResult::__cordl_internal_set_PlayerCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerCount = value;
}
inline void PlayFab::ClientModels::CurrentGamesResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CurrentGamesResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::CurrentGamesResult* PlayFab::ClientModels::CurrentGamesResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::CurrentGamesResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::CurrentGamesResult::CurrentGamesResult()   {
}
