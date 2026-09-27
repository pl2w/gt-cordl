#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Hammersley_Hammersley2dSeq64__hammersley2dSeq64_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Hammersley_Hammersley2dSeq64__hammersley2dSeq64_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer, "UnityEngine.Rendering", "Hammersley/Hammersley2dSeq64/<hammersley2dSeq64>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Hammersley/Hammersley2dSeq64/<hammersley2dSeq64>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer(float_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16934};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x400};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 float_t  FixedElementField;

/// @brief Size padding 0x400 - 0x4 = 0x3fc, packed as 0x3fc
 uint8_t  _cordl_size_padding[0x3fc];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Hammersley2dSeq64_Hammersley__hammersley2dSeq64_e__FixedBuffer) == 0x400, "Size mismatch!");

} // namespace end def GlobalNamespace
