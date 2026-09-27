#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/StreamBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StreamBuffer)
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class StreamBuffer;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::StreamBuffer*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::StreamBuffer*, "ExitGames.Client.Photon", "StreamBuffer");
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.StreamBuffer
class CORDL_TYPE StreamBuffer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Available)) int32_t  Available;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int32_t  Position;

/// @brief Field buf, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buf, put=__cordl_internal_set_buf)) ::ArrayW<uint8_t>  buf;

/// @brief Field len, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_len, put=__cordl_internal_set_len)) int32_t  len;

/// @brief Field pos, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_pos, put=__cordl_internal_set_pos)) int32_t  pos;

/// @brief Method CheckSize, addr 0xa6e90c4, size 0xc4, virtual false, abstract: false, final false
inline bool CheckSize(int32_t  size) ;

/// @brief Method Compact, addr 0xa6e8ff4, size 0x7c, virtual false, abstract: false, final false
inline void Compact() ;

/// @brief Method Flush, addr 0xa6e9198, size 0x4, virtual false, abstract: false, final false
inline void Flush() ;

/// @brief Method GetBuffer, addr 0xa6e24a0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetBuffer() ;

/// @brief Method GetBufferAndAdvance, addr 0xa6e9070, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetBufferAndAdvance(int32_t  length, ::by_ref<int32_t>  offset) ;

static inline ::ExitGames::Client::Photon::StreamBuffer* New_ctor(::ArrayW<uint8_t>  buf) ;

static inline ::ExitGames::Client::Photon::StreamBuffer* New_ctor(int32_t  size) ;

/// @brief Method Read, addr 0xa6e9270, size 0x68, virtual false, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  dstOffset, int32_t  count) ;

/// @brief Method ReadByte, addr 0xa6e92d8, size 0xe8, virtual false, abstract: false, final false
inline uint8_t ReadByte() ;

/// @brief Method Seek, addr 0xa6e919c, size 0xd4, virtual false, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetCapacityMinimum, addr 0xa6e2430, size 0x4, virtual false, abstract: false, final false
inline void SetCapacityMinimum(int32_t  neededSize) ;

/// @brief Method SetLength, addr 0xa6e23d0, size 0x28, virtual false, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method ToArray, addr 0xa6e24cc, size 0x74, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToArray() ;

/// @brief Method ToArrayFromPos, addr 0xa6e8f60, size 0x94, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToArrayFromPos() ;

/// @brief Method Write, addr 0xa6e2434, size 0x6c, virtual false, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  srcOffset, int32_t  count) ;

/// @brief Method WriteByte, addr 0xa6e93c0, size 0x68, virtual false, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

/// @brief Method WriteBytes, addr 0xa6e9428, size 0x98, virtual false, abstract: false, final false
inline void WriteBytes(uint8_t  v0, uint8_t  v1) ;

/// @brief Method WriteBytes, addr 0xa6e94c0, size 0xcc, virtual false, abstract: false, final false
inline void WriteBytes(uint8_t  v0, uint8_t  v1, uint8_t  v2) ;

/// @brief Method WriteBytes, addr 0xa6e958c, size 0xf8, virtual false, abstract: false, final false
inline void WriteBytes(uint8_t  v0, uint8_t  v1, uint8_t  v2, uint8_t  v3) ;

/// @brief Method WriteBytes, addr 0xa6e9684, size 0x1b8, virtual false, abstract: false, final false
inline void WriteBytes(uint8_t  v0, uint8_t  v1, uint8_t  v2, uint8_t  v3, uint8_t  v4, uint8_t  v5, uint8_t  v6, uint8_t  v7) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_buf() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_buf() ;

constexpr int32_t const& __cordl_internal_get_len() const;

constexpr int32_t& __cordl_internal_get_len() ;

constexpr int32_t const& __cordl_internal_get_pos() const;

constexpr int32_t& __cordl_internal_get_pos() ;

constexpr void __cordl_internal_set_buf(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_len(int32_t  value) ;

constexpr void __cordl_internal_set_pos(int32_t  value) ;

/// @brief Method .ctor, addr 0xa6e8f1c, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  buf) ;

/// @brief Method .ctor, addr 0xa6e2360, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  size) ;

/// @brief Method get_Available, addr 0xa6e9188, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Available() ;

/// @brief Method get_CanRead, addr 0xa6e90ac, size 0x8, virtual false, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa6e90b4, size 0x8, virtual false, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa6e90bc, size 0x8, virtual false, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0xa6e2540, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_Position, addr 0xa6e24a8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Position() ;

/// @brief Method set_Position, addr 0xa6e24b0, size 0x1c, virtual false, abstract: false, final false
inline void set_Position(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamBuffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamBuffer(StreamBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamBuffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamBuffer(StreamBuffer const& ) = delete;

/// @brief Field DefaultInitialSize offset 0xffffffff size 0x4
static constexpr int32_t  DefaultInitialSize{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26477};

/// @brief Field pos, offset: 0x10, size: 0x4, def value: None
 int32_t  ___pos;

/// @brief Field len, offset: 0x14, size: 0x4, def value: None
 int32_t  ___len;

/// @brief Field buf, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___buf;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::StreamBuffer, ___pos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::StreamBuffer, ___len) == 0x14, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::StreamBuffer, ___buf) == 0x18, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::StreamBuffer) == 0x20, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
