#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AddReportResponse.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__AddReportResponse_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::AddReportResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::AddReportResponse::*)(int64_t, ::StringW)>(&::Modio::API::SchemaDefinitions::AddReportResponse::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fec404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddReportResponse>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::AddReportResponse::_ctor(int64_t  code, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddReportResponse>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, code, message);
}
// Ctor Parameters [CppParam { name: "Code", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::AddReportResponse::AddReportResponse(int64_t  Code, ::StringW  Message) noexcept  {
this->Code = Code;
this->Message = Message;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::AddReportResponse::AddReportResponse()   {
}
