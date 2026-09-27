#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectBaker_TransformPath__Indices__Value_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectBaker_TransformPath__Indices__Value_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct _Indices_TransformPath_NetworkObjectBaker__Value_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::_Indices_TransformPath_NetworkObjectBaker__Value_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::_Indices_TransformPath_NetworkObjectBaker__Value_e__FixedBuffer, "Fusion", "NetworkObjectBaker/TransformPath/_Indices/<Value>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkObjectBaker/TransformPath/_Indices/<Value>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE _Indices_TransformPath_NetworkObjectBaker__Value_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr _Indices_TransformPath_NetworkObjectBaker__Value_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr _Indices_TransformPath_NetworkObjectBaker__Value_e__FixedBuffer(uint16_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23440};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
 uint16_t  FixedElementField;

/// @brief Size padding 0x14 - 0x2 = 0x12, packed as 0x12
 uint8_t  _cordl_size_padding[0x12];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::_Indices_TransformPath_NetworkObjectBaker__Value_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::_Indices_TransformPath_NetworkObjectBaker__Value_e__FixedBuffer) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
