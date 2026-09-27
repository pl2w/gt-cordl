#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSlicerSimpleManager_UpdateStep.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaSlicerSimpleManager_UpdateStep)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaSlicerSimpleManager_UpdateStep;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep, "", "GorillaSlicerSimpleManager/UpdateStep");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaSlicerSimpleManager/UpdateStep
struct CORDL_TYPE GorillaSlicerSimpleManager_UpdateStep {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaSlicerSimpleManager_UpdateStep_Unwrapped
enum struct __GorillaSlicerSimpleManager_UpdateStep_Unwrapped : int32_t {
__E_FixedUpdate = static_cast<int32_t>(0x0),
__E_Update = static_cast<int32_t>(0x1),
__E_LateUpdate = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaSlicerSimpleManager_UpdateStep_Unwrapped () const noexcept {
return static_cast<__GorillaSlicerSimpleManager_UpdateStep_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaSlicerSimpleManager_UpdateStep() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaSlicerSimpleManager_UpdateStep(int32_t  value__) noexcept;

/// @brief Field FixedUpdate value: I32(0)
static ::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep const FixedUpdate;

/// @brief Field LateUpdate value: I32(2)
static ::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep const LateUpdate;

/// @brief Field Update value: I32(1)
static ::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep const Update;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2215};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
