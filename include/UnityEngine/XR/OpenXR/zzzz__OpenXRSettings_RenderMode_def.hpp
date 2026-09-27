#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRSettings_RenderMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRSettings_RenderMode)
// Forward declare root types
namespace GlobalNamespace {
struct OpenXRSettings_RenderMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OpenXRSettings_RenderMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OpenXRSettings_RenderMode, "UnityEngine.XR.OpenXR", "OpenXRSettings/RenderMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/RenderMode
struct CORDL_TYPE OpenXRSettings_RenderMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpenXRSettings_RenderMode_Unwrapped
enum struct __OpenXRSettings_RenderMode_Unwrapped : int32_t {
__E_MultiPass = static_cast<int32_t>(0x0),
__E_SinglePassInstanced = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpenXRSettings_RenderMode_Unwrapped () const noexcept {
return static_cast<__OpenXRSettings_RenderMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpenXRSettings_RenderMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OpenXRSettings_RenderMode(int32_t  value__) noexcept;

/// @brief Field MultiPass value: I32(0)
static ::GlobalNamespace::OpenXRSettings_RenderMode const MultiPass;

/// @brief Field SinglePassInstanced value: I32(1)
static ::GlobalNamespace::OpenXRSettings_RenderMode const SinglePassInstanced;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27262};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OpenXRSettings_RenderMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OpenXRSettings_RenderMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
