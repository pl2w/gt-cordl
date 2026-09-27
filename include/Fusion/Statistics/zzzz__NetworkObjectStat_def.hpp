#pragma once
// IWYU pragma private; include "Fusion/Statistics/NetworkObjectStat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectStat)
// Forward declare root types
namespace Fusion::Statistics {
struct NetworkObjectStat;
}
// Write type traits
MARK_VAL_T(::Fusion::Statistics::NetworkObjectStat);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::NetworkObjectStat, "Fusion.Statistics", "NetworkObjectStat");
// [Flags]
// Dependencies 
namespace Fusion::Statistics {
// Is value type: true
// CS Name: Fusion.Statistics.NetworkObjectStat
struct CORDL_TYPE NetworkObjectStat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkObjectStat_Unwrapped
enum struct __NetworkObjectStat_Unwrapped : int32_t {
__E_InBandwidth = static_cast<int32_t>(0x1),
__E_OutBandwidth = static_cast<int32_t>(0x2),
__E_InPackets = static_cast<int32_t>(0x4),
__E_OutPackets = static_cast<int32_t>(0x8),
__E_AverageInPacketSize = static_cast<int32_t>(0x10),
__E_AverageOutPacketSize = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkObjectStat_Unwrapped () const noexcept {
return static_cast<__NetworkObjectStat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectStat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectStat(int32_t  value__) noexcept;

/// @brief Field AverageInPacketSize value: I32(16)
static ::Fusion::Statistics::NetworkObjectStat const AverageInPacketSize;

/// @brief Field AverageOutPacketSize value: I32(32)
static ::Fusion::Statistics::NetworkObjectStat const AverageOutPacketSize;

/// @brief Field InBandwidth value: I32(1)
static ::Fusion::Statistics::NetworkObjectStat const InBandwidth;

/// @brief Field InPackets value: I32(4)
static ::Fusion::Statistics::NetworkObjectStat const InPackets;

/// @brief Field OutBandwidth value: I32(2)
static ::Fusion::Statistics::NetworkObjectStat const OutBandwidth;

/// @brief Field OutPackets value: I32(8)
static ::Fusion::Statistics::NetworkObjectStat const OutPackets;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23493};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::NetworkObjectStat, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::NetworkObjectStat) == 0x4, "Size mismatch!");

} // namespace end def Fusion::Statistics
