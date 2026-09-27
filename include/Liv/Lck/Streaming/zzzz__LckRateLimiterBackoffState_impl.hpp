#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckRateLimiterBackoffState.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingBaseState_impl.hpp"
#include "Liv/Lck/Streaming/zzzz__LckRateLimiterBackoffState_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckRateLimiterBackoffState__WaitForRateLimiter_d__1_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingController_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Streaming::LckRateLimiterBackoffState.EnterState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckRateLimiterBackoffState::*)(::Liv::Lck::Streaming::LckStreamingController*)>(&::Liv::Lck::Streaming::LckRateLimiterBackoffState::EnterState)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9d38460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::LckRateLimiterBackoffState*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::LckRateLimiterBackoffState*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckRateLimiterBackoffState.WaitForRateLimiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Streaming::LckRateLimiterBackoffState::*)(::Liv::Lck::Streaming::LckStreamingController*, ::System::Threading::CancellationToken)>(&::Liv::Lck::Streaming::LckRateLimiterBackoffState::WaitForRateLimiter)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d384a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckRateLimiterBackoffState*>(),
                        {"WaitForRateLimiter", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingController*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckRateLimiterBackoffState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckRateLimiterBackoffState::*)()>(&::Liv::Lck::Streaming::LckRateLimiterBackoffState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d38598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckRateLimiterBackoffState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Streaming::LckRateLimiterBackoffState::EnterState(::Liv::Lck::Streaming::LckStreamingController*  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::LckRateLimiterBackoffState*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Streaming::LckRateLimiterBackoffState::WaitForRateLimiter(::Liv::Lck::Streaming::LckStreamingController*  controller, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckRateLimiterBackoffState*>(),
                        {"WaitForRateLimiter", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingController*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, controller, cancellationToken);
}
inline void Liv::Lck::Streaming::LckRateLimiterBackoffState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckRateLimiterBackoffState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Streaming::LckRateLimiterBackoffState* Liv::Lck::Streaming::LckRateLimiterBackoffState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Streaming::LckRateLimiterBackoffState*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Streaming::LckRateLimiterBackoffState::LckRateLimiterBackoffState()   {
}
