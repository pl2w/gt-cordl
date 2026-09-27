#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncCollisionExitTrigger.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_impl.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncCollisionExitTrigger_def.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__IAsyncOnCollisionExitHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger.OnCollisionExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::*)(::UnityEngine::Collision*)>(&::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::OnCollisionExit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae39874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger*>(),
                        {"OnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger.GetOnCollisionExitAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::GetOnCollisionExitAsyncHandler)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xae398cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger*>(),
                        {"GetOnCollisionExitAsyncHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger.GetOnCollisionExitAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::GetOnCollisionExitAsyncHandler)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae39948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger*>(),
                        {"GetOnCollisionExitAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger.OnCollisionExitAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> (::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::OnCollisionExitAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xae399cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger*>(),
                        {"OnCollisionExitAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger.OnCollisionExitAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> (::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::OnCollisionExitAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xae39ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger*>(),
                        {"OnCollisionExitAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xae39bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::OnCollisionExit(::UnityEngine::Collision*  coll)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger*>(),
                        {"OnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coll);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler* Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::GetOnCollisionExitAsyncHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger*>(),
                        {"GetOnCollisionExitAsyncHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler* Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::GetOnCollisionExitAsyncHandler(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger*>(),
                        {"GetOnCollisionExitAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler*>(this, ___internal_method, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::OnCollisionExitAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger*>(),
                        {"OnCollisionExitAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*>>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::OnCollisionExitAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger*>(),
                        {"OnCollisionExitAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*>>(this, ___internal_method, cancellationToken);
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger* Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionExitTrigger::AsyncCollisionExitTrigger()   {
}
