#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSkin_SkinType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaSkin_SkinType)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaSkin_SkinType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaSkin_SkinType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSkin_SkinType, "", "GorillaSkin/SkinType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaSkin/SkinType
struct CORDL_TYPE GorillaSkin_SkinType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaSkin_SkinType_Unwrapped
enum struct __GorillaSkin_SkinType_Unwrapped : int32_t {
__E_cosmetic = static_cast<int32_t>(0x0),
__E_gameMode = static_cast<int32_t>(0x1),
__E_temporaryEffect = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaSkin_SkinType_Unwrapped () const noexcept {
return static_cast<__GorillaSkin_SkinType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaSkin_SkinType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaSkin_SkinType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{728};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field cosmetic value: I32(0)
static ::GlobalNamespace::GorillaSkin_SkinType const cosmetic;

/// @brief Field gameMode value: I32(1)
static ::GlobalNamespace::GorillaSkin_SkinType const gameMode;

/// @brief Field temporaryEffect value: I32(2)
static ::GlobalNamespace::GorillaSkin_SkinType const temporaryEffect;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaSkin_SkinType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaSkin_SkinType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
