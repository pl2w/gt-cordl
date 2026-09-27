#pragma once
// IWYU pragma private; include "Voxels/ChunkIO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChunkIO)
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Voxels {
struct ChunkDTO;
}
// Forward declare root types
namespace Voxels {
class ChunkIO;
}
// Write type traits
MARK_REF_T(::Voxels::ChunkIO*);
DEFINE_IL2CPP_CLASS(::Voxels::ChunkIO*, "Voxels", "ChunkIO");
// Dependencies System.Object
namespace Voxels {
// Is value type: false
// CS Name: Voxels.ChunkIO
class CORDL_TYPE ChunkIO : public ::System::Object {
public:
// Declarations
/// @brief Field Root, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Root, put=setStaticF_Root)) ::StringW  Root;

/// @brief Method DeleteWorld, addr 0x5dad940, size 0xcc, virtual false, abstract: false, final false
static inline void DeleteWorld() ;

/// @brief Method DeserializeChunk, addr 0x5dad58c, size 0x2d0, virtual false, abstract: false, final false
static inline ::Voxels::ChunkDTO DeserializeChunk(/* [IsReadOnly] */ ::by_ref<::ArrayW<uint8_t>>  data, ::Unity::Collections::Allocator  alloc) ;

/// @brief Method Load, addr 0x5dacb08, size 0x2ec, virtual false, abstract: false, final false
static inline ::Voxels::ChunkDTO Load(::StringW  path, ::Unity::Collections::Allocator  alloc) ;

/// @brief Method PathFor, addr 0x5dac434, size 0x128, virtual false, abstract: false, final false
static inline ::StringW PathFor(::Unity::Mathematics::int3  id) ;

/// @brief Method ReadChunk, addr 0x5dad2f0, size 0x218, virtual false, abstract: false, final false
static inline ::Voxels::ChunkDTO ReadChunk(::System::IO::BinaryReader*  br, ::Unity::Collections::Allocator  alloc) ;

/// @brief Method ReadNativeArray, addr 0x5dad85c, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<uint8_t> ReadNativeArray(::System::IO::BinaryReader*  br, ::Unity::Collections::Allocator  alloc) ;

/// @brief Method Save, addr 0x5dac68c, size 0x2cc, virtual false, abstract: false, final false
static inline void Save(::StringW  path, /* [IsReadOnly] */ ::by_ref<::Voxels::ChunkDTO>  chunk) ;

/// @brief Method SaveChunk, addr 0x5dac55c, size 0x130, virtual false, abstract: false, final false
static inline void SaveChunk(::Voxels::ChunkDTO  dto) ;

/// @brief Method SerializeChunk, addr 0x5dacf98, size 0x2b8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> SerializeChunk(/* [IsReadOnly] */ ::by_ref<::Voxels::ChunkDTO>  chunk) ;

/// @brief Method TryDeserializeChunk, addr 0x5dad508, size 0x84, virtual false, abstract: false, final false
static inline bool TryDeserializeChunk(/* [IsReadOnly] */ ::by_ref<::ArrayW<uint8_t>>  data, ::by_ref<::Voxels::ChunkDTO>  dto) ;

/// @brief Method TryLoadChunk, addr 0x5dac958, size 0x1b0, virtual false, abstract: false, final false
static inline bool TryLoadChunk(::Unity::Mathematics::int3  id, ::by_ref<::Voxels::ChunkDTO>  dto) ;

/// @brief Method WriteChunk, addr 0x5dacdf4, size 0x1a4, virtual false, abstract: false, final false
static inline void WriteChunk(::System::IO::BinaryWriter*  bw, /* [IsReadOnly] */ ::by_ref<::Voxels::ChunkDTO>  chunk) ;

/// @brief Method WriteNativeArray, addr 0x5dad250, size 0xa0, virtual false, abstract: false, final false
static inline void WriteNativeArray(::System::IO::BinaryWriter*  bw, ::Unity::Collections::NativeArray_1<uint8_t>  src) ;

static inline ::StringW getStaticF_Root() ;

static inline void setStaticF_Root(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChunkIO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChunkIO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChunkIO(ChunkIO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChunkIO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChunkIO(ChunkIO const& ) = delete;

/// @brief Field MAGIC offset 0xffffffff size 0x4
static constexpr uint32_t  MAGIC{static_cast<uint32_t>(0x564f584cu)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5005};

/// @brief Field VERSION offset 0xffffffff size 0x4
static constexpr int32_t  _cordl_VERSION{static_cast<int32_t>(0x5)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Voxels::ChunkIO) == 0x10, "Size mismatch!");

} // namespace end def Voxels
