#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomSystem_LavaSyncEventData__votes_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomSystem_LavaSyncEventData__votes_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct LavaSyncEventData_RoomSystem__votes_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LavaSyncEventData_RoomSystem__votes_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LavaSyncEventData_RoomSystem__votes_e__FixedBuffer, "", "RoomSystem/LavaSyncEventData/<votes>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RoomSystem/LavaSyncEventData/<votes>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE LavaSyncEventData_RoomSystem__votes_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LavaSyncEventData_RoomSystem__votes_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LavaSyncEventData_RoomSystem__votes_e__FixedBuffer(int32_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3390};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 int32_t  FixedElementField;

/// @brief Size padding 0x50 - 0x4 = 0x4c, packed as 0x4c
 uint8_t  _cordl_size_padding[0x4c];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LavaSyncEventData_RoomSystem__votes_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LavaSyncEventData_RoomSystem__votes_e__FixedBuffer) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
