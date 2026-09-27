#pragma once
// IWYU pragma private; include "Fusion/Simulation_TimeFeedback.hpp"
#include "Fusion/zzzz__Simulation_TimeFeedback_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_def.hpp"
#include "Fusion/zzzz__SimulationConnection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Simulation_TimeFeedback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_TimeFeedback::*)(::Fusion::SimulationConnection*)>(&::GlobalNamespace::Simulation_TimeFeedback::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ff649c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_TimeFeedback>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SimulationConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_TimeFeedback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_TimeFeedback::*)(double_t, double_t, double_t, double_t)>(&::GlobalNamespace::Simulation_TimeFeedback::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ff6528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_TimeFeedback>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_TimeFeedback.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_TimeFeedback::*)(::Fusion::Sockets::NetBitBuffer*)>(&::GlobalNamespace::Simulation_TimeFeedback::Write)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5ff6544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_TimeFeedback>(),
                        {"Write", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_TimeFeedback.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_TimeFeedback::*)(::Fusion::Sockets::NetBitBuffer*)>(&::GlobalNamespace::Simulation_TimeFeedback::Read)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5ff3f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_TimeFeedback>(),
                        {"Read", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Simulation_TimeFeedback::_ctor(::Fusion::SimulationConnection*  sc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_TimeFeedback>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SimulationConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sc);
}
inline void GlobalNamespace::Simulation_TimeFeedback::_ctor(double_t  offsetAvg, double_t  offsetDev, double_t  recvDeltaAvg, double_t  recvDeltaDev)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_TimeFeedback>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, offsetAvg, offsetDev, recvDeltaAvg, recvDeltaDev);
}
inline void GlobalNamespace::Simulation_TimeFeedback::Write(::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_TimeFeedback>(),
                        {"Write", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer);
}
inline void GlobalNamespace::Simulation_TimeFeedback::Read(::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_TimeFeedback>(),
                        {"Read", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer);
}
// Ctor Parameters [CppParam { name: "OffsetAvg", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OffsetDev", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RecvDeltaAvg", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RecvDeltaDev", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Simulation_TimeFeedback::Simulation_TimeFeedback(float_t  OffsetAvg, float_t  OffsetDev, float_t  RecvDeltaAvg, float_t  RecvDeltaDev) noexcept  {
this->OffsetAvg = OffsetAvg;
this->OffsetDev = OffsetDev;
this->RecvDeltaAvg = RecvDeltaAvg;
this->RecvDeltaDev = RecvDeltaDev;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Simulation_TimeFeedback::Simulation_TimeFeedback()   {
}
