#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalProjector_Version.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalProjector_Version)
// Forward declare root types
namespace GlobalNamespace {
struct DecalProjector_Version;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DecalProjector_Version);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DecalProjector_Version, "UnityEngine.Rendering.Universal", "DecalProjector/Version");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DecalProjector/Version
struct CORDL_TYPE DecalProjector_Version {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DecalProjector_Version_Unwrapped
enum struct __DecalProjector_Version_Unwrapped : int32_t {
__E_Initial = static_cast<int32_t>(0x0),
__E_RenderingLayerMask = static_cast<int32_t>(0x1),
__E_Count = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DecalProjector_Version_Unwrapped () const noexcept {
return static_cast<__DecalProjector_Version_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DecalProjector_Version() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DecalProjector_Version(int32_t  value__) noexcept;

/// @brief Field Count value: I32(2)
static ::GlobalNamespace::DecalProjector_Version const Count;

/// @brief Field Initial value: I32(0)
static ::GlobalNamespace::DecalProjector_Version const Initial;

/// @brief Field RenderingLayerMask value: I32(1)
static ::GlobalNamespace::DecalProjector_Version const RenderingLayerMask;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18328};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DecalProjector_Version, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DecalProjector_Version) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
