#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Animations/AnimationStreamSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationStreamSource)
// Forward declare root types
namespace UnityEngine::Experimental::Animations {
struct AnimationStreamSource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Animations::AnimationStreamSource);
DEFINE_IL2CPP_CLASS(::UnityEngine::Experimental::Animations::AnimationStreamSource, "UnityEngine.Experimental.Animations", "AnimationStreamSource");
// Dependencies 
namespace UnityEngine::Experimental::Animations {
// Is value type: true
// CS Name: UnityEngine.Experimental.Animations.AnimationStreamSource
struct CORDL_TYPE AnimationStreamSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AnimationStreamSource_Unwrapped
enum struct __AnimationStreamSource_Unwrapped : int32_t {
__E_DefaultValues = static_cast<int32_t>(0x0),
__E_PreviousInputs = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnimationStreamSource_Unwrapped () const noexcept {
return static_cast<__AnimationStreamSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AnimationStreamSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AnimationStreamSource(int32_t  value__) noexcept;

/// @brief Field DefaultValues value: I32(0)
static ::UnityEngine::Experimental::Animations::AnimationStreamSource const DefaultValues;

/// @brief Field PreviousInputs value: I32(1)
static ::UnityEngine::Experimental::Animations::AnimationStreamSource const PreviousInputs;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29795};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Animations::AnimationStreamSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Experimental::Animations::AnimationStreamSource) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::Animations
