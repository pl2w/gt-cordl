#pragma once
// IWYU pragma private; include "NexusSDK/SDKInitializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "NexusSDK/zzzz__SDKInitializer_def.hpp"
//  Writing Method size for method: ::NexusSDK::SDKInitializer.get_ApiKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::NexusSDK::SDKInitializer::get_ApiKey)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa3fe6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NexusSDK::SDKInitializer*>(),
                        {"get_ApiKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NexusSDK::SDKInitializer.set_ApiKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::NexusSDK::SDKInitializer::set_ApiKey)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa3fe738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NexusSDK::SDKInitializer*>(),
                        {"set_ApiKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NexusSDK::SDKInitializer.get_ApiBaseUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::NexusSDK::SDKInitializer::get_ApiBaseUrl)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa3fe790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NexusSDK::SDKInitializer*>(),
                        {"get_ApiBaseUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NexusSDK::SDKInitializer.set_ApiBaseUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::NexusSDK::SDKInitializer::set_ApiBaseUrl)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa3fe7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NexusSDK::SDKInitializer*>(),
                        {"set_ApiBaseUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NexusSDK::SDKInitializer.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::NexusSDK::SDKInitializer::Init)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa3fe828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NexusSDK::SDKInitializer*>(),
                        {"Init", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void NexusSDK::SDKInitializer::setStaticF__ApiKey_k__BackingField(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "<ApiKey>k__BackingField", ::NexusSDK::SDKInitializer*>(std::forward<::StringW>(value));
}
inline ::StringW NexusSDK::SDKInitializer::getStaticF__ApiKey_k__BackingField()  {
return ::cordl_internals::getStaticField<::StringW, "<ApiKey>k__BackingField", ::NexusSDK::SDKInitializer*>();
}
inline void NexusSDK::SDKInitializer::setStaticF__ApiBaseUrl_k__BackingField(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "<ApiBaseUrl>k__BackingField", ::NexusSDK::SDKInitializer*>(std::forward<::StringW>(value));
}
inline ::StringW NexusSDK::SDKInitializer::getStaticF__ApiBaseUrl_k__BackingField()  {
return ::cordl_internals::getStaticField<::StringW, "<ApiBaseUrl>k__BackingField", ::NexusSDK::SDKInitializer*>();
}
inline ::StringW NexusSDK::SDKInitializer::get_ApiKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NexusSDK::SDKInitializer*>(),
                        {"get_ApiKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void NexusSDK::SDKInitializer::set_ApiKey(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NexusSDK::SDKInitializer*>(),
                        {"set_ApiKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW NexusSDK::SDKInitializer::get_ApiBaseUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NexusSDK::SDKInitializer*>(),
                        {"get_ApiBaseUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void NexusSDK::SDKInitializer::set_ApiBaseUrl(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NexusSDK::SDKInitializer*>(),
                        {"set_ApiBaseUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void NexusSDK::SDKInitializer::Init(::StringW  apiKey, ::StringW  environment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NexusSDK::SDKInitializer*>(),
                        {"Init", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, apiKey, environment);
}
// Ctor Parameters []
constexpr ::NexusSDK::SDKInitializer::SDKInitializer()   {
}
