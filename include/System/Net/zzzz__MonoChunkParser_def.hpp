#pragma once
// IWYU pragma private; include "System/Net/MonoChunkParser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__MonoChunkParser_State_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoChunkParser)
namespace GlobalNamespace {
struct MonoChunkParser_State;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Net {
class MonoChunkParser_Chunk;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Net {
class MonoChunkParser;
}
namespace System::Net {
class MonoChunkParser_Chunk;
}
// Write type traits
MARK_REF_T(::System::Net::MonoChunkParser*);
MARK_REF_T(::System::Net::MonoChunkParser_Chunk*);
DEFINE_IL2CPP_CLASS(::System::Net::MonoChunkParser*, "System.Net", "MonoChunkParser");
DEFINE_IL2CPP_CLASS(::System::Net::MonoChunkParser_Chunk*, "System.Net", "MonoChunkParser/Chunk");
// Dependencies System.Net.MonoChunkParser::State, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.MonoChunkParser
class CORDL_TYPE MonoChunkParser : public ::System::Object {
public:
// Declarations
using State = ::GlobalNamespace::MonoChunkParser_State;

using Chunk = ::System::Net::MonoChunkParser_Chunk;

 __declspec(property(get=get_ChunkLeft)) int32_t  ChunkLeft;

 __declspec(property(get=get_DataAvailable)) bool  DataAvailable;

 __declspec(property(get=get_TotalDataSize)) int32_t  TotalDataSize;

