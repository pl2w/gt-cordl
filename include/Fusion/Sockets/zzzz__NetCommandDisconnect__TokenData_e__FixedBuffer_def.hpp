#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetCommandDisconnect__TokenData_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetCommandDisconnect__TokenData_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct NetCommandDisconnect__TokenData_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer, "Fusion.Sockets", "NetCommandDisconnect/<TokenData>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Sockets.NetCommandDisconnect/<TokenData>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE NetCommandDisconnect__TokenData_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NetCommandDisconnect__TokenData_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr NetCommandDisconnect__TokenData_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29351};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
 uint8_t  FixedElementField;

/// @brief Size padding 0x80 - 0x1 = 0x7f, packed as 0x7f
 uint8_t  _cordl_size_padding[0x7f];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
