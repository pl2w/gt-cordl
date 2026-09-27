#pragma once
// IWYU pragma private; include "Backtrace/Unity/Extensions/UnityWebRequestExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Extensions/zzzz__UnityWebRequestExtensions_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Extensions::UnityWebRequestExtensions.SetMultipartFormData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::UnityEngine::Networking::UnityWebRequest*, ::ArrayW<uint8_t>)>(&::Backtrace::Unity::Extensions::UnityWebRequestExtensions::SetMultipartFormData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f26128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::UnityWebRequestExtensions*>(),
                        {"SetMultipartFormData", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Extensions::UnityWebRequestExtensions.ReceivedNetworkError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Networking::UnityWebRequest*)>(&::Backtrace::Unity::Extensions::UnityWebRequestExtensions::ReceivedNetworkError)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f261f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::UnityWebRequestExtensions*>(),
                        {"ReceivedNetworkError", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Extensions::UnityWebRequestExtensions.SetJsonContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::UnityEngine::Networking::UnityWebRequest*)>(&::Backtrace::Unity::Extensions::UnityWebRequestExtensions::SetJsonContentType)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f26238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::UnityWebRequestExtensions*>(),
                        {"SetJsonContentType", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Extensions::UnityWebRequestExtensions.IgnoreSsl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::UnityEngine::Networking::UnityWebRequest*, bool)>(&::Backtrace::Unity::Extensions::UnityWebRequestExtensions::IgnoreSsl)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f262ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::UnityWebRequestExtensions*>(),
                        {"IgnoreSsl", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Networking::UnityWebRequest* Backtrace::Unity::Extensions::UnityWebRequestExtensions::SetMultipartFormData(::UnityEngine::Networking::UnityWebRequest*  source, ::ArrayW<uint8_t>  boundaryId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::UnityWebRequestExtensions*>(),
                        {"SetMultipartFormData", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(nullptr, ___internal_method, source, boundaryId);
}
inline bool Backtrace::Unity::Extensions::UnityWebRequestExtensions::ReceivedNetworkError(::UnityEngine::Networking::UnityWebRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::UnityWebRequestExtensions*>(),
                        {"ReceivedNetworkError", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, request);
}
inline ::UnityEngine::Networking::UnityWebRequest* Backtrace::Unity::Extensions::UnityWebRequestExtensions::SetJsonContentType(::UnityEngine::Networking::UnityWebRequest*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::UnityWebRequestExtensions*>(),
                        {"SetJsonContentType", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(nullptr, ___internal_method, source);
}
inline ::UnityEngine::Networking::UnityWebRequest* Backtrace::Unity::Extensions::UnityWebRequestExtensions::IgnoreSsl(::UnityEngine::Networking::UnityWebRequest*  source, bool  shouldIgnore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::UnityWebRequestExtensions*>(),
                        {"IgnoreSsl", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(nullptr, ___internal_method, source, shouldIgnore);
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Extensions::UnityWebRequestExtensions::UnityWebRequestExtensions()   {
}
