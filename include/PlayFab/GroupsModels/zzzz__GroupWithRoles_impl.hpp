#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/GroupWithRoles.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__GroupWithRoles_def.hpp"
#include "PlayFab/GroupsModels/zzzz__EntityKey_def.hpp"
#include "PlayFab/GroupsModels/zzzz__GroupRole_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::GroupWithRoles._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::GroupWithRoles::*)()>(&::PlayFab::GroupsModels::GroupWithRoles::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::GroupWithRoles*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::GroupsModels::EntityKey*& PlayFab::GroupsModels::GroupWithRoles::__cordl_internal_get_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr ::PlayFab::GroupsModels::EntityKey* const& PlayFab::GroupsModels::GroupWithRoles::__cordl_internal_get_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr void PlayFab::GroupsModels::GroupWithRoles::__cordl_internal_set_Group(::PlayFab::GroupsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Group = value;
}
constexpr ::StringW& PlayFab::GroupsModels::GroupWithRoles::__cordl_internal_get_GroupName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupName;
}
constexpr ::StringW const& PlayFab::GroupsModels::GroupWithRoles::__cordl_internal_get_GroupName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupName;
}
constexpr void PlayFab::GroupsModels::GroupWithRoles::__cordl_internal_set_GroupName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GroupName = value;
}
constexpr int32_t& PlayFab::GroupsModels::GroupWithRoles::__cordl_internal_get_ProfileVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr int32_t const& PlayFab::GroupsModels::GroupWithRoles::__cordl_internal_get_ProfileVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr void PlayFab::GroupsModels::GroupWithRoles::__cordl_internal_set_ProfileVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProfileVersion = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupRole*>*& PlayFab::GroupsModels::GroupWithRoles::__cordl_internal_get_Roles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Roles;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupRole*>* const& PlayFab::GroupsModels::GroupWithRoles::__cordl_internal_get_Roles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Roles;
}
constexpr void PlayFab::GroupsModels::GroupWithRoles::__cordl_internal_set_Roles(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupRole*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Roles = value;
}
inline void PlayFab::GroupsModels::GroupWithRoles::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::GroupWithRoles*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::GroupWithRoles* PlayFab::GroupsModels::GroupWithRoles::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::GroupWithRoles*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::GroupWithRoles::GroupWithRoles()   {
}
