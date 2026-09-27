#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalAdditionalCameraData_Version.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalAdditionalCameraData_Version)
// Forward declare root types
namespace GlobalNamespace {
struct UniversalAdditionalCameraData_Version;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniversalAdditionalCameraData_Version);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniversalAdditionalCameraData_Version, "UnityEngine.Rendering.Universal", "UniversalAdditionalCameraData/Version");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalAdditionalCameraData/Version
struct CORDL_TYPE UniversalAdditionalCameraData_Version {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UniversalAdditionalCameraData_Version_Unwrapped
enum struct __UniversalAdditionalCameraData_Version_Unwrapped : int32_t {
__E_Initial = static_cast<int32_t>(0x0),
__E_DepthAndOpaqueTextureOptions = static_cast<int32_t>(0x2),
__E_Count = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UniversalAdditionalCameraData_Version_Unwrapped () const noexcept {
return static_cast<__UniversalAdditionalCameraData_Version_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UniversalAdditionalCameraData_Version() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UniversalAdditionalCameraData_Version(int32_t  value__) noexcept;

/// @brief Field Count value: I32(3)
static ::GlobalNamespace::UniversalAdditionalCameraData_Version const Count;

/// @brief Field DepthAndOpaqueTextureOptions value: I32(2)
static ::GlobalNamespace::UniversalAdditionalCameraData_Version const DepthAndOpaqueTextureOptions;

/// @brief Field Initial value: I32(0)
static ::GlobalNamespace::UniversalAdditionalCameraData_Version const Initial;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18645};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniversalAdditionalCameraData_Version, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniversalAdditionalCameraData_Version) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
