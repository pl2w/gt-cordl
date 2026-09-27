#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOMothershipAssociation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ModIOMothershipAssociation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModIOMothershipAssociation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOMothershipAssociation::*)()>(&::GlobalNamespace::ModIOMothershipAssociation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f1860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOMothershipAssociation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_get_MothershipPlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipPlayerId;
}
constexpr ::StringW const& GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_get_MothershipPlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipPlayerId;
}
constexpr void GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_set_MothershipPlayerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipPlayerId = value;
}
constexpr ::StringW& GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_get_AssociationId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssociationId;
}
constexpr ::StringW const& GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_get_AssociationId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssociationId;
}
constexpr void GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_set_AssociationId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AssociationId = value;
}
constexpr ::StringW& GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_get_ExternalServiceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalServiceName;
}
constexpr ::StringW const& GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_get_ExternalServiceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalServiceName;
}
constexpr void GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_set_ExternalServiceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExternalServiceName = value;
}
constexpr ::StringW& GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_get_ExternalServiceUserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalServiceUserId;
}
constexpr ::StringW const& GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_get_ExternalServiceUserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalServiceUserId;
}
constexpr void GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_set_ExternalServiceUserId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExternalServiceUserId = value;
}
constexpr ::StringW& GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_get_ExternalServiceOrgScopedId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalServiceOrgScopedId;
}
constexpr ::StringW const& GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_get_ExternalServiceOrgScopedId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalServiceOrgScopedId;
}
constexpr void GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_set_ExternalServiceOrgScopedId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExternalServiceOrgScopedId = value;
}
constexpr ::StringW& GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_get_ExternalServiceUserName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalServiceUserName;
}
constexpr ::StringW const& GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_get_ExternalServiceUserName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalServiceUserName;
}
constexpr void GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_set_ExternalServiceUserName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExternalServiceUserName = value;
}
constexpr ::StringW& GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
constexpr ::StringW& GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_get_EnvId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnvId;
}
constexpr ::StringW const& GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_get_EnvId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnvId;
}
constexpr void GlobalNamespace::ModIOMothershipAssociation::__cordl_internal_set_EnvId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnvId = value;
}
inline void GlobalNamespace::ModIOMothershipAssociation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOMothershipAssociation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ModIOMothershipAssociation* GlobalNamespace::ModIOMothershipAssociation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModIOMothershipAssociation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModIOMothershipAssociation::ModIOMothershipAssociation()   {
}
