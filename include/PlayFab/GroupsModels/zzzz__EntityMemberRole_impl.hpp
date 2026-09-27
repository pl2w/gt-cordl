#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/EntityMemberRole.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityMemberRole_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityWithLineage_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::EntityMemberRole._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::EntityMemberRole::*)()>(&::PlayFab::GroupsModels::EntityMemberRole::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::EntityMemberRole*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityWithLineage*>*& PlayFab::GroupsModels::EntityMemberRole::__cordl_internal_get_Members()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityWithLineage*>* const& PlayFab::GroupsModels::EntityMemberRole::__cordl_internal_get_Members() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr void PlayFab::GroupsModels::EntityMemberRole::__cordl_internal_set_Members(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::EntityWithLineage*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Members = value;
}
constexpr ::StringW& PlayFab::GroupsModels::EntityMemberRole::__cordl_internal_get_RoleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr ::StringW const& PlayFab::GroupsModels::EntityMemberRole::__cordl_internal_get_RoleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr void PlayFab::GroupsModels::EntityMemberRole::__cordl_internal_set_RoleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoleId = value;
}
constexpr ::StringW& PlayFab::GroupsModels::EntityMemberRole::__cordl_internal_get_RoleName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleName;
}
constexpr ::StringW const& PlayFab::GroupsModels::EntityMemberRole::__cordl_internal_get_RoleName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleName;
}
constexpr void PlayFab::GroupsModels::EntityMemberRole::__cordl_internal_set_RoleName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoleName = value;
}
inline void PlayFab::GroupsModels::EntityMemberRole::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::EntityMemberRole*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::EntityMemberRole* PlayFab::GroupsModels::EntityMemberRole::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::EntityMemberRole*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::EntityMemberRole::EntityMemberRole()   {
}
