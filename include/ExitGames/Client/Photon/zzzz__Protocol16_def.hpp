#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/Protocol16.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__IProtocol_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Protocol16)
namespace ExitGames::Client::Photon {
class DisconnectMessage;
}
namespace ExitGames::Client::Photon {
class EventData;
}
namespace ExitGames::Client::Photon {
class Hashtable;
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
namespace GlobalNamespace {
struct Protocol16_GpType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class Protocol16;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::Protocol16*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::Protocol16*, "ExitGames.Client.Photon", "Protocol16");
// Dependencies ExitGames.Client.Photon.IProtocol
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.Protocol16
class CORDL_TYPE Protocol16 : public ::ExitGames::Client::Photon::IProtocol {
public:
// Declarations
using GpType = ::GlobalNamespace::Protocol16_GpType;

 __declspec(property(get=get_ProtocolType)) ::StringW  ProtocolType;

 __declspec(property(get=get_VersionBytes)) ::ArrayW<uint8_t>  VersionBytes;

/// @brief Field memDouble, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_memDouble, put=__cordl_internal_set_memDouble)) ::ArrayW<uint8_t>  memDouble;

/// @brief Field memDoubleBlock, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_memDoubleBlock, put=__cordl_internal_set_memDoubleBlock)) ::ArrayW<double_t>  memDoubleBlock;

/// @brief Field memDoubleBlockBytes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_memDoubleBlockBytes, put=__cordl_internal_set_memDoubleBlockBytes)) ::ArrayW<uint8_t>  memDoubleBlockBytes;

/// @brief Field memFloat, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_memFloat, put=__cordl_internal_set_memFloat)) ::ArrayW<uint8_t>  memFloat;

/// @brief Field memFloatBlock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_memFloatBlock, put=setStaticF_memFloatBlock)) ::ArrayW<float_t>  memFloatBlock;

/// @brief Field memFloatBlockBytes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_memFloatBlockBytes, put=setStaticF_memFloatBlockBytes)) ::ArrayW<uint8_t>  memFloatBlockBytes;

/// @brief Field memInteger, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_memInteger, put=__cordl_internal_set_memInteger)) ::ArrayW<uint8_t>  memInteger;

/// @brief Field memLong, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_memLong, put=__cordl_internal_set_memLong)) ::ArrayW<uint8_t>  memLong;

/// @brief Field memLongBlock, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_memLongBlock, put=__cordl_internal_set_memLongBlock)) ::ArrayW<int64_t>  memLongBlock;

/// @brief Field memLongBlockBytes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_memLongBlockBytes, put=__cordl_internal_set_memLongBlockBytes)) ::ArrayW<uint8_t>  memLongBlockBytes;

/// @brief Field memShort, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_memShort, put=__cordl_internal_set_memShort)) ::ArrayW<uint8_t>  memShort;

/// @brief Field versionBytes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_versionBytes, put=__cordl_internal_set_versionBytes)) ::ArrayW<uint8_t>  versionBytes;

/// @brief Method CreateArrayByType, addr 0xa6d28b0, size 0x1c, virtual false, abstract: false, final false
inline ::System::Array* CreateArrayByType(uint8_t  arrayType, int16_t  length) ;

/// @brief Method Deserialize, addr 0xa6d5d10, size 0x488, virtual true, abstract: false, final false
inline ::System::Object* Deserialize(::ExitGames::Client::Photon::StreamBuffer*  din, uint8_t  type, ::GlobalNamespace::IProtocol_DeserializationFlags  flags) ;

/// @brief Method DeserializeArray, addr 0xa6d6fc0, size 0x588, virtual false, abstract: false, final false
inline ::System::Array* DeserializeArray(::ExitGames::Client::Photon::StreamBuffer*  din) ;

/// @brief Method DeserializeBoolean, addr 0xa6d6ad4, size 0x28, virtual false, abstract: false, final false
inline bool DeserializeBoolean(::ExitGames::Client::Photon::StreamBuffer*  din) ;

/// @brief Method DeserializeByte, addr 0xa6d767c, size 0x18, virtual true, abstract: false, final false
inline uint8_t DeserializeByte(::ExitGames::Client::Photon::StreamBuffer*  din) ;

/// @brief Method DeserializeByteArray, addr 0xa6d64dc, size 0x9c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> DeserializeByteArray(::ExitGames::Client::Photon::StreamBuffer*  din, int32_t  size) ;

/// @brief Method DeserializeCustom, addr 0xa6d1f30, size 0x2cc, virtual false, abstract: false, final false
inline ::System::Object* DeserializeCustom(::ExitGames::Client::Photon::StreamBuffer*  din, uint8_t  customTypeCode, ::GlobalNamespace::IProtocol_DeserializationFlags  flags) ;

/// @brief Method DeserializeDictionary, addr 0xa6d675c, size 0x378, virtual false, abstract: false, final false
inline ::System::Collections::IDictionary* DeserializeDictionary(::ExitGames::Client::Photon::StreamBuffer*  din) ;

/// @brief Method DeserializeDictionaryArray, addr 0xa6d77b8, size 0x27c, virtual false, abstract: false, final false
inline bool DeserializeDictionaryArray(::ExitGames::Client::Photon::StreamBuffer*  din, int16_t  size, ::by_ref<::System::Array*>  arrayResult) ;

/// @brief Method DeserializeDictionaryType, addr 0xa6d7a34, size 0x254, virtual false, abstract: false, final false
inline ::System::Type* DeserializeDictionaryType(::ExitGames::Client::Photon::StreamBuffer*  reader, ::by_ref<uint8_t>  keyTypeCode, ::by_ref<uint8_t>  valTypeCode) ;

/// @brief Method DeserializeDisconnectMessage, addr 0xa6d3044, size 0x128, virtual true, abstract: false, final false
inline ::ExitGames::Client::Photon::DisconnectMessage* DeserializeDisconnectMessage(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method DeserializeDouble, addr 0xa6d6e20, size 0x1a0, virtual false, abstract: false, final false
inline double_t DeserializeDouble(::ExitGames::Client::Photon::StreamBuffer*  din) ;

/// @brief Method DeserializeEventData, addr 0xa6d343c, size 0xac, virtual true, abstract: false, final false
inline ::ExitGames::Client::Photon::EventData* DeserializeEventData(::ExitGames::Client::Photon::StreamBuffer*  din, ::ExitGames::Client::Photon::EventData*  target, ::GlobalNamespace::IProtocol_DeserializationFlags  flags) ;

/// @brief Method DeserializeFloat, addr 0xa6d6cb4, size 0x16c, virtual false, abstract: false, final false
inline float_t DeserializeFloat(::ExitGames::Client::Photon::StreamBuffer*  din) ;

/// @brief Method DeserializeHashTable, addr 0xa6d6644, size 0x118, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::Hashtable* DeserializeHashTable(::ExitGames::Client::Photon::StreamBuffer*  din) ;

/// @brief Method DeserializeIntArray, addr 0xa6d6578, size 0xcc, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> DeserializeIntArray(::ExitGames::Client::Photon::StreamBuffer*  din, int32_t  size) ;

/// @brief Method DeserializeInteger, addr 0xa6d6198, size 0x158, virtual false, abstract: false, final false
inline int32_t DeserializeInteger(::ExitGames::Client::Photon::StreamBuffer*  din) ;

/// @brief Method DeserializeLong, addr 0xa6d6afc, size 0x1b8, virtual false, abstract: false, final false
inline int64_t DeserializeLong(::ExitGames::Client::Photon::StreamBuffer*  din) ;

/// @brief Method DeserializeObjectArray, addr 0xa6d7548, size 0x134, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*> DeserializeObjectArray(::ExitGames::Client::Photon::StreamBuffer*  din) ;

/// @brief Method DeserializeOperationRequest, addr 0xa6d2dd0, size 0xb4, virtual true, abstract: false, final false
inline ::ExitGames::Client::Photon::OperationRequest* DeserializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  din, ::GlobalNamespace::IProtocol_DeserializationFlags  flags) ;

/// @brief Method DeserializeOperationResponse, addr 0xa6d3294, size 0x148, virtual true, abstract: false, final false
inline ::ExitGames::Client::Photon::OperationResponse* DeserializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags) ;

/// @brief Method DeserializeParameterDictionary, addr 0xa6d2e84, size 0x104, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::ParameterDictionary* DeserializeParameterDictionary(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::ParameterDictionary*  target, ::GlobalNamespace::IProtocol_DeserializationFlags  flags) ;

/// @brief Method DeserializeParameterTable, addr 0xa6d316c, size 0x128, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>* DeserializeParameterTable(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  target) ;

/// @brief Method DeserializeShort, addr 0xa6d7694, size 0x124, virtual true, abstract: false, final false
inline int16_t DeserializeShort(::ExitGames::Client::Photon::StreamBuffer*  din) ;

/// @brief Method DeserializeString, addr 0xa6d62f0, size 0x10c, virtual false, abstract: false, final false
inline ::StringW DeserializeString(::ExitGames::Client::Photon::StreamBuffer*  din) ;

/// @brief Method DeserializeStringArray, addr 0xa6d63fc, size 0xe0, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> DeserializeStringArray(::ExitGames::Client::Photon::StreamBuffer*  din) ;

/// @brief Method GetCodeOfType, addr 0xa6d25c0, size 0x2f0, virtual false, abstract: false, final false
inline ::GlobalNamespace::Protocol16_GpType GetCodeOfType(::System::Type*  type) ;

/// @brief Method GetTypeOfCode, addr 0xa6d2264, size 0x35c, virtual false, abstract: false, final false
inline ::System::Type* GetTypeOfCode(uint8_t  typeCode) ;

static inline ::ExitGames::Client::Photon::Protocol16* New_ctor() ;

/// @brief Method Serialize, addr 0xa6d34e8, size 0x7dc, virtual true, abstract: false, final false
inline void Serialize(::ExitGames::Client::Photon::StreamBuffer*  dout, ::System::Object*  serObject, bool  setType) ;

/// @brief Method SerializeArray, addr 0xa6d4b50, size 0x600, virtual false, abstract: false, final false
inline void SerializeArray(::ExitGames::Client::Photon::StreamBuffer*  dout, ::System::Array*  serObject, bool  setType) ;

/// @brief Method SerializeBoolean, addr 0xa6d3d10, size 0x4c, virtual false, abstract: false, final false
inline void SerializeBoolean(::ExitGames::Client::Photon::StreamBuffer*  dout, bool  serObject, bool  setType) ;

/// @brief Method SerializeByte, addr 0xa6d3cc4, size 0x4c, virtual false, abstract: false, final false
inline void SerializeByte(::ExitGames::Client::Photon::StreamBuffer*  dout, uint8_t  serObject, bool  setType) ;

/// @brief Method SerializeByteArray, addr 0xa6d4724, size 0x6c, virtual false, abstract: false, final false
inline void SerializeByteArray(::ExitGames::Client::Photon::StreamBuffer*  dout, ::ArrayW<uint8_t>  serObject, bool  setType) ;

/// @brief Method SerializeByteArraySegment, addr 0xa6d51c8, size 0x90, virtual false, abstract: false, final false
inline void SerializeByteArraySegment(::ExitGames::Client::Photon::StreamBuffer*  dout, ::ArrayW<uint8_t>  serObject, int32_t  offset, int32_t  count, bool  setType) ;

/// @brief Method SerializeCustom, addr 0xa6d1950, size 0x444, virtual false, abstract: false, final false
inline bool SerializeCustom(::ExitGames::Client::Photon::StreamBuffer*  dout, ::System::Object*  serObject) ;

/// @brief Method SerializeDictionary, addr 0xa6d5150, size 0x78, virtual false, abstract: false, final false
inline void SerializeDictionary(::ExitGames::Client::Photon::StreamBuffer*  dout, ::System::Collections::IDictionary*  serObject, bool  setType) ;

/// @brief Method SerializeDictionaryElements, addr 0xa6d5774, size 0x4a4, virtual false, abstract: false, final false
inline void SerializeDictionaryElements(::ExitGames::Client::Photon::StreamBuffer*  writer, ::System::Object*  dict, bool  setKeyType, bool  setValueType) ;

/// @brief Method SerializeDictionaryHeader, addr 0xa6d5504, size 0x270, virtual false, abstract: false, final false
inline void SerializeDictionaryHeader(::ExitGames::Client::Photon::StreamBuffer*  writer, ::System::Object*  dict, ::by_ref<bool>  setKeyType, ::by_ref<bool>  setValueType) ;

/// @brief Method SerializeDictionaryHeader, addr 0xa6d5cf0, size 0x20, virtual false, abstract: false, final false
inline void SerializeDictionaryHeader(::ExitGames::Client::Photon::StreamBuffer*  writer, ::System::Type*  dictType) ;

/// @brief Method SerializeDouble, addr 0xa6d4348, size 0x1d8, virtual false, abstract: false, final false
inline void SerializeDouble(::ExitGames::Client::Photon::StreamBuffer*  dout, double_t  serObject, bool  setType) ;

/// @brief Method SerializeEventData, addr 0xa6d33dc, size 0x60, virtual true, abstract: false, final false
inline void SerializeEventData(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::EventData*  serObject, bool  setType) ;

/// @brief Method SerializeFloat, addr 0xa6d4094, size 0x2b4, virtual false, abstract: false, final false
inline void SerializeFloat(::ExitGames::Client::Photon::StreamBuffer*  dout, float_t  serObject, bool  setType) ;

/// @brief Method SerializeHashTable, addr 0xa6d4520, size 0x204, virtual false, abstract: false, final false
inline void SerializeHashTable(::ExitGames::Client::Photon::StreamBuffer*  dout, ::ExitGames::Client::Photon::Hashtable*  serObject, bool  setType) ;

/// @brief Method SerializeIntArrayOptimized, addr 0xa6d498c, size 0x1c4, virtual false, abstract: false, final false
inline void SerializeIntArrayOptimized(::ExitGames::Client::Photon::StreamBuffer*  inWriter, ::ArrayW<int32_t>  serObject, bool  setType) ;

/// @brief Method SerializeInteger, addr 0xa6d3d5c, size 0x168, virtual false, abstract: false, final false
inline void SerializeInteger(::ExitGames::Client::Photon::StreamBuffer*  dout, int32_t  serObject, bool  setType) ;

/// @brief Method SerializeLengthAsShort, addr 0xa6d1d94, size 0x19c, virtual false, abstract: false, final false
inline void SerializeLengthAsShort(::ExitGames::Client::Photon::StreamBuffer*  dout, int32_t  serObject, ::StringW  type) ;

/// @brief Method SerializeLong, addr 0xa6d3ec4, size 0x1d0, virtual false, abstract: false, final false
inline void SerializeLong(::ExitGames::Client::Photon::StreamBuffer*  dout, int64_t  serObject, bool  setType) ;

/// @brief Method SerializeObjectArray, addr 0xa6d4790, size 0x1fc, virtual false, abstract: false, final false
inline void SerializeObjectArray(::ExitGames::Client::Photon::StreamBuffer*  dout, ::System::Collections::IList*  objects, bool  setType) ;

/// @brief Method SerializeOperationRequest, addr 0xa6d28cc, size 0x28, virtual false, abstract: false, final false
inline void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::OperationRequest*  operation, bool  setType) ;

