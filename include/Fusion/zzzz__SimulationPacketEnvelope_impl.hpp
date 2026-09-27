#pragma once
// IWYU pragma private; include "Fusion/SimulationPacketEnvelope.hpp"
#include "Fusion/zzzz__SimulationMessageList_impl.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "Fusion/zzzz__SimulationPacketEnvelope_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__NetworkObjectPacketData_def.hpp"
#include "Fusion/zzzz__NetworkObjectPacketFlags_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
//  Writing Method size for method: ::Fusion::SimulationPacketEnvelope.AddObjectPacketData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationPacketEnvelope::*)(::Fusion::Simulation*, ::Fusion::NetworkId, ::Fusion::Tick, ::Fusion::NetworkObjectPacketFlags)>(&::Fusion::SimulationPacketEnvelope::AddObjectPacketData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x60063f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationPacketEnvelope>(),
                        {"AddObjectPacketData", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::NetworkObjectPacketFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationPacketEnvelope.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Simulation*, ::by_ref<::Fusion::SimulationPacketEnvelope*>)>(&::Fusion::SimulationPacketEnvelope::Free)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6006508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationPacketEnvelope>(),
                        {"Free", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<::by_ref<::Fusion::SimulationPacketEnvelope*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationPacketEnvelope.Alloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationPacketEnvelope* (*)(::Fusion::Simulation*)>(&::Fusion::SimulationPacketEnvelope::Alloc)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x60065ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationPacketEnvelope>(),
                        {"Alloc", {}, {::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::SimulationPacketEnvelope::AddObjectPacketData(::Fusion::Simulation*  sim, ::Fusion::NetworkId  id, ::Fusion::Tick  tick, ::Fusion::NetworkObjectPacketFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationPacketEnvelope>(),
                        {"AddObjectPacketData", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::Fusion::NetworkObjectPacketFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sim, id, tick, flags);
}
inline void Fusion::SimulationPacketEnvelope::Free(::Fusion::Simulation*  sim, ::by_ref<::Fusion::SimulationPacketEnvelope*>  envelope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationPacketEnvelope>(),
                        {"Free", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<::by_ref<::Fusion::SimulationPacketEnvelope*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sim, envelope);
}
inline ::Fusion::SimulationPacketEnvelope* Fusion::SimulationPacketEnvelope::Alloc(::Fusion::Simulation*  sim)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationPacketEnvelope>(),
                        {"Alloc", {}, {::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationPacketEnvelope*>(nullptr, ___internal_method, sim);
}
// Ctor Parameters [CppParam { name: "Tick", ty: "::Fusion::Tick", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Messages", ty: "::Fusion::SimulationMessageList", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObjectData", ty: "::Fusion::NetworkObjectPacketData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObjectDataCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObjectDataCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationPacketEnvelope::SimulationPacketEnvelope(::Fusion::Tick  Tick, ::Fusion::SimulationMessageList  Messages, ::Fusion::NetworkObjectPacketData*  ObjectData, int32_t  ObjectDataCount, int32_t  ObjectDataCapacity) noexcept  {
this->Tick = Tick;
this->Messages = Messages;
this->ObjectData = ObjectData;
this->ObjectDataCount = ObjectDataCount;
this->ObjectDataCapacity = ObjectDataCapacity;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationPacketEnvelope::SimulationPacketEnvelope()   {
}
