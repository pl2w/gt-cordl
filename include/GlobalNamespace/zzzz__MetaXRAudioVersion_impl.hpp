#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAudioVersion.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAudioVersion_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioVersion.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAudioVersion::*)()>(&::GlobalNamespace::MetaXRAudioVersion::Awake)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x9ebe724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioVersion*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioVersion.MetaXRAudio_GetVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::MetaXRAudioVersion::MetaXRAudio_GetVersion)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9ebe8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioVersion*>(),
                        {"MetaXRAudio_GetVersion", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioVersion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAudioVersion::*)()>(&::GlobalNamespace::MetaXRAudioVersion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebe938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioVersion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MetaXRAudioVersion::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioVersion*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAudioVersion::MetaXRAudio_GetVersion(::by_ref<int32_t>  Major, ::by_ref<int32_t>  Minor, ::by_ref<int32_t>  Patch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioVersion*>(),
                        {"MetaXRAudio_GetVersion", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, Major, Minor, Patch);
}
inline void GlobalNamespace::MetaXRAudioVersion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioVersion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAudioVersion* GlobalNamespace::MetaXRAudioVersion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAudioVersion*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAudioVersion::MetaXRAudioVersion()   {
}
