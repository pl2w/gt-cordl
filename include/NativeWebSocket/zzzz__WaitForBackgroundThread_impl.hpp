#pragma once
// IWYU pragma private; include "NativeWebSocket/WaitForBackgroundThread.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "NativeWebSocket/zzzz__WaitForBackgroundThread_def.hpp"
#include "NativeWebSocket/zzzz__WaitForBackgroundThread_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::NativeWebSocket::WaitForBackgroundThread.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter (::NativeWebSocket::WaitForBackgroundThread::*)()>(&::NativeWebSocket::WaitForBackgroundThread::GetAwaiter)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5f34fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WaitForBackgroundThread*>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WaitForBackgroundThread._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WaitForBackgroundThread::*)()>(&::NativeWebSocket::WaitForBackgroundThread::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f350b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WaitForBackgroundThread*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter NativeWebSocket::WaitForBackgroundThread::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WaitForBackgroundThread*>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter>(this, ___internal_method);
}
inline void NativeWebSocket::WaitForBackgroundThread::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WaitForBackgroundThread*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::NativeWebSocket::WaitForBackgroundThread* NativeWebSocket::WaitForBackgroundThread::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NativeWebSocket::WaitForBackgroundThread*>());
}
// Ctor Parameters []
constexpr ::NativeWebSocket::WaitForBackgroundThread::WaitForBackgroundThread()   {
}
//  Writing Method size for method: ::NativeWebSocket::WaitForBackgroundThread___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WaitForBackgroundThread___c::*)()>(&::NativeWebSocket::WaitForBackgroundThread___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f35124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WaitForBackgroundThread___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WaitForBackgroundThread___c._GetAwaiter_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WaitForBackgroundThread___c::*)()>(&::NativeWebSocket::WaitForBackgroundThread___c::_GetAwaiter_b__0_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f3512c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WaitForBackgroundThread___c*>(),
                        {"<GetAwaiter>b__0_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void NativeWebSocket::WaitForBackgroundThread___c::setStaticF___9(::NativeWebSocket::WaitForBackgroundThread___c*  value)  {
::cordl_internals::setStaticField<::NativeWebSocket::WaitForBackgroundThread___c*, "<>9", ::NativeWebSocket::WaitForBackgroundThread___c*>(std::forward<::NativeWebSocket::WaitForBackgroundThread___c*>(value));
}
inline ::NativeWebSocket::WaitForBackgroundThread___c* NativeWebSocket::WaitForBackgroundThread___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::NativeWebSocket::WaitForBackgroundThread___c*, "<>9", ::NativeWebSocket::WaitForBackgroundThread___c*>();
}
inline void NativeWebSocket::WaitForBackgroundThread___c::setStaticF___9__0_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__0_0", ::NativeWebSocket::WaitForBackgroundThread___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* NativeWebSocket::WaitForBackgroundThread___c::getStaticF___9__0_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__0_0", ::NativeWebSocket::WaitForBackgroundThread___c*>();
}
inline void NativeWebSocket::WaitForBackgroundThread___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WaitForBackgroundThread___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void NativeWebSocket::WaitForBackgroundThread___c::_GetAwaiter_b__0_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WaitForBackgroundThread___c*>(),
                        {"<GetAwaiter>b__0_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::NativeWebSocket::WaitForBackgroundThread___c* NativeWebSocket::WaitForBackgroundThread___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NativeWebSocket::WaitForBackgroundThread___c*>());
}
// Ctor Parameters []
constexpr ::NativeWebSocket::WaitForBackgroundThread___c::WaitForBackgroundThread___c()   {
}
