#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUSort_Stage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUSort_Stage)
// Forward declare root types
namespace GlobalNamespace {
struct GPUSort_Stage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GPUSort_Stage);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPUSort_Stage, "UnityEngine.Rendering", "GPUSort/Stage");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUSort/Stage
struct CORDL_TYPE GPUSort_Stage {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GPUSort_Stage_Unwrapped
enum struct __GPUSort_Stage_Unwrapped : int32_t {
__E_LocalBMS = static_cast<int32_t>(0x0),
__E_LocalDisperse = static_cast<int32_t>(0x1),
__E_BigFlip = static_cast<int32_t>(0x2),
__E_BigDisperse = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GPUSort_Stage_Unwrapped () const noexcept {
return static_cast<__GPUSort_Stage_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GPUSort_Stage() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GPUSort_Stage(int32_t  value__) noexcept;

/// @brief Field BigDisperse value: I32(3)
static ::GlobalNamespace::GPUSort_Stage const BigDisperse;

/// @brief Field BigFlip value: I32(2)
static ::GlobalNamespace::GPUSort_Stage const BigFlip;

/// @brief Field LocalBMS value: I32(0)
static ::GlobalNamespace::GPUSort_Stage const LocalBMS;

/// @brief Field LocalDisperse value: I32(1)
static ::GlobalNamespace::GPUSort_Stage const LocalDisperse;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17017};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPUSort_Stage, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPUSort_Stage) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
