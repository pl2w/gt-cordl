#pragma once
// IWYU pragma private; include "Modio/Unity/UnityWebBrowserHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/zzzz__UnityWebBrowserHandler_def.hpp"
#include "Modio/Platforms/zzzz__IWebBrowserHandler_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UnityWebBrowserHandler.OpenUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UnityWebBrowserHandler::*)(::StringW)>(&::Modio::Unity::UnityWebBrowserHandler::OpenUrl)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f97158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UnityWebBrowserHandler*>(),
                        {"OpenUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UnityWebBrowserHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UnityWebBrowserHandler::*)()>(&::Modio::Unity::UnityWebBrowserHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f97164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UnityWebBrowserHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::UnityWebBrowserHandler::OpenUrl(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UnityWebBrowserHandler*>(),
                        {"OpenUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url);
}
inline void Modio::Unity::UnityWebBrowserHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UnityWebBrowserHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UnityWebBrowserHandler* Modio::Unity::UnityWebBrowserHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UnityWebBrowserHandler*>());
}
/// @brief Convert operator to "::Modio::Platforms::IWebBrowserHandler"
constexpr  Modio::Unity::UnityWebBrowserHandler::operator ::Modio::Platforms::IWebBrowserHandler*() noexcept {
return static_cast<::Modio::Platforms::IWebBrowserHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Platforms::IWebBrowserHandler"
constexpr ::Modio::Platforms::IWebBrowserHandler* Modio::Unity::UnityWebBrowserHandler::i___Modio__Platforms__IWebBrowserHandler() noexcept {
return static_cast<::Modio::Platforms::IWebBrowserHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UnityWebBrowserHandler::UnityWebBrowserHandler()   {
}
