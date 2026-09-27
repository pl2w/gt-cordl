#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPaintbrawlManager_PaintbrawlStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaPaintbrawlManager_PaintbrawlStatus)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaPaintbrawlManager_PaintbrawlStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus, "", "GorillaPaintbrawlManager/PaintbrawlStatus");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaPaintbrawlManager/PaintbrawlStatus
struct CORDL_TYPE GorillaPaintbrawlManager_PaintbrawlStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaPaintbrawlManager_PaintbrawlStatus_Unwrapped
enum struct __GorillaPaintbrawlManager_PaintbrawlStatus_Unwrapped : int32_t {
__E_RedTeam = static_cast<int32_t>(0x1),
__E_BlueTeam = static_cast<int32_t>(0x2),
__E_Normal = static_cast<int32_t>(0x4),
__E_Hit = static_cast<int32_t>(0x8),
__E_Stunned = static_cast<int32_t>(0x10),
__E_Grace = static_cast<int32_t>(0x20),
__E_Eliminated = static_cast<int32_t>(0x40),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaPaintbrawlManager_PaintbrawlStatus_Unwrapped () const noexcept {
return static_cast<__GorillaPaintbrawlManager_PaintbrawlStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaPaintbrawlManager_PaintbrawlStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaPaintbrawlManager_PaintbrawlStatus(int32_t  value__) noexcept;

/// @brief Field BlueTeam value: I32(2)
static ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus const BlueTeam;

/// @brief Field Eliminated value: I32(64)
static ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus const Eliminated;

/// @brief Field Grace value: I32(32)
static ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus const Grace;

/// @brief Field Hit value: I32(8)
static ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus const Hit;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus const None;

/// @brief Field Normal value: I32(4)
static ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus const Normal;

/// @brief Field RedTeam value: I32(1)
static ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus const RedTeam;

/// @brief Field Stunned value: I32(16)
static ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus const Stunned;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2205};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
