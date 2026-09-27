#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/EndPointType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EndPointType)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
struct EndPointType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "EndPointType");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.EndPointType
struct CORDL_TYPE EndPointType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EndPointType_Unwrapped
enum struct __EndPointType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_EmptyCastHit = static_cast<int32_t>(0x1),
__E_ValidCastHit = static_cast<int32_t>(0x2),
__E_AttachPoint = static_cast<int32_t>(0x3),
__E_UI = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EndPointType_Unwrapped () const noexcept {
return static_cast<__EndPointType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EndPointType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EndPointType(int32_t  value__) noexcept;

/// @brief Field AttachPoint value: I32(3)
static ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType const AttachPoint;

/// @brief Field EmptyCastHit value: I32(1)
static ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType const EmptyCastHit;

/// @brief Field None value: I32(0)
static ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType const None;

/// @brief Field UI value: I32(4)
static ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType const UI;

/// @brief Field ValidCastHit value: I32(2)
static ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType const ValidCastHit;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11484};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
