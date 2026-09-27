#pragma once
// IWYU pragma private; include "Liv/Lck/InteractionSystemDetector_InteractionSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InteractionSystemDetector_InteractionSystem)
// Forward declare root types
namespace GlobalNamespace {
struct InteractionSystemDetector_InteractionSystem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InteractionSystemDetector_InteractionSystem);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InteractionSystemDetector_InteractionSystem, "Liv.Lck", "InteractionSystemDetector/InteractionSystem");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.InteractionSystemDetector/InteractionSystem
struct CORDL_TYPE InteractionSystemDetector_InteractionSystem {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InteractionSystemDetector_InteractionSystem_Unwrapped
enum struct __InteractionSystemDetector_InteractionSystem_Unwrapped : int32_t {
__E_XRInteractionToolkit = static_cast<int32_t>(0x0),
__E_OculusInteraction = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InteractionSystemDetector_InteractionSystem_Unwrapped () const noexcept {
return static_cast<__InteractionSystemDetector_InteractionSystem_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InteractionSystemDetector_InteractionSystem() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InteractionSystemDetector_InteractionSystem(int32_t  value__) noexcept;

/// @brief Field OculusInteraction value: I32(1)
static ::GlobalNamespace::InteractionSystemDetector_InteractionSystem const OculusInteraction;

/// @brief Field XRInteractionToolkit value: I32(0)
static ::GlobalNamespace::InteractionSystemDetector_InteractionSystem const XRInteractionToolkit;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24765};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InteractionSystemDetector_InteractionSystem, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InteractionSystemDetector_InteractionSystem) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
