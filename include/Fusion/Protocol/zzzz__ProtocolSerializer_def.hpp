#pragma once
// IWYU pragma private; include "Fusion/Protocol/ProtocolSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProtocolSerializer)
namespace Fusion::Protocol {
class BitStream;
}
namespace Fusion::Protocol {
class Message;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion::Protocol {
class ProtocolSerializer;
}
// Write type traits
MARK_REF_T(::Fusion::Protocol::ProtocolSerializer*);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::ProtocolSerializer*, "Fusion.Protocol", "ProtocolSerializer");
// Dependencies System.Object
namespace Fusion::Protocol {
// Is value type: false
// CS Name: Fusion.Protocol.ProtocolSerializer
class CORDL_TYPE ProtocolSerializer : public ::System::Object {
public:
// Declarations
/// @brief Field _idToType, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__idToType, put=__cordl_internal_set__idToType)) ::System::Collections::Generic::Dictionary_2<uint8_t,::Fusion::Protocol::Message*>*  _idToType;

/// @brief Field _readStream, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__readStream, put=__cordl_internal_set__readStream)) ::Fusion::Protocol::BitStream*  _readStream;

/// @brief Field _typeToId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__typeToId, put=__cordl_internal_set__typeToId)) ::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*  _typeToId;

/// @brief Field _writeStream, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__writeStream, put=__cordl_internal_set__writeStream)) ::Fusion::Protocol::BitStream*  _writeStream;

/// @brief Method ConvertToBuffer, addr 0x6022170, size 0x160, virtual false, abstract: false, final false
inline bool ConvertToBuffer(::Fusion::Protocol::Message*  message, ::by_ref<::Fusion::Protocol::BitStream*>  buffer) ;

/// @brief Method ConvertToMessages, addr 0x602235c, size 0x264, virtual false, abstract: false, final false
inline bool ConvertToMessages(::ArrayW<uint8_t>  data, ::System::Collections::Generic::List_1<::Fusion::Protocol::Message*>*  messages) ;

static inline ::Fusion::Protocol::ProtocolSerializer* New_ctor() ;

/// @brief Method PackNext, addr 0x6025e1c, size 0x16c, virtual false, abstract: false, final false
inline bool PackNext(::Fusion::Protocol::Message*  msg, ::Fusion::Protocol::BitStream*  stream) ;

/// @brief Method ReadNext, addr 0x6025c8c, size 0x190, virtual false, abstract: false, final false
inline bool ReadNext(::Fusion::Protocol::BitStream*  stream, ::by_ref<::Fusion::Protocol::Message*>  msg) ;

/// @brief Method RegisterProtocolMsg, addr 0x6025be4, size 0xa8, virtual false, abstract: false, final false
inline void RegisterProtocolMsg(uint8_t  id, ::Fusion::Protocol::Message*  message) ;

constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::Fusion::Protocol::Message*>* const& __cordl_internal_get__idToType() const;

constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::Fusion::Protocol::Message*>*& __cordl_internal_get__idToType() ;

constexpr ::Fusion::Protocol::BitStream* const& __cordl_internal_get__readStream() const;

constexpr ::Fusion::Protocol::BitStream*& __cordl_internal_get__readStream() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>* const& __cordl_internal_get__typeToId() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*& __cordl_internal_get__typeToId() ;

constexpr ::Fusion::Protocol::BitStream* const& __cordl_internal_get__writeStream() const;

constexpr ::Fusion::Protocol::BitStream*& __cordl_internal_get__writeStream() ;

constexpr void __cordl_internal_set__idToType(::System::Collections::Generic::Dictionary_2<uint8_t,::Fusion::Protocol::Message*>*  value) ;

constexpr void __cordl_internal_set__readStream(::Fusion::Protocol::BitStream*  value) ;

constexpr void __cordl_internal_set__typeToId(::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*  value) ;

constexpr void __cordl_internal_set__writeStream(::Fusion::Protocol::BitStream*  value) ;

/// @brief Method .ctor, addr 0x602289c, size 0x3e8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProtocolSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProtocolSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProtocolSerializer(ProtocolSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProtocolSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProtocolSerializer(ProtocolSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29333};

/// @brief Field _writeStream, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Protocol::BitStream*  ____writeStream;

/// @brief Field _readStream, offset: 0x18, size: 0x8, def value: None
 ::Fusion::Protocol::BitStream*  ____readStream;

/// @brief Field _typeToId, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*  ____typeToId;

/// @brief Field _idToType, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint8_t,::Fusion::Protocol::Message*>*  ____idToType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::ProtocolSerializer, ____writeStream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::ProtocolSerializer, ____readStream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::ProtocolSerializer, ____typeToId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::ProtocolSerializer, ____idToType) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::ProtocolSerializer) == 0x30, "Size mismatch!");

} // namespace end def Fusion::Protocol
