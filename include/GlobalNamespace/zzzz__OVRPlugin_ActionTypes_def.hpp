#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ActionTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_ActionTypes)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_ActionTypes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_ActionTypes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_ActionTypes, "", "OVRPlugin/ActionTypes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/ActionTypes
struct CORDL_TYPE OVRPlugin_ActionTypes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_ActionTypes_Unwrapped
enum struct __OVRPlugin_ActionTypes_Unwrapped : int32_t {
__E_Boolean = static_cast<int32_t>(0x1),
__E_Float = static_cast<int32_t>(0x2),
__E_Vector2 = static_cast<int32_t>(0x3),
__E_Pose = static_cast<int32_t>(0x4),
__E_Vibration = static_cast<int32_t>(0x64),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_ActionTypes_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_ActionTypes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_ActionTypes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_ActionTypes(int32_t  value__) noexcept;

/// @brief Field Boolean value: I32(1)
static ::GlobalNamespace::OVRPlugin_ActionTypes const Boolean;

/// @brief Field Float value: I32(2)
static ::GlobalNamespace::OVRPlugin_ActionTypes const Float;

/// @brief Field Pose value: I32(4)
static ::GlobalNamespace::OVRPlugin_ActionTypes const Pose;

/// @brief Field Vector2 value: I32(3)
static ::GlobalNamespace::OVRPlugin_ActionTypes const Vector2;

/// @brief Field Vibration value: I32(100)
static ::GlobalNamespace::OVRPlugin_ActionTypes const Vibration;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12056};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_ActionTypes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_ActionTypes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
