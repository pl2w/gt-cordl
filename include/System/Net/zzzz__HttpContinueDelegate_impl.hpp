#pragma once
// IWYU pragma private; include "System/Net/HttpContinueDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/zzzz__HttpContinueDelegate_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::HttpContinueDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpContinueDelegate::*)(::System::Object*, ::System::IntPtr)>(&::System::Net::HttpContinueDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xac5b25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpContinueDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpContinueDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpContinueDelegate::*)(int32_t, ::System::Net::WebHeaderCollection*)>(&::System::Net::HttpContinueDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac5b2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpContinueDelegate*>(),
                    {::i2c::class_of<::System::Net::HttpContinueDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpContinueDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::HttpContinueDelegate::*)(int32_t, ::System::Net::WebHeaderCollection*, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::HttpContinueDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xac5b310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpContinueDelegate*>(),
                    {::i2c::class_of<::System::Net::HttpContinueDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpContinueDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpContinueDelegate::*)(::System::IAsyncResult*)>(&::System::Net::HttpContinueDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac5b380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpContinueDelegate*>(),
                    {::i2c::class_of<::System::Net::HttpContinueDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::Net::HttpContinueDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpContinueDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Net::HttpContinueDelegate::Invoke(int32_t  StatusCode, ::System::Net::WebHeaderCollection*  httpHeaders)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpContinueDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, StatusCode, httpHeaders);
}
inline ::System::IAsyncResult* System::Net::HttpContinueDelegate::BeginInvoke(int32_t  StatusCode, ::System::Net::WebHeaderCollection*  httpHeaders, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpContinueDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, StatusCode, httpHeaders, callback, object);
}
inline void System::Net::HttpContinueDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpContinueDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::Net::HttpContinueDelegate* System::Net::HttpContinueDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpContinueDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::HttpContinueDelegate::HttpContinueDelegate()   {
}
