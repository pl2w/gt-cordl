#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/GroupInvitation.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__GroupInvitation_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityKey_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityWithLineage_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::GroupInvitation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::GroupInvitation::*)()>(&::PlayFab::GroupsModels::GroupInvitation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::GroupInvitation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& PlayFab::GroupsModels::GroupInvitation::__cordl_internal_get_Expires()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Expires;
}
constexpr ::System::DateTime const& PlayFab::GroupsModels::GroupInvitation::__cordl_internal_get_Expires() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Expires;
}
constexpr void PlayFab::GroupsModels::GroupInvitation::__cordl_internal_set_Expires(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Expires = value;
}
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::GroupInvitation::__cordl_internal_get_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::GroupInvitation::__cordl_internal_get_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr void PlayFab::GroupsModels::GroupInvitation::__cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Group = value;
}
constexpr ::PlayFab::GroupsModels::EntityWithLineage*& PlayFab::GroupsModels::GroupInvitation::__cordl_internal_get_InvitedByEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InvitedByEntity;
}
constexpr ::PlayFab::GroupsModels::EntityWithLineage* const& PlayFab::GroupsModels::GroupInvitation::__cordl_internal_get_InvitedByEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InvitedByEntity;
}
constexpr void PlayFab::GroupsModels::GroupInvitation::__cordl_internal_set_InvitedByEntity(::PlayFab::GroupsModels::EntityWithLineage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InvitedByEntity = value;
}
constexpr ::PlayFab::GroupsModels::EntityWithLineage*& PlayFab::GroupsModels::GroupInvitation::__cordl_internal_get_InvitedEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InvitedEntity;
}
constexpr ::PlayFab::GroupsModels::EntityWithLineage* const& PlayFab::GroupsModels::GroupInvitation::__cordl_internal_get_InvitedEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InvitedEntity;
}
constexpr void PlayFab::GroupsModels::GroupInvitation::__cordl_internal_set_InvitedEntity(::PlayFab::GroupsModels::EntityWithLineage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InvitedEntity = value;
}
constexpr ::StringW& PlayFab::GroupsModels::GroupInvitation::__cordl_internal_get_RoleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr ::StringW const& PlayFab::GroupsModels::GroupInvitation::__cordl_internal_get_RoleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr void PlayFab::GroupsModels::GroupInvitation::__cordl_internal_set_RoleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoleId = value;
}
inline void PlayFab::GroupsModels::GroupInvitation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::GroupInvitation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::GroupInvitation* PlayFab::GroupsModels::GroupInvitation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::GroupInvitation*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::GroupInvitation::GroupInvitation()   {
}
