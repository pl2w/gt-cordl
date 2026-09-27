#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/IsMemberResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__IsMemberResponse_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::IsMemberResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::IsMemberResponse::*)()>(&::PlayFab::GroupsModels::IsMemberResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::IsMemberResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& PlayFab::GroupsModels::IsMemberResponse::__cordl_internal_get_IsMember()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsMember;
}
constexpr bool const& PlayFab::GroupsModels::IsMemberResponse::__cordl_internal_get_IsMember() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsMember;
}
constexpr void PlayFab::GroupsModels::IsMemberResponse::__cordl_internal_set_IsMember(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsMember = value;
}
inline void PlayFab::GroupsModels::IsMemberResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::IsMemberResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::IsMemberResponse* PlayFab::GroupsModels::IsMemberResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::IsMemberResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::IsMemberResponse::IsMemberResponse()   {
}
