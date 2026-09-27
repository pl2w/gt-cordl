#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneClearReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZoneClearReason)
// Forward declare root types
namespace GlobalNamespace {
struct ZoneClearReason;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ZoneClearReason);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneClearReason, "", "ZoneClearReason");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ZoneClearReason
struct CORDL_TYPE ZoneClearReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ZoneClearReason_Unwrapped
enum struct __ZoneClearReason_Unwrapped : int32_t {
__E_JoinZone = static_cast<int32_t>(0x0),
__E_LeaveZone = static_cast<int32_t>(0x1),
__E_Disconnect = static_cast<int32_t>(0x2),
__E_MigrateGameEntityZone = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZoneClearReason_Unwrapped () const noexcept {
return static_cast<__ZoneClearReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZoneClearReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ZoneClearReason(int32_t  value__) noexcept;

/// @brief Field Disconnect value: I32(2)
static ::GlobalNamespace::ZoneClearReason const Disconnect;

/// @brief Field JoinZone value: I32(0)
static ::GlobalNamespace::ZoneClearReason const JoinZone;

/// @brief Field LeaveZone value: I32(1)
static ::GlobalNamespace::ZoneClearReason const LeaveZone;

/// @brief Field MigrateGameEntityZone value: I32(3)
static ::GlobalNamespace::ZoneClearReason const MigrateGameEntityZone;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1741};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZoneClearReason, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZoneClearReason) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
