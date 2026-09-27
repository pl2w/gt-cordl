#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRSettings_StereoRenderingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRSettings_StereoRenderingMode)
// Forward declare root types
namespace GlobalNamespace {
struct XRSettings_StereoRenderingMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRSettings_StereoRenderingMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRSettings_StereoRenderingMode, "UnityEngine.XR", "XRSettings/StereoRenderingMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.XRSettings/StereoRenderingMode
struct CORDL_TYPE XRSettings_StereoRenderingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRSettings_StereoRenderingMode_Unwrapped
enum struct __XRSettings_StereoRenderingMode_Unwrapped : int32_t {
__E_MultiPass = static_cast<int32_t>(0x0),
__E_SinglePass = static_cast<int32_t>(0x1),
__E_SinglePassInstanced = static_cast<int32_t>(0x2),
__E_SinglePassMultiview = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRSettings_StereoRenderingMode_Unwrapped () const noexcept {
return static_cast<__XRSettings_StereoRenderingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRSettings_StereoRenderingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRSettings_StereoRenderingMode(int32_t  value__) noexcept;

/// @brief Field MultiPass value: I32(0)
static ::GlobalNamespace::XRSettings_StereoRenderingMode const MultiPass;

/// @brief Field SinglePass value: I32(1)
static ::GlobalNamespace::XRSettings_StereoRenderingMode const SinglePass;

/// @brief Field SinglePassInstanced value: I32(2)
static ::GlobalNamespace::XRSettings_StereoRenderingMode const SinglePassInstanced;

/// @brief Field SinglePassMultiview value: I32(3)
static ::GlobalNamespace::XRSettings_StereoRenderingMode const SinglePassMultiview;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32868};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRSettings_StereoRenderingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRSettings_StereoRenderingMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
