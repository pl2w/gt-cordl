#pragma once
// IWYU pragma private; include "System/Net/ScatterGatherBuffers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScatterGatherBuffers)
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Net {
class ScatterGatherBuffers_MemoryChunk;
}
// Forward declare root types
namespace System::Net {
class ScatterGatherBuffers;
}
namespace System::Net {
class ScatterGatherBuffers_MemoryChunk;
}
// Write type traits
MARK_REF_T(::System::Net::ScatterGatherBuffers*);
MARK_REF_T(::System::Net::ScatterGatherBuffers_MemoryChunk*);
DEFINE_IL2CPP_CLASS(::System::Net::ScatterGatherBuffers*, "System.Net", "ScatterGatherBuffers");
DEFINE_IL2CPP_CLASS(::System::Net::ScatterGatherBuffers_MemoryChunk*, "System.Net", "ScatterGatherBuffers/MemoryChunk");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ScatterGatherBuffers
class CORDL_TYPE ScatterGatherBuffers : public ::System::Object {
public:
// Declarations
using MemoryChunk = ::System::Net::ScatterGatherBuffers_MemoryChunk;

 __declspec(property(get=get_Empty)) bool  Empty;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Field chunkCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_chunkCount, put=__cordl_internal_set_chunkCount)) int32_t  chunkCount;

/// @brief Field currentChunk, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentChunk, put=__cordl_internal_set_currentChunk)) ::System::Net::ScatterGatherBuffers_MemoryChunk*  currentChunk;

/// @brief Field headChunk, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_headChunk, put=__cordl_internal_set_headChunk)) ::System::Net::ScatterGatherBuffers_MemoryChunk*  headChunk;

/// @brief Field nextChunkLength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextChunkLength, put=__cordl_internal_set_nextChunkLength)) int32_t  nextChunkLength;

/// @brief Field totalLength, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalLength, put=__cordl_internal_set_totalLength)) int32_t  totalLength;

/// @brief Method AllocateMemoryChunk, addr 0xac73c84, size 0xa8, virtual false, abstract: false, final false
inline ::System::Net::ScatterGatherBuffers_MemoryChunk* AllocateMemoryChunk(int32_t  newSize) ;

/// @brief Method GetBuffers, addr 0xac73d2c, size 0x128, virtual false, abstract: false, final false
inline ::ArrayW<::System::Net::BufferOffsetSize*> GetBuffers() ;

static inline ::System::Net::ScatterGatherBuffers* New_ctor() ;

static inline ::System::Net::ScatterGatherBuffers* New_ctor(int64_t  totalSize) ;

/// @brief Method Write, addr 0xac73e7c, size 0x108, virtual false, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr int32_t const& __cordl_internal_get_chunkCount() const;

constexpr int32_t& __cordl_internal_get_chunkCount() ;

constexpr ::System::Net::ScatterGatherBuffers_MemoryChunk* const& __cordl_internal_get_currentChunk() const;

constexpr ::System::Net::ScatterGatherBuffers_MemoryChunk*& __cordl_internal_get_currentChunk() ;

constexpr ::System::Net::ScatterGatherBuffers_MemoryChunk* const& __cordl_internal_get_headChunk() const;

constexpr ::System::Net::ScatterGatherBuffers_MemoryChunk*& __cordl_internal_get_headChunk() ;

constexpr int32_t const& __cordl_internal_get_nextChunkLength() const;

constexpr int32_t& __cordl_internal_get_nextChunkLength() ;

constexpr int32_t const& __cordl_internal_get_totalLength() const;

constexpr int32_t& __cordl_internal_get_totalLength() ;

constexpr void __cordl_internal_set_chunkCount(int32_t  value) ;

constexpr void __cordl_internal_set_currentChunk(::System::Net::ScatterGatherBuffers_MemoryChunk*  value) ;

constexpr void __cordl_internal_set_headChunk(::System::Net::ScatterGatherBuffers_MemoryChunk*  value) ;

constexpr void __cordl_internal_set_nextChunkLength(int32_t  value) ;

