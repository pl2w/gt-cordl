#pragma once
// IWYU pragma private; include "Modio/Mods/ModioPage_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Mods/zzzz__ModioPage_1_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& Modio::Mods::ModioPage_1<T>::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
template<typename T>
constexpr ::ArrayW<T> const& Modio::Mods::ModioPage_1<T>::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
template<typename T>
constexpr void Modio::Mods::ModioPage_1<T>::__cordl_internal_set_Data(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
template<typename T>
constexpr int32_t& Modio::Mods::ModioPage_1<T>::__cordl_internal_get_PageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
template<typename T>
constexpr int32_t const& Modio::Mods::ModioPage_1<T>::__cordl_internal_get_PageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
template<typename T>
constexpr void Modio::Mods::ModioPage_1<T>::__cordl_internal_set_PageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PageSize = value;
}
template<typename T>
constexpr int64_t& Modio::Mods::ModioPage_1<T>::__cordl_internal_get_PageIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageIndex;
}
template<typename T>
constexpr int64_t const& Modio::Mods::ModioPage_1<T>::__cordl_internal_get_PageIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageIndex;
}
template<typename T>
constexpr void Modio::Mods::ModioPage_1<T>::__cordl_internal_set_PageIndex(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PageIndex = value;
}
template<typename T>
constexpr int64_t& Modio::Mods::ModioPage_1<T>::__cordl_internal_get_TotalSearchResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalSearchResults;
}
template<typename T>
constexpr int64_t const& Modio::Mods::ModioPage_1<T>::__cordl_internal_get_TotalSearchResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalSearchResults;
}
template<typename T>
constexpr void Modio::Mods::ModioPage_1<T>::__cordl_internal_set_TotalSearchResults(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalSearchResults = value;
}
template<typename T>
inline void Modio::Mods::ModioPage_1<T>::_ctor(::ArrayW<T>  data, int32_t  pageSize, int64_t  pageIndex, int64_t  totalSearchResults)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModioPage_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, pageSize, pageIndex, totalSearchResults);
}
template<typename T>
inline bool Modio::Mods::ModioPage_1<T>::HasMoreResults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModioPage_1<T>*>(),
                        {"HasMoreResults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::Modio::Mods::ModioPage_1<T>* Modio::Mods::ModioPage_1<T>::New_ctor(::ArrayW<T>  data, int32_t  pageSize, int64_t  pageIndex, int64_t  totalSearchResults)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::ModioPage_1<T>*>(data, pageSize, pageIndex, totalSearchResults));
}
// Ctor Parameters []
template<typename T>
constexpr ::Modio::Mods::ModioPage_1<T>::ModioPage_1()   {
}
