#pragma once
// IWYU pragma private; include "Viveport/Internal/GetLicenseCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Viveport/Internal/zzzz__GetLicenseCallback_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Viveport::Internal::GetLicenseCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::GetLicenseCallback::*)(::System::Object*, ::System::IntPtr)>(&::Viveport::Internal::GetLicenseCallback::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b59144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::GetLicenseCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::GetLicenseCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::GetLicenseCallback::*)(::StringW, ::StringW)>(&::Viveport::Internal::GetLicenseCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b591f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::Internal::GetLicenseCallback*>(),
                    {::i2c::class_of<::Viveport::Internal::GetLicenseCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::GetLicenseCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Viveport::Internal::GetLicenseCallback::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::Viveport::Internal::GetLicenseCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b5920c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::Internal::GetLicenseCallback*>(),
                    {::i2c::class_of<::Viveport::Internal::GetLicenseCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::GetLicenseCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::GetLicenseCallback::*)(::System::IAsyncResult*)>(&::Viveport::Internal::GetLicenseCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b59234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::Internal::GetLicenseCallback*>(),
                    {::i2c::class_of<::Viveport::Internal::GetLicenseCallback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Viveport::Internal::GetLicenseCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::GetLicenseCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Viveport::Internal::GetLicenseCallback::Invoke(::StringW  message, ::StringW  signature)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::Internal::GetLicenseCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, signature);
}
inline ::System::IAsyncResult* Viveport::Internal::GetLicenseCallback::BeginInvoke(::StringW  message, ::StringW  signature, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::Internal::GetLicenseCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, message, signature, callback, object);
}
inline void Viveport::Internal::GetLicenseCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::Internal::GetLicenseCallback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Viveport::Internal::GetLicenseCallback* Viveport::Internal::GetLicenseCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Internal::GetLicenseCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Viveport::Internal::GetLicenseCallback::GetLicenseCallback()   {
}
