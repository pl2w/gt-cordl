#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/MapLoadStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MapLoadStatus)
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps {
struct MapLoadStatus;
}
// Write type traits
MARK_VAL_T(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus, "GorillaTagScripts.VirtualStumpCustomMaps", "MapLoadStatus");
// Dependencies 
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: true
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.MapLoadStatus
struct CORDL_TYPE MapLoadStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MapLoadStatus_Unwrapped
enum struct __MapLoadStatus_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Downloading = static_cast<int32_t>(0x1),
__E_Loading = static_cast<int32_t>(0x2),
__E_Unloading = static_cast<int32_t>(0x3),
__E_Error = static_cast<int32_t>(0x4),
__E_Installing = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MapLoadStatus_Unwrapped () const noexcept {
return static_cast<__MapLoadStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MapLoadStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MapLoadStatus(int32_t  value__) noexcept;

/// @brief Field Downloading value: I32(1)
static ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus const Downloading;

/// @brief Field Error value: I32(4)
static ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus const Error;

/// @brief Field Installing value: I32(5)
static ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus const Installing;

/// @brief Field Loading value: I32(2)
static ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus const Loading;

/// @brief Field None value: I32(0)
static ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus const None;

/// @brief Field Unloading value: I32(3)
static ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus const Unloading;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4046};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus) == 0x4, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
