#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReloadAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ReloadAttribute_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReloadAttribute_Package_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ReloadAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ReloadAttribute::*)(::ArrayW<::StringW>, ::GlobalNamespace::ReloadAttribute_Package)>(&::UnityEngine::Rendering::ReloadAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb125c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ReloadAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::GlobalNamespace::ReloadAttribute_Package>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReloadAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ReloadAttribute::*)(::StringW, ::GlobalNamespace::ReloadAttribute_Package)>(&::UnityEngine::Rendering::ReloadAttribute::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb125c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ReloadAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::ReloadAttribute_Package>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReloadAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ReloadAttribute::*)(::StringW, int32_t, int32_t, ::GlobalNamespace::ReloadAttribute_Package)>(&::UnityEngine::Rendering::ReloadAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb125cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ReloadAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ReloadAttribute_Package>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ReloadAttribute::_ctor(::ArrayW<::StringW>  paths, ::GlobalNamespace::ReloadAttribute_Package  package)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ReloadAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::GlobalNamespace::ReloadAttribute_Package>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paths, package);
}
inline void UnityEngine::Rendering::ReloadAttribute::_ctor(::StringW  path, ::GlobalNamespace::ReloadAttribute_Package  package)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ReloadAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::ReloadAttribute_Package>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, package);
}
inline void UnityEngine::Rendering::ReloadAttribute::_ctor(::StringW  pathFormat, int32_t  rangeMin, int32_t  rangeMax, ::GlobalNamespace::ReloadAttribute_Package  package)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ReloadAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ReloadAttribute_Package>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pathFormat, rangeMin, rangeMax, package);
}
inline ::UnityEngine::Rendering::ReloadAttribute* UnityEngine::Rendering::ReloadAttribute::New_ctor(::ArrayW<::StringW>  paths, ::GlobalNamespace::ReloadAttribute_Package  package)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ReloadAttribute*>(paths, package));
}
inline ::UnityEngine::Rendering::ReloadAttribute* UnityEngine::Rendering::ReloadAttribute::New_ctor(::StringW  path, ::GlobalNamespace::ReloadAttribute_Package  package)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ReloadAttribute*>(path, package));
}
inline ::UnityEngine::Rendering::ReloadAttribute* UnityEngine::Rendering::ReloadAttribute::New_ctor(::StringW  pathFormat, int32_t  rangeMin, int32_t  rangeMax, ::GlobalNamespace::ReloadAttribute_Package  package)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ReloadAttribute*>(pathFormat, rangeMin, rangeMax, package));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ReloadAttribute::ReloadAttribute()   {
}
