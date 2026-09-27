#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckStreamingGetCurrentState.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingBaseState_impl.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingGetCurrentState_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingController_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingGetCurrentState__GetCurrentState_d__1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingGetCurrentState.EnterState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingGetCurrentState::*)(::Liv::Lck::Streaming::LckStreamingController*)>(&::Liv::Lck::Streaming::LckStreamingGetCurrentState::EnterState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d39778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingGetCurrentState*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::LckStreamingGetCurrentState*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingGetCurrentState.GetCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Streaming::LckStreamingGetCurrentState::*)(::Liv::Lck::Streaming::LckStreamingController*, ::System::Threading::CancellationToken)>(&::Liv::Lck::Streaming::LckStreamingGetCurrentState::GetCurrentState)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d397a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingGetCurrentState*>(),
                        {"GetCurrentState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingController*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingGetCurrentState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingGetCurrentState::*)()>(&::Liv::Lck::Streaming::LckStreamingGetCurrentState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3989c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingGetCurrentState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Streaming::LckStreamingGetCurrentState::EnterState(::Liv::Lck::Streaming::LckStreamingController*  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::LckStreamingGetCurrentState*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Streaming::LckStreamingGetCurrentState::GetCurrentState(::Liv::Lck::Streaming::LckStreamingController*  controller, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingGetCurrentState*>(),
                        {"GetCurrentState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingController*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, controller, cancellationToken);
}
inline void Liv::Lck::Streaming::LckStreamingGetCurrentState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingGetCurrentState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Streaming::LckStreamingGetCurrentState* Liv::Lck::Streaming::LckStreamingGetCurrentState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Streaming::LckStreamingGetCurrentState*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Streaming::LckStreamingGetCurrentState::LckStreamingGetCurrentState()   {
}
