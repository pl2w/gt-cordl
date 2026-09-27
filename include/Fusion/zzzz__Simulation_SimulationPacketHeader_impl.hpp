#pragma once
// IWYU pragma private; include "Fusion/Simulation_SimulationPacketHeader.hpp"
#include "Fusion/zzzz__Simulation_SimulationPacketHeader_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Simulation_SimulationPacketHeader.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Simulation_SimulationPacketHeader::*)(::GlobalNamespace::Simulation_SimulationPacketHeader)>(&::GlobalNamespace::Simulation_SimulationPacketHeader::Equals)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5ff6788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_SimulationPacketHeader>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::Simulation_SimulationPacketHeader>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_SimulationPacketHeader.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Simulation_SimulationPacketHeader::*)(::System::Object*)>(&::GlobalNamespace::Simulation_SimulationPacketHeader::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ff67d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_SimulationPacketHeader>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_SimulationPacketHeader>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_SimulationPacketHeader.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Simulation_SimulationPacketHeader::*)()>(&::GlobalNamespace::Simulation_SimulationPacketHeader::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ff6878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_SimulationPacketHeader>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_SimulationPacketHeader>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_SimulationPacketHeader.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_SimulationPacketHeader::*)(::Fusion::Sockets::NetBitBuffer*)>(&::GlobalNamespace::Simulation_SimulationPacketHeader::Write)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ff68f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_SimulationPacketHeader>(),
                        {"Write", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_SimulationPacketHeader.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Simulation_SimulationPacketHeader::*)(::Fusion::Sockets::NetBitBuffer*)>(&::GlobalNamespace::Simulation_SimulationPacketHeader::Read)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5ff6980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_SimulationPacketHeader>(),
                        {"Read", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_SimulationPacketHeader.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Simulation_SimulationPacketHeader::*)()>(&::GlobalNamespace::Simulation_SimulationPacketHeader::ToString)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x5ff6a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Simulation_SimulationPacketHeader>(),
                    {::i2c::class_of<::GlobalNamespace::Simulation_SimulationPacketHeader>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr uint8_t& GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_get_SimulationMessages()  {
return this->___SimulationMessages;
}
constexpr uint8_t const& GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_get_SimulationMessages() const {
return this->___SimulationMessages;
}
constexpr void GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_set_SimulationMessages(uint8_t  value)  {
this->___SimulationMessages = value;
}
constexpr uint8_t& GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_get_Cells()  {
return this->___Cells;
}
constexpr uint8_t const& GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_get_Cells() const {
return this->___Cells;
}
constexpr void GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_set_Cells(uint8_t  value)  {
this->___Cells = value;
}
constexpr uint8_t& GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_get_Inputs()  {
return this->___Inputs;
}
constexpr uint8_t const& GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_get_Inputs() const {
return this->___Inputs;
}
constexpr void GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_set_Inputs(uint8_t  value)  {
this->___Inputs = value;
}
constexpr uint8_t& GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_get_ObjectUpdates()  {
return this->___ObjectUpdates;
}
constexpr uint8_t const& GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_get_ObjectUpdates() const {
return this->___ObjectUpdates;
}
constexpr void GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_set_ObjectUpdates(uint8_t  value)  {
this->___ObjectUpdates = value;
}
constexpr uint8_t& GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_get_ObjectDestroys()  {
return this->___ObjectDestroys;
}
constexpr uint8_t const& GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_get_ObjectDestroys() const {
return this->___ObjectDestroys;
}
constexpr void GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_set_ObjectDestroys(uint8_t  value)  {
this->___ObjectDestroys = value;
}
constexpr int32_t& GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_get_Tick()  {
return this->___Tick;
}
constexpr int32_t const& GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_get_Tick() const {
return this->___Tick;
}
constexpr void GlobalNamespace::Simulation_SimulationPacketHeader::__cordl_internal_set_Tick(int32_t  value)  {
this->___Tick = value;
}
inline bool GlobalNamespace::Simulation_SimulationPacketHeader::Equals(::GlobalNamespace::Simulation_SimulationPacketHeader  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_SimulationPacketHeader>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::Simulation_SimulationPacketHeader>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::Simulation_SimulationPacketHeader::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_SimulationPacketHeader>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::Simulation_SimulationPacketHeader::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_SimulationPacketHeader>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::Simulation_SimulationPacketHeader::Write(::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_SimulationPacketHeader>(),
                        {"Write", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer);
}
inline void GlobalNamespace::Simulation_SimulationPacketHeader::Read(::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_SimulationPacketHeader>(),
                        {"Read", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer);
}
inline ::StringW GlobalNamespace::Simulation_SimulationPacketHeader::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Simulation_SimulationPacketHeader>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "SimulationMessages", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Cells", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Inputs", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObjectUpdates", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObjectDestroys", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tick", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Simulation_SimulationPacketHeader::Simulation_SimulationPacketHeader(uint8_t  SimulationMessages, uint8_t  Cells, uint8_t  Inputs, uint8_t  ObjectUpdates, uint8_t  ObjectDestroys, int32_t  Tick) noexcept  {
this->SimulationMessages = SimulationMessages;
this->Cells = Cells;
this->Inputs = Inputs;
this->ObjectUpdates = ObjectUpdates;
this->ObjectDestroys = ObjectDestroys;
this->Tick = Tick;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Simulation_SimulationPacketHeader::Simulation_SimulationPacketHeader()   {
}
