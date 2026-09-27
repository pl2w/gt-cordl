#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetDelayedPacket.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "Fusion/Sockets/zzzz__NetDelayedPacket_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetDelayedPacket.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetDelayedPacket* (*)(int32_t)>(&::Fusion::Sockets::NetDelayedPacket::Create)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x602b794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetDelayedPacket>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::Sockets::NetDelayedPacket* Fusion::Sockets::NetDelayedPacket::Create(int32_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetDelayedPacket>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetDelayedPacket*>(nullptr, ___internal_method, dataLength);
}
// Ctor Parameters [CppParam { name: "Prev", ty: "::Fusion::Sockets::NetDelayedPacket*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Next", ty: "::Fusion::Sockets::NetDelayedPacket*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DeliveryTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Address", ty: "::Fusion::Sockets::NetAddress", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Data", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DataLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetDelayedPacket::NetDelayedPacket(::Fusion::Sockets::NetDelayedPacket*  Prev, ::Fusion::Sockets::NetDelayedPacket*  Next, double_t  DeliveryTime, ::Fusion::Sockets::NetAddress  Address, uint8_t*  Data, int32_t  DataLength) noexcept  {
this->Prev = Prev;
this->Next = Next;
this->DeliveryTime = DeliveryTime;
this->Address = Address;
this->Data = Data;
this->DataLength = DataLength;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetDelayedPacket::NetDelayedPacket()   {
}
