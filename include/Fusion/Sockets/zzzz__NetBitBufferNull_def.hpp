#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetBitBufferNull.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetBitBufferNull)
namespace Fusion::Sockets {
class INetBitWriteStream;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetBitBufferNull;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetBitBufferNull);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetBitBufferNull, "Fusion.Sockets", "NetBitBufferNull");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetBitBufferNull
struct CORDL_TYPE NetBitBufferNull {
public:
// Declarations
 __declspec(property(get=get_OffsetBits, put=set_OffsetBits)) int32_t  OffsetBits;

/// @brief Convert operator to "::Fusion::Sockets::INetBitWriteStream"
constexpr operator  ::Fusion::Sockets::INetBitWriteStream*() ;

/// @brief Method PadToByteBoundary, addr 0x60291a0, size 0x2c, virtual false, abstract: false, final false
inline void PadToByteBoundary() ;

/// @brief Method WriteBoolean, addr 0x6029480, size 0x18, virtual true, abstract: false, final true
inline bool WriteBoolean(bool  b) ;

/// @brief Method WriteByte, addr 0x60291cc, size 0x10, virtual false, abstract: false, final false
inline void WriteByte(uint8_t  value, int32_t  bits) ;

/// @brief Method WriteBytesAligned, addr 0x6029498, size 0x6c, virtual true, abstract: false, final true
inline void WriteBytesAligned(::System::Span_1<uint8_t>  buffer) ;

/// @brief Method WriteInt32, addr 0x60291dc, size 0x10, virtual true, abstract: false, final true
inline void WriteInt32(int32_t  value, int32_t  bits) ;

/// @brief Method WriteInt32VarLength, addr 0x60291ec, size 0x2c, virtual true, abstract: false, final true
inline void WriteInt32VarLength(int32_t  value) ;

/// @brief Method WriteInt32VarLength, addr 0x6029244, size 0x4, virtual true, abstract: false, final true
inline void WriteInt32VarLength(int32_t  value, int32_t  blockSize) ;

/// @brief Method WriteUInt32VarLength, addr 0x6029218, size 0x2c, virtual false, abstract: false, final false
inline void WriteUInt32VarLength(uint32_t  value) ;

/// @brief Method WriteUInt32VarLength, addr 0x6029248, size 0x110, virtual false, abstract: false, final false
inline void WriteUInt32VarLength(uint32_t  value, int32_t  blockSize) ;

/// @brief Method WriteUInt64VarLength, addr 0x6029358, size 0x128, virtual true, abstract: false, final true
inline void WriteUInt64VarLength(uint64_t  value, int32_t  blockSize) ;

/// @brief Method get_OffsetBits, addr 0x6029190, size 0x8, virtual true, abstract: false, final true
inline int32_t get_OffsetBits() ;

/// @brief Convert to "::Fusion::Sockets::INetBitWriteStream"
constexpr ::Fusion::Sockets::INetBitWriteStream* i___Fusion__Sockets__INetBitWriteStream() ;

/// @brief Method set_OffsetBits, addr 0x6029198, size 0x8, virtual false, abstract: false, final false
inline void set_OffsetBits(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetBitBufferNull() ;

// Ctor Parameters [CppParam { name: "_offsetBits", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetBitBufferNull(int32_t  _offsetBits) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29341};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field _offsetBits, offset: 0x0, size: 0x4, def value: None
 int32_t  _offsetBits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetBitBufferNull, _offsetBits) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetBitBufferNull) == 0x4, "Size mismatch!");

} // namespace end def Fusion::Sockets