constexpr void __cordl_internal_set_totalLength(int32_t  value) ;

/// @brief Method .ctor, addr 0xac73c14, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac73c24, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int64_t  totalSize) ;

/// @brief Method get_Empty, addr 0xac73e54, size 0x20, virtual false, abstract: false, final false
inline bool get_Empty() ;

/// @brief Method get_Length, addr 0xac73e74, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScatterGatherBuffers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScatterGatherBuffers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScatterGatherBuffers(ScatterGatherBuffers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScatterGatherBuffers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScatterGatherBuffers(ScatterGatherBuffers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10602};

/// @brief Field headChunk, offset: 0x10, size: 0x8, def value: None
 ::System::Net::ScatterGatherBuffers_MemoryChunk*  ___headChunk;

/// @brief Field currentChunk, offset: 0x18, size: 0x8, def value: None
 ::System::Net::ScatterGatherBuffers_MemoryChunk*  ___currentChunk;

/// @brief Field nextChunkLength, offset: 0x20, size: 0x4, def value: None
 int32_t  ___nextChunkLength;

/// @brief Field totalLength, offset: 0x24, size: 0x4, def value: None
 int32_t  ___totalLength;

/// @brief Field chunkCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___chunkCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ScatterGatherBuffers, ___headChunk) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ScatterGatherBuffers, ___currentChunk) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::ScatterGatherBuffers, ___nextChunkLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::ScatterGatherBuffers, ___totalLength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Net::ScatterGatherBuffers, ___chunkCount) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Net::ScatterGatherBuffers) == 0x30, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ScatterGatherBuffers/MemoryChunk
class CORDL_TYPE ScatterGatherBuffers_MemoryChunk : public ::System::Object {
public:
// Declarations
/// @brief Field Buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Buffer, put=__cordl_internal_set_Buffer)) ::ArrayW<uint8_t>  Buffer;

/// @brief Field FreeOffset, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_FreeOffset, put=__cordl_internal_set_FreeOffset)) int32_t  FreeOffset;

/// @brief Field Next, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::System::Net::ScatterGatherBuffers_MemoryChunk*  Next;

static inline ::System::Net::ScatterGatherBuffers_MemoryChunk* New_ctor(int32_t  bufferSize) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_Buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_Buffer() ;

constexpr int32_t const& __cordl_internal_get_FreeOffset() const;

constexpr int32_t& __cordl_internal_get_FreeOffset() ;

constexpr ::System::Net::ScatterGatherBuffers_MemoryChunk* const& __cordl_internal_get_Next() const;

constexpr ::System::Net::ScatterGatherBuffers_MemoryChunk*& __cordl_internal_get_Next() ;

constexpr void __cordl_internal_set_Buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_FreeOffset(int32_t  value) ;

constexpr void __cordl_internal_set_Next(::System::Net::ScatterGatherBuffers_MemoryChunk*  value) ;

/// @brief Method .ctor, addr 0xac73f84, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  bufferSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScatterGatherBuffers_MemoryChunk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScatterGatherBuffers_MemoryChunk", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScatterGatherBuffers_MemoryChunk(ScatterGatherBuffers_MemoryChunk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScatterGatherBuffers_MemoryChunk", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScatterGatherBuffers_MemoryChunk(ScatterGatherBuffers_MemoryChunk const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10601};

/// @brief Field Buffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___Buffer;

/// @brief Field FreeOffset, offset: 0x18, size: 0x4, def value: None
 int32_t  ___FreeOffset;

/// @brief Field Next, offset: 0x20, size: 0x8, def value: None
 ::System::Net::ScatterGatherBuffers_MemoryChunk*  ___Next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ScatterGatherBuffers_MemoryChunk, ___Buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ScatterGatherBuffers_MemoryChunk, ___FreeOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::ScatterGatherBuffers_MemoryChunk, ___Next) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::ScatterGatherBuffers_MemoryChunk) == 0x28, "Size mismatch!");

} // namespace end def System::Net
