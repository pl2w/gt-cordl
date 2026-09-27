#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/IsMemberRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__IsMemberRequest_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::IsMemberRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::IsMemberRequest::*)()>(&::PlayFab::GroupsModels::IsMemberRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::IsMemberRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::IsMemberRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::IsMemberRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::GroupsModels::IsMemberRequest::__cordl_internal_set_Entity(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::IsMemberRequest::__cordl_internal_get_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::IsMemberRequest::__cordl_internal_get_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr void PlayFab::GroupsModels::IsMemberRequest::__cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Group = value;
}
constexpr ::StringW& PlayFab::GroupsModels::IsMemberRequest::__cordl_internal_get_RoleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr ::StringW const& PlayFab::GroupsModels::IsMemberRequest::__cordl_internal_get_RoleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr void PlayFab::GroupsModels::IsMemberRequest::__cordl_internal_set_RoleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoleId = value;
}
inline void PlayFab::GroupsModels::IsMemberRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::IsMemberRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::IsMemberRequest* PlayFab::GroupsModels::IsMemberRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::IsMemberRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::IsMemberRequest::IsMemberRequest()   {
}
