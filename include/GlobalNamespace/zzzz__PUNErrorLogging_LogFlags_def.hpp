#pragma once
// IWYU pragma private; include "GlobalNamespace/PUNErrorLogging_LogFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PUNErrorLogging_LogFlags)
// Forward declare root types
namespace GlobalNamespace {
struct PUNErrorLogging_LogFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PUNErrorLogging_LogFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PUNErrorLogging_LogFlags, "", "PUNErrorLogging/LogFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PUNErrorLogging/LogFlags
struct CORDL_TYPE PUNErrorLogging_LogFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PUNErrorLogging_LogFlags_Unwrapped
enum struct __PUNErrorLogging_LogFlags_Unwrapped : int32_t {
__E_SerializeView = static_cast<int32_t>(0x1),
__E_OwnershipTransfer = static_cast<int32_t>(0x2),
__E_OwnershipRequest = static_cast<int32_t>(0x4),
__E_OwnershipUpdate = static_cast<int32_t>(0x8),
__E_RPC = static_cast<int32_t>(0x10),
__E_Instantiate = static_cast<int32_t>(0x20),
__E_Destroy = static_cast<int32_t>(0x40),
__E_DestroyPlayer = static_cast<int32_t>(0x80),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PUNErrorLogging_LogFlags_Unwrapped () const noexcept {
return static_cast<__PUNErrorLogging_LogFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PUNErrorLogging_LogFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PUNErrorLogging_LogFlags(int32_t  value__) noexcept;

/// @brief Field Destroy value: I32(64)
static ::GlobalNamespace::PUNErrorLogging_LogFlags const Destroy;

/// @brief Field DestroyPlayer value: I32(128)
static ::GlobalNamespace::PUNErrorLogging_LogFlags const DestroyPlayer;

/// @brief Field Instantiate value: I32(32)
static ::GlobalNamespace::PUNErrorLogging_LogFlags const Instantiate;

/// @brief Field OwnershipRequest value: I32(4)
static ::GlobalNamespace::PUNErrorLogging_LogFlags const OwnershipRequest;

/// @brief Field OwnershipTransfer value: I32(2)
static ::GlobalNamespace::PUNErrorLogging_LogFlags const OwnershipTransfer;

/// @brief Field OwnershipUpdate value: I32(8)
static ::GlobalNamespace::PUNErrorLogging_LogFlags const OwnershipUpdate;

/// @brief Field RPC value: I32(16)
static ::GlobalNamespace::PUNErrorLogging_LogFlags const RPC;

/// @brief Field SerializeView value: I32(1)
static ::GlobalNamespace::PUNErrorLogging_LogFlags const SerializeView;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3343};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PUNErrorLogging_LogFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PUNErrorLogging_LogFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
