#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ScaleAudioEvents_Direction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScaleAudioEvents_Direction)
// Forward declare root types
namespace GlobalNamespace {
struct ScaleAudioEvents_Direction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScaleAudioEvents_Direction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScaleAudioEvents_Direction, "Oculus.Interaction.Samples", "ScaleAudioEvents/Direction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Samples.ScaleAudioEvents/Direction
struct CORDL_TYPE ScaleAudioEvents_Direction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScaleAudioEvents_Direction_Unwrapped
enum struct __ScaleAudioEvents_Direction_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ScaleUp = static_cast<int32_t>(0x1),
__E_ScaleDown = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScaleAudioEvents_Direction_Unwrapped () const noexcept {
return static_cast<__ScaleAudioEvents_Direction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScaleAudioEvents_Direction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScaleAudioEvents_Direction(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::ScaleAudioEvents_Direction const None;

/// @brief Field ScaleDown value: I32(2)
static ::GlobalNamespace::ScaleAudioEvents_Direction const ScaleDown;

/// @brief Field ScaleUp value: I32(1)
static ::GlobalNamespace::ScaleAudioEvents_Direction const ScaleUp;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28336};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScaleAudioEvents_Direction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScaleAudioEvents_Direction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
