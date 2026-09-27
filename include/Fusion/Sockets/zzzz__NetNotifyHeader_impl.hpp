#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetNotifyHeader.hpp"
#include "Fusion/Sockets/zzzz__NetPacketType_impl.hpp"
#include "Fusion/Sockets/zzzz__NetNotifyHeader_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetNotifyHeader.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Sockets::NetNotifyHeader::*)()>(&::Fusion::Sockets::NetNotifyHeader::ToString)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x602ba34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::NetNotifyHeader>(),
                    {::i2c::class_of<::Fusion::Sockets::NetNotifyHeader>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetNotifyHeader.CreateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetNotifyHeader (*)(uint16_t, uint16_t, uint64_t)>(&::Fusion::Sockets::NetNotifyHeader::CreateData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x602bc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetNotifyHeader>(),
                        {"CreateData", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetNotifyHeader.CreateAcks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetNotifyHeader (*)(uint16_t, uint64_t)>(&::Fusion::Sockets::NetNotifyHeader::CreateAcks)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x602bcac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetNotifyHeader>(),
                        {"CreateAcks", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Sockets::NetPacketType& Fusion::Sockets::NetNotifyHeader::__cordl_internal_get_PacketType()  {
return this->___PacketType;
}
constexpr ::Fusion::Sockets::NetPacketType const& Fusion::Sockets::NetNotifyHeader::__cordl_internal_get_PacketType() const {
return this->___PacketType;
}
constexpr void Fusion::Sockets::NetNotifyHeader::__cordl_internal_set_PacketType(::Fusion::Sockets::NetPacketType  value)  {
this->___PacketType = value;
}
constexpr uint8_t& Fusion::Sockets::NetNotifyHeader::__cordl_internal_get_Fragment()  {
return this->___Fragment;
}
constexpr uint8_t const& Fusion::Sockets::NetNotifyHeader::__cordl_internal_get_Fragment() const {
return this->___Fragment;
}
constexpr void Fusion::Sockets::NetNotifyHeader::__cordl_internal_set_Fragment(uint8_t  value)  {
this->___Fragment = value;
}
constexpr uint16_t& Fusion::Sockets::NetNotifyHeader::__cordl_internal_get_Sequence()  {
return this->___Sequence;
}
constexpr uint16_t const& Fusion::Sockets::NetNotifyHeader::__cordl_internal_get_Sequence() const {
return this->___Sequence;
}
constexpr void Fusion::Sockets::NetNotifyHeader::__cordl_internal_set_Sequence(uint16_t  value)  {
this->___Sequence = value;
}
constexpr uint16_t& Fusion::Sockets::NetNotifyHeader::__cordl_internal_get_AckSequence()  {
return this->___AckSequence;
}
constexpr uint16_t const& Fusion::Sockets::NetNotifyHeader::__cordl_internal_get_AckSequence() const {
return this->___AckSequence;
}
constexpr void Fusion::Sockets::NetNotifyHeader::__cordl_internal_set_AckSequence(uint16_t  value)  {
this->___AckSequence = value;
}
constexpr uint64_t& Fusion::Sockets::NetNotifyHeader::__cordl_internal_get_AckMask()  {
return this->___AckMask;
}
constexpr uint64_t const& Fusion::Sockets::NetNotifyHeader::__cordl_internal_get_AckMask() const {
return this->___AckMask;
}
constexpr void Fusion::Sockets::NetNotifyHeader::__cordl_internal_set_AckMask(uint64_t  value)  {
this->___AckMask = value;
}
inline ::StringW Fusion::Sockets::NetNotifyHeader::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::NetNotifyHeader>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Fusion::Sockets::NetNotifyHeader Fusion::Sockets::NetNotifyHeader::CreateData(uint16_t  sequence, uint16_t  ackSequence, uint64_t  ackMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetNotifyHeader>(),
                        {"CreateData", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetNotifyHeader>(nullptr, ___internal_method, sequence, ackSequence, ackMask);
}
inline ::Fusion::Sockets::NetNotifyHeader Fusion::Sockets::NetNotifyHeader::CreateAcks(uint16_t  ackSequence, uint64_t  ackMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetNotifyHeader>(),
                        {"CreateAcks", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetNotifyHeader>(nullptr, ___internal_method, ackSequence, ackMask);
}
// Ctor Parameters [CppParam { name: "PacketType", ty: "::Fusion::Sockets::NetPacketType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Fragment", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Sequence", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AckSequence", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AckMask", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetNotifyHeader::NetNotifyHeader(::Fusion::Sockets::NetPacketType  PacketType, uint8_t  Fragment, uint16_t  Sequence, uint16_t  AckSequence, uint64_t  AckMask) noexcept  {
this->PacketType = PacketType;
this->Fragment = Fragment;
this->Sequence = Sequence;
this->AckSequence = AckSequence;
this->AckMask = AckMask;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetNotifyHeader::NetNotifyHeader()   {
}
