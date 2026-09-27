#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckStreamingShowCodeState.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingBaseState_impl.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingShowCodeState_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingController_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingShowCodeState__GetCodeFromCore_d__1_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingShowCodeState__WaitForUserToPairTablet_d__2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingShowCodeState.EnterState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingShowCodeState::*)(::Liv::Lck::Streaming::LckStreamingController*)>(&::Liv::Lck::Streaming::LckStreamingShowCodeState::EnterState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d3a100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingShowCodeState*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::LckStreamingShowCodeState*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingShowCodeState.GetCodeFromCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Streaming::LckStreamingShowCodeState::*)(::Liv::Lck::Streaming::LckStreamingController*, ::System::Threading::CancellationToken)>(&::Liv::Lck::Streaming::LckStreamingShowCodeState::GetCodeFromCore)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9d3a1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingShowCodeState*>(),
                        {"GetCodeFromCore", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingController*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingShowCodeState.WaitForUserToPairTablet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Streaming::LckStreamingShowCodeState::*)(::Liv::Lck::Streaming::LckStreamingController*, ::System::Threading::CancellationToken)>(&::Liv::Lck::Streaming::LckStreamingShowCodeState::WaitForUserToPairTablet)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9d3a2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingShowCodeState*>(),
                        {"WaitForUserToPairTablet", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingController*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingShowCodeState.LoginAttemptExpired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingShowCodeState::*)(::Liv::Lck::Streaming::LckStreamingController*)>(&::Liv::Lck::Streaming::LckStreamingShowCodeState::LoginAttemptExpired)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d3a3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingShowCodeState*>(),
                        {"LoginAttemptExpired", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingShowCodeState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingShowCodeState::*)()>(&::Liv::Lck::Streaming::LckStreamingShowCodeState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3a44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingShowCodeState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Streaming::LckStreamingShowCodeState::EnterState(::Liv::Lck::Streaming::LckStreamingController*  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::LckStreamingShowCodeState*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Streaming::LckStreamingShowCodeState::GetCodeFromCore(::Liv::Lck::Streaming::LckStreamingController*  controller, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingShowCodeState*>(),
                        {"GetCodeFromCore", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingController*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, controller, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Streaming::LckStreamingShowCodeState::WaitForUserToPairTablet(::Liv::Lck::Streaming::LckStreamingController*  controller, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingShowCodeState*>(),
                        {"WaitForUserToPairTablet", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingController*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, controller, cancellationToken);
}
inline void Liv::Lck::Streaming::LckStreamingShowCodeState::LoginAttemptExpired(::Liv::Lck::Streaming::LckStreamingController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingShowCodeState*>(),
                        {"LoginAttemptExpired", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Liv::Lck::Streaming::LckStreamingShowCodeState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingShowCodeState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Streaming::LckStreamingShowCodeState* Liv::Lck::Streaming::LckStreamingShowCodeState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Streaming::LckStreamingShowCodeState*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Streaming::LckStreamingShowCodeState::LckStreamingShowCodeState()   {
}
