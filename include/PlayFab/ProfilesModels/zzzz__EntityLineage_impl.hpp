#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/EntityLineage.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityLineage_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::EntityLineage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::EntityLineage::*)()>(&::PlayFab::ProfilesModels::EntityLineage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8406f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::EntityLineage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ProfilesModels::EntityLineage::__cordl_internal_get_CharacterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityLineage::__cordl_internal_get_CharacterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr void PlayFab::ProfilesModels::EntityLineage::__cordl_internal_set_CharacterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterId = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityLineage::__cordl_internal_get_GroupId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupId;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityLineage::__cordl_internal_get_GroupId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupId;
}
constexpr void PlayFab::ProfilesModels::EntityLineage::__cordl_internal_set_GroupId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GroupId = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityLineage::__cordl_internal_get_MasterPlayerAccountId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MasterPlayerAccountId;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityLineage::__cordl_internal_get_MasterPlayerAccountId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MasterPlayerAccountId;
}
constexpr void PlayFab::ProfilesModels::EntityLineage::__cordl_internal_set_MasterPlayerAccountId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MasterPlayerAccountId = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityLineage::__cordl_internal_get_NamespaceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NamespaceId;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityLineage::__cordl_internal_get_NamespaceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NamespaceId;
}
constexpr void PlayFab::ProfilesModels::EntityLineage::__cordl_internal_set_NamespaceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NamespaceId = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityLineage::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityLineage::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void PlayFab::ProfilesModels::EntityLineage::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityLineage::__cordl_internal_get_TitlePlayerAccountId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitlePlayerAccountId;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityLineage::__cordl_internal_get_TitlePlayerAccountId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitlePlayerAccountId;
}
constexpr void PlayFab::ProfilesModels::EntityLineage::__cordl_internal_set_TitlePlayerAccountId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitlePlayerAccountId = value;
}
inline void PlayFab::ProfilesModels::EntityLineage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::EntityLineage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::EntityLineage* PlayFab::ProfilesModels::EntityLineage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::EntityLineage*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::EntityLineage::EntityLineage()   {
}
