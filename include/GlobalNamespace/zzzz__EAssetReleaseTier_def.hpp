#pragma once
// IWYU pragma private; include "GlobalNamespace/EAssetReleaseTier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EAssetReleaseTier)
// Forward declare root types
namespace GlobalNamespace {
struct EAssetReleaseTier;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EAssetReleaseTier);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EAssetReleaseTier, "", "EAssetReleaseTier");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: EAssetReleaseTier
struct CORDL_TYPE EAssetReleaseTier {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EAssetReleaseTier_Unwrapped
enum struct __EAssetReleaseTier_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0x0),
__E_PublicRC = static_cast<int32_t>(0x1),
__E_PrivateRC = static_cast<int32_t>(0x2),
__E_PublicBeta = static_cast<int32_t>(0x3),
__E_PrivateBeta = static_cast<int32_t>(0x4),
__E_PublicAlpha = static_cast<int32_t>(0x5),
__E_PrivateAlpha = static_cast<int32_t>(0x6),
__E_Internal = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EAssetReleaseTier_Unwrapped () const noexcept {
return static_cast<__EAssetReleaseTier_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EAssetReleaseTier() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EAssetReleaseTier(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(0)
static ::GlobalNamespace::EAssetReleaseTier const Disabled;

/// @brief Field Internal value: I32(7)
static ::GlobalNamespace::EAssetReleaseTier const Internal;

/// @brief Field PrivateAlpha value: I32(6)
static ::GlobalNamespace::EAssetReleaseTier const PrivateAlpha;

/// @brief Field PrivateBeta value: I32(4)
static ::GlobalNamespace::EAssetReleaseTier const PrivateBeta;

/// @brief Field PrivateRC value: I32(2)
static ::GlobalNamespace::EAssetReleaseTier const PrivateRC;

/// @brief Field PublicAlpha value: I32(5)
static ::GlobalNamespace::EAssetReleaseTier const PublicAlpha;

/// @brief Field PublicBeta value: I32(3)
static ::GlobalNamespace::EAssetReleaseTier const PublicBeta;

/// @brief Field PublicRC value: I32(1)
static ::GlobalNamespace::EAssetReleaseTier const PublicRC;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{246};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EAssetReleaseTier, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EAssetReleaseTier) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
