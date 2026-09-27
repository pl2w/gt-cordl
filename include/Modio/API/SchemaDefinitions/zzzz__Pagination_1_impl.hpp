#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/Pagination_1.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__Pagination_1_def.hpp"
template<typename T>
inline void Modio::API::SchemaDefinitions::Pagination_1<T>::_ctor(T  data, int64_t  resultCount, int64_t  resultOffset, int64_t  resultLimit, int64_t  resultTotal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::Pagination_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<T>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, resultCount, resultOffset, resultLimit, resultTotal);
}
// Ctor Parameters [CppParam { name: "Data", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResultCount", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResultOffset", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResultLimit", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResultTotal", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::Modio::API::SchemaDefinitions::Pagination_1<T>::Pagination_1(T  Data, int64_t  ResultCount, int64_t  ResultOffset, int64_t  ResultLimit, int64_t  ResultTotal) noexcept  {
this->Data = Data;
this->ResultCount = ResultCount;
this->ResultOffset = ResultOffset;
this->ResultLimit = ResultLimit;
this->ResultTotal = ResultTotal;
}
// Ctor Parameters []
template<typename T>
constexpr ::Modio::API::SchemaDefinitions::Pagination_1<T>::Pagination_1()   {
}
