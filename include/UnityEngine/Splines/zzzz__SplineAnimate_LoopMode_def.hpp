#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineAnimate_LoopMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineAnimate_LoopMode)
// Forward declare root types
namespace GlobalNamespace {
struct SplineAnimate_LoopMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SplineAnimate_LoopMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineAnimate_LoopMode, "UnityEngine.Splines", "SplineAnimate/LoopMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineAnimate/LoopMode
struct CORDL_TYPE SplineAnimate_LoopMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplineAnimate_LoopMode_Unwrapped
enum struct __SplineAnimate_LoopMode_Unwrapped : int32_t {
__E_Once = static_cast<int32_t>(0x0),
__E_Loop = static_cast<int32_t>(0x1),
__E_LoopEaseInOnce = static_cast<int32_t>(0x2),
__E_PingPong = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplineAnimate_LoopMode_Unwrapped () const noexcept {
return static_cast<__SplineAnimate_LoopMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplineAnimate_LoopMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SplineAnimate_LoopMode(int32_t  value__) noexcept;

/// @brief Field Loop value: I32(1)
static ::GlobalNamespace::SplineAnimate_LoopMode const Loop;

/// @brief Field LoopEaseInOnce value: I32(2)
static ::GlobalNamespace::SplineAnimate_LoopMode const LoopEaseInOnce;

/// @brief Field Once value: I32(0)
static ::GlobalNamespace::SplineAnimate_LoopMode const Once;

/// @brief Field PingPong value: I32(3)
static ::GlobalNamespace::SplineAnimate_LoopMode const PingPong;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27948};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineAnimate_LoopMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineAnimate_LoopMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
