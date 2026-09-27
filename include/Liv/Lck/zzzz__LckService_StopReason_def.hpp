#pragma once
// IWYU pragma private; include "Liv/Lck/LckService_StopReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckService_StopReason)
// Forward declare root types
namespace GlobalNamespace {
struct LckService_StopReason;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckService_StopReason);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckService_StopReason, "Liv.Lck", "LckService/StopReason");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.LckService/StopReason
struct CORDL_TYPE LckService_StopReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LckService_StopReason_Unwrapped
enum struct __LckService_StopReason_Unwrapped : int32_t {
__E_UserStopped = static_cast<int32_t>(0x0),
__E_LowStorageSpace = static_cast<int32_t>(0x1),
__E_Error = static_cast<int32_t>(0x2),
__E_ApplicationLifecycle = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckService_StopReason_Unwrapped () const noexcept {
return static_cast<__LckService_StopReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckService_StopReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckService_StopReason(int32_t  value__) noexcept;

/// @brief Field ApplicationLifecycle value: I32(3)
static ::GlobalNamespace::LckService_StopReason const ApplicationLifecycle;

/// @brief Field Error value: I32(2)
static ::GlobalNamespace::LckService_StopReason const Error;

/// @brief Field LowStorageSpace value: I32(1)
static ::GlobalNamespace::LckService_StopReason const LowStorageSpace;

/// @brief Field UserStopped value: I32(0)
static ::GlobalNamespace::LckService_StopReason const UserStopped;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24793};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckService_StopReason, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckService_StopReason) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
