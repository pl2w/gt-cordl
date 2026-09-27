#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutManager_SharedManagerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutManager_SharedManagerState)
// Forward declare root types
namespace GlobalNamespace {
struct LayoutManager_SharedManagerState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LayoutManager_SharedManagerState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LayoutManager_SharedManagerState, "UnityEngine.UIElements.Layout", "LayoutManager/SharedManagerState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutManager/SharedManagerState
struct CORDL_TYPE LayoutManager_SharedManagerState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LayoutManager_SharedManagerState_Unwrapped
enum struct __LayoutManager_SharedManagerState_Unwrapped : int32_t {
__E_Uninitialized = static_cast<int32_t>(0x0),
__E_Initialized = static_cast<int32_t>(0x1),
__E_Shutdown = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LayoutManager_SharedManagerState_Unwrapped () const noexcept {
return static_cast<__LayoutManager_SharedManagerState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LayoutManager_SharedManagerState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LayoutManager_SharedManagerState(int32_t  value__) noexcept;

/// @brief Field Initialized value: I32(1)
static ::GlobalNamespace::LayoutManager_SharedManagerState const Initialized;

/// @brief Field Shutdown value: I32(2)
static ::GlobalNamespace::LayoutManager_SharedManagerState const Shutdown;

/// @brief Field Uninitialized value: I32(0)
static ::GlobalNamespace::LayoutManager_SharedManagerState const Uninitialized;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8628};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LayoutManager_SharedManagerState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LayoutManager_SharedManagerState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
