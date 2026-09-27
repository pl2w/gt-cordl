#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CosmeticsProximityReactor_ItemKind.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsProximityReactor_ItemKind)
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticsProximityReactor_ItemKind;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticsProximityReactor_ItemKind);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsProximityReactor_ItemKind, "GorillaTag.Cosmetics", "CosmeticsProximityReactor/ItemKind");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.CosmeticsProximityReactor/ItemKind
struct CORDL_TYPE CosmeticsProximityReactor_ItemKind {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CosmeticsProximityReactor_ItemKind_Unwrapped
enum struct __CosmeticsProximityReactor_ItemKind_Unwrapped : int32_t {
__E_Cosmetic = static_cast<int32_t>(0x0),
__E_GorillaBody = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CosmeticsProximityReactor_ItemKind_Unwrapped () const noexcept {
return static_cast<__CosmeticsProximityReactor_ItemKind_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsProximityReactor_ItemKind() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticsProximityReactor_ItemKind(int32_t  value__) noexcept;

/// @brief Field Cosmetic value: I32(0)
static ::GlobalNamespace::CosmeticsProximityReactor_ItemKind const Cosmetic;

/// @brief Field GorillaBody value: I32(1)
static ::GlobalNamespace::CosmeticsProximityReactor_ItemKind const GorillaBody;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4901};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsProximityReactor_ItemKind, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsProximityReactor_ItemKind) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
