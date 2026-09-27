#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersBiome.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersBiome)
// Forward declare root types
namespace GlobalNamespace {
struct CrittersBiome;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CrittersBiome);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersBiome, "", "CrittersBiome");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CrittersBiome
struct CORDL_TYPE CrittersBiome {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CrittersBiome_Unwrapped
enum struct __CrittersBiome_Unwrapped : int32_t {
__E_Forest = static_cast<int32_t>(0x1),
__E_Mountain = static_cast<int32_t>(0x2),
__E_Desert = static_cast<int32_t>(0x4),
__E_Grassland = static_cast<int32_t>(0x8),
__E_Cave = static_cast<int32_t>(0x10),
__E_IntroArea = static_cast<int32_t>(0x40000000),
__E_Any = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CrittersBiome_Unwrapped () const noexcept {
return static_cast<__CrittersBiome_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CrittersBiome() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CrittersBiome(int32_t  value__) noexcept;

/// @brief Field Any value: I32(-1)
static ::GlobalNamespace::CrittersBiome const Any;

/// @brief Field Cave value: I32(16)
static ::GlobalNamespace::CrittersBiome const Cave;

/// @brief Field Desert value: I32(4)
static ::GlobalNamespace::CrittersBiome const Desert;

/// @brief Field Forest value: I32(1)
static ::GlobalNamespace::CrittersBiome const Forest;

/// @brief Field Grassland value: I32(8)
static ::GlobalNamespace::CrittersBiome const Grassland;

/// @brief Field IntroArea value: I32(1073741824)
static ::GlobalNamespace::CrittersBiome const IntroArea;

/// @brief Field Mountain value: I32(2)
static ::GlobalNamespace::CrittersBiome const Mountain;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{88};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersBiome, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersBiome) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
