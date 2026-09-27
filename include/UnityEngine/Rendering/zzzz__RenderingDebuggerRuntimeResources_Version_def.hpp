#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderingDebuggerRuntimeResources_Version.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderingDebuggerRuntimeResources_Version)
// Forward declare root types
namespace GlobalNamespace {
struct RenderingDebuggerRuntimeResources_Version;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderingDebuggerRuntimeResources_Version);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderingDebuggerRuntimeResources_Version, "UnityEngine.Rendering", "RenderingDebuggerRuntimeResources/Version");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderingDebuggerRuntimeResources/Version
struct CORDL_TYPE RenderingDebuggerRuntimeResources_Version {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderingDebuggerRuntimeResources_Version_Unwrapped
enum struct __RenderingDebuggerRuntimeResources_Version_Unwrapped : int32_t {
__E_Initial = static_cast<int32_t>(0x0),
__E_Count = static_cast<int32_t>(0x1),
__E_Last = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderingDebuggerRuntimeResources_Version_Unwrapped () const noexcept {
return static_cast<__RenderingDebuggerRuntimeResources_Version_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderingDebuggerRuntimeResources_Version() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderingDebuggerRuntimeResources_Version(int32_t  value__) noexcept;

/// @brief Field Count value: I32(1)
static ::GlobalNamespace::RenderingDebuggerRuntimeResources_Version const Count;

/// @brief Field Initial value: I32(0)
static ::GlobalNamespace::RenderingDebuggerRuntimeResources_Version const Initial;

/// @brief Field Last value: I32(0)
static ::GlobalNamespace::RenderingDebuggerRuntimeResources_Version const Last;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16917};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderingDebuggerRuntimeResources_Version, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderingDebuggerRuntimeResources_Version) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
