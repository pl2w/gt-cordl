#pragma once
// IWYU pragma private; include "Fusion/Protocol/Message.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Protocol/zzzz__ProtocolMessageVersion_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Message)
namespace Fusion::Protocol {
class BitStream;
}
namespace Fusion::Protocol {
class IMessage;
}
namespace Fusion::Protocol {
struct ProtocolMessageVersion;
}
namespace System {
class Version;
}
// Forward declare root types
namespace Fusion::Protocol {
class Message;
}
// Write type traits
MARK_REF_T(::Fusion::Protocol::Message*);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::Message*, "Fusion.Protocol", "Message");
// Dependencies Fusion.Protocol.ProtocolMessageVersion, System.Object
namespace Fusion::Protocol {
// Is value type: false
// CS Name: Fusion.Protocol.Message
class CORDL_TYPE Message : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CustomData)) ::StringW  CustomData;

/// @brief Field FusionSerializationVersion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FusionSerializationVersion, put=__cordl_internal_set_FusionSerializationVersion)) ::System::Version*  FusionSerializationVersion;

 __declspec(property(get=get_HasValidVersion)) bool  HasValidVersion;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field ProtocolVersion, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_ProtocolVersion, put=__cordl_internal_set_ProtocolVersion)) ::Fusion::Protocol::ProtocolMessageVersion  ProtocolVersion;

/// @brief Field _customData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__customData, put=__cordl_internal_set__customData)) ::StringW  _customData;

/// @brief Convert operator to "::Fusion::Protocol::IMessage"
constexpr operator  ::Fusion::Protocol::IMessage*() noexcept;

/// @brief Method Clone, addr 0x6023200, size 0x80, virtual true, abstract: false, final false
inline ::Fusion::Protocol::Message* Clone() ;

static inline ::Fusion::Protocol::Message* New_ctor(::Fusion::Protocol::ProtocolMessageVersion  protocolMessage, ::System::Version*  serializationVersion) ;

/// @brief Method Serialize, addr 0x6023280, size 0x250, virtual false, abstract: false, final false
inline void Serialize(::Fusion::Protocol::BitStream*  stream) ;

/// @brief Method SerializeProtected, addr 0x60234d0, size 0x4, virtual true, abstract: false, final false
inline void SerializeProtected(::Fusion::Protocol::BitStream*  stream) ;

/// @brief Method ToString, addr 0x6022f3c, size 0x238, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Version* const& __cordl_internal_get_FusionSerializationVersion() const;

constexpr ::System::Version*& __cordl_internal_get_FusionSerializationVersion() ;

constexpr ::Fusion::Protocol::ProtocolMessageVersion const& __cordl_internal_get_ProtocolVersion() const;

constexpr ::Fusion::Protocol::ProtocolMessageVersion& __cordl_internal_get_ProtocolVersion() ;

constexpr ::StringW const& __cordl_internal_get__customData() const;

constexpr ::StringW& __cordl_internal_get__customData() ;

constexpr void __cordl_internal_set_FusionSerializationVersion(::System::Version*  value) ;

constexpr void __cordl_internal_set_ProtocolVersion(::Fusion::Protocol::ProtocolMessageVersion  value) ;

constexpr void __cordl_internal_set__customData(::StringW  value) ;

/// @brief Method .ctor, addr 0x6022c90, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Protocol::ProtocolMessageVersion  protocolMessage, ::System::Version*  serializationVersion) ;

/// @brief Method get_CustomData, addr 0x60231f8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CustomData() ;

/// @brief Method get_HasValidVersion, addr 0x6023178, size 0x80, virtual false, abstract: false, final false
inline bool get_HasValidVersion() ;

/// @brief Method get_IsValid, addr 0x6023174, size 0x4, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Convert to "::Fusion::Protocol::IMessage"
constexpr ::Fusion::Protocol::IMessage* i___Fusion__Protocol__IMessage() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Message() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Message", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Message(Message && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Message", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Message(Message const& ) = delete;

/// @brief Field CustomDataLength offset 0xffffffff size 0x4
static constexpr int32_t  CustomDataLength{static_cast<int32_t>(0x400)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29315};

/// @brief Field ProtocolVersion, offset: 0x10, size: 0x1, def value: None
 ::Fusion::Protocol::ProtocolMessageVersion  ___ProtocolVersion;

/// @brief Field FusionSerializationVersion, offset: 0x18, size: 0x8, def value: None
 ::System::Version*  ___FusionSerializationVersion;

/// @brief Field _customData, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____customData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::Message, ___ProtocolVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::Message, ___FusionSerializationVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::Message, ____customData) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::Message) == 0x28, "Size mismatch!");

} // namespace end def Fusion::Protocol