 __declspec(property(get=get_WantMore)) bool  WantMore;

/// @brief Field chunkRead, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_chunkRead, put=__cordl_internal_set_chunkRead)) int32_t  chunkRead;

/// @brief Field chunkSize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_chunkSize, put=__cordl_internal_set_chunkSize)) int32_t  chunkSize;

/// @brief Field chunks, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_chunks, put=__cordl_internal_set_chunks)) ::System::Collections::ArrayList*  chunks;

/// @brief Field gotit, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_gotit, put=__cordl_internal_set_gotit)) bool  gotit;

/// @brief Field headers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_headers, put=__cordl_internal_set_headers)) ::System::Net::WebHeaderCollection*  headers;

/// @brief Field saved, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_saved, put=__cordl_internal_set_saved)) ::System::Text::StringBuilder*  saved;

/// @brief Field sawCR, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_sawCR, put=__cordl_internal_set_sawCR)) bool  sawCR;

/// @brief Field state, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::MonoChunkParser_State  state;

/// @brief Field totalWritten, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalWritten, put=__cordl_internal_set_totalWritten)) int32_t  totalWritten;

/// @brief Field trailerState, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_trailerState, put=__cordl_internal_set_trailerState)) int32_t  trailerState;

/// @brief Method GetChunkSize, addr 0xacaaebc, size 0x2f8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MonoChunkParser_State GetChunkSize(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  offset, int32_t  size) ;

/// @brief Method InternalWrite, addr 0xacaad80, size 0x13c, virtual false, abstract: false, final false
inline void InternalWrite(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  offset, int32_t  size) ;

static inline ::System::Net::MonoChunkParser* New_ctor(::System::Net::WebHeaderCollection*  headers) ;

/// @brief Method Read, addr 0xacaaa08, size 0x4, virtual false, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method ReadBody, addr 0xacab1b4, size 0x140, virtual false, abstract: false, final false
inline ::GlobalNamespace::MonoChunkParser_State ReadBody(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  offset, int32_t  size) ;

/// @brief Method ReadCRLF, addr 0xacab2f4, size 0x100, virtual false, abstract: false, final false
inline ::GlobalNamespace::MonoChunkParser_State ReadCRLF(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  offset, int32_t  size) ;

/// @brief Method ReadFromChunks, addr 0xacaaa0c, size 0x314, virtual false, abstract: false, final false
inline int32_t ReadFromChunks(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method ReadTrailer, addr 0xacab3f4, size 0x2c8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MonoChunkParser_State ReadTrailer(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  offset, int32_t  size) ;

/// @brief Method RemoveChunkExtension, addr 0xacab874, size 0x48, virtual false, abstract: false, final false
static inline ::StringW RemoveChunkExtension(::StringW  input) ;

/// @brief Method ThrowProtocolViolation, addr 0xacab824, size 0x50, virtual false, abstract: false, final false
static inline void ThrowProtocolViolation(::StringW  message) ;

/// @brief Method Write, addr 0xacaa9e8, size 0x20, virtual false, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method WriteAndReadBack, addr 0xacaa96c, size 0x7c, virtual false, abstract: false, final false
inline void WriteAndReadBack(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::by_ref<int32_t>  read) ;

constexpr int32_t const& __cordl_internal_get_chunkRead() const;

constexpr int32_t& __cordl_internal_get_chunkRead() ;

constexpr int32_t const& __cordl_internal_get_chunkSize() const;

constexpr int32_t& __cordl_internal_get_chunkSize() ;

constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_chunks() const;

constexpr ::System::Collections::ArrayList*& __cordl_internal_get_chunks() ;

constexpr bool const& __cordl_internal_get_gotit() const;

constexpr bool& __cordl_internal_get_gotit() ;

constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get_headers() const;

constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get_headers() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_saved() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_saved() ;

constexpr bool const& __cordl_internal_get_sawCR() const;

constexpr bool& __cordl_internal_get_sawCR() ;

constexpr ::GlobalNamespace::MonoChunkParser_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::MonoChunkParser_State& __cordl_internal_get_state() ;

constexpr int32_t const& __cordl_internal_get_totalWritten() const;

constexpr int32_t& __cordl_internal_get_totalWritten() ;

constexpr int32_t const& __cordl_internal_get_trailerState() const;

constexpr int32_t& __cordl_internal_get_trailerState() ;

constexpr void __cordl_internal_set_chunkRead(int32_t  value) ;

constexpr void __cordl_internal_set_chunkSize(int32_t  value) ;

constexpr void __cordl_internal_set_chunks(::System::Collections::ArrayList*  value) ;

constexpr void __cordl_internal_set_gotit(bool  value) ;

constexpr void __cordl_internal_set_headers(::System::Net::WebHeaderCollection*  value) ;

constexpr void __cordl_internal_set_saved(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_sawCR(bool  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::MonoChunkParser_State  value) ;

constexpr void __cordl_internal_set_totalWritten(int32_t  value) ;

constexpr void __cordl_internal_set_trailerState(int32_t  value) ;

/// @brief Method .ctor, addr 0xacaa89c, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::System::Net::WebHeaderCollection*  headers) ;

/// @brief Method get_ChunkLeft, addr 0xacab7e8, size 0xc, virtual false, abstract: false, final false
inline int32_t get_ChunkLeft() ;

/// @brief Method get_DataAvailable, addr 0xacab6e0, size 0x100, virtual false, abstract: false, final false
inline bool get_DataAvailable() ;

/// @brief Method get_TotalDataSize, addr 0xacab7e0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TotalDataSize() ;

/// @brief Method get_WantMore, addr 0xacab6bc, size 0x24, virtual false, abstract: false, final false
inline bool get_WantMore() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoChunkParser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoChunkParser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoChunkParser(MonoChunkParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoChunkParser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoChunkParser(MonoChunkParser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10707};

/// @brief Field headers, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebHeaderCollection*  ___headers;

/// @brief Field chunkSize, offset: 0x18, size: 0x4, def value: None
 int32_t  ___chunkSize;

/// @brief Field chunkRead, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___chunkRead;

/// @brief Field totalWritten, offset: 0x20, size: 0x4, def value: None
 int32_t  ___totalWritten;

/// @brief Field state, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::MonoChunkParser_State  ___state;

/// @brief Field saved, offset: 0x28, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___saved;

/// @brief Field sawCR, offset: 0x30, size: 0x1, def value: None
 bool  ___sawCR;

/// @brief Field gotit, offset: 0x31, size: 0x1, def value: None
 bool  ___gotit;

/// @brief Field trailerState, offset: 0x34, size: 0x4, def value: None
 int32_t  ___trailerState;

/// @brief Field chunks, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::ArrayList*  ___chunks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::MonoChunkParser, ___headers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___chunkSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___chunkRead) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___totalWritten) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___state) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___saved) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___sawCR) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___gotit) == 0x31, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___trailerState) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser, ___chunks) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::Net::MonoChunkParser) == 0x40, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.MonoChunkParser/Chunk
class CORDL_TYPE MonoChunkParser_Chunk : public ::System::Object {
public:
// Declarations
/// @brief Field Bytes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Bytes, put=__cordl_internal_set_Bytes)) ::ArrayW<uint8_t>  Bytes;

/// @brief Field Offset, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Offset, put=__cordl_internal_set_Offset)) int32_t  Offset;

static inline ::System::Net::MonoChunkParser_Chunk* New_ctor(::ArrayW<uint8_t>  chunk) ;

/// @brief Method Read, addr 0xacaad20, size 0x60, virtual false, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_Bytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_Bytes() ;

constexpr int32_t const& __cordl_internal_get_Offset() const;

constexpr int32_t& __cordl_internal_get_Offset() ;

constexpr void __cordl_internal_set_Bytes(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_Offset(int32_t  value) ;

/// @brief Method .ctor, addr 0xacab7f4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  chunk) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoChunkParser_Chunk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoChunkParser_Chunk", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoChunkParser_Chunk(MonoChunkParser_Chunk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoChunkParser_Chunk", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoChunkParser_Chunk(MonoChunkParser_Chunk const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10706};

/// @brief Field Bytes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___Bytes;

/// @brief Field Offset, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::MonoChunkParser_Chunk, ___Bytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkParser_Chunk, ___Offset) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Net::MonoChunkParser_Chunk) == 0x20, "Size mismatch!");

} // namespace end def System::Net
