#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncParticleUpdateJobScheduledTrigger.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_impl.hpp"
#include "UnityEngine/ParticleSystemJobs/zzzz__ParticleSystemJobData_impl.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncParticleUpdateJobScheduledTrigger_def.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__IAsyncOnParticleUpdateJobScheduledHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/ParticleSystemJobs/zzzz__ParticleSystemJobData_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger.OnParticleUpdateJobScheduled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::*)(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData)>(&::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::OnParticleUpdateJobScheduled)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xae3cf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger*>(),
                        {"OnParticleUpdateJobScheduled", {}, {::i2c::type_of<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger.GetOnParticleUpdateJobScheduledAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::GetOnParticleUpdateJobScheduledAsyncHandler)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xae3cfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger*>(),
                        {"GetOnParticleUpdateJobScheduledAsyncHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger.GetOnParticleUpdateJobScheduledAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::GetOnParticleUpdateJobScheduledAsyncHandler)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae3d060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger*>(),
                        {"GetOnParticleUpdateJobScheduledAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger.OnParticleUpdateJobScheduledAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData> (::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::OnParticleUpdateJobScheduledAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xae3d0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger*>(),
                        {"OnParticleUpdateJobScheduledAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger.OnParticleUpdateJobScheduledAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData> (::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::OnParticleUpdateJobScheduledAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xae3d1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger*>(),
                        {"OnParticleUpdateJobScheduledAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xae3d314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::OnParticleUpdateJobScheduled(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData  particles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger*>(),
                        {"OnParticleUpdateJobScheduled", {}, {::i2c::type_of<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler* Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::GetOnParticleUpdateJobScheduledAsyncHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger*>(),
                        {"GetOnParticleUpdateJobScheduledAsyncHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler* Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::GetOnParticleUpdateJobScheduledAsyncHandler(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger*>(),
                        {"GetOnParticleUpdateJobScheduledAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler*>(this, ___internal_method, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData> Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::OnParticleUpdateJobScheduledAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger*>(),
                        {"OnParticleUpdateJobScheduledAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData>>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData> Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::OnParticleUpdateJobScheduledAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger*>(),
                        {"OnParticleUpdateJobScheduledAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData>>(this, ___internal_method, cancellationToken);
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger* Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger::AsyncParticleUpdateJobScheduledTrigger()   {
}
