#pragma once
// IWYU pragma private; include "Fusion/Protocol/CommunicatorBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Protocol/zzzz__IMessage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommunicatorBase)
namespace Fusion::Protocol {
template<typename K>
class CommunicatorBase___c__DisplayClass15_0_1;
}
namespace Fusion::Protocol {
class ICommunicator;
}
namespace Fusion::Protocol {
class IMessage;
}
namespace Fusion::Protocol {
class Message;
}
namespace Fusion::Protocol {
class ProtocolSerializer;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Fusion::Protocol {
class CommunicatorBase;
}
namespace Fusion::Protocol {
template<typename K>
class CommunicatorBase___c__DisplayClass15_0_1;
}
// Write type traits
MARK_REF_T(::Fusion::Protocol::CommunicatorBase*);
MARK_GEN_REF_T_PTR(::Fusion::Protocol::CommunicatorBase___c__DisplayClass15_0_1);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::CommunicatorBase*, "Fusion.Protocol", "CommunicatorBase");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::Protocol::CommunicatorBase___c__DisplayClass15_0_1, "Fusion.Protocol", "CommunicatorBase/<>c__DisplayClass15_0`1");
// Dependencies Fusion.Protocol.IMessage, System.Object
namespace Fusion::Protocol {
// Is value type: false
// CS Name: Fusion.Protocol.CommunicatorBase
class CORDL_TYPE CommunicatorBase : public ::System::Object {
public:
// Declarations
template<typename K>
using __c__DisplayClass15_0_1 = ::Fusion::Protocol::CommunicatorBase___c__DisplayClass15_0_1<K>;

/// @brief Field Callbacks, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Callbacks, put=__cordl_internal_set_Callbacks)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Action_2<int32_t,::Fusion::Protocol::IMessage*>*>*  Callbacks;

