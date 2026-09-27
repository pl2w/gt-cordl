#pragma once
// IWYU pragma private; include "System/Net/Cache/RequestCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Cache/zzzz__RequestCache_def.hpp"
constexpr bool& System::Net::Cache::RequestCache::__cordl_internal_get__IsPrivateCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPrivateCache;
}
constexpr bool const& System::Net::Cache::RequestCache::__cordl_internal_get__IsPrivateCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPrivateCache;
}
constexpr void System::Net::Cache::RequestCache::__cordl_internal_set__IsPrivateCache(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsPrivateCache = value;
}
constexpr bool& System::Net::Cache::RequestCache::__cordl_internal_get__CanWrite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CanWrite;
}
constexpr bool const& System::Net::Cache::RequestCache::__cordl_internal_get__CanWrite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CanWrite;
}
constexpr void System::Net::Cache::RequestCache::__cordl_internal_set__CanWrite(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CanWrite = value;
}
inline void System::Net::Cache::RequestCache::setStaticF_LineSplits(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "LineSplits", ::System::Net::Cache::RequestCache*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Net::Cache::RequestCache::getStaticF_LineSplits()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "LineSplits", ::System::Net::Cache::RequestCache*>();
}
// Ctor Parameters []
constexpr ::System::Net::Cache::RequestCache::RequestCache()   {
}
