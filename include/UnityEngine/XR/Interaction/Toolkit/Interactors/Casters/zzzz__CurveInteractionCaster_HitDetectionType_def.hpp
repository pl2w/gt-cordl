#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/CurveInteractionCaster_HitDetectionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CurveInteractionCaster_HitDetectionType)
// Forward declare root types
namespace GlobalNamespace {
struct CurveInteractionCaster_HitDetectionType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CurveInteractionCaster_HitDetectionType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CurveInteractionCaster_HitDetectionType, "UnityEngine.XR.Interaction.Toolkit.Interactors.Casters", "CurveInteractionCaster/HitDetectionType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.CurveInteractionCaster/HitDetectionType
struct CORDL_TYPE CurveInteractionCaster_HitDetectionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CurveInteractionCaster_HitDetectionType_Unwrapped
enum struct __CurveInteractionCaster_HitDetectionType_Unwrapped : int32_t {
__E_Raycast = static_cast<int32_t>(0x0),
__E_SphereCast = static_cast<int32_t>(0x1),
__E_ConeCast = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CurveInteractionCaster_HitDetectionType_Unwrapped () const noexcept {
return static_cast<__CurveInteractionCaster_HitDetectionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CurveInteractionCaster_HitDetectionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CurveInteractionCaster_HitDetectionType(int32_t  value__) noexcept;

/// @brief Field ConeCast value: I32(2)
static ::GlobalNamespace::CurveInteractionCaster_HitDetectionType const ConeCast;

/// @brief Field Raycast value: I32(0)
static ::GlobalNamespace::CurveInteractionCaster_HitDetectionType const Raycast;

/// @brief Field SphereCast value: I32(1)
static ::GlobalNamespace::CurveInteractionCaster_HitDetectionType const SphereCast;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11498};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CurveInteractionCaster_HitDetectionType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CurveInteractionCaster_HitDetectionType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
