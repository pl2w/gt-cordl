#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRControllerHelper_ControllerType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRControllerHelper_ControllerType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRControllerHelper_ControllerType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRControllerHelper_ControllerType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRControllerHelper_ControllerType, "", "OVRControllerHelper/ControllerType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRControllerHelper/ControllerType
struct CORDL_TYPE OVRControllerHelper_ControllerType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRControllerHelper_ControllerType_Unwrapped
enum struct __OVRControllerHelper_ControllerType_Unwrapped : int32_t {
__E_QuestAndRiftS = static_cast<int32_t>(0x1),
__E_Rift = static_cast<int32_t>(0x2),
__E_Quest2 = static_cast<int32_t>(0x3),
__E_TouchPro = static_cast<int32_t>(0x4),
__E_TouchPlus = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRControllerHelper_ControllerType_Unwrapped () const noexcept {
return static_cast<__OVRControllerHelper_ControllerType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRControllerHelper_ControllerType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRControllerHelper_ControllerType(int32_t  value__) noexcept;

/// @brief Field Quest2 value: I32(3)
static ::GlobalNamespace::OVRControllerHelper_ControllerType const Quest2;

/// @brief Field QuestAndRiftS value: I32(1)
static ::GlobalNamespace::OVRControllerHelper_ControllerType const QuestAndRiftS;

/// @brief Field Rift value: I32(2)
static ::GlobalNamespace::OVRControllerHelper_ControllerType const Rift;

/// @brief Field TouchPlus value: I32(5)
static ::GlobalNamespace::OVRControllerHelper_ControllerType const TouchPlus;

/// @brief Field TouchPro value: I32(4)
static ::GlobalNamespace::OVRControllerHelper_ControllerType const TouchPro;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12595};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRControllerHelper_ControllerType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRControllerHelper_ControllerType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
