#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystem_FoveatedRenderingFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRDisplaySubsystem_FoveatedRenderingFlags)
// Forward declare root types
namespace GlobalNamespace {
struct XRDisplaySubsystem_FoveatedRenderingFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRDisplaySubsystem_FoveatedRenderingFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRDisplaySubsystem_FoveatedRenderingFlags, "UnityEngine.XR", "XRDisplaySubsystem/FoveatedRenderingFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.XRDisplaySubsystem/FoveatedRenderingFlags
struct CORDL_TYPE XRDisplaySubsystem_FoveatedRenderingFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRDisplaySubsystem_FoveatedRenderingFlags_Unwrapped
enum struct __XRDisplaySubsystem_FoveatedRenderingFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_GazeAllowed = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRDisplaySubsystem_FoveatedRenderingFlags_Unwrapped () const noexcept {
return static_cast<__XRDisplaySubsystem_FoveatedRenderingFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRDisplaySubsystem_FoveatedRenderingFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRDisplaySubsystem_FoveatedRenderingFlags(int32_t  value__) noexcept;

/// @brief Field GazeAllowed value: I32(1)
static ::GlobalNamespace::XRDisplaySubsystem_FoveatedRenderingFlags const GazeAllowed;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::XRDisplaySubsystem_FoveatedRenderingFlags const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31623};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_FoveatedRenderingFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRDisplaySubsystem_FoveatedRenderingFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
