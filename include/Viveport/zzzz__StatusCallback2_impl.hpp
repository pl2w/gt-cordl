#pragma once
// IWYU pragma private; include "Viveport/StatusCallback2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Viveport/zzzz__StatusCallback2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Viveport::StatusCallback2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::StatusCallback2::*)(::System::Object*, ::System::IntPtr)>(&::Viveport::StatusCallback2::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b4bd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::StatusCallback2*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::StatusCallback2.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::StatusCallback2::*)(int32_t, ::StringW)>(&::Viveport::StatusCallback2::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b4be0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::StatusCallback2*>(),
                    {::i2c::class_of<::Viveport::StatusCallback2*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::StatusCallback2.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Viveport::StatusCallback2::*)(int32_t, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::Viveport::StatusCallback2::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b4be20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::StatusCallback2*>(),
                    {::i2c::class_of<::Viveport::StatusCallback2*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::StatusCallback2.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::StatusCallback2::*)(::System::IAsyncResult*)>(&::Viveport::StatusCallback2::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b4be90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::StatusCallback2*>(),
                    {::i2c::class_of<::Viveport::StatusCallback2*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Viveport::StatusCallback2::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::StatusCallback2*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Viveport::StatusCallback2::Invoke(int32_t  nResult, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::StatusCallback2*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nResult, message);
}
inline ::System::IAsyncResult* Viveport::StatusCallback2::BeginInvoke(int32_t  nResult, ::StringW  message, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::StatusCallback2*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, nResult, message, callback, object);
}
inline void Viveport::StatusCallback2::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::StatusCallback2*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Viveport::StatusCallback2* Viveport::StatusCallback2::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::StatusCallback2*>(object, method));
}
// Ctor Parameters []
constexpr ::Viveport::StatusCallback2::StatusCallback2()   {
}
