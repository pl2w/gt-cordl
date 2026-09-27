#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetFriendsListResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetFriendsListResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__FriendInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetFriendsListResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetFriendsListResult::*)()>(&::PlayFab::ClientModels::GetFriendsListResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetFriendsListResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::FriendInfo*>*& PlayFab::ClientModels::GetFriendsListResult::__cordl_internal_get_Friends()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Friends;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::FriendInfo*>* const& PlayFab::ClientModels::GetFriendsListResult::__cordl_internal_get_Friends() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Friends;
}
constexpr void PlayFab::ClientModels::GetFriendsListResult::__cordl_internal_set_Friends(::System::Collections::Generic::List_1<::PlayFab::ClientModels::FriendInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Friends = value;
}
inline void PlayFab::ClientModels::GetFriendsListResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetFriendsListResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetFriendsListResult* PlayFab::ClientModels::GetFriendsListResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetFriendsListResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetFriendsListResult::GetFriendsListResult()   {
}
