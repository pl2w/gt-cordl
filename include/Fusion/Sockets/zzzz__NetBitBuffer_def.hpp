#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetBitBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetBitBuffer)
namespace Fusion::Sockets {
class INetBitWriteStream;
}
namespace Fusion::Sockets {
struct NetBitBufferBlock;
}
namespace Fusion::Sockets {
struct NetPacketType;
}
namespace Fusion {
class ILogDumpable;
}
namespace GlobalNamespace {
struct NetBitBuffer_Offset;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetBitBuffer;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetBitBuffer);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetBitBuffer, "Fusion.Sockets", "NetBitBuffer");
// Dependencies Fusion.Sockets.NetAddress
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetBitBuffer
struct CORDL_TYPE NetBitBuffer {
public:
// Declarations
using Offset = ::GlobalNamespace::NetBitBuffer_Offset;

 __declspec(property(get=get_Data, put=set_Data)) uint64_t*  Data;

 __declspec(property(get=get_DoneOrOverflow)) bool  DoneOrOverflow;

 __declspec(property(get=get_Group, put=set_Group)) int16_t  Group;

 __declspec(property(get=get_IsOnEvenByte)) bool  IsOnEvenByte;

 __declspec(property(get=get_LengthBits)) int32_t  LengthBits;

 __declspec(property(get=get_LengthBytes, put=set_LengthBytes)) int32_t  LengthBytes;

 __declspec(property(get=get_MoreToRead)) bool  MoreToRead;

 __declspec(property(get=get_OffsetBits, put=set_OffsetBits)) int32_t  OffsetBits;

 __declspec(property(get=get_OffsetBytes)) int32_t  OffsetBytes;

 __declspec(property(get=get_Overflow)) bool  Overflow;

 __declspec(property(get=get_OverflowOrLessThanOneByteRemaining)) bool  OverflowOrLessThanOneByteRemaining;

