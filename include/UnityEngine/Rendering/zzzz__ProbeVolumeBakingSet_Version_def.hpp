#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeBakingSet_Version.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeBakingSet_Version)
// Forward declare root types
namespace GlobalNamespace {
struct ProbeVolumeBakingSet_Version;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeVolumeBakingSet_Version);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeVolumeBakingSet_Version, "UnityEngine.Rendering", "ProbeVolumeBakingSet/Version");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumeBakingSet/Version
struct CORDL_TYPE ProbeVolumeBakingSet_Version {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProbeVolumeBakingSet_Version_Unwrapped
enum struct __ProbeVolumeBakingSet_Version_Unwrapped : int32_t {
__E_Initial = static_cast<int32_t>(0x0),
__E_RemoveProbeVolumeSceneData = static_cast<int32_t>(0x1),
__E_AssetsAlwaysReferenced = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProbeVolumeBakingSet_Version_Unwrapped () const noexcept {
return static_cast<__ProbeVolumeBakingSet_Version_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProbeVolumeBakingSet_Version() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProbeVolumeBakingSet_Version(int32_t  value__) noexcept;

/// @brief Field AssetsAlwaysReferenced value: I32(2)
static ::GlobalNamespace::ProbeVolumeBakingSet_Version const AssetsAlwaysReferenced;

/// @brief Field Initial value: I32(0)
static ::GlobalNamespace::ProbeVolumeBakingSet_Version const Initial;

/// @brief Field RemoveProbeVolumeSceneData value: I32(1)
static ::GlobalNamespace::ProbeVolumeBakingSet_Version const RemoveProbeVolumeSceneData;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16853};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeVolumeBakingSet_Version, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeVolumeBakingSet_Version) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
