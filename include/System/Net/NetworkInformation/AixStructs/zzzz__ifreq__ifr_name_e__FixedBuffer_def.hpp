#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixStructs/ifreq__ifr_name_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ifreq__ifr_name_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct ifreq__ifr_name_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ifreq__ifr_name_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ifreq__ifr_name_e__FixedBuffer, "System.Net.NetworkInformation.AixStructs", "ifreq/<ifr_name>e__FixedBuffer");
// [UnsafeValueType]
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.NetworkInformation.AixStructs.ifreq/<ifr_name>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE ifreq__ifr_name_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ifreq__ifr_name_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr ifreq__ifr_name_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10808};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
 uint8_t  FixedElementField;

/// @brief Size padding 0x10 - 0x1 = 0xf, packed as 0xf
 uint8_t  _cordl_size_padding[0xf];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ifreq__ifr_name_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ifreq__ifr_name_e__FixedBuffer) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
