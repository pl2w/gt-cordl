#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/Protocol18.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__IProtocol_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Protocol18)
namespace ExitGames::Client::Photon::StructWrapping {
class StructWrapper;
}
namespace ExitGames::Client::Photon {
class ByteArraySlice;
}
namespace ExitGames::Client::Photon {
class CustomType;
}
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
struct Protocol18_GpType;
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
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class Protocol18;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::Protocol18*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::Protocol18*, "ExitGames.Client.Photon", "Protocol18");
// Dependencies ExitGames.Client.Photon.IProtocol
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.Protocol18
class CORDL_TYPE Protocol18 : public ::ExitGames::Client::Photon::IProtocol {
public:
// Declarations
using GpType = ::GlobalNamespace::Protocol18_GpType;

 __declspec(property(get=get_ProtocolType)) ::StringW  ProtocolType;

 __declspec(property(get=get_VersionBytes)) ::ArrayW<uint8_t>  VersionBytes;

/// @brief Field boolMasks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_boolMasks, put=setStaticF_boolMasks)) ::ArrayW<uint8_t>  boolMasks;

/// @brief Field memCompressedUInt32, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_memCompressedUInt32, put=__cordl_internal_set_memCompressedUInt32)) ::ArrayW<uint8_t>  memCompressedUInt32;

/// @brief Field memCompressedUInt64, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_memCompressedUInt64, put=__cordl_internal_set_memCompressedUInt64)) ::ArrayW<uint8_t>  memCompressedUInt64;

/// @brief Field memCustomTypeBodyLengthSerialized, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_memCustomTypeBodyLengthSerialized, put=__cordl_internal_set_memCustomTypeBodyLengthSerialized)) ::ArrayW<uint8_t>  memCustomTypeBodyLengthSerialized;

/// @brief Field memDoubleBlock, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_memDoubleBlock, put=__cordl_internal_set_memDoubleBlock)) ::ArrayW<double_t>  memDoubleBlock;

/// @brief Field memFloatBlock, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_memFloatBlock, put=__cordl_internal_set_memFloatBlock)) ::ArrayW<float_t>  memFloatBlock;

/// @brief Field versionBytes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_versionBytes, put=__cordl_internal_set_versionBytes)) ::ArrayW<uint8_t>  versionBytes;

/// @brief Method DecodeZigZag32, addr 0xa6dc2a8, size 0x10, virtual false, abstract: false, final false
inline int32_t DecodeZigZag32(uint32_t  value) ;

/// @brief Method DecodeZigZag64, addr 0xa6dc3a8, size 0x10, virtual false, abstract: false, final false
inline int64_t DecodeZigZag64(uint64_t  value) ;

/// @brief Method Deserialize, addr 0xa6d7fb0, size 0xc, virtual true, abstract: false, final false
inline ::System::Object* Deserialize(::ExitGames::Client::Photon::StreamBuffer*  din, uint8_t  type, ::GlobalNamespace::IProtocol_DeserializationFlags  flags) ;

/// @brief Method DeserializeByte, addr 0xa6d8930, size 0x18, virtual true, abstract: false, final false
inline uint8_t DeserializeByte(::ExitGames::Client::Photon::StreamBuffer*  din) ;

/// @brief Method DeserializeDisconnectMessage, addr 0xa6db83c, size 0x10c, virtual true, abstract: false, final false
inline ::ExitGames::Client::Photon::DisconnectMessage* DeserializeDisconnectMessage(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method DeserializeEventData, addr 0xa6db174, size 0x1e8, virtual true, abstract: false, final false
inline ::ExitGames::Client::Photon::EventData* DeserializeEventData(::ExitGames::Client::Photon::StreamBuffer*  din, ::ExitGames::Client::Photon::EventData*  target, ::GlobalNamespace::IProtocol_DeserializationFlags  flags) ;

/// @brief Method DeserializeOperationRequest, addr 0xa6db66c, size 0xac, virtual true, abstract: false, final false
inline ::ExitGames::Client::Photon::OperationRequest* DeserializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  din, ::GlobalNamespace::IProtocol_DeserializationFlags  flags) ;

/// @brief Method DeserializeOperationResponse, addr 0xa6db718, size 0x124, virtual true, abstract: false, final false
inline ::ExitGames::Client::Photon::OperationResponse* DeserializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags) ;

