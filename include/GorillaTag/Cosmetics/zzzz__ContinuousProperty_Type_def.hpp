#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousProperty_Type.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContinuousProperty_Type)
// Forward declare root types
namespace GlobalNamespace {
struct ContinuousProperty_Type;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ContinuousProperty_Type);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContinuousProperty_Type, "GorillaTag.Cosmetics", "ContinuousProperty/Type");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.ContinuousProperty/Type
struct CORDL_TYPE ContinuousProperty_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContinuousProperty_Type_Unwrapped
enum struct __ContinuousProperty_Type_Unwrapped : int32_t {
__E_Color = static_cast<int32_t>(0x0),
__E_Scale = static_cast<int32_t>(0x1),
__E_BlendShape = static_cast<int32_t>(0x2),
__E_Float = static_cast<int32_t>(0x3),
__E_ShaderVector2_X = static_cast<int32_t>(0x4),
__E_ShaderColor = static_cast<int32_t>(0x5),
__E_BezierInterpolation = static_cast<int32_t>(0x6),
__E_AxisAngle = static_cast<int32_t>(0x7),
__E_TransformInterpolation = static_cast<int32_t>(0x8),
__E_OffsetInterpolation = static_cast<int32_t>(0x9),
__E_Boolean = static_cast<int32_t>(0xa),
__E_Speed = static_cast<int32_t>(0xb),
__E_Rate = static_cast<int32_t>(0xc),
__E_Volume = static_cast<int32_t>(0xd),
__E_Pitch = static_cast<int32_t>(0xe),
__E_PlayStop = static_cast<int32_t>(0xf),
__E_EnableDisable = static_cast<int32_t>(0x10),
__E_UnityEvent = static_cast<int32_t>(0x11),
__E_Trigger = static_cast<int32_t>(0x12),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContinuousProperty_Type_Unwrapped () const noexcept {
return static_cast<__ContinuousProperty_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContinuousProperty_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContinuousProperty_Type(int32_t  value__) noexcept;

/// @brief Field AxisAngle value: I32(7)
static ::GlobalNamespace::ContinuousProperty_Type const AxisAngle;

/// @brief Field BezierInterpolation value: I32(6)
static ::GlobalNamespace::ContinuousProperty_Type const BezierInterpolation;

/// @brief Field BlendShape value: I32(2)
static ::GlobalNamespace::ContinuousProperty_Type const BlendShape;

/// @brief Field Boolean value: I32(10)
static ::GlobalNamespace::ContinuousProperty_Type const Boolean;

/// @brief Field Color value: I32(0)
static ::GlobalNamespace::ContinuousProperty_Type const Color;

/// @brief Field EnableDisable value: I32(16)
static ::GlobalNamespace::ContinuousProperty_Type const EnableDisable;

/// @brief Field Float value: I32(3)
static ::GlobalNamespace::ContinuousProperty_Type const Float;

/// @brief Field OffsetInterpolation value: I32(9)
static ::GlobalNamespace::ContinuousProperty_Type const OffsetInterpolation;

/// @brief Field Pitch value: I32(14)
static ::GlobalNamespace::ContinuousProperty_Type const Pitch;

/// @brief Field PlayStop value: I32(15)
static ::GlobalNamespace::ContinuousProperty_Type const PlayStop;

/// @brief Field Rate value: I32(12)
static ::GlobalNamespace::ContinuousProperty_Type const Rate;

/// @brief Field Scale value: I32(1)
static ::GlobalNamespace::ContinuousProperty_Type const Scale;

/// @brief Field ShaderColor value: I32(5)
static ::GlobalNamespace::ContinuousProperty_Type const ShaderColor;

/// @brief Field ShaderVector2_X value: I32(4)
static ::GlobalNamespace::ContinuousProperty_Type const ShaderVector2_X;

/// @brief Field Speed value: I32(11)
static ::GlobalNamespace::ContinuousProperty_Type const Speed;

/// @brief Field TransformInterpolation value: I32(8)
static ::GlobalNamespace::ContinuousProperty_Type const TransformInterpolation;

/// @brief Field Trigger value: I32(18)
static ::GlobalNamespace::ContinuousProperty_Type const Trigger;

/// @brief Field UnityEvent value: I32(17)
static ::GlobalNamespace::ContinuousProperty_Type const UnityEvent;

/// @brief Field Volume value: I32(13)
static ::GlobalNamespace::ContinuousProperty_Type const Volume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4881};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContinuousProperty_Type, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContinuousProperty_Type) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
