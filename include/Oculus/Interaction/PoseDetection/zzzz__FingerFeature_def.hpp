#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FingerFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerFeature)
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
struct FingerFeature;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::PoseDetection::FingerFeature);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FingerFeature, "Oculus.Interaction.PoseDetection", "FingerFeature");
// Dependencies 
namespace Oculus::Interaction::PoseDetection {
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.FingerFeature
struct CORDL_TYPE FingerFeature {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FingerFeature_Unwrapped
enum struct __FingerFeature_Unwrapped : int32_t {
__E_Curl = static_cast<int32_t>(0x0),
__E_Flexion = static_cast<int32_t>(0x1),
__E_Abduction = static_cast<int32_t>(0x2),
__E_Opposition = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FingerFeature_Unwrapped () const noexcept {
return static_cast<__FingerFeature_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FingerFeature() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FingerFeature(int32_t  value__) noexcept;

/// @brief Field Abduction value: I32(2)
static ::Oculus::Interaction::PoseDetection::FingerFeature const Abduction;

/// @brief Field Curl value: I32(0)
static ::Oculus::Interaction::PoseDetection::FingerFeature const Curl;

/// @brief Field Flexion value: I32(1)
static ::Oculus::Interaction::PoseDetection::FingerFeature const Flexion;

/// @brief Field Opposition value: I32(3)
static ::Oculus::Interaction::PoseDetection::FingerFeature const Opposition;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16114};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeature, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeature) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
