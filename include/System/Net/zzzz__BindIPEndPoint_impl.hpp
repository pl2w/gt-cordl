#pragma once
// IWYU pragma private; include "System/Net/BindIPEndPoint.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/zzzz__BindIPEndPoint_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::BindIPEndPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BindIPEndPoint::*)(::System::Object*, ::System::IntPtr)>(&::System::Net::BindIPEndPoint::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xac8b8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::BindIPEndPoint*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BindIPEndPoint.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::System::Net::BindIPEndPoint::*)(::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, int32_t)>(&::System::Net::BindIPEndPoint::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac8b9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::BindIPEndPoint*>(),
                    {::i2c::class_of<::System::Net::BindIPEndPoint*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BindIPEndPoint.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::BindIPEndPoint::*)(::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::BindIPEndPoint::BeginInvoke)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xac8b9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::BindIPEndPoint*>(),
                    {::i2c::class_of<::System::Net::BindIPEndPoint*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BindIPEndPoint.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::System::Net::BindIPEndPoint::*)(::System::IAsyncResult*)>(&::System::Net::BindIPEndPoint::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac8ba44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::BindIPEndPoint*>(),
                    {::i2c::class_of<::System::Net::BindIPEndPoint*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::Net::BindIPEndPoint::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::BindIPEndPoint*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Net::IPEndPoint* System::Net::BindIPEndPoint::Invoke(::System::Net::ServicePoint*  servicePoint, ::System::Net::IPEndPoint*  remoteEndPoint, int32_t  retryCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::BindIPEndPoint*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method, servicePoint, remoteEndPoint, retryCount);
}
inline ::System::IAsyncResult* System::Net::BindIPEndPoint::BeginInvoke(::System::Net::ServicePoint*  servicePoint, ::System::Net::IPEndPoint*  remoteEndPoint, int32_t  retryCount, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::BindIPEndPoint*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, servicePoint, remoteEndPoint, retryCount, callback, object);
}
inline ::System::Net::IPEndPoint* System::Net::BindIPEndPoint::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::BindIPEndPoint*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method, result);
}
inline ::System::Net::BindIPEndPoint* System::Net::BindIPEndPoint::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::BindIPEndPoint*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::BindIPEndPoint::BindIPEndPoint()   {
}
