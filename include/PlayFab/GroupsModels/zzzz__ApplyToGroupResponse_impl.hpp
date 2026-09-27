#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/ApplyToGroupResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__ApplyToGroupResponse_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityKey_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityWithLineage_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::ApplyToGroupResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::ApplyToGroupResponse::*)()>(&::PlayFab::GroupsModels::ApplyToGroupResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::ApplyToGroupResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::GroupsModels::EntityWithLineage*& PlayFab::GroupsModels::ApplyToGroupResponse::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::GroupsModels::EntityWithLineage* const& PlayFab::GroupsModels::ApplyToGroupResponse::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::GroupsModels::ApplyToGroupResponse::__cordl_internal_set_Entity(::PlayFab::GroupsModels::EntityWithLineage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::System::DateTime& PlayFab::GroupsModels::ApplyToGroupResponse::__cordl_internal_get_Expires()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Expires;
}
constexpr ::System::DateTime const& PlayFab::GroupsModels::ApplyToGroupResponse::__cordl_internal_get_Expires() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Expires;
}
constexpr void PlayFab::GroupsModels::ApplyToGroupResponse::__cordl_internal_set_Expires(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Expires = value;
}
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::ApplyToGroupResponse::__cordl_internal_get_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::ApplyToGroupResponse::__cordl_internal_get_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr void PlayFab::GroupsModels::ApplyToGroupResponse::__cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Group = value;
}
inline void PlayFab::GroupsModels::ApplyToGroupResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::ApplyToGroupResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::ApplyToGroupResponse* PlayFab::GroupsModels::ApplyToGroupResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::ApplyToGroupResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::ApplyToGroupResponse::ApplyToGroupResponse()   {
}
