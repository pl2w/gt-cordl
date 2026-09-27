#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/WaitForBackgroundThread.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WaitForBackgroundThread_def.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WaitForBackgroundThread_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WaitForBackgroundThread.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter (::Meta::Net::NativeWebSocket::WaitForBackgroundThread::*)()>(&::Meta::Net::NativeWebSocket::WaitForBackgroundThread::GetAwaiter)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9e01274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WaitForBackgroundThread*>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WaitForBackgroundThread._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WaitForBackgroundThread::*)()>(&::Meta::Net::NativeWebSocket::WaitForBackgroundThread::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e01388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WaitForBackgroundThread*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter Meta::Net::NativeWebSocket::WaitForBackgroundThread::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WaitForBackgroundThread*>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter>(this, ___internal_method);
}
inline void Meta::Net::NativeWebSocket::WaitForBackgroundThread::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WaitForBackgroundThread*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Net::NativeWebSocket::WaitForBackgroundThread* Meta::Net::NativeWebSocket::WaitForBackgroundThread::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Net::NativeWebSocket::WaitForBackgroundThread*>());
}
// Ctor Parameters []
constexpr ::Meta::Net::NativeWebSocket::WaitForBackgroundThread::WaitForBackgroundThread()   {
}
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c::*)()>(&::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e013f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c._GetAwaiter_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c::*)()>(&::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c::_GetAwaiter_b__0_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e01400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c*>(),
                        {"<GetAwaiter>b__0_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::Net::NativeWebSocket::WaitForBackgroundThread___c::setStaticF___9(::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c*  value)  {
::cordl_internals::setStaticField<::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c*, "<>9", ::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c*>(std::forward<::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c*>(value));
}
inline ::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c* Meta::Net::NativeWebSocket::WaitForBackgroundThread___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c*, "<>9", ::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c*>();
}
inline void Meta::Net::NativeWebSocket::WaitForBackgroundThread___c::setStaticF___9__0_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__0_0", ::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Meta::Net::NativeWebSocket::WaitForBackgroundThread___c::getStaticF___9__0_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__0_0", ::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c*>();
}
inline void Meta::Net::NativeWebSocket::WaitForBackgroundThread___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Net::NativeWebSocket::WaitForBackgroundThread___c::_GetAwaiter_b__0_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c*>(),
                        {"<GetAwaiter>b__0_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c* Meta::Net::NativeWebSocket::WaitForBackgroundThread___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c*>());
}
// Ctor Parameters []
constexpr ::Meta::Net::NativeWebSocket::WaitForBackgroundThread___c::WaitForBackgroundThread___c()   {
}
