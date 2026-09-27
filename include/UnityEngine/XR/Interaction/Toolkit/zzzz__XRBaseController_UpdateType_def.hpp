#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRBaseController_UpdateType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRBaseController_UpdateType)
// Forward declare root types
namespace GlobalNamespace {
struct XRBaseController_UpdateType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRBaseController_UpdateType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRBaseController_UpdateType, "UnityEngine.XR.Interaction.Toolkit", "XRBaseController/UpdateType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType
struct CORDL_TYPE XRBaseController_UpdateType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRBaseController_UpdateType_Unwrapped
enum struct __XRBaseController_UpdateType_Unwrapped : int32_t {
__E_UpdateAndBeforeRender = static_cast<int32_t>(0x0),
__E_Update = static_cast<int32_t>(0x1),
__E_BeforeRender = static_cast<int32_t>(0x2),
__E_Fixed = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRBaseController_UpdateType_Unwrapped () const noexcept {
return static_cast<__XRBaseController_UpdateType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRBaseController_UpdateType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRBaseController_UpdateType(int32_t  value__) noexcept;

/// @brief Field BeforeRender value: I32(2)
static ::GlobalNamespace::XRBaseController_UpdateType const BeforeRender;

/// @brief Field Fixed value: I32(3)
static ::GlobalNamespace::XRBaseController_UpdateType const Fixed;

/// @brief Field Update value: I32(1)
static ::GlobalNamespace::XRBaseController_UpdateType const Update;

/// @brief Field UpdateAndBeforeRender value: I32(0)
static ::GlobalNamespace::XRBaseController_UpdateType const UpdateAndBeforeRender;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11067};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRBaseController_UpdateType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRBaseController_UpdateType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
