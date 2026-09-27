#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/AnimationPlayableAsset_LoopMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationPlayableAsset_LoopMode)
// Forward declare root types
namespace GlobalNamespace {
struct AnimationPlayableAsset_LoopMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AnimationPlayableAsset_LoopMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimationPlayableAsset_LoopMode, "UnityEngine.Timeline", "AnimationPlayableAsset/LoopMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Timeline.AnimationPlayableAsset/LoopMode
struct CORDL_TYPE AnimationPlayableAsset_LoopMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AnimationPlayableAsset_LoopMode_Unwrapped
enum struct __AnimationPlayableAsset_LoopMode_Unwrapped : int32_t {
__E_UseSourceAsset = static_cast<int32_t>(0x0),
__E_On = static_cast<int32_t>(0x1),
__E_Off = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnimationPlayableAsset_LoopMode_Unwrapped () const noexcept {
return static_cast<__AnimationPlayableAsset_LoopMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AnimationPlayableAsset_LoopMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AnimationPlayableAsset_LoopMode(int32_t  value__) noexcept;

/// @brief Field Off value: I32(2)
static ::GlobalNamespace::AnimationPlayableAsset_LoopMode const Off;

/// @brief Field On value: I32(1)
static ::GlobalNamespace::AnimationPlayableAsset_LoopMode const On;

/// @brief Field UseSourceAsset value: I32(0)
static ::GlobalNamespace::AnimationPlayableAsset_LoopMode const UseSourceAsset;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28681};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimationPlayableAsset_LoopMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimationPlayableAsset_LoopMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
