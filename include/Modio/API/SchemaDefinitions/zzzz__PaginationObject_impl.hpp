#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/PaginationObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__PaginationObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::PaginationObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::PaginationObject::*)(int64_t, ::StringW, int64_t, int64_t)>(&::Modio::API::SchemaDefinitions::PaginationObject::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9fedfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::PaginationObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::PaginationObject::_ctor(int64_t  per_page, ::StringW  current_page, int64_t  next_page_url, int64_t  prev_page_url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::PaginationObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, per_page, current_page, next_page_url, prev_page_url);
}
// Ctor Parameters [CppParam { name: "PerPage", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CurrentPage", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NextPageUrl", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PrevPageUrl", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::PaginationObject::PaginationObject(int64_t  PerPage, ::StringW  CurrentPage, int64_t  NextPageUrl, int64_t  PrevPageUrl) noexcept  {
this->PerPage = PerPage;
this->CurrentPage = CurrentPage;
this->NextPageUrl = NextPageUrl;
this->PrevPageUrl = PrevPageUrl;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::PaginationObject::PaginationObject()   {
}
