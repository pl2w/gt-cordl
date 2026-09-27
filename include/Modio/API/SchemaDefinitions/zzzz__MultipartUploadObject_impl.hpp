#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/MultipartUploadObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__MultipartUploadObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::MultipartUploadObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::MultipartUploadObject::*)(::StringW, int64_t)>(&::Modio::API::SchemaDefinitions::MultipartUploadObject::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9fedf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::MultipartUploadObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::MultipartUploadObject::_ctor(::StringW  upload_id, int64_t  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::MultipartUploadObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, upload_id, status);
}
// Ctor Parameters [CppParam { name: "UploadId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Status", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::MultipartUploadObject::MultipartUploadObject(::StringW  UploadId, int64_t  Status) noexcept  {
this->UploadId = UploadId;
this->Status = Status;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::MultipartUploadObject::MultipartUploadObject()   {
}
