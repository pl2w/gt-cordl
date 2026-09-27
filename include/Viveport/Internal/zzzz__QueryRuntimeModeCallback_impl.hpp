#pragma once
// IWYU pragma private; include "Viveport/Internal/QueryRuntimeModeCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Viveport/Internal/zzzz__QueryRuntimeModeCallback_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Viveport::Internal::QueryRuntimeModeCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::QueryRuntimeModeCallback::*)(::System::Object*, ::System::IntPtr)>(&::Viveport::Internal::QueryRuntimeModeCallback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b5934c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::QueryRuntimeModeCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::QueryRuntimeModeCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::QueryRuntimeModeCallback::*)(int32_t, int32_t)>(&::Viveport::Internal::QueryRuntimeModeCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b593ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::Internal::QueryRuntimeModeCallback*>(),
                    {::i2c::class_of<::Viveport::Internal::QueryRuntimeModeCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::QueryRuntimeModeCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Viveport::Internal::QueryRuntimeModeCallback::*)(int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Viveport::Internal::QueryRuntimeModeCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b59400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::Internal::QueryRuntimeModeCallback*>(),
                    {::i2c::class_of<::Viveport::Internal::QueryRuntimeModeCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::QueryRuntimeModeCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::QueryRuntimeModeCallback::*)(::System::IAsyncResult*)>(&::Viveport::Internal::QueryRuntimeModeCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b5947c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::Internal::QueryRuntimeModeCallback*>(),
                    {::i2c::class_of<::Viveport::Internal::QueryRuntimeModeCallback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Viveport::Internal::QueryRuntimeModeCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::QueryRuntimeModeCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Viveport::Internal::QueryRuntimeModeCallback::Invoke(int32_t  nResult, int32_t  nMode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::Internal::QueryRuntimeModeCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nResult, nMode);
}
inline ::System::IAsyncResult* Viveport::Internal::QueryRuntimeModeCallback::BeginInvoke(int32_t  nResult, int32_t  nMode, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::Internal::QueryRuntimeModeCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, nResult, nMode, callback, object);
}
inline void Viveport::Internal::QueryRuntimeModeCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::Internal::QueryRuntimeModeCallback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Viveport::Internal::QueryRuntimeModeCallback* Viveport::Internal::QueryRuntimeModeCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Internal::QueryRuntimeModeCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Viveport::Internal::QueryRuntimeModeCallback::QueryRuntimeModeCallback()   {
}
