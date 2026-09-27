#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableSystems_PlayableSystemStage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableSystems_PlayableSystemStage)
// Forward declare root types
namespace GlobalNamespace {
struct PlayableSystems_PlayableSystemStage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayableSystems_PlayableSystemStage);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayableSystems_PlayableSystemStage, "UnityEngine.Playables", "PlayableSystems/PlayableSystemStage");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Playables.PlayableSystems/PlayableSystemStage
struct CORDL_TYPE PlayableSystems_PlayableSystemStage {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint16_t;

/// @brief Nested struct __PlayableSystems_PlayableSystemStage_Unwrapped
enum struct __PlayableSystems_PlayableSystemStage_Unwrapped : uint16_t {
__E_FixedUpdate = static_cast<uint16_t>(0x0u),
__E_FixedUpdatePostPhysics = static_cast<uint16_t>(0x1u),
__E_Update = static_cast<uint16_t>(0x2u),
__E_AnimationBegin = static_cast<uint16_t>(0x3u),
__E_AnimationEnd = static_cast<uint16_t>(0x4u),
__E_LateUpdate = static_cast<uint16_t>(0x5u),
__E_Render = static_cast<uint16_t>(0x6u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayableSystems_PlayableSystemStage_Unwrapped () const noexcept {
return static_cast<__PlayableSystems_PlayableSystemStage_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint16_t () const noexcept {
return static_cast<uint16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayableSystems_PlayableSystemStage() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr PlayableSystems_PlayableSystemStage(uint16_t  value__) noexcept;

/// @brief Field AnimationBegin value: U16(3)
static ::GlobalNamespace::PlayableSystems_PlayableSystemStage const AnimationBegin;

/// @brief Field AnimationEnd value: U16(4)
static ::GlobalNamespace::PlayableSystems_PlayableSystemStage const AnimationEnd;

/// @brief Field FixedUpdate value: U16(0)
static ::GlobalNamespace::PlayableSystems_PlayableSystemStage const FixedUpdate;

/// @brief Field FixedUpdatePostPhysics value: U16(1)
static ::GlobalNamespace::PlayableSystems_PlayableSystemStage const FixedUpdatePostPhysics;

/// @brief Field LateUpdate value: U16(5)
static ::GlobalNamespace::PlayableSystems_PlayableSystemStage const LateUpdate;

/// @brief Field Render value: U16(6)
static ::GlobalNamespace::PlayableSystems_PlayableSystemStage const Render;

/// @brief Field Update value: U16(2)
static ::GlobalNamespace::PlayableSystems_PlayableSystemStage const Update;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32646};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x0, size: 0x2, def value: None
 uint16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayableSystems_PlayableSystemStage, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayableSystems_PlayableSystemStage) == 0x2, "Size mismatch!");

} // namespace end def GlobalNamespace