/// @brief Method SerializeOperationRequest, addr 0xa6d2b6c, size 0x6c, virtual true, abstract: false, final false
inline void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  operationCode, ::ExitGames::Client::Photon::ParameterDictionary*  parameters, bool  setType) ;

/// [Obsolete("Use ParameterDictionary instead.")]
/// @brief Method SerializeOperationRequest, addr 0xa6d28f4, size 0x6c, virtual true, abstract: false, final false
inline void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  operationCode, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  parameters, bool  setType) ;

/// @brief Method SerializeOperationResponse, addr 0xa6d2f88, size 0xbc, virtual true, abstract: false, final false
inline void SerializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::OperationResponse*  serObject, bool  setType) ;

/// @brief Method SerializeParameterTable, addr 0xa6d2bd8, size 0x1f8, virtual false, abstract: false, final false
inline void SerializeParameterTable(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::ParameterDictionary*  parameters) ;

/// [Obsolete("Use ParameterDictionary instead of Dictionary<byte, object>.")]
/// @brief Method SerializeParameterTable, addr 0xa6d2960, size 0x20c, virtual false, abstract: false, final false
inline void SerializeParameterTable(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  parameters) ;

/// @brief Method SerializeShort, addr 0xa6d5258, size 0x138, virtual true, abstract: false, final false
inline void SerializeShort(::ExitGames::Client::Photon::StreamBuffer*  dout, int16_t  serObject, bool  setType) ;

