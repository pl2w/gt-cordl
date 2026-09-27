#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentManager_TagBehavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScienceExperimentManager_TagBehavior)
// Forward declare root types
namespace GlobalNamespace {
struct ScienceExperimentManager_TagBehavior;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScienceExperimentManager_TagBehavior);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScienceExperimentManager_TagBehavior, "GorillaTag", "ScienceExperimentManager/TagBehavior");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.ScienceExperimentManager/TagBehavior
struct CORDL_TYPE ScienceExperimentManager_TagBehavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScienceExperimentManager_TagBehavior_Unwrapped
enum struct __ScienceExperimentManager_TagBehavior_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Infect = static_cast<int32_t>(0x1),
__E_Revive = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScienceExperimentManager_TagBehavior_Unwrapped () const noexcept {
return static_cast<__ScienceExperimentManager_TagBehavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScienceExperimentManager_TagBehavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScienceExperimentManager_TagBehavior(int32_t  value__) noexcept;

/// @brief Field Infect value: I32(1)
static ::GlobalNamespace::ScienceExperimentManager_TagBehavior const Infect;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::ScienceExperimentManager_TagBehavior const None;

/// @brief Field Revive value: I32(2)
static ::GlobalNamespace::ScienceExperimentManager_TagBehavior const Revive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4636};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScienceExperimentManager_TagBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScienceExperimentManager_TagBehavior) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
