#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/IProtocol.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IProtocol)
namespace ExitGames::Client::Photon {
class ByteArraySlicePool;
}
namespace ExitGames::Client::Photon {
class DisconnectMessage;
}
namespace ExitGames::Client::Photon {
class EventData;
}
namespace ExitGames::Client::Photon {
class OperationRequest;
}
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace ExitGames::Client::Photon {
class ParameterDictionary;
}
namespace ExitGames::Client::Photon {
class StreamBuffer;
}
namespace GlobalNamespace {
struct IProtocol_DeserializationFlags;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class IProtocol;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::IProtocol*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::IProtocol*, "ExitGames.Client.Photon", "IProtocol");
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.IProtocol
class CORDL_TYPE IProtocol : public ::System::Object {
public:
// Declarations
using DeserializationFlags = ::GlobalNamespace::IProtocol_DeserializationFlags;

/// @brief Field ByteArraySlicePool, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ByteArraySlicePool, put=__cordl_internal_set_ByteArraySlicePool)) ::ExitGames::Client::Photon::ByteArraySlicePool*  ByteArraySlicePool;

 __declspec(property(get=get_ProtocolType)) ::StringW  ProtocolType;

 __declspec(property(get=get_VersionBytes)) ::ArrayW<uint8_t>  VersionBytes;

/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* Deserialize(::ExitGames::Client::Photon::StreamBuffer*  din, uint8_t  type, ::GlobalNamespace::IProtocol_DeserializationFlags  flags) ;

/// @brief Method Deserialize, addr 0xa6c4bd8, size 0x94, virtual false, abstract: false, final false
inline ::System::Object* Deserialize(::ArrayW<uint8_t>  serializedData) ;

/// @brief Method Deserialize, addr 0xa6c4b8c, size 0x4c, virtual false, abstract: false, final false
inline ::System::Object* Deserialize(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method DeserializeByte, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline uint8_t DeserializeByte(::ExitGames::Client::Photon::StreamBuffer*  din) ;

/// @brief Method DeserializeDisconnectMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ExitGames::Client::Photon::DisconnectMessage* DeserializeDisconnectMessage(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method DeserializeEventData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ExitGames::Client::Photon::EventData* DeserializeEventData(::ExitGames::Client::Photon::StreamBuffer*  din, ::ExitGames::Client::Photon::EventData*  target, ::GlobalNamespace::IProtocol_DeserializationFlags  flags) ;

/// @brief Method DeserializeMessage, addr 0xa6c4c6c, size 0x4c, virtual false, abstract: false, final false
inline ::System::Object* DeserializeMessage(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method DeserializeOperationRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ExitGames::Client::Photon::OperationRequest* DeserializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  din, ::GlobalNamespace::IProtocol_DeserializationFlags  flags) ;

/// @brief Method DeserializeOperationResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ExitGames::Client::Photon::OperationResponse* DeserializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags) ;

/// @brief Method DeserializeShort, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int16_t DeserializeShort(::ExitGames::Client::Photon::StreamBuffer*  din) ;

static inline ::ExitGames::Client::Photon::IProtocol* New_ctor() ;

/// @brief Method Serialize, addr 0xa6c4afc, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> Serialize(::System::Object*  obj) ;

/// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Serialize(::ExitGames::Client::Photon::StreamBuffer*  dout, ::System::Object*  serObject, bool  setType) ;

/// @brief Method SerializeEventData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SerializeEventData(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::EventData*  serObject, bool  setType) ;

/// @brief Method SerializeMessage, addr 0xa6c4cb8, size 0x10, virtual false, abstract: false, final false
inline void SerializeMessage(::ExitGames::Client::Photon::StreamBuffer*  ms, ::System::Object*  msg) ;

/// @brief Method SerializeOperationRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  operationCode, ::ExitGames::Client::Photon::ParameterDictionary*  parameters, bool  setType) ;

/// [Obsolete("Use ParameterDictionary instead.")]
/// @brief Method SerializeOperationRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  operationCode, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  parameters, bool  setType) ;

/// @brief Method SerializeOperationResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SerializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::OperationResponse*  serObject, bool  setType) ;

/// @brief Method SerializeShort, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SerializeShort(::ExitGames::Client::Photon::StreamBuffer*  dout, int16_t  serObject, bool  setType) ;

/// @brief Method SerializeString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SerializeString(::ExitGames::Client::Photon::StreamBuffer*  dout, ::StringW  serObject, bool  setType) ;

constexpr ::ExitGames::Client::Photon::ByteArraySlicePool* const& __cordl_internal_get_ByteArraySlicePool() const;

constexpr ::ExitGames::Client::Photon::ByteArraySlicePool*& __cordl_internal_get_ByteArraySlicePool() ;

constexpr void __cordl_internal_set_ByteArraySlicePool(::ExitGames::Client::Photon::ByteArraySlicePool*  value) ;

/// @brief Method .ctor, addr 0xa6c4cc8, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ProtocolType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_ProtocolType() ;

/// @brief Method get_VersionBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t> get_VersionBytes() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IProtocol() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IProtocol", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IProtocol(IProtocol && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IProtocol", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IProtocol(IProtocol const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26432};

/// @brief Field ByteArraySlicePool, offset: 0x10, size: 0x8, def value: None
 ::ExitGames::Client::Photon::ByteArraySlicePool*  ___ByteArraySlicePool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::IProtocol, ___ByteArraySlicePool) == 0x10, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::IProtocol) == 0x18, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
