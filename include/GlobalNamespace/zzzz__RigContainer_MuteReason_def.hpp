#pragma once
// IWYU pragma private; include "GlobalNamespace/RigContainer_MuteReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RigContainer_MuteReason)
// Forward declare root types
namespace GlobalNamespace {
struct RigContainer_MuteReason;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RigContainer_MuteReason);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigContainer_MuteReason, "", "RigContainer/MuteReason");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RigContainer/MuteReason
struct CORDL_TYPE RigContainer_MuteReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RigContainer_MuteReason_Unwrapped
enum struct __RigContainer_MuteReason_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Manual = static_cast<int32_t>(0x1),
__E_Auto = static_cast<int32_t>(0x2),
__E_Banned = static_cast<int32_t>(0x4),
__E_OversizedStream = static_cast<int32_t>(0x8),
__E_Room = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RigContainer_MuteReason_Unwrapped () const noexcept {
return static_cast<__RigContainer_MuteReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RigContainer_MuteReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RigContainer_MuteReason(int32_t  value__) noexcept;

/// @brief Field Auto value: I32(2)
static ::GlobalNamespace::RigContainer_MuteReason const Auto;

/// @brief Field Banned value: I32(4)
static ::GlobalNamespace::RigContainer_MuteReason const Banned;

/// @brief Field Manual value: I32(1)
static ::GlobalNamespace::RigContainer_MuteReason const Manual;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::RigContainer_MuteReason const None;

/// @brief Field OversizedStream value: I32(8)
static ::GlobalNamespace::RigContainer_MuteReason const OversizedStream;

/// @brief Field Room value: I32(16)
static ::GlobalNamespace::RigContainer_MuteReason const Room;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2132};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigContainer_MuteReason, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigContainer_MuteReason) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
