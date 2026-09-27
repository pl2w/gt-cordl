#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/BinaryCatalogInitialization.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__BinaryCatalogInitialization_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IInitializableObject_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization.get_BinaryStorageBufferCacheSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::get_BinaryStorageBufferCacheSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb300f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*>(),
                        {"get_BinaryStorageBufferCacheSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization.get_CatalogLocationCacheSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::get_CatalogLocationCacheSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb300fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*>(),
                        {"get_CatalogLocationCacheSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization.ResetToDefaults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::ResetToDefaults)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb30101c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*>(),
                        {"ResetToDefaults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::*)(::StringW, ::StringW)>(&::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::Initialize)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb30107c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*>(),
                        {"Initialize", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization.InitializeAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::*)(::UnityEngine::ResourceManagement::ResourceManager*, ::StringW, ::StringW)>(&::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::InitializeAsync)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb3011bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*>(),
                        {"InitializeAsync", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb301248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::setStaticF_s_BinaryStorageBufferCacheSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_BinaryStorageBufferCacheSize", ::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::getStaticF_s_BinaryStorageBufferCacheSize()  {
return ::cordl_internals::getStaticField<int32_t, "s_BinaryStorageBufferCacheSize", ::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*>();
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::setStaticF_s_CatalogLocationCacheSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_CatalogLocationCacheSize", ::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::getStaticF_s_CatalogLocationCacheSize()  {
return ::cordl_internals::getStaticField<int32_t, "s_CatalogLocationCacheSize", ::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*>();
}
inline int32_t UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::get_BinaryStorageBufferCacheSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*>(),
                        {"get_BinaryStorageBufferCacheSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::get_CatalogLocationCacheSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*>(),
                        {"get_CatalogLocationCacheSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::ResetToDefaults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*>(),
                        {"ResetToDefaults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::Initialize(::StringW  id, ::StringW  dataStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*>(),
                        {"Initialize", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, dataStr);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::InitializeAsync(::UnityEngine::ResourceManagement::ResourceManager*  resourceManager, ::StringW  id, ::StringW  dataStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*>(),
                        {"InitializeAsync", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(this, ___internal_method, resourceManager, id, dataStr);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization* UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IInitializableObject"
constexpr  UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::operator ::UnityEngine::ResourceManagement::Util::IInitializableObject*() noexcept {
return static_cast<::UnityEngine::ResourceManagement::Util::IInitializableObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::IInitializableObject"
constexpr ::UnityEngine::ResourceManagement::Util::IInitializableObject* UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::i___UnityEngine__ResourceManagement__Util__IInitializableObject() noexcept {
return static_cast<::UnityEngine::ResourceManagement::Util::IInitializableObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization::BinaryCatalogInitialization()   {
}
