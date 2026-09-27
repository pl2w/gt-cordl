#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimationCurves_EaseType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationCurves_EaseType)
// Forward declare root types
namespace GlobalNamespace {
struct AnimationCurves_EaseType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AnimationCurves_EaseType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimationCurves_EaseType, "", "AnimationCurves/EaseType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AnimationCurves/EaseType
struct CORDL_TYPE AnimationCurves_EaseType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AnimationCurves_EaseType_Unwrapped
enum struct __AnimationCurves_EaseType_Unwrapped : int32_t {
__E_EaseInQuad = static_cast<int32_t>(0x1),
__E_EaseOutQuad = static_cast<int32_t>(0x2),
__E_EaseInOutQuad = static_cast<int32_t>(0x3),
__E_EaseInCubic = static_cast<int32_t>(0x4),
__E_EaseOutCubic = static_cast<int32_t>(0x5),
__E_EaseInOutCubic = static_cast<int32_t>(0x6),
__E_EaseInQuart = static_cast<int32_t>(0x7),
__E_EaseOutQuart = static_cast<int32_t>(0x8),
__E_EaseInOutQuart = static_cast<int32_t>(0x9),
__E_EaseInQuint = static_cast<int32_t>(0xa),
__E_EaseOutQuint = static_cast<int32_t>(0xb),
__E_EaseInOutQuint = static_cast<int32_t>(0xc),
__E_EaseInSine = static_cast<int32_t>(0xd),
__E_EaseOutSine = static_cast<int32_t>(0xe),
__E_EaseInOutSine = static_cast<int32_t>(0xf),
__E_EaseInExpo = static_cast<int32_t>(0x10),
__E_EaseOutExpo = static_cast<int32_t>(0x11),
__E_EaseInOutExpo = static_cast<int32_t>(0x12),
__E_EaseInCirc = static_cast<int32_t>(0x13),
__E_EaseOutCirc = static_cast<int32_t>(0x14),
__E_EaseInOutCirc = static_cast<int32_t>(0x15),
__E_EaseInBounce = static_cast<int32_t>(0x16),
__E_EaseOutBounce = static_cast<int32_t>(0x17),
__E_EaseInOutBounce = static_cast<int32_t>(0x18),
__E_EaseInBack = static_cast<int32_t>(0x19),
__E_EaseOutBack = static_cast<int32_t>(0x1a),
__E_EaseInOutBack = static_cast<int32_t>(0x1b),
__E_EaseInElastic = static_cast<int32_t>(0x1c),
__E_EaseOutElastic = static_cast<int32_t>(0x1d),
__E_EaseInOutElastic = static_cast<int32_t>(0x1e),
__E_Spring = static_cast<int32_t>(0x1f),
__E_Linear = static_cast<int32_t>(0x20),
__E_Step = static_cast<int32_t>(0x21),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnimationCurves_EaseType_Unwrapped () const noexcept {
return static_cast<__AnimationCurves_EaseType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AnimationCurves_EaseType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AnimationCurves_EaseType(int32_t  value__) noexcept;

/// @brief Field EaseInBack value: I32(25)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInBack;

/// @brief Field EaseInBounce value: I32(22)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInBounce;

/// @brief Field EaseInCirc value: I32(19)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInCirc;

/// @brief Field EaseInCubic value: I32(4)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInCubic;

/// @brief Field EaseInElastic value: I32(28)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInElastic;

/// @brief Field EaseInExpo value: I32(16)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInExpo;

/// @brief Field EaseInOutBack value: I32(27)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInOutBack;

/// @brief Field EaseInOutBounce value: I32(24)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInOutBounce;

/// @brief Field EaseInOutCirc value: I32(21)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInOutCirc;

/// @brief Field EaseInOutCubic value: I32(6)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInOutCubic;

/// @brief Field EaseInOutElastic value: I32(30)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInOutElastic;

/// @brief Field EaseInOutExpo value: I32(18)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInOutExpo;

/// @brief Field EaseInOutQuad value: I32(3)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInOutQuad;

/// @brief Field EaseInOutQuart value: I32(9)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInOutQuart;

/// @brief Field EaseInOutQuint value: I32(12)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInOutQuint;

/// @brief Field EaseInOutSine value: I32(15)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInOutSine;

/// @brief Field EaseInQuad value: I32(1)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInQuad;

/// @brief Field EaseInQuart value: I32(7)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInQuart;

/// @brief Field EaseInQuint value: I32(10)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInQuint;

/// @brief Field EaseInSine value: I32(13)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseInSine;

/// @brief Field EaseOutBack value: I32(26)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseOutBack;

/// @brief Field EaseOutBounce value: I32(23)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseOutBounce;

/// @brief Field EaseOutCirc value: I32(20)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseOutCirc;

/// @brief Field EaseOutCubic value: I32(5)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseOutCubic;

/// @brief Field EaseOutElastic value: I32(29)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseOutElastic;

/// @brief Field EaseOutExpo value: I32(17)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseOutExpo;

/// @brief Field EaseOutQuad value: I32(2)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseOutQuad;

/// @brief Field EaseOutQuart value: I32(8)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseOutQuart;

/// @brief Field EaseOutQuint value: I32(11)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseOutQuint;

/// @brief Field EaseOutSine value: I32(14)
static ::GlobalNamespace::AnimationCurves_EaseType const EaseOutSine;

/// @brief Field Linear value: I32(32)
static ::GlobalNamespace::AnimationCurves_EaseType const Linear;

/// @brief Field Spring value: I32(31)
static ::GlobalNamespace::AnimationCurves_EaseType const Spring;

/// @brief Field Step value: I32(33)
static ::GlobalNamespace::AnimationCurves_EaseType const Step;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2790};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimationCurves_EaseType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimationCurves_EaseType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
