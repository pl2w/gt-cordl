#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolume_Version.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolume_Version)
// Forward declare root types
namespace GlobalNamespace {
struct ProbeVolume_Version;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeVolume_Version);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeVolume_Version, "UnityEngine.Rendering", "ProbeVolume/Version");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolume/Version
struct CORDL_TYPE ProbeVolume_Version {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProbeVolume_Version_Unwrapped
enum struct __ProbeVolume_Version_Unwrapped : int32_t {
__E_Initial = static_cast<int32_t>(0x0),
__E_LocalMode = static_cast<int32_t>(0x1),
__E_InvertOverrideLevels = static_cast<int32_t>(0x2),
__E_Count = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProbeVolume_Version_Unwrapped () const noexcept {
return static_cast<__ProbeVolume_Version_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProbeVolume_Version() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProbeVolume_Version(int32_t  value__) noexcept;

/// @brief Field Count value: I32(3)
static ::GlobalNamespace::ProbeVolume_Version const Count;

/// @brief Field Initial value: I32(0)
static ::GlobalNamespace::ProbeVolume_Version const Initial;

/// @brief Field InvertOverrideLevels value: I32(2)
static ::GlobalNamespace::ProbeVolume_Version const InvertOverrideLevels;

/// @brief Field LocalMode value: I32(1)
static ::GlobalNamespace::ProbeVolume_Version const LocalMode;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16845};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeVolume_Version, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeVolume_Version) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
