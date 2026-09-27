#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/GetGroupRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__GetGroupRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::GetGroupRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::GetGroupRequest::*)()>(&::PlayFab::GroupsModels::GetGroupRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::GetGroupRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::GetGroupRequest::__cordl_internal_get_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::GetGroupRequest::__cordl_internal_get_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr void PlayFab::GroupsModels::GetGroupRequest::__cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Group = value;
}
constexpr ::StringW& PlayFab::GroupsModels::GetGroupRequest::__cordl_internal_get_GroupName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupName;
}
constexpr ::StringW const& PlayFab::GroupsModels::GetGroupRequest::__cordl_internal_get_GroupName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupName;
}
constexpr void PlayFab::GroupsModels::GetGroupRequest::__cordl_internal_set_GroupName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GroupName = value;
}
inline void PlayFab::GroupsModels::GetGroupRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::GetGroupRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::GetGroupRequest* PlayFab::GroupsModels::GetGroupRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::GetGroupRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::GetGroupRequest::GetGroupRequest()   {
}
