#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/EnetChannel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnetChannel)
namespace ExitGames::Client::Photon {
class NCommand;
}
namespace ExitGames::Client::Photon {
template<typename K,typename V>
class NonAllocDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class EnetChannel;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::EnetChannel*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::EnetChannel*, "ExitGames.Client.Photon", "EnetChannel");
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.EnetChannel
class CORDL_TYPE EnetChannel : public ::System::Object {
public:
// Declarations
/// @brief Field ChannelNumber, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_ChannelNumber, put=__cordl_internal_set_ChannelNumber)) uint8_t  ChannelNumber;

/// @brief Field highestReceivedAck, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_highestReceivedAck, put=__cordl_internal_set_highestReceivedAck)) int32_t  highestReceivedAck;

/// @brief Field incomingReliableCommandsList, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_incomingReliableCommandsList, put=__cordl_internal_set_incomingReliableCommandsList)) ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*  incomingReliableCommandsList;

/// @brief Field incomingReliableSequenceNumber, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_incomingReliableSequenceNumber, put=__cordl_internal_set_incomingReliableSequenceNumber)) int32_t  incomingReliableSequenceNumber;

/// @brief Field incomingUnreliableCommandsList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_incomingUnreliableCommandsList, put=__cordl_internal_set_incomingUnreliableCommandsList)) ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*  incomingUnreliableCommandsList;

/// @brief Field incomingUnreliableSequenceNumber, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_incomingUnreliableSequenceNumber, put=__cordl_internal_set_incomingUnreliableSequenceNumber)) int32_t  incomingUnreliableSequenceNumber;

/// @brief Field incomingUnsequencedCommandsList, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_incomingUnsequencedCommandsList, put=__cordl_internal_set_incomingUnsequencedCommandsList)) ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*  incomingUnsequencedCommandsList;

/// @brief Field incomingUnsequencedFragments, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_incomingUnsequencedFragments, put=__cordl_internal_set_incomingUnsequencedFragments)) ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*  incomingUnsequencedFragments;

/// @brief Field lowestUnacknowledgedSequenceNumber, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_lowestUnacknowledgedSequenceNumber, put=__cordl_internal_set_lowestUnacknowledgedSequenceNumber)) int32_t  lowestUnacknowledgedSequenceNumber;

/// @brief Field outgoingReliableCommandsList, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_outgoingReliableCommandsList, put=__cordl_internal_set_outgoingReliableCommandsList)) ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*  outgoingReliableCommandsList;

/// @brief Field outgoingReliableSequenceNumber, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_outgoingReliableSequenceNumber, put=__cordl_internal_set_outgoingReliableSequenceNumber)) int32_t  outgoingReliableSequenceNumber;

/// @brief Field outgoingReliableUnsequencedNumber, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_outgoingReliableUnsequencedNumber, put=__cordl_internal_set_outgoingReliableUnsequencedNumber)) int32_t  outgoingReliableUnsequencedNumber;

/// @brief Field outgoingUnreliableCommandsList, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_outgoingUnreliableCommandsList, put=__cordl_internal_set_outgoingUnreliableCommandsList)) ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*  outgoingUnreliableCommandsList;

/// @brief Field outgoingUnreliableSequenceNumber, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_outgoingUnreliableSequenceNumber, put=__cordl_internal_set_outgoingUnreliableSequenceNumber)) int32_t  outgoingUnreliableSequenceNumber;

/// @brief Field reliableCommandsInFlight, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_reliableCommandsInFlight, put=__cordl_internal_set_reliableCommandsInFlight)) int32_t  reliableCommandsInFlight;

/// @brief Field reliableUnsequencedNumbersCompletelyReceived, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_reliableUnsequencedNumbersCompletelyReceived, put=__cordl_internal_set_reliableUnsequencedNumbersCompletelyReceived)) int32_t  reliableUnsequencedNumbersCompletelyReceived;

/// @brief Field reliableUnsequencedNumbersReceived, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_reliableUnsequencedNumbersReceived, put=__cordl_internal_set_reliableUnsequencedNumbersReceived)) ::System::Collections::Generic::HashSet_1<int32_t>*  reliableUnsequencedNumbersReceived;

/// @brief Method ContainsReliableSequenceNumber, addr 0xa6b8ad0, size 0x58, virtual false, abstract: false, final false
inline bool ContainsReliableSequenceNumber(int32_t  reliableSequenceNumber) ;

/// @brief Method ContainsUnreliableSequenceNumber, addr 0xa6b8a20, size 0x58, virtual false, abstract: false, final false
inline bool ContainsUnreliableSequenceNumber(int32_t  unreliableSequenceNumber) ;

/// @brief Method FetchReliableSequenceNumber, addr 0xa6b8b28, size 0x58, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::NCommand* FetchReliableSequenceNumber(int32_t  reliableSequenceNumber) ;

/// @brief Method FetchUnreliableSequenceNumber, addr 0xa6b8a78, size 0x58, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::NCommand* FetchUnreliableSequenceNumber(int32_t  unreliableSequenceNumber) ;

static inline ::ExitGames::Client::Photon::EnetChannel* New_ctor(uint8_t  channelNumber, int32_t  commandBufferSize) ;

/// @brief Method QueueIncomingReliableUnsequenced, addr 0xa6b8dec, size 0x17c, virtual false, abstract: false, final false
inline bool QueueIncomingReliableUnsequenced(::ExitGames::Client::Photon::NCommand*  command) ;

/// @brief Method RemoveFragment, addr 0xa6b8bf8, size 0x70, virtual false, abstract: false, final false
inline void RemoveFragment(int32_t  reliableSequenceNumber, bool  isSequenced) ;

/// @brief Method TryGetFragment, addr 0xa6b8b80, size 0x78, virtual false, abstract: false, final false
inline bool TryGetFragment(int32_t  reliableSequenceNumber, bool  isSequenced, ::by_ref<::ExitGames::Client::Photon::NCommand*>  fragment) ;

constexpr uint8_t const& __cordl_internal_get_ChannelNumber() const;

constexpr uint8_t& __cordl_internal_get_ChannelNumber() ;

constexpr int32_t const& __cordl_internal_get_highestReceivedAck() const;

constexpr int32_t& __cordl_internal_get_highestReceivedAck() ;

constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>* const& __cordl_internal_get_incomingReliableCommandsList() const;

constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*& __cordl_internal_get_incomingReliableCommandsList() ;

constexpr int32_t const& __cordl_internal_get_incomingReliableSequenceNumber() const;

constexpr int32_t& __cordl_internal_get_incomingReliableSequenceNumber() ;

constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>* const& __cordl_internal_get_incomingUnreliableCommandsList() const;

constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*& __cordl_internal_get_incomingUnreliableCommandsList() ;

constexpr int32_t const& __cordl_internal_get_incomingUnreliableSequenceNumber() const;

constexpr int32_t& __cordl_internal_get_incomingUnreliableSequenceNumber() ;

constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* const& __cordl_internal_get_incomingUnsequencedCommandsList() const;

constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*& __cordl_internal_get_incomingUnsequencedCommandsList() ;

constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>* const& __cordl_internal_get_incomingUnsequencedFragments() const;

constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*& __cordl_internal_get_incomingUnsequencedFragments() ;

constexpr int32_t const& __cordl_internal_get_lowestUnacknowledgedSequenceNumber() const;

constexpr int32_t& __cordl_internal_get_lowestUnacknowledgedSequenceNumber() ;

constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* const& __cordl_internal_get_outgoingReliableCommandsList() const;

constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*& __cordl_internal_get_outgoingReliableCommandsList() ;

constexpr int32_t const& __cordl_internal_get_outgoingReliableSequenceNumber() const;

constexpr int32_t& __cordl_internal_get_outgoingReliableSequenceNumber() ;

constexpr int32_t const& __cordl_internal_get_outgoingReliableUnsequencedNumber() const;

constexpr int32_t& __cordl_internal_get_outgoingReliableUnsequencedNumber() ;

constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* const& __cordl_internal_get_outgoingUnreliableCommandsList() const;

constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*& __cordl_internal_get_outgoingUnreliableCommandsList() ;

constexpr int32_t const& __cordl_internal_get_outgoingUnreliableSequenceNumber() const;

constexpr int32_t& __cordl_internal_get_outgoingUnreliableSequenceNumber() ;

constexpr int32_t const& __cordl_internal_get_reliableCommandsInFlight() const;

constexpr int32_t& __cordl_internal_get_reliableCommandsInFlight() ;

constexpr int32_t const& __cordl_internal_get_reliableUnsequencedNumbersCompletelyReceived() const;

constexpr int32_t& __cordl_internal_get_reliableUnsequencedNumbersCompletelyReceived() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_reliableUnsequencedNumbersReceived() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_reliableUnsequencedNumbersReceived() ;

constexpr void __cordl_internal_set_ChannelNumber(uint8_t  value) ;

constexpr void __cordl_internal_set_highestReceivedAck(int32_t  value) ;

constexpr void __cordl_internal_set_incomingReliableCommandsList(::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*  value) ;

constexpr void __cordl_internal_set_incomingReliableSequenceNumber(int32_t  value) ;

constexpr void __cordl_internal_set_incomingUnreliableCommandsList(::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*  value) ;

constexpr void __cordl_internal_set_incomingUnreliableSequenceNumber(int32_t  value) ;

constexpr void __cordl_internal_set_incomingUnsequencedCommandsList(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*  value) ;

constexpr void __cordl_internal_set_incomingUnsequencedFragments(::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*  value) ;

constexpr void __cordl_internal_set_lowestUnacknowledgedSequenceNumber(int32_t  value) ;

constexpr void __cordl_internal_set_outgoingReliableCommandsList(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*  value) ;

constexpr void __cordl_internal_set_outgoingReliableSequenceNumber(int32_t  value) ;

constexpr void __cordl_internal_set_outgoingReliableUnsequencedNumber(int32_t  value) ;

constexpr void __cordl_internal_set_outgoingUnreliableCommandsList(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*  value) ;

constexpr void __cordl_internal_set_outgoingUnreliableSequenceNumber(int32_t  value) ;

constexpr void __cordl_internal_set_reliableCommandsInFlight(int32_t  value) ;

constexpr void __cordl_internal_set_reliableUnsequencedNumbersCompletelyReceived(int32_t  value) ;

constexpr void __cordl_internal_set_reliableUnsequencedNumbersReceived(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0xa6b8824, size 0x1fc, virtual false, abstract: false, final false
inline void _ctor(uint8_t  channelNumber, int32_t  commandBufferSize) ;

/// @brief Method clearAll, addr 0xa6b8c68, size 0x184, virtual false, abstract: false, final false
inline void clearAll() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnetChannel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnetChannel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnetChannel(EnetChannel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnetChannel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnetChannel(EnetChannel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26421};

/// @brief Field ChannelNumber, offset: 0x10, size: 0x1, def value: None
 uint8_t  ___ChannelNumber;

/// @brief Field incomingReliableCommandsList, offset: 0x18, size: 0x8, def value: None
 ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*  ___incomingReliableCommandsList;

/// @brief Field incomingUnreliableCommandsList, offset: 0x20, size: 0x8, def value: None
 ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*  ___incomingUnreliableCommandsList;

/// @brief Field incomingUnsequencedCommandsList, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*  ___incomingUnsequencedCommandsList;

/// @brief Field incomingUnsequencedFragments, offset: 0x30, size: 0x8, def value: None
 ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::ExitGames::Client::Photon::NCommand*>*  ___incomingUnsequencedFragments;

/// @brief Field outgoingReliableCommandsList, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*  ___outgoingReliableCommandsList;

/// @brief Field outgoingUnreliableCommandsList, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*  ___outgoingUnreliableCommandsList;

/// @brief Field incomingReliableSequenceNumber, offset: 0x48, size: 0x4, def value: None
 int32_t  ___incomingReliableSequenceNumber;

/// @brief Field incomingUnreliableSequenceNumber, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___incomingUnreliableSequenceNumber;

/// @brief Field outgoingReliableSequenceNumber, offset: 0x50, size: 0x4, def value: None
 int32_t  ___outgoingReliableSequenceNumber;

/// @brief Field outgoingUnreliableSequenceNumber, offset: 0x54, size: 0x4, def value: None
 int32_t  ___outgoingUnreliableSequenceNumber;

/// @brief Field outgoingReliableUnsequencedNumber, offset: 0x58, size: 0x4, def value: None
 int32_t  ___outgoingReliableUnsequencedNumber;

/// @brief Field reliableUnsequencedNumbersCompletelyReceived, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___reliableUnsequencedNumbersCompletelyReceived;

/// @brief Field reliableUnsequencedNumbersReceived, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___reliableUnsequencedNumbersReceived;

/// @brief Field highestReceivedAck, offset: 0x68, size: 0x4, def value: None
 int32_t  ___highestReceivedAck;

/// @brief Field reliableCommandsInFlight, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___reliableCommandsInFlight;

/// @brief Field lowestUnacknowledgedSequenceNumber, offset: 0x70, size: 0x4, def value: None
 int32_t  ___lowestUnacknowledgedSequenceNumber;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::EnetChannel, ___ChannelNumber) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetChannel, ___incomingReliableCommandsList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetChannel, ___incomingUnreliableCommandsList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetChannel, ___incomingUnsequencedCommandsList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetChannel, ___incomingUnsequencedFragments) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetChannel, ___outgoingReliableCommandsList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetChannel, ___outgoingUnreliableCommandsList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetChannel, ___incomingReliableSequenceNumber) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetChannel, ___incomingUnreliableSequenceNumber) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetChannel, ___outgoingReliableSequenceNumber) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetChannel, ___outgoingUnreliableSequenceNumber) == 0x54, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetChannel, ___outgoingReliableUnsequencedNumber) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetChannel, ___reliableUnsequencedNumbersCompletelyReceived) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetChannel, ___reliableUnsequencedNumbersReceived) == 0x60, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetChannel, ___highestReceivedAck) == 0x68, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetChannel, ___reliableCommandsInFlight) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetChannel, ___lowestUnacknowledgedSequenceNumber) == 0x70, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::EnetChannel) == 0x78, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
