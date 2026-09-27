#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectSpawnDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Fusion/zzzz__NetworkObjectSpawnDelegate_def.hpp"
#include "Fusion/zzzz__NetworkSpawnOp_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectSpawnDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectSpawnDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Fusion::NetworkObjectSpawnDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5fda4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectSpawnDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectSpawnDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectSpawnDelegate::*)(::Fusion::NetworkSpawnOp)>(&::Fusion::NetworkObjectSpawnDelegate::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5fda574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectSpawnDelegate*>(),
                    {::i2c::class_of<::Fusion::NetworkObjectSpawnDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectSpawnDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Fusion::NetworkObjectSpawnDelegate::*)(::Fusion::NetworkSpawnOp, ::System::AsyncCallback*, ::System::Object*)>(&::Fusion::NetworkObjectSpawnDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5fda5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectSpawnDelegate*>(),
                    {::i2c::class_of<::Fusion::NetworkObjectSpawnDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectSpawnDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectSpawnDelegate::*)(::System::IAsyncResult*)>(&::Fusion::NetworkObjectSpawnDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fda63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectSpawnDelegate*>(),
                    {::i2c::class_of<::Fusion::NetworkObjectSpawnDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Fusion::NetworkObjectSpawnDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectSpawnDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Fusion::NetworkObjectSpawnDelegate::Invoke(::Fusion::NetworkSpawnOp  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectSpawnDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::IAsyncResult* Fusion::NetworkObjectSpawnDelegate::BeginInvoke(::Fusion::NetworkSpawnOp  result, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectSpawnDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, result, callback, object);
}
inline void Fusion::NetworkObjectSpawnDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectSpawnDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Fusion::NetworkObjectSpawnDelegate* Fusion::NetworkObjectSpawnDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectSpawnDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectSpawnDelegate::NetworkObjectSpawnDelegate()   {
}
