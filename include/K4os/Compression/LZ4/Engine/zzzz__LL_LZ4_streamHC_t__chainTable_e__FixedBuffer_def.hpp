#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_LZ4_streamHC_t__chainTable_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LL_LZ4_streamHC_t__chainTable_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct LZ4_streamHC_t_LL__chainTable_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LZ4_streamHC_t_LL__chainTable_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LZ4_streamHC_t_LL__chainTable_e__FixedBuffer, "K4os.Compression.LZ4.Engine", "LL/LZ4_streamHC_t/<chainTable>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: K4os.Compression.LZ4.Engine.LL/LZ4_streamHC_t/<chainTable>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE LZ4_streamHC_t_LL__chainTable_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LZ4_streamHC_t_LL__chainTable_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr LZ4_streamHC_t_LL__chainTable_e__FixedBuffer(uint16_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31587};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20000};

/// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
 uint16_t  FixedElementField;

/// @brief Size padding 0x20000 - 0x2 = 0x1fffe, packed as 0x1fffe
 uint8_t  _cordl_size_padding[0x1fffe];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LZ4_streamHC_t_LL__chainTable_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LZ4_streamHC_t_LL__chainTable_e__FixedBuffer) == 0x20000, "Size mismatch!");

} // namespace end def GlobalNamespace