/// @brief Method SerializeString, addr 0xa6d5390, size 0x174, virtual true, abstract: false, final false
inline void SerializeString(::ExitGames::Client::Photon::StreamBuffer*  stream, ::StringW  value, bool  setType) ;

/// @brief Method SerializeStringArray, addr 0xa6d5c18, size 0xd8, virtual false, abstract: false, final false
inline void SerializeStringArray(::ExitGames::Client::Photon::StreamBuffer*  dout, ::ArrayW<::StringW>  serObject, bool  setType) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_memDouble() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_memDouble() ;

constexpr ::ArrayW<double_t> const& __cordl_internal_get_memDoubleBlock() const;

constexpr ::ArrayW<double_t>& __cordl_internal_get_memDoubleBlock() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_memDoubleBlockBytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_memDoubleBlockBytes() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_memFloat() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_memFloat() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_memInteger() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_memInteger() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_memLong() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_memLong() ;

constexpr ::ArrayW<int64_t> const& __cordl_internal_get_memLongBlock() const;

constexpr ::ArrayW<int64_t>& __cordl_internal_get_memLongBlock() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_memLongBlockBytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_memLongBlockBytes() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_memShort() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_memShort() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_versionBytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_versionBytes() ;

constexpr void __cordl_internal_set_memDouble(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_memDoubleBlock(::ArrayW<double_t>  value) ;

constexpr void __cordl_internal_set_memDoubleBlockBytes(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_memFloat(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_memInteger(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_memLong(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_memLongBlock(::ArrayW<int64_t>  value) ;

constexpr void __cordl_internal_set_memLongBlockBytes(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_memShort(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_versionBytes(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0xa6d0e14, size 0x1bc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<float_t> getStaticF_memFloatBlock() ;

static inline ::ArrayW<uint8_t> getStaticF_memFloatBlockBytes() ;

/// @brief Method get_ProtocolType, addr 0xa6d1908, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ProtocolType() ;

/// @brief Method get_VersionBytes, addr 0xa6d1948, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> get_VersionBytes() ;

static inline void setStaticF_memFloatBlock(::ArrayW<float_t>  value) ;

static inline void setStaticF_memFloatBlockBytes(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Protocol16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Protocol16", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Protocol16(Protocol16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Protocol16", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Protocol16(Protocol16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26465};

/// @brief Field versionBytes, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___versionBytes;

/// @brief Field memShort, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___memShort;

/// @brief Field memLongBlock, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int64_t>  ___memLongBlock;

/// @brief Field memLongBlockBytes, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___memLongBlockBytes;

/// @brief Field memDoubleBlock, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<double_t>  ___memDoubleBlock;

/// @brief Field memDoubleBlockBytes, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___memDoubleBlockBytes;

/// @brief Field memInteger, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___memInteger;

/// @brief Field memLong, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___memLong;

/// @brief Field memFloat, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___memFloat;

/// @brief Field memDouble, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___memDouble;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___versionBytes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memShort) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memLongBlock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memLongBlockBytes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memDoubleBlock) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memDoubleBlockBytes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memInteger) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memLong) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memFloat) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol16, ___memDouble) == 0x60, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::Protocol16) == 0x68, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
