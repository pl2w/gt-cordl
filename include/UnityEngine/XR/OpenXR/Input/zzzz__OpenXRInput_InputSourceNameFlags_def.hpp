#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Input/OpenXRInput_InputSourceNameFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRInput_InputSourceNameFlags)
// Forward declare root types
namespace GlobalNamespace {
struct OpenXRInput_InputSourceNameFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OpenXRInput_InputSourceNameFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OpenXRInput_InputSourceNameFlags, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/InputSourceNameFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput/InputSourceNameFlags
struct CORDL_TYPE OpenXRInput_InputSourceNameFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpenXRInput_InputSourceNameFlags_Unwrapped
enum struct __OpenXRInput_InputSourceNameFlags_Unwrapped : int32_t {
__E_UserPath = static_cast<int32_t>(0x1),
__E_InteractionProfile = static_cast<int32_t>(0x2),
__E_Component = static_cast<int32_t>(0x4),
__E_All = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpenXRInput_InputSourceNameFlags_Unwrapped () const noexcept {
return static_cast<__OpenXRInput_InputSourceNameFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpenXRInput_InputSourceNameFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OpenXRInput_InputSourceNameFlags(int32_t  value__) noexcept;

/// @brief Field All value: I32(7)
static ::GlobalNamespace::OpenXRInput_InputSourceNameFlags const All;

/// @brief Field Component value: I32(4)
static ::GlobalNamespace::OpenXRInput_InputSourceNameFlags const Component;

/// @brief Field InteractionProfile value: I32(2)
static ::GlobalNamespace::OpenXRInput_InputSourceNameFlags const InteractionProfile;

/// @brief Field UserPath value: I32(1)
static ::GlobalNamespace::OpenXRInput_InputSourceNameFlags const UserPath;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27319};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OpenXRInput_InputSourceNameFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OpenXRInput_InputSourceNameFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
