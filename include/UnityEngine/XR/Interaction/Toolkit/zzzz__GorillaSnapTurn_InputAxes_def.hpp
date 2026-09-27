#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/GorillaSnapTurn_InputAxes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaSnapTurn_InputAxes)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaSnapTurn_InputAxes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaSnapTurn_InputAxes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSnapTurn_InputAxes, "UnityEngine.XR.Interaction.Toolkit", "GorillaSnapTurn/InputAxes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.GorillaSnapTurn/InputAxes
struct CORDL_TYPE GorillaSnapTurn_InputAxes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaSnapTurn_InputAxes_Unwrapped
enum struct __GorillaSnapTurn_InputAxes_Unwrapped : int32_t {
__E_Primary2DAxis = static_cast<int32_t>(0x0),
__E_Secondary2DAxis = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaSnapTurn_InputAxes_Unwrapped () const noexcept {
return static_cast<__GorillaSnapTurn_InputAxes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaSnapTurn_InputAxes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaSnapTurn_InputAxes(int32_t  value__) noexcept;

/// @brief Field Primary2DAxis value: I32(0)
static ::GlobalNamespace::GorillaSnapTurn_InputAxes const Primary2DAxis;

/// @brief Field Secondary2DAxis value: I32(1)
static ::GlobalNamespace::GorillaSnapTurn_InputAxes const Secondary2DAxis;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3898};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaSnapTurn_InputAxes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaSnapTurn_InputAxes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
