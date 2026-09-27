#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/BinaryCatalogInitializationData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__BinaryCatalogInitializationData_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb3012a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData::__cordl_internal_get_m_BinaryStorageBufferCacheSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BinaryStorageBufferCacheSize;
}
constexpr int32_t const& UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData::__cordl_internal_get_m_BinaryStorageBufferCacheSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BinaryStorageBufferCacheSize;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData::__cordl_internal_set_m_BinaryStorageBufferCacheSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BinaryStorageBufferCacheSize = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData::__cordl_internal_get_m_CatalogLocationCacheSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CatalogLocationCacheSize;
}
constexpr int32_t const& UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData::__cordl_internal_get_m_CatalogLocationCacheSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CatalogLocationCacheSize;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData::__cordl_internal_set_m_CatalogLocationCacheSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CatalogLocationCacheSize = value;
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData* UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData::BinaryCatalogInitializationData()   {
}
