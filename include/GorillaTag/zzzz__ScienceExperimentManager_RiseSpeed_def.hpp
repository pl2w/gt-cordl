#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentManager_RiseSpeed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScienceExperimentManager_RiseSpeed)
// Forward declare root types
namespace GlobalNamespace {
struct ScienceExperimentManager_RiseSpeed;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScienceExperimentManager_RiseSpeed);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScienceExperimentManager_RiseSpeed, "GorillaTag", "ScienceExperimentManager/RiseSpeed");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.ScienceExperimentManager/RiseSpeed
struct CORDL_TYPE ScienceExperimentManager_RiseSpeed {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScienceExperimentManager_RiseSpeed_Unwrapped
enum struct __ScienceExperimentManager_RiseSpeed_Unwrapped : int32_t {
__E_Fast = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_Slow = static_cast<int32_t>(0x2),
__E_ExtraSlow = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScienceExperimentManager_RiseSpeed_Unwrapped () const noexcept {
return static_cast<__ScienceExperimentManager_RiseSpeed_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScienceExperimentManager_RiseSpeed() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScienceExperimentManager_RiseSpeed(int32_t  value__) noexcept;

/// @brief Field ExtraSlow value: I32(3)
static ::GlobalNamespace::ScienceExperimentManager_RiseSpeed const ExtraSlow;

/// @brief Field Fast value: I32(0)
static ::GlobalNamespace::ScienceExperimentManager_RiseSpeed const Fast;

/// @brief Field Medium value: I32(1)
static ::GlobalNamespace::ScienceExperimentManager_RiseSpeed const Medium;

/// @brief Field Slow value: I32(2)
static ::GlobalNamespace::ScienceExperimentManager_RiseSpeed const Slow;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4635};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScienceExperimentManager_RiseSpeed, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScienceExperimentManager_RiseSpeed) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
