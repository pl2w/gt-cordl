#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetSendEnvelope.hpp"
#include "Fusion/Sockets/zzzz__NetPacketType_impl.hpp"
#include "Fusion/Sockets/zzzz__NetSendEnvelope_def.hpp"
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::Sockets::NetSendEnvelope::TakeUserData()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::NetSendEnvelope>(),
                    {"TakeUserData", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "UserData", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SendTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Sequence", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PacketType", ty: "::Fusion::Sockets::NetPacketType", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetSendEnvelope::NetSendEnvelope(void*  UserData, double_t  SendTime, uint16_t  Sequence, ::Fusion::Sockets::NetPacketType  PacketType) noexcept  {
this->UserData = UserData;
this->SendTime = SendTime;
this->Sequence = Sequence;
this->PacketType = PacketType;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetSendEnvelope::NetSendEnvelope()   {
}
