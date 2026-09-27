#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/Stun/zzzz__StunMessage_StunMessageType_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StunMessage)
namespace Fusion::Sockets::Stun {
class StunErrorAttribute;
}
namespace GlobalNamespace {
struct StunMessage_AttributeType;
}
namespace GlobalNamespace {
struct StunMessage_IPFamily;
}
namespace GlobalNamespace {
struct StunMessage_StunMessageType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion::Sockets::Stun {
class StunMessage;
}
// Write type traits
MARK_REF_T(::Fusion::Sockets::Stun::StunMessage*);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::Stun::StunMessage*, "Fusion.Sockets.Stun", "StunMessage");
// Dependencies Fusion.Sockets.Stun.StunMessage::StunMessageType, System.Guid, System.Object
namespace Fusion::Sockets::Stun {
// Is value type: false
// CS Name: Fusion.Sockets.Stun.StunMessage
class CORDL_TYPE StunMessage : public ::System::Object {
public:
// Declarations
using AttributeType = ::GlobalNamespace::StunMessage_AttributeType;

using IPFamily = ::GlobalNamespace::StunMessage_IPFamily;

using StunMessageType = ::GlobalNamespace::StunMessage_StunMessageType;

 __declspec(property(get=get_Attributes, put=set_Attributes)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>*  Attributes;

 __declspec(property(get=get_ErrorCode)) ::Fusion::Sockets::Stun::StunErrorAttribute*  ErrorCode;

 __declspec(property(get=get_MappedAddress, put=set_MappedAddress)) ::System::Net::IPEndPoint*  MappedAddress;

 __declspec(property(get=get_TransactionID, put=set_TransactionID)) ::ArrayW<uint8_t>  TransactionID;

 __declspec(property(get=get_Type, put=set_Type)) ::GlobalNamespace::StunMessage_StunMessageType  Type;

/// @brief Field <Attributes>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Attributes_k__BackingField, put=__cordl_internal_set__Attributes_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>*  _Attributes_k__BackingField;

/// @brief Field <ErrorCode>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ErrorCode_k__BackingField, put=__cordl_internal_set__ErrorCode_k__BackingField)) ::Fusion::Sockets::Stun::StunErrorAttribute*  _ErrorCode_k__BackingField;

/// @brief Field <TransactionID>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__TransactionID_k__BackingField, put=__cordl_internal_set__TransactionID_k__BackingField)) ::ArrayW<uint8_t>  _TransactionID_k__BackingField;

/// @brief Field <Type>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Type_k__BackingField, put=__cordl_internal_set__Type_k__BackingField)) ::GlobalNamespace::StunMessage_StunMessageType  _Type_k__BackingField;

/// @brief Field <UserName>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__UserName_k__BackingField, put=__cordl_internal_set__UserName_k__BackingField)) ::StringW  _UserName_k__BackingField;

 __declspec(property(get=get_ID)) ::System::Guid  _cordl_ID;

/// @brief Field _id, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) ::System::Guid  _id;

/// @brief Field _stunMessageTypeValues, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__stunMessageTypeValues, put=setStaticF__stunMessageTypeValues)) ::System::Collections::Generic::HashSet_1<int32_t>*  _stunMessageTypeValues;

/// @brief Method IsStunMessage, addr 0x6034ed8, size 0x1ac, virtual false, abstract: false, final false
static inline bool IsStunMessage(uint8_t*  data, int32_t  length) ;

static inline ::Fusion::Sockets::Stun::StunMessage* New_ctor(::System::Guid  msgID, ::GlobalNamespace::StunMessage_StunMessageType  messageType) ;

/// @brief Method ParseEndPoint, addr 0x603a074, size 0x164, virtual false, abstract: false, final false
inline ::System::Net::IPEndPoint* ParseEndPoint(uint8_t*  data, ::by_ref<int32_t>  offset) ;

/// @brief Method ParseXorEndPoint, addr 0x6039ca0, size 0x3d4, virtual false, abstract: false, final false
inline ::System::Net::IPEndPoint* ParseXorEndPoint(uint8_t*  data, ::by_ref<int32_t>  offset) ;

/// @brief Method ReadAttribute, addr 0x60392b8, size 0x268, virtual false, abstract: false, final false
inline void ReadAttribute(uint8_t*  data, ::by_ref<int32_t>  offset) ;

/// @brief Method Serialize, addr 0x6037758, size 0x1a8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> Serialize() ;

/// @brief Method StoreEndPoint, addr 0x6039a98, size 0x208, virtual false, abstract: false, final false
inline void StoreEndPoint(::GlobalNamespace::StunMessage_AttributeType  type, ::System::Net::IPEndPoint*  endPoint, ::ArrayW<uint8_t>  message, ::by_ref<int32_t>  offset) ;

/// @brief Method TryParse, addr 0x6036220, size 0x238, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::Stun::StunMessage* TryParse(uint8_t*  data, int32_t  length) ;

/// @brief Method WriteAttributes, addr 0x6039520, size 0x578, virtual false, abstract: false, final false
inline void WriteAttributes(::ArrayW<uint8_t>  msg, ::by_ref<int32_t>  offset) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>* const& __cordl_internal_get__Attributes_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>*& __cordl_internal_get__Attributes_k__BackingField() ;

constexpr ::Fusion::Sockets::Stun::StunErrorAttribute* const& __cordl_internal_get__ErrorCode_k__BackingField() const;

constexpr ::Fusion::Sockets::Stun::StunErrorAttribute*& __cordl_internal_get__ErrorCode_k__BackingField() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__TransactionID_k__BackingField() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__TransactionID_k__BackingField() ;

constexpr ::GlobalNamespace::StunMessage_StunMessageType const& __cordl_internal_get__Type_k__BackingField() const;

constexpr ::GlobalNamespace::StunMessage_StunMessageType& __cordl_internal_get__Type_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__UserName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__UserName_k__BackingField() ;

constexpr ::System::Guid const& __cordl_internal_get__id() const;

constexpr ::System::Guid& __cordl_internal_get__id() ;

constexpr void __cordl_internal_set__Attributes_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>*  value) ;

constexpr void __cordl_internal_set__ErrorCode_k__BackingField(::Fusion::Sockets::Stun::StunErrorAttribute*  value) ;

constexpr void __cordl_internal_set__TransactionID_k__BackingField(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__Type_k__BackingField(::GlobalNamespace::StunMessage_StunMessageType  value) ;

constexpr void __cordl_internal_set__UserName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__id(::System::Guid  value) ;

/// @brief Method .ctor, addr 0x60375ec, size 0x16c, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  msgID, ::GlobalNamespace::StunMessage_StunMessageType  messageType) ;

static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF__stunMessageTypeValues() ;

/// [CompilerGenerated]
/// @brief Method get_Attributes, addr 0x60392a8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>* get_Attributes() ;

/// [CompilerGenerated]
/// @brief Method get_ErrorCode, addr 0x60392a0, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Sockets::Stun::StunErrorAttribute* get_ErrorCode() ;

/// @brief Method get_ID, addr 0x603650c, size 0xc0, virtual false, abstract: false, final false
inline ::System::Guid get_ID() ;

/// @brief Method get_MappedAddress, addr 0x6036458, size 0xb4, virtual false, abstract: false, final false
inline ::System::Net::IPEndPoint* get_MappedAddress() ;

/// @brief Method get_StunMessageTypeValues, addr 0x6038e7c, size 0x3a8, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::HashSet_1<int32_t>* get_StunMessageTypeValues() ;

/// [CompilerGenerated]
/// @brief Method get_TransactionID, addr 0x6039234, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_TransactionID() ;

/// [CompilerGenerated]
/// @brief Method get_Type, addr 0x6039224, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::StunMessage_StunMessageType get_Type() ;

static inline void setStaticF__stunMessageTypeValues(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Attributes, addr 0x60392b0, size 0x8, virtual false, abstract: false, final false
inline void set_Attributes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>*  value) ;

/// @brief Method set_MappedAddress, addr 0x6039244, size 0x5c, virtual false, abstract: false, final false
inline void set_MappedAddress(::System::Net::IPEndPoint*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TransactionID, addr 0x603923c, size 0x8, virtual false, abstract: false, final false
inline void set_TransactionID(::ArrayW<uint8_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Type, addr 0x603922c, size 0x8, virtual false, abstract: false, final false
inline void set_Type(::GlobalNamespace::StunMessage_StunMessageType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StunMessage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StunMessage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StunMessage(StunMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StunMessage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StunMessage(StunMessage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29406};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::StunMessage_StunMessageType  ____Type_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <TransactionID>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____TransactionID_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <UserName>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____UserName_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ErrorCode>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Fusion::Sockets::Stun::StunErrorAttribute*  ____ErrorCode_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Attributes>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StunMessage_AttributeType,::System::Object*>*  ____Attributes_k__BackingField;

/// @brief Field _id, offset: 0x38, size: 0x10, def value: None
 ::System::Guid  ____id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::Stun::StunMessage, ____Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunMessage, ____TransactionID_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunMessage, ____UserName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunMessage, ____ErrorCode_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunMessage, ____Attributes_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunMessage, ____id) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::Stun::StunMessage) == 0x48, "Size mismatch!");

} // namespace end def Fusion::Sockets::Stun
