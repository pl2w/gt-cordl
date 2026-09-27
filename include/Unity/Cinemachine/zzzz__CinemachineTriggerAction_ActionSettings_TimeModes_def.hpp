#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTriggerAction_ActionSettings_TimeModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineTriggerAction_ActionSettings_TimeModes)
// Forward declare root types
namespace GlobalNamespace {
struct ActionSettings_CinemachineTriggerAction_TimeModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes, "Unity.Cinemachine", "CinemachineTriggerAction/ActionSettings/TimeModes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineTriggerAction/ActionSettings/TimeModes
struct CORDL_TYPE ActionSettings_CinemachineTriggerAction_TimeModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ActionSettings_CinemachineTriggerAction_TimeModes_Unwrapped
enum struct __ActionSettings_CinemachineTriggerAction_TimeModes_Unwrapped : int32_t {
__E_FromStart = static_cast<int32_t>(0x0),
__E_FromEnd = static_cast<int32_t>(0x1),
__E_BeforeNow = static_cast<int32_t>(0x2),
__E_AfterNow = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ActionSettings_CinemachineTriggerAction_TimeModes_Unwrapped () const noexcept {
return static_cast<__ActionSettings_CinemachineTriggerAction_TimeModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ActionSettings_CinemachineTriggerAction_TimeModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ActionSettings_CinemachineTriggerAction_TimeModes(int32_t  value__) noexcept;

/// @brief Field AfterNow value: I32(3)
static ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes const AfterNow;

/// @brief Field BeforeNow value: I32(2)
static ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes const BeforeNow;

/// @brief Field FromEnd value: I32(1)
static ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes const FromEnd;

/// @brief Field FromStart value: I32(0)
static ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes const FromStart;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22463};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
