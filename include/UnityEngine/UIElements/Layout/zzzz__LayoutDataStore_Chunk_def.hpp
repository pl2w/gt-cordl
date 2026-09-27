#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutDataStore_Chunk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutDataStore_Chunk)
// Forward declare root types
namespace GlobalNamespace {
struct LayoutDataStore_Chunk;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LayoutDataStore_Chunk);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LayoutDataStore_Chunk, "UnityEngine.UIElements.Layout", "LayoutDataStore/Chunk");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutDataStore/Chunk
struct CORDL_TYPE LayoutDataStore_Chunk {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LayoutDataStore_Chunk() ;

// Ctor Parameters [CppParam { name: "Buffer", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }]
constexpr LayoutDataStore_Chunk(uint8_t*  Buffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8649};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field Buffer, offset: 0x0, size: 0x8, def value: None
 uint8_t*  Buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LayoutDataStore_Chunk, Buffer) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LayoutDataStore_Chunk) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
