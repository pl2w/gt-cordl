#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Samples/BodyPoseSwitcher_PoseSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BodyPoseSwitcher_PoseSource)
// Forward declare root types
namespace GlobalNamespace {
struct BodyPoseSwitcher_PoseSource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BodyPoseSwitcher_PoseSource);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BodyPoseSwitcher_PoseSource, "Oculus.Interaction.Body.Samples", "BodyPoseSwitcher/PoseSource");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Body.Samples.BodyPoseSwitcher/PoseSource
struct CORDL_TYPE BodyPoseSwitcher_PoseSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BodyPoseSwitcher_PoseSource_Unwrapped
enum struct __BodyPoseSwitcher_PoseSource_Unwrapped : int32_t {
__E_PoseA = static_cast<int32_t>(0x0),
__E_PoseB = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BodyPoseSwitcher_PoseSource_Unwrapped () const noexcept {
return static_cast<__BodyPoseSwitcher_PoseSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BodyPoseSwitcher_PoseSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BodyPoseSwitcher_PoseSource(int32_t  value__) noexcept;

/// @brief Field PoseA value: I32(0)
static ::GlobalNamespace::BodyPoseSwitcher_PoseSource const PoseA;

/// @brief Field PoseB value: I32(1)
static ::GlobalNamespace::BodyPoseSwitcher_PoseSource const PoseB;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28286};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BodyPoseSwitcher_PoseSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BodyPoseSwitcher_PoseSource) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
