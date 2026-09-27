#pragma once
// IWYU pragma private; include "System/Net/CipherSuitesCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/zzzz__CipherSuitesCallback_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Net/zzzz__SecurityProtocolType_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::CipherSuitesCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CipherSuitesCallback::*)(::System::Object*, ::System::IntPtr)>(&::System::Net::CipherSuitesCallback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xacb18c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CipherSuitesCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CipherSuitesCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::System::Net::CipherSuitesCallback::*)(::System::Net::SecurityProtocolType, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::System::Net::CipherSuitesCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xacb1960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::CipherSuitesCallback*>(),
                    {::i2c::class_of<::System::Net::CipherSuitesCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CipherSuitesCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::CipherSuitesCallback::*)(::System::Net::SecurityProtocolType, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::CipherSuitesCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xacb1974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::CipherSuitesCallback*>(),
                    {::i2c::class_of<::System::Net::CipherSuitesCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CipherSuitesCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::System::Net::CipherSuitesCallback::*)(::System::IAsyncResult*)>(&::System::Net::CipherSuitesCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xacb1a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::CipherSuitesCallback*>(),
                    {::i2c::class_of<::System::Net::CipherSuitesCallback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::Net::CipherSuitesCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CipherSuitesCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::Net::CipherSuitesCallback::Invoke(::System::Net::SecurityProtocolType  protocol, ::System::Collections::Generic::IEnumerable_1<::StringW>*  allCiphers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::CipherSuitesCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method, protocol, allCiphers);
}
inline ::System::IAsyncResult* System::Net::CipherSuitesCallback::BeginInvoke(::System::Net::SecurityProtocolType  protocol, ::System::Collections::Generic::IEnumerable_1<::StringW>*  allCiphers, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::CipherSuitesCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, protocol, allCiphers, callback, object);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::Net::CipherSuitesCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::CipherSuitesCallback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method, result);
}
inline ::System::Net::CipherSuitesCallback* System::Net::CipherSuitesCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CipherSuitesCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::CipherSuitesCallback::CipherSuitesCallback()   {
}