/// @brief Method DeserializeShort, addr 0xa6d88c8, size 0x4, virtual true, abstract: false, final false
inline int16_t DeserializeShort(::ExitGames::Client::Photon::StreamBuffer*  din) ;

/// @brief Method EncodeZigZag32, addr 0xa6e025c, size 0xc, virtual false, abstract: false, final false
inline uint32_t EncodeZigZag32(int32_t  value) ;

/// @brief Method EncodeZigZag64, addr 0xa6e0268, size 0xc, virtual false, abstract: false, final false
inline uint64_t EncodeZigZag64(int64_t  value) ;

/// @brief Method GetAllowedDictionaryKeyTypes, addr 0xa6d8960, size 0x14c, virtual false, abstract: false, final false
static inline ::System::Type* GetAllowedDictionaryKeyTypes(::GlobalNamespace::Protocol18_GpType  gpType) ;

/// @brief Method GetClrArrayType, addr 0xa6d8aac, size 0x300, virtual false, abstract: false, final false
static inline ::System::Type* GetClrArrayType(::GlobalNamespace::Protocol18_GpType  gpType) ;

/// @brief Method GetCodeOfType, addr 0xa6d8dac, size 0x5e0, virtual false, abstract: false, final false
inline ::GlobalNamespace::Protocol18_GpType GetCodeOfType(::System::Type*  type) ;

/// @brief Method GetCodeOfTypeCode, addr 0xa6d938c, size 0x24, virtual false, abstract: false, final false
inline ::GlobalNamespace::Protocol18_GpType GetCodeOfTypeCode(::System::TypeCode  type) ;

/// @brief Method GetDictArrayType, addr 0xa6dbe28, size 0xf0, virtual false, abstract: false, final false
inline ::System::Type* GetDictArrayType(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

static inline ::ExitGames::Client::Photon::Protocol18* New_ctor() ;

/// @brief Method Read, addr 0xa6d93b0, size 0x54, virtual false, abstract: false, final false
inline ::System::Object* Read(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters) ;

/// @brief Method Read, addr 0xa6d7fbc, size 0x90c, virtual false, abstract: false, final false
inline ::System::Object* Read(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  gpType, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters) ;

/// @brief Method ReadArrayInArray, addr 0xa6dab2c, size 0x144, virtual false, abstract: false, final false
inline ::System::Array* ReadArrayInArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters) ;

