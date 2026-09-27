#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/InteractableFarAttachMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InteractableFarAttachMode)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
struct InteractableFarAttachMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode, "UnityEngine.XR.Interaction.Toolkit.Attachment", "InteractableFarAttachMode");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Attachment.InteractableFarAttachMode
struct CORDL_TYPE InteractableFarAttachMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InteractableFarAttachMode_Unwrapped
enum struct __InteractableFarAttachMode_Unwrapped : int32_t {
__E_DeferToInteractor = static_cast<int32_t>(0x0),
__E_Near = static_cast<int32_t>(0x1),
__E_Far = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InteractableFarAttachMode_Unwrapped () const noexcept {
return static_cast<__InteractableFarAttachMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InteractableFarAttachMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InteractableFarAttachMode(int32_t  value__) noexcept;

/// @brief Field DeferToInteractor value: I32(0)
static ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode const DeferToInteractor;

/// @brief Field Far value: I32(2)
static ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode const Far;

/// @brief Field Near value: I32(1)
static ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode const Near;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11579};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Attachment
