#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/ISharedMetadata.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__ISharedMetadata_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::ISharedMetadata.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Metadata::ISharedMetadata::*)(int64_t)>(&::UnityEngine::Localization::Metadata::ISharedMetadata::Contains)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Metadata::ISharedMetadata*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Metadata::ISharedMetadata*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::ISharedMetadata.AddEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::ISharedMetadata::*)(int64_t)>(&::UnityEngine::Localization::Metadata::ISharedMetadata::AddEntry)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Metadata::ISharedMetadata*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Metadata::ISharedMetadata*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::ISharedMetadata.RemoveEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::ISharedMetadata::*)(int64_t)>(&::UnityEngine::Localization::Metadata::ISharedMetadata::RemoveEntry)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Metadata::ISharedMetadata*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Metadata::ISharedMetadata*>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::Localization::Metadata::ISharedMetadata::Contains(int64_t  keyId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Metadata::ISharedMetadata*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyId);
}
inline void UnityEngine::Localization::Metadata::ISharedMetadata::AddEntry(int64_t  keyId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Metadata::ISharedMetadata*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyId);
}
inline void UnityEngine::Localization::Metadata::ISharedMetadata::RemoveEntry(int64_t  keyId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Metadata::ISharedMetadata*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyId);
}
/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr  UnityEngine::Localization::Metadata::ISharedMetadata::operator ::UnityEngine::Localization::Metadata::IMetadata*() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* UnityEngine::Localization::Metadata::ISharedMetadata::i___UnityEngine__Localization__Metadata__IMetadata() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