 __declspec(property(get=get_CommunicatorID)) int32_t  CommunicatorID;

/// @brief Field MessageSendQueue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MessageSendQueue, put=__cordl_internal_set_MessageSendQueue)) ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::Fusion::Protocol::Message*>>*  MessageSendQueue;

/// @brief Field RecvQueue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_RecvQueue, put=__cordl_internal_set_RecvQueue)) ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::System::Object*>>*  RecvQueue;

/// @brief Field _messageList, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__messageList, put=__cordl_internal_set__messageList)) ::System::Collections::Generic::List_1<::Fusion::Protocol::Message*>*  _messageList;

/// @brief Field _protocolSerializer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__protocolSerializer, put=__cordl_internal_set__protocolSerializer)) ::Fusion::Protocol::ProtocolSerializer*  _protocolSerializer;

/// @brief Convert operator to "::Fusion::Protocol::ICommunicator"
constexpr operator  ::Fusion::Protocol::ICommunicator*() noexcept;

/// @brief Method ConvertData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ConvertData(::System::Object*  data, ::by_ref<::ArrayW<uint8_t>>  dataBuffer, ::by_ref<int32_t>  maxLength) ;

/// @brief Method HandleProtocolPackage, addr 0x6021cb0, size 0x2ac, virtual false, abstract: false, final false
inline void HandleProtocolPackage(int32_t  actorNr, ::System::Object*  data) ;

static inline ::Fusion::Protocol::CommunicatorBase* New_ctor() ;

/// @brief Method Poll, addr 0x6021b04, size 0x50, virtual true, abstract: false, final true
inline bool Poll() ;

/// @brief Method PushPackage, addr 0x6021b54, size 0x15c, virtual true, abstract: false, final true
inline void PushPackage(int32_t  senderActor, int32_t  eventCode, ::System::Object*  data) ;

/// @brief Method ReceivePackage, addr 0x60225c0, size 0x11c, virtual true, abstract: false, final true
inline int32_t ReceivePackage(::by_ref<int32_t>  senderActor, uint8_t*  buffer, int32_t  bufferLength) ;

/// @brief Method RegisterPackageCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename K>
requires(::cordl_internals::type_constraint<K, ::Fusion::Protocol::IMessage*>)
inline void RegisterPackageCallback(::System::Action_2<int32_t,K>*  callback) ;

/// @brief Method SendMessage, addr 0x6021f5c, size 0x214, virtual true, abstract: false, final true
inline void SendMessage(int32_t  targetActor, ::Fusion::Protocol::IMessage*  message) ;

/// @brief Method SendPackage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool SendPackage(uint8_t  code, int32_t  targetActor, bool  reliable, uint8_t*  buffer, int32_t  bufferLength) ;

/// @brief Method Service, addr 0x60222d0, size 0x8c, virtual true, abstract: false, final false
inline void Service() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Action_2<int32_t,::Fusion::Protocol::IMessage*>*>* const& __cordl_internal_get_Callbacks() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Action_2<int32_t,::Fusion::Protocol::IMessage*>*>*& __cordl_internal_get_Callbacks() ;

constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::Fusion::Protocol::Message*>>* const& __cordl_internal_get_MessageSendQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::Fusion::Protocol::Message*>>*& __cordl_internal_get_MessageSendQueue() ;

constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::System::Object*>>* const& __cordl_internal_get_RecvQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::System::Object*>>*& __cordl_internal_get_RecvQueue() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::Protocol::Message*>* const& __cordl_internal_get__messageList() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::Protocol::Message*>*& __cordl_internal_get__messageList() ;

constexpr ::Fusion::Protocol::ProtocolSerializer* const& __cordl_internal_get__protocolSerializer() const;

constexpr ::Fusion::Protocol::ProtocolSerializer*& __cordl_internal_get__protocolSerializer() ;

constexpr void __cordl_internal_set_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Action_2<int32_t,::Fusion::Protocol::IMessage*>*>*  value) ;

constexpr void __cordl_internal_set_MessageSendQueue(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::Fusion::Protocol::Message*>>*  value) ;

constexpr void __cordl_internal_set_RecvQueue(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::System::Object*>>*  value) ;

constexpr void __cordl_internal_set__messageList(::System::Collections::Generic::List_1<::Fusion::Protocol::Message*>*  value) ;

constexpr void __cordl_internal_set__protocolSerializer(::Fusion::Protocol::ProtocolSerializer*  value) ;

/// @brief Method .ctor, addr 0x60226dc, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CommunicatorID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_CommunicatorID() ;

/// @brief Convert to "::Fusion::Protocol::ICommunicator"
constexpr ::Fusion::Protocol::ICommunicator* i___Fusion__Protocol__ICommunicator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommunicatorBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommunicatorBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CommunicatorBase(CommunicatorBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommunicatorBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommunicatorBase(CommunicatorBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29313};

/// @brief Field Callbacks, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Action_2<int32_t,::Fusion::Protocol::IMessage*>*>*  ___Callbacks;

/// @brief Field MessageSendQueue, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::Fusion::Protocol::Message*>>*  ___MessageSendQueue;

/// @brief Field RecvQueue, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::System::Object*>>*  ___RecvQueue;

/// @brief Field _messageList, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::Protocol::Message*>*  ____messageList;

/// @brief Field _protocolSerializer, offset: 0x30, size: 0x8, def value: None
 ::Fusion::Protocol::ProtocolSerializer*  ____protocolSerializer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::CommunicatorBase, ___Callbacks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::CommunicatorBase, ___MessageSendQueue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::CommunicatorBase, ___RecvQueue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::CommunicatorBase, ____messageList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::CommunicatorBase, ____protocolSerializer) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::CommunicatorBase) == 0x38, "Size mismatch!");

} // namespace end def Fusion::Protocol
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion::Protocol {
// cpp template
template<typename K>
// Is value type: false
// CS Name: Fusion.Protocol.CommunicatorBase/<>c__DisplayClass15_0`1<K>
class CORDL_TYPE CommunicatorBase___c__DisplayClass15_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_2<int32_t,K>*  callback;

static inline ::Fusion::Protocol::CommunicatorBase___c__DisplayClass15_0_1<K>* New_ctor() ;

/// @brief Method <RegisterPackageCallback>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _RegisterPackageCallback_b__0(int32_t  actor, ::Fusion::Protocol::IMessage*  msg) ;

constexpr ::System::Action_2<int32_t,K>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_2<int32_t,K>*& __cordl_internal_get_callback() ;

constexpr void __cordl_internal_set_callback(::System::Action_2<int32_t,K>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommunicatorBase___c__DisplayClass15_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommunicatorBase___c__DisplayClass15_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CommunicatorBase___c__DisplayClass15_0_1(CommunicatorBase___c__DisplayClass15_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommunicatorBase___c__DisplayClass15_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommunicatorBase___c__DisplayClass15_0_1(CommunicatorBase___c__DisplayClass15_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29312};

/// @brief Field callback, offset: 0x10, size: 0x8, def value: None
 ::System::Action_2<int32_t,K>*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Protocol
