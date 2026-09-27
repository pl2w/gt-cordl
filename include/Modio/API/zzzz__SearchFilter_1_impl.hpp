#pragma once
// IWYU pragma private; include "Modio/API/SearchFilter_1.hpp"
#include "Modio/API/zzzz__SearchFilter_impl.hpp"
#include "Modio/API/zzzz__SearchFilter_1_def.hpp"
template<typename T>
inline void Modio::API::SearchFilter_1<T>::_ctor(int32_t  pageIndex, int32_t  pageSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SearchFilter_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pageIndex, pageSize);
}
template<typename T>
inline T Modio::API::SearchFilter_1<T>::SetPagination(int32_t  pageIndex, int32_t  pageSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SearchFilter_1<T>*>(),
                        {"SetPagination", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, pageIndex, pageSize);
}
template<typename T>
inline ::Modio::API::SearchFilter_1<T>* Modio::API::SearchFilter_1<T>::New_ctor(int32_t  pageIndex, int32_t  pageSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::API::SearchFilter_1<T>*>(pageIndex, pageSize));
}
// Ctor Parameters []
template<typename T>
constexpr ::Modio::API::SearchFilter_1<T>::SearchFilter_1()   {
}
