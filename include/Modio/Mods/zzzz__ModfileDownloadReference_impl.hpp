#pragma once
// IWYU pragma private; include "Modio/Mods/ModfileDownloadReference.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "Modio/Mods/zzzz__ModfileDownloadReference_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__DownloadObject_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Modio::Mods::ModfileDownloadReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModfileDownloadReference::*)(::StringW, ::System::DateTime)>(&::Modio::Mods::ModfileDownloadReference::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa030c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModfileDownloadReference>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModfileDownloadReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModfileDownloadReference::*)(::Modio::API::SchemaDefinitions::DownloadObject)>(&::Modio::Mods::ModfileDownloadReference::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa030c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModfileDownloadReference>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::DownloadObject>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Mods::ModfileDownloadReference::_ctor(::StringW  binaryUrl, ::System::DateTime  expiresAfter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModfileDownloadReference>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, binaryUrl, expiresAfter);
}
inline void Modio::Mods::ModfileDownloadReference::_ctor(::Modio::API::SchemaDefinitions::DownloadObject  downloadObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModfileDownloadReference>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::DownloadObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, downloadObject);
}
// Ctor Parameters [CppParam { name: "BinaryUrl", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ExpiresAfter", ty: "::System::DateTime", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Mods::ModfileDownloadReference::ModfileDownloadReference(::StringW  BinaryUrl, ::System::DateTime  ExpiresAfter) noexcept  {
this->BinaryUrl = BinaryUrl;
this->ExpiresAfter = ExpiresAfter;
}
// Ctor Parameters []
constexpr ::Modio::Mods::ModfileDownloadReference::ModfileDownloadReference()   {
}
