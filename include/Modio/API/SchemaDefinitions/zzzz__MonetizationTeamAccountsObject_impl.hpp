#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/MonetizationTeamAccountsObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__MonetizationTeamAccountsObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject::*)(int64_t, ::StringW, ::StringW, int64_t, int64_t, int64_t)>(&::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fedf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject::_ctor(int64_t  id, ::StringW  name_id, ::StringW  username, int64_t  monetization_status, int64_t  monetization_options, int64_t  split)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, name_id, username, monetization_status, monetization_options, split);
}
// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Username", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MonetizationStatus", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MonetizationOptions", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Split", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject::MonetizationTeamAccountsObject(int64_t  Id, ::StringW  NameId, ::StringW  Username, int64_t  MonetizationStatus, int64_t  MonetizationOptions, int64_t  Split) noexcept  {
this->Id = Id;
this->NameId = NameId;
this->Username = Username;
this->MonetizationStatus = MonetizationStatus;
this->MonetizationOptions = MonetizationOptions;
this->Split = Split;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject::MonetizationTeamAccountsObject()   {
}
