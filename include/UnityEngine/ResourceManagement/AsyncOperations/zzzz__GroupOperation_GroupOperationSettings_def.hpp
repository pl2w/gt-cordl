#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/GroupOperation_GroupOperationSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GroupOperation_GroupOperationSettings)
// Forward declare root types
namespace GlobalNamespace {
struct GroupOperation_GroupOperationSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GroupOperation_GroupOperationSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GroupOperation_GroupOperationSettings, "UnityEngine.ResourceManagement.AsyncOperations", "GroupOperation/GroupOperationSettings");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/GroupOperationSettings
struct CORDL_TYPE GroupOperation_GroupOperationSettings {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GroupOperation_GroupOperationSettings_Unwrapped
enum struct __GroupOperation_GroupOperationSettings_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ReleaseDependenciesOnFailure = static_cast<int32_t>(0x1),
__E_AllowFailedDependencies = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GroupOperation_GroupOperationSettings_Unwrapped () const noexcept {
return static_cast<__GroupOperation_GroupOperationSettings_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GroupOperation_GroupOperationSettings() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GroupOperation_GroupOperationSettings(int32_t  value__) noexcept;

/// @brief Field AllowFailedDependencies value: I32(2)
static ::GlobalNamespace::GroupOperation_GroupOperationSettings const AllowFailedDependencies;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::GroupOperation_GroupOperationSettings const None;

/// @brief Field ReleaseDependenciesOnFailure value: I32(1)
static ::GlobalNamespace::GroupOperation_GroupOperationSettings const ReleaseDependenciesOnFailure;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28663};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GroupOperation_GroupOperationSettings, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GroupOperation_GroupOperationSettings) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
