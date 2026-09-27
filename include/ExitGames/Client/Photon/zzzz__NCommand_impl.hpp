#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/NCommand.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__NCommand_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EnetPeer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NCommandPool_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.get_SizeOfPayload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::NCommand::*)()>(&::ExitGames::Client::Photon::NCommand::get_SizeOfPayload)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6c0140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"get_SizeOfPayload", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.get_IsFlaggedUnsequenced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::NCommand::*)()>(&::ExitGames::Client::Photon::NCommand::get_IsFlaggedUnsequenced)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa6bfa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"get_IsFlaggedUnsequenced", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.get_IsFlaggedReliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::NCommand::*)()>(&::ExitGames::Client::Photon::NCommand::get_IsFlaggedReliable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa6bfa48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"get_IsFlaggedReliable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.CreateAck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ExitGames::Client::Photon::NCommand*, int32_t)>(&::ExitGames::Client::Photon::NCommand::CreateAck)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa6c0cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"CreateAck", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ExitGames::Client::Photon::NCommand*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NCommand::*)(::ExitGames::Client::Photon::EnetPeer*, uint8_t, ::ExitGames::Client::Photon::StreamBuffer*, uint8_t)>(&::ExitGames::Client::Photon::NCommand::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa6c510c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::EnetPeer*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NCommand::*)(::ExitGames::Client::Photon::EnetPeer*, uint8_t, ::ExitGames::Client::Photon::StreamBuffer*, uint8_t)>(&::ExitGames::Client::Photon::NCommand::Initialize)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0xa6c5160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"Initialize", {}, {::i2c::type_of<::ExitGames::Client::Photon::EnetPeer*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NCommand::*)(::ExitGames::Client::Photon::EnetPeer*, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::ExitGames::Client::Photon::NCommand::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa6c4d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::EnetPeer*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NCommand::*)(::ExitGames::Client::Photon::EnetPeer*, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::ExitGames::Client::Photon::NCommand::Initialize)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xa6c4d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"Initialize", {}, {::i2c::type_of<::ExitGames::Client::Photon::EnetPeer*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NCommand::*)()>(&::ExitGames::Client::Photon::NCommand::Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6c55e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.SerializeHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NCommand::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::ExitGames::Client::Photon::NCommand::SerializeHeader)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xa6bff40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"SerializeHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::NCommand::*)()>(&::ExitGames::Client::Photon::NCommand::Serialize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6c0154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"Serialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.FreePayload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NCommand::*)()>(&::ExitGames::Client::Photon::NCommand::FreePayload)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa6bd134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"FreePayload", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NCommand::*)()>(&::ExitGames::Client::Photon::NCommand::Release)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6bd1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::NCommand::*)(::ExitGames::Client::Photon::NCommand*)>(&::ExitGames::Client::Photon::NCommand::CompareTo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa6c561c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"CompareTo", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommand.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::NCommand::*)()>(&::ExitGames::Client::Photon::NCommand::ToString)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0xa6c5658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr uint8_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandFlags;
}
constexpr uint8_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandFlags;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_commandFlags(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___commandFlags = value;
}
constexpr uint8_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandType;
}
constexpr uint8_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandType;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_commandType(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___commandType = value;
}
constexpr uint8_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandChannelID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandChannelID;
}
constexpr uint8_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandChannelID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandChannelID;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_commandChannelID(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___commandChannelID = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_reliableSequenceNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableSequenceNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_reliableSequenceNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableSequenceNumber;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_reliableSequenceNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableSequenceNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_unreliableSequenceNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unreliableSequenceNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_unreliableSequenceNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unreliableSequenceNumber;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_unreliableSequenceNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unreliableSequenceNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_unsequencedGroupNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsequencedGroupNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_unsequencedGroupNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsequencedGroupNumber;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_unsequencedGroupNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unsequencedGroupNumber = value;
}
constexpr uint8_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_reservedByte()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reservedByte;
}
constexpr uint8_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_reservedByte() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reservedByte;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_reservedByte(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reservedByte = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_startSequenceNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSequenceNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_startSequenceNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSequenceNumber;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_startSequenceNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startSequenceNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_fragmentCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentCount;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_fragmentCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentCount;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_fragmentCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fragmentCount = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_fragmentNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_fragmentNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentNumber;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_fragmentNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fragmentNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_totalLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalLength;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_totalLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalLength;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_totalLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalLength = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_fragmentOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentOffset;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_fragmentOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentOffset;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_fragmentOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fragmentOffset = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_fragmentsRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentsRemaining;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_fragmentsRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentsRemaining;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_fragmentsRemaining(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fragmentsRemaining = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandSentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandSentTime;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandSentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandSentTime;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_commandSentTime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___commandSentTime = value;
}
constexpr uint8_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandSentCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandSentCount;
}
constexpr uint8_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_commandSentCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandSentCount;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_commandSentCount(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___commandSentCount = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_roundTripTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundTripTimeout;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_roundTripTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundTripTimeout;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_roundTripTimeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roundTripTimeout = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_timeoutTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeoutTime;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_timeoutTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeoutTime;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_timeoutTime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeoutTime = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_ackReceivedReliableSequenceNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ackReceivedReliableSequenceNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_ackReceivedReliableSequenceNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ackReceivedReliableSequenceNumber;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_ackReceivedReliableSequenceNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ackReceivedReliableSequenceNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_ackReceivedSentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ackReceivedSentTime;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_ackReceivedSentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ackReceivedSentTime;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_ackReceivedSentTime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ackReceivedSentTime = value;
}
constexpr int32_t& ExitGames::Client::Photon::NCommand::__cordl_internal_get_Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr int32_t const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_Size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Size = value;
}
constexpr ::ExitGames::Client::Photon::StreamBuffer*& ExitGames::Client::Photon::NCommand::__cordl_internal_get_Payload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Payload;
}
constexpr ::ExitGames::Client::Photon::StreamBuffer* const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_Payload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Payload;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_Payload(::ExitGames::Client::Photon::StreamBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Payload = value;
}
constexpr ::ExitGames::Client::Photon::NCommandPool*& ExitGames::Client::Photon::NCommand::__cordl_internal_get_returnPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnPool;
}
constexpr ::ExitGames::Client::Photon::NCommandPool* const& ExitGames::Client::Photon::NCommand::__cordl_internal_get_returnPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnPool;
}
constexpr void ExitGames::Client::Photon::NCommand::__cordl_internal_set_returnPool(::ExitGames::Client::Photon::NCommandPool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnPool = value;
}
inline int32_t ExitGames::Client::Photon::NCommand::get_SizeOfPayload()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"get_SizeOfPayload", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::NCommand::get_IsFlaggedUnsequenced()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"get_IsFlaggedUnsequenced", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::NCommand::get_IsFlaggedReliable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"get_IsFlaggedReliable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NCommand::CreateAck(::ArrayW<uint8_t>  buffer, int32_t  offset, ::ExitGames::Client::Photon::NCommand*  commandToAck, int32_t  sentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"CreateAck", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ExitGames::Client::Photon::NCommand*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, offset, commandToAck, sentTime);
}
inline void ExitGames::Client::Photon::NCommand::_ctor(::ExitGames::Client::Photon::EnetPeer*  peer, uint8_t  commandType, ::ExitGames::Client::Photon::StreamBuffer*  payload, uint8_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::EnetPeer*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer, commandType, payload, channel);
}
inline void ExitGames::Client::Photon::NCommand::Initialize(::ExitGames::Client::Photon::EnetPeer*  peer, uint8_t  commandType, ::ExitGames::Client::Photon::StreamBuffer*  payload, uint8_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"Initialize", {}, {::i2c::type_of<::ExitGames::Client::Photon::EnetPeer*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer, commandType, payload, channel);
}
inline void ExitGames::Client::Photon::NCommand::_ctor(::ExitGames::Client::Photon::EnetPeer*  peer, ::ArrayW<uint8_t>  inBuff, ::by_ref<int32_t>  readingOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::EnetPeer*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer, inBuff, readingOffset);
}
inline void ExitGames::Client::Photon::NCommand::Initialize(::ExitGames::Client::Photon::EnetPeer*  peer, ::ArrayW<uint8_t>  inBuff, ::by_ref<int32_t>  readingOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"Initialize", {}, {::i2c::type_of<::ExitGames::Client::Photon::EnetPeer*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer, inBuff, readingOffset);
}
inline void ExitGames::Client::Photon::NCommand::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NCommand::SerializeHeader(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bufferIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"SerializeHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, bufferIndex);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::NCommand::Serialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"Serialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NCommand::FreePayload()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"FreePayload", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NCommand::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::NCommand::CompareTo(::ExitGames::Client::Photon::NCommand*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(),
                        {"CompareTo", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline ::StringW ExitGames::Client::Photon::NCommand::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::NCommand*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::NCommand* ExitGames::Client::Photon::NCommand::New_ctor(::ExitGames::Client::Photon::EnetPeer*  peer, uint8_t  commandType, ::ExitGames::Client::Photon::StreamBuffer*  payload, uint8_t  channel)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::NCommand*>(peer, commandType, payload, channel));
}
inline ::ExitGames::Client::Photon::NCommand* ExitGames::Client::Photon::NCommand::New_ctor(::ExitGames::Client::Photon::EnetPeer*  peer, ::ArrayW<uint8_t>  inBuff, ::by_ref<int32_t>  readingOffset)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::NCommand*>(peer, inBuff, readingOffset));
}
/// @brief Convert operator to "::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>"
constexpr  ExitGames::Client::Photon::NCommand::operator ::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>*() noexcept {
return static_cast<::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>"
constexpr ::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>* ExitGames::Client::Photon::NCommand::i___System__IComparable_1___ExitGames__Client__Photon__NCommand__() noexcept {
return static_cast<::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::NCommand::NCommand()   {
}
