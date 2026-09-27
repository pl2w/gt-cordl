#pragma once
// IWYU pragma private; include "GlobalNamespace/ArtilleryCrankType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArtilleryCrankType)
// Forward declare root types
namespace GlobalNamespace {
struct ArtilleryCrankType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ArtilleryCrankType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArtilleryCrankType, "", "ArtilleryCrankType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ArtilleryCrankType
struct CORDL_TYPE ArtilleryCrankType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ArtilleryCrankType_Unwrapped
enum struct __ArtilleryCrankType_Unwrapped : int32_t {
__E_Pitch = static_cast<int32_t>(0x0),
__E_Yaw = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ArtilleryCrankType_Unwrapped () const noexcept {
return static_cast<__ArtilleryCrankType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ArtilleryCrankType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ArtilleryCrankType(int32_t  value__) noexcept;

/// @brief Field Pitch value: I32(0)
static ::GlobalNamespace::ArtilleryCrankType const Pitch;

/// @brief Field Yaw value: I32(1)
static ::GlobalNamespace::ArtilleryCrankType const Yaw;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{402};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArtilleryCrankType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArtilleryCrankType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
