#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckStreamingWaitingForConfigureState.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingBaseState_impl.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingWaitingForConfigureState_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingController_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState.EnterState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState::*)(::Liv::Lck::Streaming::LckStreamingController*)>(&::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState::EnterState)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9d3b824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState.CheckConfiguredState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState::*)(::Liv::Lck::Streaming::LckStreamingController*, ::System::Threading::CancellationToken)>(&::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState::CheckConfiguredState)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d3b868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*>(),
                        {"CheckConfiguredState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingController*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState::*)()>(&::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3b95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Streaming::LckStreamingWaitingForConfigureState::EnterState(::Liv::Lck::Streaming::LckStreamingController*  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Streaming::LckStreamingWaitingForConfigureState::CheckConfiguredState(::Liv::Lck::Streaming::LckStreamingController*  controller, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*>(),
                        {"CheckConfiguredState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingController*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, controller, cancellationToken);
}
inline void Liv::Lck::Streaming::LckStreamingWaitingForConfigureState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState* Liv::Lck::Streaming::LckStreamingWaitingForConfigureState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState::LckStreamingWaitingForConfigureState()   {
}