/// @brief Method ReadBoolean, addr 0xa6d9728, size 0x28, virtual false, abstract: false, final false
inline bool ReadBoolean(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadBooleanArray, addr 0xa6d9ca8, size 0x224, virtual false, abstract: false, final false
inline ::ArrayW<bool> ReadBooleanArray(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadByte, addr 0xa6d8948, size 0x18, virtual false, abstract: false, final false
inline uint8_t ReadByte(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadByteArray, addr 0xa6d9ecc, size 0x84, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ReadByteArray(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadCompressedInt32, addr 0xa6d98b0, size 0x1c, virtual false, abstract: false, final false
inline int32_t ReadCompressedInt32(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadCompressedInt32Array, addr 0xa6da9b8, size 0xb8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> ReadCompressedInt32Array(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadCompressedInt64, addr 0xa6d98cc, size 0x1c, virtual false, abstract: false, final false
inline int64_t ReadCompressedInt64(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadCompressedInt64Array, addr 0xa6daa70, size 0xbc, virtual false, abstract: false, final false
inline ::ArrayW<int64_t> ReadCompressedInt64Array(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadCompressedUInt32, addr 0xa6daef0, size 0x284, virtual false, abstract: false, final false
inline uint32_t ReadCompressedUInt32(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadCompressedUInt64, addr 0xa6dc2b8, size 0xf0, virtual false, abstract: false, final false
inline uint64_t ReadCompressedUInt64(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadCustomType, addr 0xa6d9404, size 0x324, virtual false, abstract: false, final false
inline ::System::Object* ReadCustomType(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  gpType) ;

/// @brief Method ReadCustomTypeArray, addr 0xa6da520, size 0x498, virtual false, abstract: false, final false
inline ::System::Object* ReadCustomTypeArray(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadDictionary, addr 0xa6d9a8c, size 0xf0, virtual false, abstract: false, final false
inline ::System::Collections::IDictionary* ReadDictionary(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters) ;

/// @brief Method ReadDictionaryArray, addr 0xa6da338, size 0x1e8, virtual false, abstract: false, final false
inline ::ArrayW<::System::Collections::IDictionary*> ReadDictionaryArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters) ;

/// @brief Method ReadDictionaryElements, addr 0xa6dbf18, size 0x1b4, virtual false, abstract: false, final false
inline bool ReadDictionaryElements(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::Protocol18_GpType  keyReadType, ::GlobalNamespace::Protocol18_GpType  valueReadType, ::System::Collections::IDictionary*  dictionary, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters) ;

/// @brief Method ReadDictionaryType, addr 0xa6dbbf8, size 0x230, virtual false, abstract: false, final false
inline ::System::Type* ReadDictionaryType(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadDictionaryType, addr 0xa6db948, size 0x2b0, virtual false, abstract: false, final false
inline ::System::Type* ReadDictionaryType(::ExitGames::Client::Photon::StreamBuffer*  stream, ::by_ref<::GlobalNamespace::Protocol18_GpType>  keyReadType, ::by_ref<::GlobalNamespace::Protocol18_GpType>  valueReadType) ;

/// @brief Method ReadDouble, addr 0xa6d9788, size 0x38, virtual false, abstract: false, final false
inline double_t ReadDouble(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadDoubleArray, addr 0xa6d9ffc, size 0xa8, virtual false, abstract: false, final false
inline ::ArrayW<double_t> ReadDoubleArray(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadHashtable, addr 0xa6d98e8, size 0x1a4, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::Hashtable* ReadHashtable(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters) ;

/// @brief Method ReadHashtableArray, addr 0xa6da220, size 0x118, virtual false, abstract: false, final false
inline ::ArrayW<::ExitGames::Client::Photon::Hashtable*> ReadHashtableArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters) ;

/// @brief Method ReadInt1, addr 0xa6d984c, size 0x44, virtual false, abstract: false, final false
inline int32_t ReadInt1(::ExitGames::Client::Photon::StreamBuffer*  stream, bool  signNegative) ;

/// @brief Method ReadInt16, addr 0xa6d88cc, size 0x64, virtual false, abstract: false, final false
inline int16_t ReadInt16(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadInt16Array, addr 0xa6d9f50, size 0xac, virtual false, abstract: false, final false
inline ::ArrayW<int16_t> ReadInt16Array(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadInt2, addr 0xa6d9890, size 0x20, virtual false, abstract: false, final false
inline int32_t ReadInt2(::ExitGames::Client::Photon::StreamBuffer*  stream, bool  signNegative) ;

/// @brief Method ReadInt32, addr 0xa6dacd4, size 0xa0, virtual false, abstract: false, final false
inline int32_t ReadInt32(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadInt64, addr 0xa6dad74, size 0x110, virtual false, abstract: false, final false
inline int64_t ReadInt64(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadIntArray, addr 0xa6db5bc, size 0xb0, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> ReadIntArray(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadNonAllocByteArray, addr 0xa6dae84, size 0x6c, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::ByteArraySlice* ReadNonAllocByteArray(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadObjectArray, addr 0xa6d9b7c, size 0x12c, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*> ReadObjectArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters) ;

/// @brief Method ReadParameterDictionary, addr 0xa6db4a0, size 0x11c, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::ParameterDictionary* ReadParameterDictionary(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::ParameterDictionary*  target, ::GlobalNamespace::IProtocol_DeserializationFlags  flags) ;

/// [Obsolete("Use ParameterDictionary instead.")]
/// @brief Method ReadParameterTable, addr 0xa6db35c, size 0x144, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>* ReadParameterTable(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  target, ::GlobalNamespace::IProtocol_DeserializationFlags  flags) ;

/// @brief Method ReadSingle, addr 0xa6d9750, size 0x38, virtual false, abstract: false, final false
inline float_t ReadSingle(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadSingleArray, addr 0xa6da0a4, size 0xa8, virtual false, abstract: false, final false
inline ::ArrayW<float_t> ReadSingleArray(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadString, addr 0xa6d97c0, size 0x8c, virtual false, abstract: false, final false
inline ::StringW ReadString(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadStringArray, addr 0xa6da14c, size 0xd4, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> ReadStringArray(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadUShort, addr 0xa6dac70, size 0x64, virtual false, abstract: false, final false
inline uint16_t ReadUShort(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method ReadWrapperArray, addr 0xa6dc0cc, size 0x1dc, virtual false, abstract: false, final false
inline ::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper*> ReadWrapperArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters) ;

/// @brief Method Serialize, addr 0xa6d7d84, size 0x4, virtual true, abstract: false, final false
inline void Serialize(::ExitGames::Client::Photon::StreamBuffer*  dout, ::System::Object*  serObject, bool  setType) ;

/// @brief Method SerializeEventData, addr 0xa6debb8, size 0x60, virtual true, abstract: false, final false
inline void SerializeEventData(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::EventData*  serObject, bool  setType) ;

/// @brief Method SerializeOperationRequest, addr 0xa6de1cc, size 0x28, virtual false, abstract: false, final false
inline void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::OperationRequest*  operation, bool  setType) ;

/// @brief Method SerializeOperationRequest, addr 0xa6df030, size 0x6c, virtual true, abstract: false, final false
inline void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  operationCode, ::ExitGames::Client::Photon::ParameterDictionary*  parameters, bool  setType) ;

/// [Obsolete("Use ParameterDictionary instead.")]
/// @brief Method SerializeOperationRequest, addr 0xa6defc4, size 0x6c, virtual true, abstract: false, final false
inline void SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  operationCode, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  parameters, bool  setType) ;

/// @brief Method SerializeOperationResponse, addr 0xa6df09c, size 0xbc, virtual true, abstract: false, final false
inline void SerializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::OperationResponse*  serObject, bool  setType) ;

/// @brief Method SerializeShort, addr 0xa6d7df8, size 0x4, virtual true, abstract: false, final false
inline void SerializeShort(::ExitGames::Client::Photon::StreamBuffer*  dout, int16_t  serObject, bool  setType) ;

/// @brief Method SerializeString, addr 0xa6d7e70, size 0x4, virtual true, abstract: false, final false
inline void SerializeString(::ExitGames::Client::Photon::StreamBuffer*  dout, ::StringW  serObject, bool  setType) ;

/// @brief Method Write, addr 0xa6dc3b8, size 0xb0c, virtual false, abstract: false, final false
inline void Write(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value, ::GlobalNamespace::Protocol18_GpType  gpType, bool  writeType) ;

/// @brief Method Write, addr 0xa6d7d88, size 0x70, virtual false, abstract: false, final false
inline void Write(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value, bool  writeType) ;

/// @brief Method WriteArrayHeader, addr 0xa6df64c, size 0xb4, virtual false, abstract: false, final false
inline bool WriteArrayHeader(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Type*  type) ;

/// @brief Method WriteArrayInArray, addr 0xa6ddc80, size 0x100, virtual false, abstract: false, final false
inline void WriteArrayInArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value, bool  writeType) ;

/// @brief Method WriteArraySegmentByte, addr 0xa6dcf44, size 0x108, virtual false, abstract: false, final false
inline void WriteArraySegmentByte(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::ArraySegment_1<uint8_t>  seg, bool  writeType) ;

/// @brief Method WriteArrayType, addr 0xa6dfdfc, size 0x368, virtual false, abstract: false, final false
inline bool WriteArrayType(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Type*  type, ::by_ref<::GlobalNamespace::Protocol18_GpType>  writeType) ;

/// @brief Method WriteBoolArray, addr 0xa6de80c, size 0x238, virtual false, abstract: false, final false
inline void WriteBoolArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ArrayW<bool>  value, bool  writeType) ;

/// @brief Method WriteBoolean, addr 0xa6dd04c, size 0x44, virtual false, abstract: false, final false
inline void WriteBoolean(::ExitGames::Client::Photon::StreamBuffer*  stream, bool  value, bool  writeType) ;

/// @brief Method WriteByte, addr 0xa6dd090, size 0x60, virtual false, abstract: false, final false
inline void WriteByte(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  value, bool  writeType) ;

/// @brief Method WriteByteArray, addr 0xa6de1f4, size 0x68, virtual false, abstract: false, final false
inline void WriteByteArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ArrayW<uint8_t>  value, bool  writeType) ;

/// @brief Method WriteByteArraySlice, addr 0xa6dcec4, size 0x80, virtual false, abstract: false, final false
inline void WriteByteArraySlice(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::ByteArraySlice*  buffer, bool  writeType) ;

/// @brief Method WriteCompressedInt32, addr 0xa6dd0f0, size 0x130, virtual false, abstract: false, final false
inline void WriteCompressedInt32(::ExitGames::Client::Photon::StreamBuffer*  stream, int32_t  value, bool  writeType) ;

/// @brief Method WriteCompressedInt64, addr 0xa6dd220, size 0x130, virtual false, abstract: false, final false
inline void WriteCompressedInt64(::ExitGames::Client::Photon::StreamBuffer*  stream, int64_t  value, bool  writeType) ;

/// @brief Method WriteCompressedUInt32, addr 0xa6df5d8, size 0x74, virtual false, abstract: false, final false
inline int32_t WriteCompressedUInt32(::ArrayW<uint8_t>  buffer, uint32_t  value) ;

/// @brief Method WriteCompressedUInt32, addr 0xa6e0164, size 0xf4, virtual false, abstract: false, final false
inline void WriteCompressedUInt32(::ExitGames::Client::Photon::StreamBuffer*  stream, uint32_t  value) ;

/// @brief Method WriteCompressedUInt64, addr 0xa6e0274, size 0x190, virtual false, abstract: false, final false
inline void WriteCompressedUInt64(::ExitGames::Client::Photon::StreamBuffer*  stream, uint64_t  value) ;

/// @brief Method WriteCustomType, addr 0xa6dd5e0, size 0x1f0, virtual false, abstract: false, final false
inline void WriteCustomType(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value, bool  writeType) ;

/// @brief Method WriteCustomTypeArray, addr 0xa6dd7d0, size 0x4b0, virtual false, abstract: false, final false
inline void WriteCustomTypeArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value, bool  writeType) ;

/// @brief Method WriteCustomTypeBody, addr 0xa6df20c, size 0x3cc, virtual false, abstract: false, final false
inline void WriteCustomTypeBody(::ExitGames::Client::Photon::CustomType*  customType, ::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value) ;

/// @brief Method WriteDictionary, addr 0xa6ddd80, size 0xdc, virtual false, abstract: false, final false
inline void WriteDictionary(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  dict, bool  setType) ;

/// @brief Method WriteDictionaryArray, addr 0xa6de438, size 0xf8, virtual false, abstract: false, final false
inline void WriteDictionaryArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ArrayW<::System::Collections::IDictionary*>  dictArray, bool  writeType) ;

/// @brief Method WriteDictionaryElements, addr 0xa6df700, size 0x3b8, virtual false, abstract: false, final false
inline void WriteDictionaryElements(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Collections::IDictionary*  dictionary, ::GlobalNamespace::Protocol18_GpType  keyWriteType, ::GlobalNamespace::Protocol18_GpType  valueWriteType) ;

/// @brief Method WriteDictionaryHeader, addr 0xa6dfab8, size 0x344, virtual false, abstract: false, final false
inline void WriteDictionaryHeader(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Type*  type, ::by_ref<::GlobalNamespace::Protocol18_GpType>  keyWriteType, ::by_ref<::GlobalNamespace::Protocol18_GpType>  valueWriteType) ;

/// @brief Method WriteDouble, addr 0xa6dd498, size 0x148, virtual false, abstract: false, final false
inline void WriteDouble(::ExitGames::Client::Photon::StreamBuffer*  stream, double_t  value, bool  writeType) ;

/// @brief Method WriteDoubleArray, addr 0xa6de530, size 0x98, virtual false, abstract: false, final false
inline void WriteDoubleArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ArrayW<double_t>  values, bool  setType) ;

/// @brief Method WriteHashtable, addr 0xa6dde5c, size 0x228, virtual false, abstract: false, final false
inline void WriteHashtable(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value, bool  writeType) ;

/// @brief Method WriteHashtableArray, addr 0xa6de660, size 0x108, virtual false, abstract: false, final false
inline void WriteHashtableArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value, bool  writeType) ;

/// @brief Method WriteInt16, addr 0xa6d7dfc, size 0x74, virtual false, abstract: false, final false
inline void WriteInt16(::ExitGames::Client::Photon::StreamBuffer*  stream, int16_t  value, bool  writeType) ;

/// @brief Method WriteInt16Array, addr 0xa6de768, size 0xa4, virtual false, abstract: false, final false
inline void WriteInt16Array(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ArrayW<int16_t>  value, bool  writeType) ;

/// @brief Method WriteInt32ArrayCompressed, addr 0xa6de084, size 0xa4, virtual false, abstract: false, final false
inline void WriteInt32ArrayCompressed(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ArrayW<int32_t>  value, bool  writeType) ;

/// @brief Method WriteInt64ArrayCompressed, addr 0xa6de128, size 0xa4, virtual false, abstract: false, final false
inline void WriteInt64ArrayCompressed(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ArrayW<int64_t>  values, bool  setType) ;

/// @brief Method WriteIntLength, addr 0xa6df17c, size 0x4, virtual false, abstract: false, final false
inline void WriteIntLength(::ExitGames::Client::Photon::StreamBuffer*  stream, int32_t  value) ;

/// @brief Method WriteObjectArray, addr 0xa6de25c, size 0x1dc, virtual false, abstract: false, final false
inline void WriteObjectArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Collections::IList*  array, bool  writeType) ;

/// @brief Method WriteObjectArray, addr 0xa6df180, size 0x8c, virtual false, abstract: false, final false
inline void WriteObjectArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  array, bool  writeType) ;

/// @brief Method WriteParameterTable, addr 0xa6dec18, size 0x1cc, virtual false, abstract: false, final false
inline void WriteParameterTable(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::ParameterDictionary*  parameters) ;

/// @brief Method WriteParameterTable, addr 0xa6dede4, size 0x1e0, virtual false, abstract: false, final false
inline void WriteParameterTable(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  parameters) ;

/// @brief Method WriteSingle, addr 0xa6dd350, size 0x148, virtual false, abstract: false, final false
inline void WriteSingle(::ExitGames::Client::Photon::StreamBuffer*  stream, float_t  value, bool  writeType) ;

/// @brief Method WriteSingleArray, addr 0xa6de5c8, size 0x98, virtual false, abstract: false, final false
inline void WriteSingleArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ArrayW<float_t>  values, bool  setType) ;

/// @brief Method WriteString, addr 0xa6d7e74, size 0x13c, virtual false, abstract: false, final false
inline void WriteString(::ExitGames::Client::Photon::StreamBuffer*  stream, ::StringW  value, bool  writeType) ;

/// @brief Method WriteStringArray, addr 0xa6dea44, size 0x174, virtual false, abstract: false, final false
inline void WriteStringArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value0, bool  writeType) ;

/// @brief Method WriteUShort, addr 0xa6df158, size 0x24, virtual false, abstract: false, final false
inline void WriteUShort(::ExitGames::Client::Photon::StreamBuffer*  stream, uint16_t  value) ;

/// @brief Method WriteVarInt32, addr 0xa6e0258, size 0x4, virtual false, abstract: false, final false
inline void WriteVarInt32(::ExitGames::Client::Photon::StreamBuffer*  stream, int32_t  value, bool  writeType) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_memCompressedUInt32() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_memCompressedUInt32() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_memCompressedUInt64() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_memCompressedUInt64() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_memCustomTypeBodyLengthSerialized() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_memCustomTypeBodyLengthSerialized() ;

constexpr ::ArrayW<double_t> const& __cordl_internal_get_memDoubleBlock() const;

constexpr ::ArrayW<double_t>& __cordl_internal_get_memDoubleBlock() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_memFloatBlock() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_memFloatBlock() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_versionBytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_versionBytes() ;

constexpr void __cordl_internal_set_memCompressedUInt32(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_memCompressedUInt64(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_memCustomTypeBodyLengthSerialized(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_memDoubleBlock(::ArrayW<double_t>  value) ;

constexpr void __cordl_internal_set_memFloatBlock(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_versionBytes(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0xa6e0404, size 0x14c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<uint8_t> getStaticF_boolMasks() ;

/// @brief Method get_ProtocolType, addr 0xa6d7d3c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_ProtocolType() ;

/// @brief Method get_VersionBytes, addr 0xa6d7d7c, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> get_VersionBytes() ;

static inline void setStaticF_boolMasks(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Protocol18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Protocol18", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Protocol18(Protocol18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Protocol18", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Protocol18(Protocol18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26468};

/// @brief Field versionBytes, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___versionBytes;

/// @brief Field memDoubleBlock, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<double_t>  ___memDoubleBlock;

/// @brief Field memFloatBlock, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<float_t>  ___memFloatBlock;

/// @brief Field memCustomTypeBodyLengthSerialized, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___memCustomTypeBodyLengthSerialized;

/// @brief Field memCompressedUInt32, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___memCompressedUInt32;

/// @brief Field memCompressedUInt64, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___memCompressedUInt64;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::Protocol18, ___versionBytes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol18, ___memDoubleBlock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol18, ___memFloatBlock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol18, ___memCustomTypeBodyLengthSerialized) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol18, ___memCompressedUInt32) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::Protocol18, ___memCompressedUInt64) == 0x40, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::Protocol18) == 0x48, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
