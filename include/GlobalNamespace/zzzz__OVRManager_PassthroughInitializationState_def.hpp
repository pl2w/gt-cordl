#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager_PassthroughInitializationState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRManager_PassthroughInitializationState)
// Forward declare root types
namespace GlobalNamespace {
struct OVRManager_PassthroughInitializationState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRManager_PassthroughInitializationState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRManager_PassthroughInitializationState, "", "OVRManager/PassthroughInitializationState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/PassthroughInitializationState
struct CORDL_TYPE OVRManager_PassthroughInitializationState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRManager_PassthroughInitializationState_Unwrapped
enum struct __OVRManager_PassthroughInitializationState_Unwrapped : int32_t {
__E_Unspecified = static_cast<int32_t>(0x0),
__E_Pending = static_cast<int32_t>(0x1),
__E_Initialized = static_cast<int32_t>(0x2),
__E_Failed = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRManager_PassthroughInitializationState_Unwrapped () const noexcept {
return static_cast<__OVRManager_PassthroughInitializationState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRManager_PassthroughInitializationState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRManager_PassthroughInitializationState(int32_t  value__) noexcept;

/// @brief Field Failed value: I32(3)
static ::GlobalNamespace::OVRManager_PassthroughInitializationState const Failed;

/// @brief Field Initialized value: I32(2)
static ::GlobalNamespace::OVRManager_PassthroughInitializationState const Initialized;

/// @brief Field Pending value: I32(1)
static ::GlobalNamespace::OVRManager_PassthroughInitializationState const Pending;

/// @brief Field Unspecified value: I32(0)
static ::GlobalNamespace::OVRManager_PassthroughInitializationState const Unspecified;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11991};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_PassthroughInitializationState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRManager_PassthroughInitializationState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
