#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncJointBreak2DTrigger.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_impl.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncJointBreak2DTrigger_def.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__IAsyncOnJointBreak2DHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__Joint2D_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger.OnJointBreak2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::*)(::UnityEngine::Joint2D*)>(&::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::OnJointBreak2D)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae3c0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger*>(),
                        {"OnJointBreak2D", {}, {::i2c::type_of<::UnityEngine::Joint2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger.GetOnJointBreak2DAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::GetOnJointBreak2DAsyncHandler)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xae3c110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger*>(),
                        {"GetOnJointBreak2DAsyncHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger.GetOnJointBreak2DAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::GetOnJointBreak2DAsyncHandler)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae3c18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger*>(),
                        {"GetOnJointBreak2DAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger.OnJointBreak2DAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Joint2D>> (::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::OnJointBreak2DAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xae3c210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger*>(),
                        {"OnJointBreak2DAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger.OnJointBreak2DAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Joint2D>> (::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::OnJointBreak2DAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xae3c31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger*>(),
                        {"OnJointBreak2DAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xae3c434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::OnJointBreak2D(::UnityEngine::Joint2D*  brokenJoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger*>(),
                        {"OnJointBreak2D", {}, {::i2c::type_of<::UnityEngine::Joint2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, brokenJoint);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler* Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::GetOnJointBreak2DAsyncHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger*>(),
                        {"GetOnJointBreak2DAsyncHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler* Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::GetOnJointBreak2DAsyncHandler(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger*>(),
                        {"GetOnJointBreak2DAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler*>(this, ___internal_method, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Joint2D>> Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::OnJointBreak2DAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger*>(),
                        {"OnJointBreak2DAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Joint2D>>>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Joint2D>> Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::OnJointBreak2DAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger*>(),
                        {"OnJointBreak2DAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Joint2D>>>(this, ___internal_method, cancellationToken);
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger* Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger::AsyncJointBreak2DTrigger()   {
}
