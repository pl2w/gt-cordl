#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRBaseInputInteractor_InputTriggerType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRBaseInputInteractor_InputTriggerType)
// Forward declare root types
namespace GlobalNamespace {
struct XRBaseInputInteractor_InputTriggerType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRBaseInputInteractor_InputTriggerType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRBaseInputInteractor_InputTriggerType, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRBaseInputInteractor/InputTriggerType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor/InputTriggerType
struct CORDL_TYPE XRBaseInputInteractor_InputTriggerType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRBaseInputInteractor_InputTriggerType_Unwrapped
enum struct __XRBaseInputInteractor_InputTriggerType_Unwrapped : int32_t {
__E_State = static_cast<int32_t>(0x0),
__E_StateChange = static_cast<int32_t>(0x1),
__E_Toggle = static_cast<int32_t>(0x2),
__E_Sticky = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRBaseInputInteractor_InputTriggerType_Unwrapped () const noexcept {
return static_cast<__XRBaseInputInteractor_InputTriggerType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRBaseInputInteractor_InputTriggerType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRBaseInputInteractor_InputTriggerType(int32_t  value__) noexcept;

/// @brief Field State value: I32(0)
static ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType const State;

/// @brief Field StateChange value: I32(1)
static ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType const StateChange;

/// @brief Field Sticky value: I32(3)
static ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType const Sticky;

/// @brief Field Toggle value: I32(2)
static ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType const Toggle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11445};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRBaseInputInteractor_InputTriggerType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRBaseInputInteractor_InputTriggerType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
