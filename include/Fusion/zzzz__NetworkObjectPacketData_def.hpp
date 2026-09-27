#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectPacketData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__NetworkObjectPacketFlags_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkObjectPacketData)
// Forward declare root types
namespace Fusion {
struct NetworkObjectPacketData;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkObjectPacketData);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectPacketData, "Fusion", "NetworkObjectPacketData");
// Dependencies Fusion.NetworkId, Fusion.NetworkObjectPacketFlags, Fusion.Tick
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkObjectPacketData
struct CORDL_TYPE NetworkObjectPacketData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectPacketData() ;

// Ctor Parameters [CppParam { name: "Id", ty: "::Fusion::NetworkId", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResetTick", ty: "::Fusion::Tick", modifiers: "", def_value: None, comment: None }, CppParam { name: "Flags", ty: "::Fusion::NetworkObjectPacketFlags", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectPacketData(::Fusion::NetworkId  Id, ::Fusion::Tick  ResetTick, ::Fusion::NetworkObjectPacketFlags  Flags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19157};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Id, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkId  Id;

/// @brief Field ResetTick, offset: 0x4, size: 0x4, def value: None
 ::Fusion::Tick  ResetTick;

/// @brief Field Flags, offset: 0x8, size: 0x4, def value: None
 ::Fusion::NetworkObjectPacketFlags  Flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectPacketData, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectPacketData, ResetTick) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectPacketData, Flags) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectPacketData) == 0xc, "Size mismatch!");

} // namespace end def Fusion
