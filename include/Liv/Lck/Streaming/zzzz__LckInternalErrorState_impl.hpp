#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckInternalErrorState.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingBaseState_impl.hpp"
#include "Liv/Lck/Streaming/zzzz__LckInternalErrorState_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckInternalErrorState__CheckInternalError_d__2_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingController_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Streaming::LckInternalErrorState.EnterState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckInternalErrorState::*)(::Liv::Lck::Streaming::LckStreamingController*)>(&::Liv::Lck::Streaming::LckInternalErrorState::EnterState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d36bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::LckInternalErrorState*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::LckInternalErrorState*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckInternalErrorState.CheckInternalError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Streaming::LckInternalErrorState::*)(::Liv::Lck::Streaming::LckStreamingController*, ::System::Threading::CancellationToken)>(&::Liv::Lck::Streaming::LckInternalErrorState::CheckInternalError)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d36c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckInternalErrorState*>(),
                        {"CheckInternalError", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingController*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckInternalErrorState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckInternalErrorState::*)()>(&::Liv::Lck::Streaming::LckInternalErrorState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d36d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckInternalErrorState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Streaming::LckInternalErrorState::setStaticF__enterInternalErrorStateCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_enterInternalErrorStateCount", ::Liv::Lck::Streaming::LckInternalErrorState*>(std::forward<int32_t>(value));
}
inline int32_t Liv::Lck::Streaming::LckInternalErrorState::getStaticF__enterInternalErrorStateCount()  {
return ::cordl_internals::getStaticField<int32_t, "_enterInternalErrorStateCount", ::Liv::Lck::Streaming::LckInternalErrorState*>();
}
inline void Liv::Lck::Streaming::LckInternalErrorState::EnterState(::Liv::Lck::Streaming::LckStreamingController*  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::LckInternalErrorState*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Streaming::LckInternalErrorState::CheckInternalError(::Liv::Lck::Streaming::LckStreamingController*  controller, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckInternalErrorState*>(),
                        {"CheckInternalError", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingController*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, controller, cancellationToken);
}
inline void Liv::Lck::Streaming::LckInternalErrorState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckInternalErrorState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Streaming::LckInternalErrorState* Liv::Lck::Streaming::LckInternalErrorState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Streaming::LckInternalErrorState*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Streaming::LckInternalErrorState::LckInternalErrorState()   {
}
