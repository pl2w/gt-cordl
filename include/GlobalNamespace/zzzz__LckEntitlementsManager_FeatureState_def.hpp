#pragma once
// IWYU pragma private; include "GlobalNamespace/LckEntitlementsManager_FeatureState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckEntitlementsManager_FeatureState)
// Forward declare root types
namespace GlobalNamespace {
struct LckEntitlementsManager_FeatureState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckEntitlementsManager_FeatureState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEntitlementsManager_FeatureState, "", "LckEntitlementsManager/FeatureState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LckEntitlementsManager/FeatureState
struct CORDL_TYPE LckEntitlementsManager_FeatureState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LckEntitlementsManager_FeatureState_Unwrapped
enum struct __LckEntitlementsManager_FeatureState_Unwrapped : int32_t {
__E_Checking = static_cast<int32_t>(0x0),
__E_Enabled = static_cast<int32_t>(0x1),
__E_Disabled = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckEntitlementsManager_FeatureState_Unwrapped () const noexcept {
return static_cast<__LckEntitlementsManager_FeatureState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckEntitlementsManager_FeatureState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckEntitlementsManager_FeatureState(int32_t  value__) noexcept;

/// @brief Field Checking value: I32(0)
static ::GlobalNamespace::LckEntitlementsManager_FeatureState const Checking;

/// @brief Field Disabled value: I32(2)
static ::GlobalNamespace::LckEntitlementsManager_FeatureState const Disabled;

/// @brief Field Enabled value: I32(1)
static ::GlobalNamespace::LckEntitlementsManager_FeatureState const Enabled;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1019};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager_FeatureState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEntitlementsManager_FeatureState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