 __declspec(property(get=get_PacketType, put=set_PacketType)) ::Fusion::Sockets::NetPacketType  PacketType;

/// @brief Convert operator to "::Fusion::ILogDumpable"
constexpr operator  ::Fusion::ILogDumpable*() ;

/// @brief Convert operator to "::Fusion::Sockets::INetBitWriteStream"
constexpr operator  ::Fusion::Sockets::INetBitWriteStream*() ;

/// @brief Method Advance, addr 0x6028d90, size 0xfc, virtual false, abstract: false, final false
inline int32_t Advance(int32_t  bits, bool  writing) ;

/// @brief Method Allocate, addr 0x60273fc, size 0xdc, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetBitBuffer* Allocate(int32_t  group, int32_t  size) ;

/// @brief Method CanRead, addr 0x6027ab4, size 0x14, virtual false, abstract: false, final false
inline bool CanRead(int32_t  bits) ;

/// @brief Method CheckBitCount, addr 0x6027c60, size 0x20, virtual false, abstract: false, final false
inline bool CheckBitCount(int32_t  count) ;

/// @brief Method Clear, addr 0x6027688, size 0x44, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Fusion.ILogDumpable.Dump, addr 0x6028e8c, size 0x94, virtual true, abstract: false, final true
inline void Fusion_ILogDumpable_Dump(::System::Text::StringBuilder*  builder) ;

/// @brief Method GetDataPointer, addr 0x6027bdc, size 0x40, virtual false, abstract: false, final false
inline uint8_t* GetDataPointer() ;

/// @brief Method GetOffset, addr 0x60273e8, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NetBitBuffer_Offset GetOffset(::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method PadToByteBoundary, addr 0x6027b80, size 0x5c, virtual false, abstract: false, final false
inline void PadToByteBoundary() ;

/// @brief Method PadToByteBoundaryAndGetPtr, addr 0x6027c1c, size 0x44, virtual false, abstract: false, final false
inline uint8_t* PadToByteBoundaryAndGetPtr() ;

/// @brief Method Peek, addr 0x6028944, size 0x184, virtual false, abstract: false, final false
inline uint64_t Peek(int32_t  bits) ;

/// @brief Method Read, addr 0x602784c, size 0xdc, virtual false, abstract: false, final false
inline uint64_t Read(int32_t  bits) ;

/// @brief Method ReadBoolean, addr 0x6027830, size 0x1c, virtual false, abstract: false, final false
inline bool ReadBoolean() ;

/// @brief Method ReadByte, addr 0x6027964, size 0x6c, virtual false, abstract: false, final false
inline uint8_t ReadByte(int32_t  bits) ;

/// @brief Method ReadBytesAligned, addr 0x60281dc, size 0xbc, virtual false, abstract: false, final false
inline void ReadBytesAligned(::System::Span_1<uint8_t>  buffer) ;

/// @brief Method ReadBytesAligned, addr 0x6028298, size 0x74, virtual false, abstract: false, final false
inline void ReadBytesAligned(void*  buffer, int32_t  length) ;

/// @brief Method ReadInt32, addr 0x6027a0c, size 0x6c, virtual false, abstract: false, final false
inline int32_t ReadInt32(int32_t  bits) ;

/// @brief Method ReadInt32VarLength, addr 0x6028654, size 0x4, virtual false, abstract: false, final false
inline int32_t ReadInt32VarLength() ;

/// @brief Method ReadInt32VarLength, addr 0x602882c, size 0x4, virtual false, abstract: false, final false
inline int32_t ReadInt32VarLength(int32_t  blockSize) ;

/// @brief Method ReadInt64VarLength, addr 0x602870c, size 0x4, virtual false, abstract: false, final false
inline int64_t ReadInt64VarLength(int32_t  blockSize) ;

/// @brief Method ReadUInt32, addr 0x6028ac8, size 0x6c, virtual false, abstract: false, final false
inline uint32_t ReadUInt32(int32_t  bits) ;

/// @brief Method ReadUInt32VarLength, addr 0x6028658, size 0xb4, virtual false, abstract: false, final false
inline uint32_t ReadUInt32VarLength() ;

/// @brief Method ReadUInt32VarLength, addr 0x6028830, size 0x114, virtual false, abstract: false, final false
inline uint32_t ReadUInt32VarLength(int32_t  blockSize) ;

/// @brief Method ReadUInt64, addr 0x6028ba4, size 0x68, virtual false, abstract: false, final false
inline uint64_t ReadUInt64(int32_t  bits) ;

/// @brief Method ReadUInt64VarLength, addr 0x6028710, size 0x11c, virtual false, abstract: false, final false
inline uint64_t ReadUInt64VarLength(int32_t  blockSize) ;

/// @brief Method Release, addr 0x602753c, size 0xd4, virtual false, abstract: false, final false
static inline void Release(::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method ReleaseRef, addr 0x6027524, size 0x18, virtual false, abstract: false, final false
static inline void ReleaseRef(::by_ref<::Fusion::Sockets::NetBitBuffer*>  buffer) ;

/// @brief Method ReplaceDataFromBlockWithTemp, addr 0x60272f4, size 0xf4, virtual false, abstract: false, final false
inline void ReplaceDataFromBlockWithTemp(int32_t  tempSize) ;

/// @brief Method SeekToByteBoundary, addr 0x6027c80, size 0x14, virtual false, abstract: false, final false
inline void SeekToByteBoundary() ;

/// @brief Method SetBufferLengthBytes, addr 0x60274d8, size 0x4c, virtual false, abstract: false, final false
inline void SetBufferLengthBytes(uint64_t*  buffer, int32_t  lenghtInBytes) ;

/// @brief Method Write, addr 0x60276ec, size 0x144, virtual false, abstract: false, final false
inline void Write(uint64_t  value, int32_t  bits) ;

/// @brief Method WriteBoolean, addr 0x60276cc, size 0x20, virtual true, abstract: false, final true
inline bool WriteBoolean(bool  value) ;

/// @brief Method WriteByte, addr 0x6027928, size 0x3c, virtual false, abstract: false, final false
inline void WriteByte(uint8_t  value, int32_t  bits) ;

/// @brief Method WriteBytesAligned, addr 0x6027f24, size 0x2b8, virtual true, abstract: false, final true
inline void WriteBytesAligned(::System::Span_1<uint8_t>  buffer) ;

/// @brief Method WriteBytesAligned, addr 0x6027c94, size 0x290, virtual true, abstract: false, final true
inline void WriteBytesAligned(void*  buffer, int32_t  length) ;

/// @brief Method WriteInt32, addr 0x60279d0, size 0x3c, virtual true, abstract: false, final true
inline void WriteInt32(int32_t  value, int32_t  bits) ;

/// @brief Method WriteInt32VarLength, addr 0x60284a4, size 0x4, virtual true, abstract: false, final true
inline void WriteInt32VarLength(int32_t  value) ;

/// @brief Method WriteInt32VarLength, addr 0x6028504, size 0x4, virtual true, abstract: false, final true
inline void WriteInt32VarLength(int32_t  value, int32_t  blockSize) ;

/// @brief Method WriteInt64VarLength, addr 0x602830c, size 0x4, virtual false, abstract: false, final false
inline void WriteInt64VarLength(int64_t  value, int32_t  blockSize) ;

/// @brief Method WriteSlow, addr 0x6028c8c, size 0x104, virtual false, abstract: false, final false
inline void WriteSlow(uint64_t  value, int32_t  bits) ;

/// @brief Method WriteUInt32, addr 0x6027a78, size 0x3c, virtual false, abstract: false, final false
inline void WriteUInt32(uint32_t  value, int32_t  bits) ;

/// @brief Method WriteUInt32VarLength, addr 0x60284a8, size 0x5c, virtual false, abstract: false, final false
inline void WriteUInt32VarLength(uint32_t  value) ;

/// @brief Method WriteUInt32VarLength, addr 0x6028508, size 0x14c, virtual false, abstract: false, final false
inline void WriteUInt32VarLength(uint32_t  value, int32_t  blockSize) ;

/// @brief Method WriteUInt64, addr 0x6028b34, size 0x70, virtual false, abstract: false, final false
inline void WriteUInt64(uint64_t  value, int32_t  bits) ;

/// @brief Method WriteUInt64AtOffset, addr 0x6028c0c, size 0x80, virtual false, abstract: false, final false
inline void WriteUInt64AtOffset(uint64_t  value, int32_t  offset, int32_t  bits) ;

/// @brief Method WriteUInt64VarLength, addr 0x6028310, size 0x194, virtual true, abstract: false, final true
inline void WriteUInt64VarLength(uint64_t  value, int32_t  blockSize) ;

/// @brief Method get_Data, addr 0x60271fc, size 0x8, virtual false, abstract: false, final false
inline uint64_t* get_Data() ;

/// @brief Method get_DoneOrOverflow, addr 0x60272bc, size 0x10, virtual false, abstract: false, final false
inline bool get_DoneOrOverflow() ;

/// @brief Method get_Group, addr 0x60271e0, size 0xc, virtual false, abstract: false, final false
inline int16_t get_Group() ;

/// @brief Method get_IsOnEvenByte, addr 0x6027ac8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsOnEvenByte() ;

/// @brief Method get_LengthBits, addr 0x602720c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LengthBits() ;

/// @brief Method get_LengthBytes, addr 0x6027214, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LengthBytes() ;

/// @brief Method get_MoreToRead, addr 0x60272cc, size 0x10, virtual false, abstract: false, final false
inline bool get_MoreToRead() ;

/// @brief Method get_OffsetBits, addr 0x6027250, size 0x8, virtual true, abstract: false, final true
inline int32_t get_OffsetBits() ;

/// @brief Method get_OffsetBytes, addr 0x6027ad8, size 0xa8, virtual false, abstract: false, final false
inline int32_t get_OffsetBytes() ;

/// @brief Method get_Overflow, addr 0x6027298, size 0x10, virtual false, abstract: false, final false
inline bool get_Overflow() ;

/// @brief Method get_OverflowOrLessThanOneByteRemaining, addr 0x60272a8, size 0x14, virtual false, abstract: false, final false
inline bool get_OverflowOrLessThanOneByteRemaining() ;

/// @brief Method get_PacketType, addr 0x60272dc, size 0xc, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetPacketType get_PacketType() ;

/// @brief Convert to "::Fusion::ILogDumpable"
constexpr ::Fusion::ILogDumpable* i___Fusion__ILogDumpable() ;

/// @brief Convert to "::Fusion::Sockets::INetBitWriteStream"
constexpr ::Fusion::Sockets::INetBitWriteStream* i___Fusion__Sockets__INetBitWriteStream() ;

/// @brief Method set_Data, addr 0x6027204, size 0x8, virtual false, abstract: false, final false
inline void set_Data(uint64_t*  value) ;

/// @brief Method set_Group, addr 0x60271ec, size 0x10, virtual false, abstract: false, final false
inline void set_Group(int16_t  value) ;

/// @brief Method set_LengthBytes, addr 0x602721c, size 0x34, virtual false, abstract: false, final false
inline void set_LengthBytes(int32_t  value) ;

/// @brief Method set_OffsetBits, addr 0x6027258, size 0x40, virtual false, abstract: false, final false
inline void set_OffsetBits(int32_t  value) ;

/// @brief Method set_PacketType, addr 0x60272e8, size 0xc, virtual false, abstract: false, final false
inline void set_PacketType(::Fusion::Sockets::NetPacketType  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetBitBuffer() ;

// Ctor Parameters [CppParam { name: "Address", ty: "::Fusion::Sockets::NetAddress", modifiers: "", def_value: None, comment: None }, CppParam { name: "Prev", ty: "::Fusion::Sockets::NetBitBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Next", ty: "::Fusion::Sockets::NetBitBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_block", ty: "::Fusion::Sockets::NetBitBufferBlock*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_allocNext", ty: "::Fusion::Sockets::NetBitBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_group", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data", ty: "uint64_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_dataBlockOriginal", ty: "uint64_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_offsetBits", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_lengthBits", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_lengthBytes", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetBitBuffer(::Fusion::Sockets::NetAddress  Address, ::Fusion::Sockets::NetBitBuffer*  Prev, ::Fusion::Sockets::NetBitBuffer*  Next, ::Fusion::Sockets::NetBitBufferBlock*  _block, ::Fusion::Sockets::NetBitBuffer*  _allocNext, int32_t  _group, uint64_t*  _data, uint64_t*  _dataBlockOriginal, int32_t  _offsetBits, int32_t  _lengthBits, int32_t  _lengthBytes) noexcept;

/// @brief Field BITCOUNT offset 0xffffffff size 0x4
static constexpr int32_t  BITCOUNT{static_cast<int32_t>(0x40)};

/// @brief Field BYTESHIFT offset 0xffffffff size 0x4
static constexpr int32_t  BYTESHIFT{static_cast<int32_t>(0x3)};

/// @brief Field INDEXSHIFT offset 0xffffffff size 0x4
static constexpr int32_t  INDEXSHIFT{static_cast<int32_t>(0x6)};

/// @brief Field MAXVALUE offset 0xffffffff size 0x8
static constexpr uint64_t  MAXVALUE{static_cast<uint64_t>(0xffffffffffffffffu)};

/// @brief Field USEDMASK offset 0xffffffff size 0x4
static constexpr int32_t  USEDMASK{static_cast<int32_t>(0x3f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29339};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field Address, offset: 0x0, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  Address;

/// @brief Field Prev, offset: 0x18, size: 0x8, def value: None
 ::Fusion::Sockets::NetBitBuffer*  Prev;

/// @brief Field Next, offset: 0x20, size: 0x8, def value: None
 ::Fusion::Sockets::NetBitBuffer*  Next;

/// @brief Field _block, offset: 0x28, size: 0x8, def value: None
 ::Fusion::Sockets::NetBitBufferBlock*  _block;

/// @brief Field _allocNext, offset: 0x30, size: 0x8, def value: None
 ::Fusion::Sockets::NetBitBuffer*  _allocNext;

/// @brief Field _group, offset: 0x38, size: 0x4, def value: None
 int32_t  _group;

/// @brief Field _data, offset: 0x40, size: 0x8, def value: None
 uint64_t*  _data;

/// @brief Field _dataBlockOriginal, offset: 0x48, size: 0x8, def value: None
 uint64_t*  _dataBlockOriginal;

/// @brief Field _offsetBits, offset: 0x50, size: 0x4, def value: None
 int32_t  _offsetBits;

/// @brief Field _lengthBits, offset: 0x54, size: 0x4, def value: None
 int32_t  _lengthBits;

/// @brief Field _lengthBytes, offset: 0x58, size: 0x4, def value: None
 int32_t  _lengthBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetBitBuffer, Address) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetBitBuffer, Prev) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetBitBuffer, Next) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetBitBuffer, _block) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetBitBuffer, _allocNext) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetBitBuffer, _group) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetBitBuffer, _data) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetBitBuffer, _dataBlockOriginal) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetBitBuffer, _offsetBits) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetBitBuffer, _lengthBits) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetBitBuffer, _lengthBytes) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetBitBuffer) == 0x60, "Size mismatch!");

} // namespace end def Fusion::Sockets
