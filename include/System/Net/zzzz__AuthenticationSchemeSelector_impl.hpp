#pragma once
// IWYU pragma private; include "System/Net/AuthenticationSchemeSelector.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/zzzz__AuthenticationSchemeSelector_def.hpp"
#include "System/Net/zzzz__AuthenticationSchemes_def.hpp"
#include "System/Net/zzzz__HttpListenerRequest_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::AuthenticationSchemeSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::AuthenticationSchemeSelector::*)(::System::Object*, ::System::IntPtr)>(&::System::Net::AuthenticationSchemeSelector::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xac54b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationSchemeSelector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationSchemeSelector.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::AuthenticationSchemes (::System::Net::AuthenticationSchemeSelector::*)(::System::Net::HttpListenerRequest*)>(&::System::Net::AuthenticationSchemeSelector::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac54c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::AuthenticationSchemeSelector*>(),
                    {::i2c::class_of<::System::Net::AuthenticationSchemeSelector*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationSchemeSelector.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::AuthenticationSchemeSelector::*)(::System::Net::HttpListenerRequest*, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::AuthenticationSchemeSelector::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac54c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::AuthenticationSchemeSelector*>(),
                    {::i2c::class_of<::System::Net::AuthenticationSchemeSelector*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationSchemeSelector.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::AuthenticationSchemes (::System::Net::AuthenticationSchemeSelector::*)(::System::IAsyncResult*)>(&::System::Net::AuthenticationSchemeSelector::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac54c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::AuthenticationSchemeSelector*>(),
                    {::i2c::class_of<::System::Net::AuthenticationSchemeSelector*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::Net::AuthenticationSchemeSelector::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AuthenticationSchemeSelector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Net::AuthenticationSchemes System::Net::AuthenticationSchemeSelector::Invoke(::System::Net::HttpListenerRequest*  httpRequest)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::AuthenticationSchemeSelector*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::AuthenticationSchemes>(this, ___internal_method, httpRequest);
}
inline ::System::IAsyncResult* System::Net::AuthenticationSchemeSelector::BeginInvoke(::System::Net::HttpListenerRequest*  httpRequest, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::AuthenticationSchemeSelector*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, httpRequest, callback, object);
}
inline ::System::Net::AuthenticationSchemes System::Net::AuthenticationSchemeSelector::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::AuthenticationSchemeSelector*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::AuthenticationSchemes>(this, ___internal_method, result);
}
inline ::System::Net::AuthenticationSchemeSelector* System::Net::AuthenticationSchemeSelector::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::AuthenticationSchemeSelector*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::AuthenticationSchemeSelector::AuthenticationSchemeSelector()   {
}
