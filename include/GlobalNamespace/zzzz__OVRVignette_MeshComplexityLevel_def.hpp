#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVignette_MeshComplexityLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRVignette_MeshComplexityLevel)
// Forward declare root types
namespace GlobalNamespace {
struct OVRVignette_MeshComplexityLevel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRVignette_MeshComplexityLevel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRVignette_MeshComplexityLevel, "", "OVRVignette/MeshComplexityLevel");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRVignette/MeshComplexityLevel
struct CORDL_TYPE OVRVignette_MeshComplexityLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRVignette_MeshComplexityLevel_Unwrapped
enum struct __OVRVignette_MeshComplexityLevel_Unwrapped : int32_t {
__E_VerySimple = static_cast<int32_t>(0x0),
__E_Simple = static_cast<int32_t>(0x1),
__E_Normal = static_cast<int32_t>(0x2),
__E_Detailed = static_cast<int32_t>(0x3),
__E_VeryDetailed = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRVignette_MeshComplexityLevel_Unwrapped () const noexcept {
return static_cast<__OVRVignette_MeshComplexityLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRVignette_MeshComplexityLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRVignette_MeshComplexityLevel(int32_t  value__) noexcept;

/// @brief Field Detailed value: I32(3)
static ::GlobalNamespace::OVRVignette_MeshComplexityLevel const Detailed;

/// @brief Field Normal value: I32(2)
static ::GlobalNamespace::OVRVignette_MeshComplexityLevel const Normal;

/// @brief Field Simple value: I32(1)
static ::GlobalNamespace::OVRVignette_MeshComplexityLevel const Simple;

/// @brief Field VeryDetailed value: I32(4)
static ::GlobalNamespace::OVRVignette_MeshComplexityLevel const VeryDetailed;

/// @brief Field VerySimple value: I32(0)
static ::GlobalNamespace::OVRVignette_MeshComplexityLevel const VerySimple;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12726};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVignette_MeshComplexityLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRVignette_MeshComplexityLevel) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
