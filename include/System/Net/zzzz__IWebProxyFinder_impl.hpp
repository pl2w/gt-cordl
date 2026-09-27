#pragma once
// IWYU pragma private; include "System/Net/IWebProxyFinder.hpp"
#include "System/Net/zzzz__IWebProxyFinder_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::IWebProxyFinder.GetProxies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IWebProxyFinder::*)(::System::Uri*, ::by_ref<::System::Collections::Generic::IList_1<::StringW>*>)>(&::System::Net::IWebProxyFinder::GetProxies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::IWebProxyFinder*>(),
                    {::i2c::class_of<::System::Net::IWebProxyFinder*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IWebProxyFinder.Abort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IWebProxyFinder::*)()>(&::System::Net::IWebProxyFinder::Abort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::IWebProxyFinder*>(),
                    {::i2c::class_of<::System::Net::IWebProxyFinder*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IWebProxyFinder.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IWebProxyFinder::*)()>(&::System::Net::IWebProxyFinder::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::IWebProxyFinder*>(),
                    {::i2c::class_of<::System::Net::IWebProxyFinder*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IWebProxyFinder.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IWebProxyFinder::*)()>(&::System::Net::IWebProxyFinder::get_IsValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::IWebProxyFinder*>(),
                    {::i2c::class_of<::System::Net::IWebProxyFinder*>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool System::Net::IWebProxyFinder::GetProxies(::System::Uri*  destination, ::by_ref<::System::Collections::Generic::IList_1<::StringW>*>  proxyList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::IWebProxyFinder*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, proxyList);
}
inline void System::Net::IWebProxyFinder::Abort()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::IWebProxyFinder*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::IWebProxyFinder::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::IWebProxyFinder*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::IWebProxyFinder::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::IWebProxyFinder*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Net::IWebProxyFinder::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::IWebProxyFinder::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
