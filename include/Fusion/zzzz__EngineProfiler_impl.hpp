#pragma once
// IWYU pragma private; include "Fusion/EngineProfiler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__EngineProfiler_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Fusion::EngineProfiler.Begin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Fusion::EngineProfiler::Begin)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f3cc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"Begin", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EngineProfiler.End
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::EngineProfiler::End)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3ccd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"End", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EngineProfiler.RoundTripTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Fusion::EngineProfiler::RoundTripTime)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f3ccd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"RoundTripTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EngineProfiler.InputSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Fusion::EngineProfiler::InputSize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f3cd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"InputSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EngineProfiler.InputQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Fusion::EngineProfiler::InputQueue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f3cdbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"InputQueue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EngineProfiler.RpcIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Fusion::EngineProfiler::RpcIn)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f3ce28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"RpcIn", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EngineProfiler.RpcOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Fusion::EngineProfiler::RpcOut)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f3ce94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"RpcOut", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EngineProfiler.StateRecvDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Fusion::EngineProfiler::StateRecvDelta)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f3cf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"StateRecvDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EngineProfiler.StateRecvDeltaDeviation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Fusion::EngineProfiler::StateRecvDeltaDeviation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f3cf78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"StateRecvDeltaDeviation", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EngineProfiler.InterpolationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Fusion::EngineProfiler::InterpolationSpeed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f3cff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"InterpolationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EngineProfiler.InterpolationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Fusion::EngineProfiler::InterpolationOffset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f3d068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"InterpolationOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EngineProfiler.InterpolationOffsetDeviation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Fusion::EngineProfiler::InterpolationOffsetDeviation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f3d0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"InterpolationOffsetDeviation", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EngineProfiler.InputRecvDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Fusion::EngineProfiler::InputRecvDelta)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f3d158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"InputRecvDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EngineProfiler.InputRecvDeltaDeviation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Fusion::EngineProfiler::InputRecvDeltaDeviation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f3d1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"InputRecvDeltaDeviation", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EngineProfiler.SimulationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Fusion::EngineProfiler::SimulationSpeed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f3d248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"SimulationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EngineProfiler.SimulationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Fusion::EngineProfiler::SimulationOffset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f3d2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"SimulationOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EngineProfiler.SimulationOffsetDeviation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Fusion::EngineProfiler::SimulationOffsetDeviation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f3d338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"SimulationOffsetDeviation", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::EngineProfiler::setStaticF_RoundTripTimeCallback(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "RoundTripTimeCallback", ::Fusion::EngineProfiler*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* Fusion::EngineProfiler::getStaticF_RoundTripTimeCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "RoundTripTimeCallback", ::Fusion::EngineProfiler*>();
}
inline void Fusion::EngineProfiler::setStaticF_InputSizeCallback(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "InputSizeCallback", ::Fusion::EngineProfiler*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* Fusion::EngineProfiler::getStaticF_InputSizeCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "InputSizeCallback", ::Fusion::EngineProfiler*>();
}
inline void Fusion::EngineProfiler::setStaticF_InputQueueCallback(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "InputQueueCallback", ::Fusion::EngineProfiler*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* Fusion::EngineProfiler::getStaticF_InputQueueCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "InputQueueCallback", ::Fusion::EngineProfiler*>();
}
inline void Fusion::EngineProfiler::setStaticF_RpcInCallback(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "RpcInCallback", ::Fusion::EngineProfiler*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* Fusion::EngineProfiler::getStaticF_RpcInCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "RpcInCallback", ::Fusion::EngineProfiler*>();
}
inline void Fusion::EngineProfiler::setStaticF_RpcOutCallback(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "RpcOutCallback", ::Fusion::EngineProfiler*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* Fusion::EngineProfiler::getStaticF_RpcOutCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "RpcOutCallback", ::Fusion::EngineProfiler*>();
}
inline void Fusion::EngineProfiler::setStaticF_StateRecvDeltaCallback(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "StateRecvDeltaCallback", ::Fusion::EngineProfiler*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* Fusion::EngineProfiler::getStaticF_StateRecvDeltaCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "StateRecvDeltaCallback", ::Fusion::EngineProfiler*>();
}
inline void Fusion::EngineProfiler::setStaticF_StateRecvDeltaDeviationCallback(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "StateRecvDeltaDeviationCallback", ::Fusion::EngineProfiler*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* Fusion::EngineProfiler::getStaticF_StateRecvDeltaDeviationCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "StateRecvDeltaDeviationCallback", ::Fusion::EngineProfiler*>();
}
inline void Fusion::EngineProfiler::setStaticF_InterpolationSpeedCallback(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "InterpolationSpeedCallback", ::Fusion::EngineProfiler*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* Fusion::EngineProfiler::getStaticF_InterpolationSpeedCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "InterpolationSpeedCallback", ::Fusion::EngineProfiler*>();
}
inline void Fusion::EngineProfiler::setStaticF_InterpolationOffsetCallback(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "InterpolationOffsetCallback", ::Fusion::EngineProfiler*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* Fusion::EngineProfiler::getStaticF_InterpolationOffsetCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "InterpolationOffsetCallback", ::Fusion::EngineProfiler*>();
}
inline void Fusion::EngineProfiler::setStaticF_InterpolationOffsetDeviationCallback(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "InterpolationOffsetDeviationCallback", ::Fusion::EngineProfiler*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* Fusion::EngineProfiler::getStaticF_InterpolationOffsetDeviationCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "InterpolationOffsetDeviationCallback", ::Fusion::EngineProfiler*>();
}
inline void Fusion::EngineProfiler::setStaticF_InputRecvDeltaCallback(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "InputRecvDeltaCallback", ::Fusion::EngineProfiler*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* Fusion::EngineProfiler::getStaticF_InputRecvDeltaCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "InputRecvDeltaCallback", ::Fusion::EngineProfiler*>();
}
inline void Fusion::EngineProfiler::setStaticF_SimulationSpeedCallback(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "SimulationSpeedCallback", ::Fusion::EngineProfiler*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* Fusion::EngineProfiler::getStaticF_SimulationSpeedCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "SimulationSpeedCallback", ::Fusion::EngineProfiler*>();
}
inline void Fusion::EngineProfiler::setStaticF_InputRecvDeltaDeviationCallback(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "InputRecvDeltaDeviationCallback", ::Fusion::EngineProfiler*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* Fusion::EngineProfiler::getStaticF_InputRecvDeltaDeviationCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "InputRecvDeltaDeviationCallback", ::Fusion::EngineProfiler*>();
}
inline void Fusion::EngineProfiler::setStaticF_SimulationOffsetCallback(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "SimulationOffsetCallback", ::Fusion::EngineProfiler*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* Fusion::EngineProfiler::getStaticF_SimulationOffsetCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "SimulationOffsetCallback", ::Fusion::EngineProfiler*>();
}
inline void Fusion::EngineProfiler::setStaticF_SimulationOffsetDeviationCallback(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "SimulationOffsetDeviationCallback", ::Fusion::EngineProfiler*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* Fusion::EngineProfiler::getStaticF_SimulationOffsetDeviationCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "SimulationOffsetDeviationCallback", ::Fusion::EngineProfiler*>();
}
inline void Fusion::EngineProfiler::Begin(::StringW  sample)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"Begin", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sample);
}
inline void Fusion::EngineProfiler::End()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"End", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Fusion::EngineProfiler::RoundTripTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"RoundTripTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::EngineProfiler::InputSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"InputSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::EngineProfiler::InputQueue(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"InputQueue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::EngineProfiler::RpcIn(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"RpcIn", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::EngineProfiler::RpcOut(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"RpcOut", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::EngineProfiler::StateRecvDelta(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"StateRecvDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::EngineProfiler::StateRecvDeltaDeviation(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"StateRecvDeltaDeviation", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::EngineProfiler::InterpolationSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"InterpolationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::EngineProfiler::InterpolationOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"InterpolationOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::EngineProfiler::InterpolationOffsetDeviation(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"InterpolationOffsetDeviation", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::EngineProfiler::InputRecvDelta(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"InputRecvDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::EngineProfiler::InputRecvDeltaDeviation(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"InputRecvDeltaDeviation", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::EngineProfiler::SimulationSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"SimulationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::EngineProfiler::SimulationOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"SimulationOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::EngineProfiler::SimulationOffsetDeviation(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EngineProfiler*>(),
                        {"SimulationOffsetDeviation", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Fusion::EngineProfiler::EngineProfiler()   {
}
