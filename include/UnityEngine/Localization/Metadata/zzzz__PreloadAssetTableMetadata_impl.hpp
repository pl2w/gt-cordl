#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/PreloadAssetTableMetadata.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__PreloadAssetTableMetadata_PreloadBehaviour_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__PreloadAssetTableMetadata_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__PreloadAssetTableMetadata_PreloadBehaviour_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata.get_Behaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour (::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata::*)()>(&::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata::get_Behaviour)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0509f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata*>(),
                        {"get_Behaviour", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata.set_Behaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata::*)(::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour)>(&::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata::set_Behaviour)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0509fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata*>(),
                        {"set_Behaviour", {}, {::i2c::type_of<::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata::*)()>(&::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb050a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour& UnityEngine::Localization::Metadata::PreloadAssetTableMetadata::__cordl_internal_get_m_PreloadBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadBehaviour;
}
constexpr ::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour const& UnityEngine::Localization::Metadata::PreloadAssetTableMetadata::__cordl_internal_get_m_PreloadBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadBehaviour;
}
constexpr void UnityEngine::Localization::Metadata::PreloadAssetTableMetadata::__cordl_internal_set_m_PreloadBehaviour(::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreloadBehaviour = value;
}
inline ::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour UnityEngine::Localization::Metadata::PreloadAssetTableMetadata::get_Behaviour()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata*>(),
                        {"get_Behaviour", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::PreloadAssetTableMetadata::set_Behaviour(::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata*>(),
                        {"set_Behaviour", {}, {::i2c::type_of<::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::Metadata::PreloadAssetTableMetadata::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata* UnityEngine::Localization::Metadata::PreloadAssetTableMetadata::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr  UnityEngine::Localization::Metadata::PreloadAssetTableMetadata::operator ::UnityEngine::Localization::Metadata::IMetadata*() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* UnityEngine::Localization::Metadata::PreloadAssetTableMetadata::i___UnityEngine__Localization__Metadata__IMetadata() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata::PreloadAssetTableMetadata()   {
}
