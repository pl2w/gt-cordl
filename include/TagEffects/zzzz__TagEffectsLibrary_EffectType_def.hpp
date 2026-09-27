#pragma once
// IWYU pragma private; include "TagEffects/TagEffectsLibrary_EffectType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TagEffectsLibrary_EffectType)
// Forward declare root types
namespace GlobalNamespace {
struct TagEffectsLibrary_EffectType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TagEffectsLibrary_EffectType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TagEffectsLibrary_EffectType, "TagEffects", "TagEffectsLibrary/EffectType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TagEffects.TagEffectsLibrary/EffectType
struct CORDL_TYPE TagEffectsLibrary_EffectType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TagEffectsLibrary_EffectType_Unwrapped
enum struct __TagEffectsLibrary_EffectType_Unwrapped : int32_t {
__E_FIRST_PERSON = static_cast<int32_t>(0x0),
__E_THIRD_PERSON = static_cast<int32_t>(0x1),
__E_HIGH_FIVE = static_cast<int32_t>(0x2),
__E_FIST_BUMP = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TagEffectsLibrary_EffectType_Unwrapped () const noexcept {
return static_cast<__TagEffectsLibrary_EffectType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TagEffectsLibrary_EffectType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TagEffectsLibrary_EffectType(int32_t  value__) noexcept;

/// @brief Field FIRST_PERSON value: I32(0)
static ::GlobalNamespace::TagEffectsLibrary_EffectType const FIRST_PERSON;

/// @brief Field FIST_BUMP value: I32(3)
static ::GlobalNamespace::TagEffectsLibrary_EffectType const FIST_BUMP;

/// @brief Field HIGH_FIVE value: I32(2)
static ::GlobalNamespace::TagEffectsLibrary_EffectType const HIGH_FIVE;

/// @brief Field THIRD_PERSON value: I32(1)
static ::GlobalNamespace::TagEffectsLibrary_EffectType const THIRD_PERSON;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4486};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TagEffectsLibrary_EffectType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TagEffectsLibrary_EffectType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
