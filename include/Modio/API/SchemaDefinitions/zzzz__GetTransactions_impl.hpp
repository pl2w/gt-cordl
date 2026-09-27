#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GetTransactions.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__PaginationObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TransactionObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GetTransactions_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__PaginationObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TransactionObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::GetTransactions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::GetTransactions::*)(::ArrayW<::Modio::API::SchemaDefinitions::TransactionObject>, ::Modio::API::SchemaDefinitions::PaginationObject)>(&::Modio::API::SchemaDefinitions::GetTransactions::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9fe8bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GetTransactions>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::TransactionObject>>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::PaginationObject>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::GetTransactions::_ctor(::ArrayW<::Modio::API::SchemaDefinitions::TransactionObject>  data, ::Modio::API::SchemaDefinitions::PaginationObject  download)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GetTransactions>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::TransactionObject>>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::PaginationObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, download);
}
// Ctor Parameters [CppParam { name: "Data", ty: "::ArrayW<::Modio::API::SchemaDefinitions::TransactionObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Download", ty: "::Modio::API::SchemaDefinitions::PaginationObject", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::GetTransactions::GetTransactions(::ArrayW<::Modio::API::SchemaDefinitions::TransactionObject>  Data, ::Modio::API::SchemaDefinitions::PaginationObject  Download) noexcept  {
this->Data = Data;
this->Download = Download;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::GetTransactions::GetTransactions()   {
}
