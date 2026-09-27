#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModfilePlatformSupportedObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModfilePlatformSupportedObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ModfilePlatformSupportedObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ModfilePlatformSupportedObject::*)(::ArrayW<::StringW>, ::ArrayW<::StringW>, ::ArrayW<::StringW>, ::ArrayW<::StringW>, ::ArrayW<::StringW>)>(&::Modio::API::SchemaDefinitions::ModfilePlatformSupportedObject::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9fed5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModfilePlatformSupportedObject>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ModfilePlatformSupportedObject::_ctor(::ArrayW<::StringW>  targetted, ::ArrayW<::StringW>  approved, ::ArrayW<::StringW>  denied, ::ArrayW<::StringW>  live, ::ArrayW<::StringW>  pending)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModfilePlatformSupportedObject>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, targetted, approved, denied, live, pending);
}
// Ctor Parameters [CppParam { name: "Targetted", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Approved", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Denied", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Live", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Pending", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ModfilePlatformSupportedObject::ModfilePlatformSupportedObject(::ArrayW<::StringW>  Targetted, ::ArrayW<::StringW>  Approved, ::ArrayW<::StringW>  Denied, ::ArrayW<::StringW>  Live, ::ArrayW<::StringW>  Pending) noexcept  {
this->Targetted = Targetted;
this->Approved = Approved;
this->Denied = Denied;
this->Live = Live;
this->Pending = Pending;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ModfilePlatformSupportedObject::ModfilePlatformSupportedObject()   {
}
