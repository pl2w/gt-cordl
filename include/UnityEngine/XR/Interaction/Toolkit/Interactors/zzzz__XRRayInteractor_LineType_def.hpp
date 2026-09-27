#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRRayInteractor_LineType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRRayInteractor_LineType)
// Forward declare root types
namespace GlobalNamespace {
struct XRRayInteractor_LineType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRRayInteractor_LineType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRRayInteractor_LineType, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRRayInteractor/LineType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor/LineType
struct CORDL_TYPE XRRayInteractor_LineType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRRayInteractor_LineType_Unwrapped
enum struct __XRRayInteractor_LineType_Unwrapped : int32_t {
__E_StraightLine = static_cast<int32_t>(0x0),
__E_ProjectileCurve = static_cast<int32_t>(0x1),
__E_BezierCurve = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRRayInteractor_LineType_Unwrapped () const noexcept {
return static_cast<__XRRayInteractor_LineType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRRayInteractor_LineType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRRayInteractor_LineType(int32_t  value__) noexcept;

/// @brief Field BezierCurve value: I32(2)
static ::GlobalNamespace::XRRayInteractor_LineType const BezierCurve;

/// @brief Field ProjectileCurve value: I32(1)
static ::GlobalNamespace::XRRayInteractor_LineType const ProjectileCurve;

/// @brief Field StraightLine value: I32(0)
static ::GlobalNamespace::XRRayInteractor_LineType const StraightLine;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11461};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRRayInteractor_LineType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRRayInteractor_LineType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
