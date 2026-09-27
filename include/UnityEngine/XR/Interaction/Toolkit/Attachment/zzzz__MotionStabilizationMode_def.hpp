#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/MotionStabilizationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MotionStabilizationMode)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
struct MotionStabilizationMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode, "UnityEngine.XR.Interaction.Toolkit.Attachment", "MotionStabilizationMode");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Attachment.MotionStabilizationMode
struct CORDL_TYPE MotionStabilizationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MotionStabilizationMode_Unwrapped
enum struct __MotionStabilizationMode_Unwrapped : int32_t {
__E_Never = static_cast<int32_t>(0x0),
__E_WithPositionOffset = static_cast<int32_t>(0x1),
__E_Always = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MotionStabilizationMode_Unwrapped () const noexcept {
return static_cast<__MotionStabilizationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MotionStabilizationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MotionStabilizationMode(int32_t  value__) noexcept;

/// @brief Field Always value: I32(2)
static ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode const Always;

/// @brief Field Never value: I32(0)
static ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode const Never;

/// @brief Field WithPositionOffset value: I32(1)
static ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode const WithPositionOffset;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11581};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Attachment
