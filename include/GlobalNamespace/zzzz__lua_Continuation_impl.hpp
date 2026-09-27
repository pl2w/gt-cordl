#pragma once
// IWYU pragma private; include "GlobalNamespace/lua_Continuation.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__lua_Continuation_def.hpp"
#include "GlobalNamespace/zzzz__lua_State_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::lua_Continuation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::lua_Continuation::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::lua_Continuation::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a92e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::lua_Continuation*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::lua_Continuation.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::lua_Continuation::*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::lua_Continuation::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a92f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::lua_Continuation*>(),
                    {::i2c::class_of<::GlobalNamespace::lua_Continuation*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::lua_Continuation.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::lua_Continuation::*)(::GlobalNamespace::lua_State*, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::lua_Continuation::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a92f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::lua_Continuation*>(),
                    {::i2c::class_of<::GlobalNamespace::lua_Continuation*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::lua_Continuation.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::lua_Continuation::*)(::System::IAsyncResult*)>(&::GlobalNamespace::lua_Continuation::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a92fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::lua_Continuation*>(),
                    {::i2c::class_of<::GlobalNamespace::lua_Continuation*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::lua_Continuation::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::lua_Continuation*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t GlobalNamespace::lua_Continuation::Invoke(::GlobalNamespace::lua_State*  L, int32_t  status)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::lua_Continuation*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L, status);
}
inline ::System::IAsyncResult* GlobalNamespace::lua_Continuation::BeginInvoke(::GlobalNamespace::lua_State*  L, int32_t  status, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::lua_Continuation*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, status, callback, object);
}
inline int32_t GlobalNamespace::lua_Continuation::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::lua_Continuation*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, result);
}
inline ::GlobalNamespace::lua_Continuation* GlobalNamespace::lua_Continuation::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::lua_Continuation*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::lua_Continuation::lua_Continuation()   {
}
