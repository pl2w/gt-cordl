#pragma once
// IWYU pragma private; include "Fusion/Sockets/INetBitWriteStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(INetBitWriteStream)
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace Fusion::Sockets {
class INetBitWriteStream;
}
// Write type traits
MARK_REF_T(::Fusion::Sockets::INetBitWriteStream*);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::INetBitWriteStream*, "Fusion.Sockets", "INetBitWriteStream");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: false
// CS Name: Fusion.Sockets.INetBitWriteStream
class CORDL_TYPE INetBitWriteStream {
public:
// Declarations
 __declspec(property(get=get_OffsetBits)) int32_t  OffsetBits;

/// @brief Method WriteBoolean, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool WriteBoolean(bool  b) ;

/// @brief Method WriteBytesAligned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WriteBytesAligned(::System::Span_1<uint8_t>  buffer) ;

/// @brief Method WriteInt32, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WriteInt32(int32_t  value, int32_t  bits) ;

/// @brief Method WriteInt32VarLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WriteInt32VarLength(int32_t  value) ;

/// @brief Method WriteInt32VarLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WriteInt32VarLength(int32_t  value, int32_t  blockSize) ;

/// @brief Method WriteUInt64VarLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WriteUInt64VarLength(uint64_t  value, int32_t  blockSize) ;

/// @brief Method get_OffsetBits, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_OffsetBits() ;

// Ctor Parameters [CppParam { name: "", ty: "INetBitWriteStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetBitWriteStream(INetBitWriteStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29335};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Sockets
