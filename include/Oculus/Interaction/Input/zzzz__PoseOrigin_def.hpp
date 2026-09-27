#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/PoseOrigin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PoseOrigin)
// Forward declare root types
namespace Oculus::Interaction::Input {
struct PoseOrigin;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Input::PoseOrigin);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::PoseOrigin, "Oculus.Interaction.Input", "PoseOrigin");
// Dependencies 
namespace Oculus::Interaction::Input {
// Is value type: true
// CS Name: Oculus.Interaction.Input.PoseOrigin
struct CORDL_TYPE PoseOrigin {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PoseOrigin_Unwrapped
enum struct __PoseOrigin_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_RawTrackedPose = static_cast<int32_t>(0x1),
__E_FilteredTrackedPose = static_cast<int32_t>(0x2),
__E_SyntheticPose = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PoseOrigin_Unwrapped () const noexcept {
return static_cast<__PoseOrigin_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PoseOrigin() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PoseOrigin(int32_t  value__) noexcept;

/// @brief Field FilteredTrackedPose value: I32(2)
static ::Oculus::Interaction::Input::PoseOrigin const FilteredTrackedPose;

/// @brief Field None value: I32(0)
static ::Oculus::Interaction::Input::PoseOrigin const None;

/// @brief Field RawTrackedPose value: I32(1)
static ::Oculus::Interaction::Input::PoseOrigin const RawTrackedPose;

/// @brief Field SyntheticPose value: I32(3)
static ::Oculus::Interaction::Input::PoseOrigin const SyntheticPose;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16522};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::PoseOrigin, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::PoseOrigin) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
