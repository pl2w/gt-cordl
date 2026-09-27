#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/MultipartUploadPartObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__MultipartUploadPartObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::MultipartUploadPartObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::MultipartUploadPartObject::*)(::StringW, int64_t, int64_t, int64_t)>(&::Modio::API::SchemaDefinitions::MultipartUploadPartObject::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9fedfa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::MultipartUploadPartObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::MultipartUploadPartObject::_ctor(::StringW  upload_id, int64_t  part_number, int64_t  part_size, int64_t  date_added)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::MultipartUploadPartObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, upload_id, part_number, part_size, date_added);
}
// Ctor Parameters [CppParam { name: "UploadId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PartNumber", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PartSize", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::MultipartUploadPartObject::MultipartUploadPartObject(::StringW  UploadId, int64_t  PartNumber, int64_t  PartSize, int64_t  DateAdded) noexcept  {
this->UploadId = UploadId;
this->PartNumber = PartNumber;
this->PartSize = PartSize;
this->DateAdded = DateAdded;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::MultipartUploadPartObject::MultipartUploadPartObject()   {
}
