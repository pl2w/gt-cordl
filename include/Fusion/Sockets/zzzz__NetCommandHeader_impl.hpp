#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetCommandHeader.hpp"
#include "Fusion/Sockets/zzzz__NetCommands_impl.hpp"
#include "Fusion/Sockets/zzzz__NetPacketType_impl.hpp"
#include "Fusion/Sockets/zzzz__NetCommandHeader_def.hpp"
#include "Fusion/Sockets/zzzz__NetCommands_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetCommandHeader.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetCommandHeader (*)(::Fusion::Sockets::NetCommands)>(&::Fusion::Sockets::NetCommandHeader::Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6029800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandHeader>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetCommands>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetCommandHeader.op_Implicit___Fusion__Sockets__NetCommandHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetCommandHeader (*)(::Fusion::Sockets::NetCommands)>(&::Fusion::Sockets::NetCommandHeader::op_Implicit___Fusion__Sockets__NetCommandHeader)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x602980c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandHeader>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::Sockets::NetCommands>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Sockets::NetPacketType& Fusion::Sockets::NetCommandHeader::__cordl_internal_get_PacketType()  {
return this->___PacketType;
}
constexpr ::Fusion::Sockets::NetPacketType const& Fusion::Sockets::NetCommandHeader::__cordl_internal_get_PacketType() const {
return this->___PacketType;
}
constexpr void Fusion::Sockets::NetCommandHeader::__cordl_internal_set_PacketType(::Fusion::Sockets::NetPacketType  value)  {
this->___PacketType = value;
}
constexpr ::Fusion::Sockets::NetCommands& Fusion::Sockets::NetCommandHeader::__cordl_internal_get_Command()  {
return this->___Command;
}
constexpr ::Fusion::Sockets::NetCommands const& Fusion::Sockets::NetCommandHeader::__cordl_internal_get_Command() const {
return this->___Command;
}
constexpr void Fusion::Sockets::NetCommandHeader::__cordl_internal_set_Command(::Fusion::Sockets::NetCommands  value)  {
this->___Command = value;
}
inline ::Fusion::Sockets::NetCommandHeader Fusion::Sockets::NetCommandHeader::Create(::Fusion::Sockets::NetCommands  command)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandHeader>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetCommands>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetCommandHeader>(nullptr, ___internal_method, command);
}
inline ::Fusion::Sockets::NetCommandHeader Fusion::Sockets::NetCommandHeader::op_Implicit___Fusion__Sockets__NetCommandHeader(::Fusion::Sockets::NetCommands  commands)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandHeader>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::Sockets::NetCommands>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetCommandHeader>(nullptr, ___internal_method, commands);
}
// Ctor Parameters [CppParam { name: "PacketType", ty: "::Fusion::Sockets::NetPacketType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Command", ty: "::Fusion::Sockets::NetCommands", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetCommandHeader::NetCommandHeader(::Fusion::Sockets::NetPacketType  PacketType, ::Fusion::Sockets::NetCommands  Command) noexcept  {
this->PacketType = PacketType;
this->Command = Command;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetCommandHeader::NetCommandHeader()   {
}
