#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/UserAccessObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserAccessObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::UserAccessObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::UserAccessObject::*)(::StringW, int64_t, int64_t, ::StringW, ::StringW)>(&::Modio::API::SchemaDefinitions::UserAccessObject::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fee7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::UserAccessObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::UserAccessObject::_ctor(::StringW  resource_type, int64_t  resource_id, int64_t  resource_name, ::StringW  resource_name_id, ::StringW  resource_url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::UserAccessObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, resource_type, resource_id, resource_name, resource_name_id, resource_url);
}
// Ctor Parameters [CppParam { name: "ResourceType", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResourceId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResourceName", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResourceNameId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResourceUrl", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::UserAccessObject::UserAccessObject(::StringW  ResourceType, int64_t  ResourceId, int64_t  ResourceName, ::StringW  ResourceNameId, ::StringW  ResourceUrl) noexcept  {
this->ResourceType = ResourceType;
this->ResourceId = ResourceId;
this->ResourceName = ResourceName;
this->ResourceNameId = ResourceNameId;
this->ResourceUrl = ResourceUrl;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::UserAccessObject::UserAccessObject()   {
}
