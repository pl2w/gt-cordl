#pragma once
// IWYU pragma private; include "System/Net/IWebProxyScript.hpp"
#include "System/Net/zzzz__IWebProxyScript_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::IWebProxyScript.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IWebProxyScript::*)()>(&::System::Net::IWebProxyScript::Close)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::IWebProxyScript*>(),
                    {::i2c::class_of<::System::Net::IWebProxyScript*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IWebProxyScript.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IWebProxyScript::*)(::System::Uri*, ::StringW, ::System::Type*)>(&::System::Net::IWebProxyScript::Load)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::IWebProxyScript*>(),
                    {::i2c::class_of<::System::Net::IWebProxyScript*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IWebProxyScript.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::IWebProxyScript::*)(::StringW, ::StringW)>(&::System::Net::IWebProxyScript::Run)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::IWebProxyScript*>(),
                    {::i2c::class_of<::System::Net::IWebProxyScript*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void System::Net::IWebProxyScript::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::IWebProxyScript*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::IWebProxyScript::Load(::System::Uri*  scriptLocation, ::StringW  script, ::System::Type*  helperType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::IWebProxyScript*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scriptLocation, script, helperType);
}
inline ::StringW System::Net::IWebProxyScript::Run(::StringW  url, ::StringW  host)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::IWebProxyScript*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, url, host);
}
