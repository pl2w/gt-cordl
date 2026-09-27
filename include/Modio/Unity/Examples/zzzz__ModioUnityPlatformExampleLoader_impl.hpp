#pragma once
// IWYU pragma private; include "Modio/Unity/Examples/ModioUnityPlatformExampleLoader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_impl.hpp"
#include "Modio/Unity/Examples/zzzz__ModioUnityPlatformExampleLoader_def.hpp"
#include "Modio/Unity/Examples/zzzz__ModioUnityPlatformExampleLoader_def.hpp"
//  Writing Method size for method: ::Modio::Unity::Examples::ModioUnityPlatformExampleLoader.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::Examples::ModioUnityPlatformExampleLoader::*)()>(&::Modio::Unity::Examples::ModioUnityPlatformExampleLoader::Awake)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x9f9cb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::Examples::ModioUnityPlatformExampleLoader.TestAllPrefabNamesAreFound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::Examples::ModioUnityPlatformExampleLoader::*)()>(&::Modio::Unity::Examples::ModioUnityPlatformExampleLoader::TestAllPrefabNamesAreFound)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9f9ce44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader*>(),
                        {"TestAllPrefabNamesAreFound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::Examples::ModioUnityPlatformExampleLoader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::Examples::ModioUnityPlatformExampleLoader::*)()>(&::Modio::Unity::Examples::ModioUnityPlatformExampleLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9d070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples*>& Modio::Unity::Examples::ModioUnityPlatformExampleLoader::__cordl_internal_get_platformExamplesPerPlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformExamplesPerPlatform;
}
constexpr ::ArrayW<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples*> const& Modio::Unity::Examples::ModioUnityPlatformExampleLoader::__cordl_internal_get_platformExamplesPerPlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformExamplesPerPlatform;
}
constexpr void Modio::Unity::Examples::ModioUnityPlatformExampleLoader::__cordl_internal_set_platformExamplesPerPlatform(::ArrayW<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformExamplesPerPlatform = value;
}
inline void Modio::Unity::Examples::ModioUnityPlatformExampleLoader::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::Examples::ModioUnityPlatformExampleLoader::TestAllPrefabNamesAreFound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader*>(),
                        {"TestAllPrefabNamesAreFound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::Examples::ModioUnityPlatformExampleLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::Examples::ModioUnityPlatformExampleLoader* Modio::Unity::Examples::ModioUnityPlatformExampleLoader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::Examples::ModioUnityPlatformExampleLoader::ModioUnityPlatformExampleLoader()   {
}
//  Writing Method size for method: ::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples::*)()>(&::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9d078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::RuntimePlatform>& Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples::__cordl_internal_get_platforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platforms;
}
constexpr ::ArrayW<::UnityEngine::RuntimePlatform> const& Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples::__cordl_internal_get_platforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platforms;
}
constexpr void Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples::__cordl_internal_set_platforms(::ArrayW<::UnityEngine::RuntimePlatform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platforms = value;
}
constexpr ::ArrayW<::StringW>& Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples::__cordl_internal_get_prefabNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabNames;
}
constexpr ::ArrayW<::StringW> const& Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples::__cordl_internal_get_prefabNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabNames;
}
constexpr void Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples::__cordl_internal_set_prefabNames(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabNames = value;
}
inline void Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples* Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples::ModioUnityPlatformExampleLoader_PlatformExamples()   {
}
