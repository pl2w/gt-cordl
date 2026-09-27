#pragma once
// IWYU pragma private; include "Fusion/CodeGen/FixedStorage@3__Data_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedStorage@3__Data_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct FixedStorage@3__Data_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FixedStorage@3__Data_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FixedStorage@3__Data_e__FixedBuffer, "Fusion.CodeGen", "FixedStorage@3/<Data>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// [WeaverGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.CodeGen.FixedStorage@3/<Data>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE FixedStorage@3__Data_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FixedStorage@3__Data_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FixedStorage@3__Data_e__FixedBuffer(int32_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5261};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// [WeaverGenerated]
/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 int32_t  FixedElementField;

/// @brief Size padding 0xc - 0x4 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FixedStorage@3__Data_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FixedStorage@3__Data_e__FixedBuffer) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
