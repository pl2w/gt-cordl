#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_64__data_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_64__data_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct SIZER_64_MB_MeshCombinerSingle_MeshNativeArrayHelper_MB3_MeshCombinerSingle__data_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIZER_64_MB_MeshCombinerSingle_MeshNativeArrayHelper_MB3_MeshCombinerSingle__data_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIZER_64_MB_MeshCombinerSingle_MeshNativeArrayHelper_MB3_MeshCombinerSingle__data_e__FixedBuffer, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MB_MeshCombinerSingle_MeshNativeArrayHelper/SIZER_64/<data>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MB_MeshCombinerSingle_MeshNativeArrayHelper/SIZER_64/<data>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE SIZER_64_MB_MeshCombinerSingle_MeshNativeArrayHelper_MB3_MeshCombinerSingle__data_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SIZER_64_MB_MeshCombinerSingle_MeshNativeArrayHelper_MB3_MeshCombinerSingle__data_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr SIZER_64_MB_MeshCombinerSingle_MeshNativeArrayHelper_MB3_MeshCombinerSingle__data_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22677};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
 uint8_t  FixedElementField;

/// @brief Size padding 0x40 - 0x1 = 0x3f, packed as 0x3f
 uint8_t  _cordl_size_padding[0x3f];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIZER_64_MB_MeshCombinerSingle_MeshNativeArrayHelper_MB3_MeshCombinerSingle__data_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIZER_64_MB_MeshCombinerSingle_MeshNativeArrayHelper_MB3_MeshCombinerSingle__data_e__FixedBuffer) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
