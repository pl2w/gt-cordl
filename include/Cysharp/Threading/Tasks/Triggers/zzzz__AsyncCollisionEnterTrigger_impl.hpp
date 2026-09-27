#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncCollisionEnterTrigger.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_impl.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncCollisionEnterTrigger_def.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__IAsyncOnCollisionEnterHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::*)(::UnityEngine::Collision*)>(&::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae390ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger.GetOnCollisionEnterAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::GetOnCollisionEnterAsyncHandler)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xae39144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger*>(),
                        {"GetOnCollisionEnterAsyncHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger.GetOnCollisionEnterAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::GetOnCollisionEnterAsyncHandler)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae391c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger*>(),
                        {"GetOnCollisionEnterAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger.OnCollisionEnterAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> (::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::OnCollisionEnterAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xae39244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger*>(),
                        {"OnCollisionEnterAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger.OnCollisionEnterAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> (::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::OnCollisionEnterAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xae39350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger*>(),
                        {"OnCollisionEnterAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xae39468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::OnCollisionEnter(::UnityEngine::Collision*  coll)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coll);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler* Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::GetOnCollisionEnterAsyncHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger*>(),
                        {"GetOnCollisionEnterAsyncHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler* Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::GetOnCollisionEnterAsyncHandler(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger*>(),
                        {"GetOnCollisionEnterAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler*>(this, ___internal_method, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::OnCollisionEnterAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger*>(),
                        {"OnCollisionEnterAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*>>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::OnCollisionEnterAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger*>(),
                        {"OnCollisionEnterAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*>>(this, ___internal_method, cancellationToken);
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger* Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger::AsyncCollisionEnterTrigger()   {
}
