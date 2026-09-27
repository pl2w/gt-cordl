#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRBaseGrabTransformer_RegistrationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRBaseGrabTransformer_RegistrationMode)
// Forward declare root types
namespace GlobalNamespace {
struct XRBaseGrabTransformer_RegistrationMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRBaseGrabTransformer/RegistrationMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer/RegistrationMode
struct CORDL_TYPE XRBaseGrabTransformer_RegistrationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRBaseGrabTransformer_RegistrationMode_Unwrapped
enum struct __XRBaseGrabTransformer_RegistrationMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Single = static_cast<int32_t>(0x1),
__E_Multiple = static_cast<int32_t>(0x2),
__E_SingleAndMultiple = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRBaseGrabTransformer_RegistrationMode_Unwrapped () const noexcept {
return static_cast<__XRBaseGrabTransformer_RegistrationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRBaseGrabTransformer_RegistrationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRBaseGrabTransformer_RegistrationMode(int32_t  value__) noexcept;

/// @brief Field Multiple value: I32(2)
static ::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode const Multiple;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode const None;

/// @brief Field Single value: I32(1)
static ::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode const Single;

/// @brief Field SingleAndMultiple value: I32(3)
static ::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode const SingleAndMultiple;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11397};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
