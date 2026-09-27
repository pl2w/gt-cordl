#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointRotationActiveState_RelativeTo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JointRotationActiveState_RelativeTo)
// Forward declare root types
namespace GlobalNamespace {
struct JointRotationActiveState_RelativeTo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JointRotationActiveState_RelativeTo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JointRotationActiveState_RelativeTo, "Oculus.Interaction.PoseDetection", "JointRotationActiveState/RelativeTo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.JointRotationActiveState/RelativeTo
struct CORDL_TYPE JointRotationActiveState_RelativeTo {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JointRotationActiveState_RelativeTo_Unwrapped
enum struct __JointRotationActiveState_RelativeTo_Unwrapped : int32_t {
__E_Hand = static_cast<int32_t>(0x0),
__E_World = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JointRotationActiveState_RelativeTo_Unwrapped () const noexcept {
return static_cast<__JointRotationActiveState_RelativeTo_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JointRotationActiveState_RelativeTo() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JointRotationActiveState_RelativeTo(int32_t  value__) noexcept;

/// @brief Field Hand value: I32(0)
static ::GlobalNamespace::JointRotationActiveState_RelativeTo const Hand;

/// @brief Field World value: I32(1)
static ::GlobalNamespace::JointRotationActiveState_RelativeTo const World;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16125};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JointRotationActiveState_RelativeTo, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JointRotationActiveState_RelativeTo) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
