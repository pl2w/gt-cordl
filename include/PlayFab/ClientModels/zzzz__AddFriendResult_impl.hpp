#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AddFriendResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__AddFriendResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::AddFriendResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::AddFriendResult::*)()>(&::PlayFab::ClientModels::AddFriendResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84d9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AddFriendResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& PlayFab::ClientModels::AddFriendResult::__cordl_internal_get_Created()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Created;
}
constexpr bool const& PlayFab::ClientModels::AddFriendResult::__cordl_internal_get_Created() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Created;
}
constexpr void PlayFab::ClientModels::AddFriendResult::__cordl_internal_set_Created(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Created = value;
}
inline void PlayFab::ClientModels::AddFriendResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AddFriendResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::AddFriendResult* PlayFab::ClientModels::AddFriendResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::AddFriendResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::AddFriendResult::AddFriendResult()   {
}
