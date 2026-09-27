#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/DownloadObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__DownloadObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::DownloadObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::DownloadObject::*)(::StringW, int64_t)>(&::Modio::API::SchemaDefinitions::DownloadObject::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9fec5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::DownloadObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::DownloadObject::_ctor(::StringW  binary_url, int64_t  date_expires)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::DownloadObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, binary_url, date_expires);
}
// Ctor Parameters [CppParam { name: "BinaryUrl", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateExpires", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::DownloadObject::DownloadObject(::StringW  BinaryUrl, int64_t  DateExpires) noexcept  {
this->BinaryUrl = BinaryUrl;
this->DateExpires = DateExpires;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::DownloadObject::DownloadObject()   {
}
