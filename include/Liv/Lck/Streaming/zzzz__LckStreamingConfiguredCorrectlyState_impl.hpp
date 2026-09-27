#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckStreamingConfiguredCorrectlyState.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingBaseState_impl.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingConfiguredCorrectlyState_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingController_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState.EnterState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState::*)(::Liv::Lck::Streaming::LckStreamingController*)>(&::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState::EnterState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d39738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState::*)()>(&::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d39770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState::EnterState(::Liv::Lck::Streaming::LckStreamingController*  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState* Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState::LckStreamingConfiguredCorrectlyState()   {
}
