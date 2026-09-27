#pragma once
// IWYU pragma private; include "Voxels/ChunkDTO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChunkDTO)
namespace Voxels {
class Chunk;
}
// Forward declare root types
namespace Voxels {
struct ChunkDTO;
}
// Write type traits
MARK_VAL_T(::Voxels::ChunkDTO);
DEFINE_IL2CPP_CLASS(::Voxels::ChunkDTO, "Voxels", "ChunkDTO");
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.int3
namespace Voxels {
// Is value type: true
// CS Name: Voxels.ChunkDTO
struct CORDL_TYPE ChunkDTO {
public:
// Declarations
 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Method .ctor, addr 0x5dac3d0, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::Voxels::Chunk*  chunk) ;

/// @brief Method get_IsValid, addr 0x5dac330, size 0xa0, virtual false, abstract: false, final false
inline bool get_IsValid() ;

// Ctor Parameters []
// @brief default ctor
constexpr ChunkDTO() ;

// Ctor Parameters [CppParam { name: "WorldId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Id", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Size", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Dimensions", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Density", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Material", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }]
constexpr ChunkDTO(int32_t  WorldId, ::Unity::Mathematics::int3  Id, ::Unity::Mathematics::int3  Size, ::Unity::Mathematics::int3  Dimensions, ::Unity::Collections::NativeArray_1<uint8_t>  Density, ::Unity::Collections::NativeArray_1<uint8_t>  Material) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5004};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field WorldId, offset: 0x0, size: 0x4, def value: None
 int32_t  WorldId;

/// @brief Field Id, offset: 0x4, size: 0xc, def value: None
 ::Unity::Mathematics::int3  Id;

/// @brief Field Size, offset: 0x10, size: 0xc, def value: None
 ::Unity::Mathematics::int3  Size;

/// @brief Field Dimensions, offset: 0x1c, size: 0xc, def value: None
 ::Unity::Mathematics::int3  Dimensions;

/// @brief Field Density, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  Density;

/// @brief Field Material, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  Material;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Voxels::ChunkDTO, WorldId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Voxels::ChunkDTO, Id) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Voxels::ChunkDTO, Size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::ChunkDTO, Dimensions) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Voxels::ChunkDTO, Density) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Voxels::ChunkDTO, Material) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Voxels::ChunkDTO) == 0x48, "Size mismatch!");

} // namespace end def Voxels
