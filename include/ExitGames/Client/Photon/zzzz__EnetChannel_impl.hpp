#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/EnetChannel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__EnetChannel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NCommand_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetChannel::*)(uint8_t, int32_t)>(&::ExitGames::Client::Photon::EnetChannel::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xa6b8824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel.ContainsUnreliableSequenceNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::EnetChannel::*)(int32_t)>(&::ExitGames::Client::Photon::EnetChannel::ContainsUnreliableSequenceNumber)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6b8a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {"ContainsUnreliableSequenceNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel.FetchUnreliableSequenceNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::NCommand* (::ExitGames::Client::Photon::EnetChannel::*)(int32_t)>(&::ExitGames::Client::Photon::EnetChannel::FetchUnreliableSequenceNumber)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6b8a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {"FetchUnreliableSequenceNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel.ContainsReliableSequenceNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::EnetChannel::*)(int32_t)>(&::ExitGames::Client::Photon::EnetChannel::ContainsReliableSequenceNumber)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6b8ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {"ContainsReliableSequenceNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel.FetchReliableSequenceNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::NCommand* (::ExitGames::Client::Photon::EnetChannel::*)(int32_t)>(&::ExitGames::Client::Photon::EnetChannel::FetchReliableSequenceNumber)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6b8b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {"FetchReliableSequenceNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel.TryGetFragment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::EnetChannel::*)(int32_t, bool, ::by_ref<::ExitGames::Client::Photon::NCommand*>)>(&::ExitGames::Client::Photon::EnetChannel::TryGetFragment)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa6b8b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {"TryGetFragment", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::ExitGames::Client::Photon::NCommand*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel.RemoveFragment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetChannel::*)(int32_t, bool)>(&::ExitGames::Client::Photon::EnetChannel::RemoveFragment)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa6b8bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {"RemoveFragment", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel.clearAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetChannel::*)()>(&::ExitGames::Client::Photon::EnetChannel::clearAll)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa6b8c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {"clearAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetChannel.QueueIncomingReliableUnsequenced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::EnetChannel::*)(::ExitGames::Client::Photon::NCommand*)>(&::ExitGames::Client::Photon::EnetChannel::QueueIncomingReliableUnsequenced)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa6b8dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {"QueueIncomingReliableUnsequenced", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_ChannelNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChannelNumber;
}
constexpr uint8_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_ChannelNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChannelNumber;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_ChannelNumber(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ChannelNumber = value;
}
constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingReliableCommandsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingReliableCommandsList;
}
constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>* const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingReliableCommandsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingReliableCommandsList;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_incomingReliableCommandsList(::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incomingReliableCommandsList = value;
}
constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingUnreliableCommandsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingUnreliableCommandsList;
}
constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>* const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingUnreliableCommandsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingUnreliableCommandsList;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_incomingUnreliableCommandsList(::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incomingUnreliableCommandsList = value;
}
constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingUnsequencedCommandsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingUnsequencedCommandsList;
}
constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingUnsequencedCommandsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingUnsequencedCommandsList;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_incomingUnsequencedCommandsList(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incomingUnsequencedCommandsList = value;
}
constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingUnsequencedFragments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingUnsequencedFragments;
}
constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>* const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingUnsequencedFragments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingUnsequencedFragments;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_incomingUnsequencedFragments(::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incomingUnsequencedFragments = value;
}
constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingReliableCommandsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingReliableCommandsList;
}
constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingReliableCommandsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingReliableCommandsList;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_outgoingReliableCommandsList(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outgoingReliableCommandsList = value;
}
constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingUnreliableCommandsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingUnreliableCommandsList;
}
constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingUnreliableCommandsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingUnreliableCommandsList;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_outgoingUnreliableCommandsList(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outgoingUnreliableCommandsList = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingReliableSequenceNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingReliableSequenceNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingReliableSequenceNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingReliableSequenceNumber;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_incomingReliableSequenceNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incomingReliableSequenceNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingUnreliableSequenceNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingUnreliableSequenceNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_incomingUnreliableSequenceNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingUnreliableSequenceNumber;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_incomingUnreliableSequenceNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incomingUnreliableSequenceNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingReliableSequenceNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingReliableSequenceNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingReliableSequenceNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingReliableSequenceNumber;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_outgoingReliableSequenceNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outgoingReliableSequenceNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingUnreliableSequenceNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingUnreliableSequenceNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingUnreliableSequenceNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingUnreliableSequenceNumber;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_outgoingUnreliableSequenceNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outgoingUnreliableSequenceNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingReliableUnsequencedNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingReliableUnsequencedNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_outgoingReliableUnsequencedNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingReliableUnsequencedNumber;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_outgoingReliableUnsequencedNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outgoingReliableUnsequencedNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_reliableUnsequencedNumbersCompletelyReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableUnsequencedNumbersCompletelyReceived;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_reliableUnsequencedNumbersCompletelyReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableUnsequencedNumbersCompletelyReceived;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_reliableUnsequencedNumbersCompletelyReceived(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableUnsequencedNumbersCompletelyReceived = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_reliableUnsequencedNumbersReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableUnsequencedNumbersReceived;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_reliableUnsequencedNumbersReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableUnsequencedNumbersReceived;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_reliableUnsequencedNumbersReceived(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableUnsequencedNumbersReceived = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_highestReceivedAck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highestReceivedAck;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_highestReceivedAck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highestReceivedAck;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_highestReceivedAck(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___highestReceivedAck = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_reliableCommandsInFlight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableCommandsInFlight;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_reliableCommandsInFlight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableCommandsInFlight;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_reliableCommandsInFlight(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableCommandsInFlight = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_lowestUnacknowledgedSequenceNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowestUnacknowledgedSequenceNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetChannel::__cordl_internal_get_lowestUnacknowledgedSequenceNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowestUnacknowledgedSequenceNumber;
}
constexpr void ExitGames::Client::Photon::EnetChannel::__cordl_internal_set_lowestUnacknowledgedSequenceNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowestUnacknowledgedSequenceNumber = value;
}
inline void ExitGames::Client::Photon::EnetChannel::_ctor(uint8_t  channelNumber, int32_t  commandBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelNumber, commandBufferSize);
}
inline bool ExitGames::Client::Photon::EnetChannel::ContainsUnreliableSequenceNumber(int32_t  unreliableSequenceNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {"ContainsUnreliableSequenceNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unreliableSequenceNumber);
}
inline ::ExitGames::Client::Photon::NCommand* ExitGames::Client::Photon::EnetChannel::FetchUnreliableSequenceNumber(int32_t  unreliableSequenceNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {"FetchUnreliableSequenceNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::NCommand*>(this, ___internal_method, unreliableSequenceNumber);
}
inline bool ExitGames::Client::Photon::EnetChannel::ContainsReliableSequenceNumber(int32_t  reliableSequenceNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {"ContainsReliableSequenceNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reliableSequenceNumber);
}
inline ::ExitGames::Client::Photon::NCommand* ExitGames::Client::Photon::EnetChannel::FetchReliableSequenceNumber(int32_t  reliableSequenceNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {"FetchReliableSequenceNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::NCommand*>(this, ___internal_method, reliableSequenceNumber);
}
inline bool ExitGames::Client::Photon::EnetChannel::TryGetFragment(int32_t  reliableSequenceNumber, bool  isSequenced, ::by_ref<::ExitGames::Client::Photon::NCommand*>  fragment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {"TryGetFragment", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::ExitGames::Client::Photon::NCommand*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reliableSequenceNumber, isSequenced, fragment);
}
inline void ExitGames::Client::Photon::EnetChannel::RemoveFragment(int32_t  reliableSequenceNumber, bool  isSequenced)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {"RemoveFragment", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reliableSequenceNumber, isSequenced);
}
inline void ExitGames::Client::Photon::EnetChannel::clearAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {"clearAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::EnetChannel::QueueIncomingReliableUnsequenced(::ExitGames::Client::Photon::NCommand*  command)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetChannel*>(),
                        {"QueueIncomingReliableUnsequenced", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, command);
}
inline ::ExitGames::Client::Photon::EnetChannel* ExitGames::Client::Photon::EnetChannel::New_ctor(uint8_t  channelNumber, int32_t  commandBufferSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::EnetChannel*>(channelNumber, commandBufferSize));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::EnetChannel::EnetChannel()   {
}
