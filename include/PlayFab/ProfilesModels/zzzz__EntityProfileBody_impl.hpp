#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/EntityProfileBody.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityProfileBody_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityDataObject_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityKey_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityLineage_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityPermissionStatement_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityProfileFileMetadata_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityStatisticValue_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::EntityProfileBody._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::EntityProfileBody::*)()>(&::PlayFab::ProfilesModels::EntityProfileBody::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::EntityProfileBody*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_AvatarUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvatarUrl;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_AvatarUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvatarUrl;
}
constexpr void PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_set_AvatarUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AvatarUrl = value;
}
constexpr ::System::DateTime& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_Created()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Created;
}
constexpr ::System::DateTime const& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_Created() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Created;
}
constexpr void PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_set_Created(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Created = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayName = value;
}
constexpr ::PlayFab::ProfilesModels::EntityKey*& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::ProfilesModels::EntityKey* const& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_set_Entity(::PlayFab::ProfilesModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_EntityChain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityChain;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_EntityChain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityChain;
}
constexpr void PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_set_EntityChain(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EntityChain = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_ExperimentVariants()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExperimentVariants;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_ExperimentVariants() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExperimentVariants;
}
constexpr void PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_set_ExperimentVariants(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExperimentVariants = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityProfileFileMetadata*>*& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_Files()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Files;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityProfileFileMetadata*>* const& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_Files() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Files;
}
constexpr void PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_set_Files(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityProfileFileMetadata*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Files = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_Language()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Language;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_Language() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Language;
}
constexpr void PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_set_Language(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Language = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_LeaderboardMetadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeaderboardMetadata;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_LeaderboardMetadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeaderboardMetadata;
}
constexpr void PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_set_LeaderboardMetadata(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LeaderboardMetadata = value;
}
constexpr ::PlayFab::ProfilesModels::EntityLineage*& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_Lineage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lineage;
}
constexpr ::PlayFab::ProfilesModels::EntityLineage* const& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_Lineage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lineage;
}
constexpr void PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_set_Lineage(::PlayFab::ProfilesModels::EntityLineage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Lineage = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityDataObject*>*& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_Objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Objects;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityDataObject*>* const& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_Objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Objects;
}
constexpr void PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_set_Objects(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityDataObject*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Objects = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_Permissions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permissions;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>* const& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_Permissions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permissions;
}
constexpr void PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_set_Permissions(::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Permissions = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityStatisticValue*>*& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_Statistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Statistics;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityStatisticValue*>* const& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_Statistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Statistics;
}
constexpr void PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_set_Statistics(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityStatisticValue*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Statistics = value;
}
constexpr int32_t& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_VersionNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VersionNumber;
}
constexpr int32_t const& PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_get_VersionNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VersionNumber;
}
constexpr void PlayFab::ProfilesModels::EntityProfileBody::__cordl_internal_set_VersionNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VersionNumber = value;
}
inline void PlayFab::ProfilesModels::EntityProfileBody::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::EntityProfileBody*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::EntityProfileBody* PlayFab::ProfilesModels::EntityProfileBody::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::EntityProfileBody*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::EntityProfileBody::EntityProfileBody()   {
}
