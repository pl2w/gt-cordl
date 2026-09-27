#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXEnabledBinder_Check.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXEnabledBinder_Check)
// Forward declare root types
namespace GlobalNamespace {
struct VFXEnabledBinder_Check;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VFXEnabledBinder_Check);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VFXEnabledBinder_Check, "UnityEngine.VFX.Utility", "VFXEnabledBinder/Check");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.VFX.Utility.VFXEnabledBinder/Check
struct CORDL_TYPE VFXEnabledBinder_Check {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VFXEnabledBinder_Check_Unwrapped
enum struct __VFXEnabledBinder_Check_Unwrapped : int32_t {
__E_ActiveInHierarchy = static_cast<int32_t>(0x0),
__E_ActiveSelf = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VFXEnabledBinder_Check_Unwrapped () const noexcept {
return static_cast<__VFXEnabledBinder_Check_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VFXEnabledBinder_Check() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VFXEnabledBinder_Check(int32_t  value__) noexcept;

/// @brief Field ActiveInHierarchy value: I32(0)
static ::GlobalNamespace::VFXEnabledBinder_Check const ActiveInHierarchy;

/// @brief Field ActiveSelf value: I32(1)
static ::GlobalNamespace::VFXEnabledBinder_Check const ActiveSelf;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30059};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VFXEnabledBinder_Check, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VFXEnabledBinder_Check) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
