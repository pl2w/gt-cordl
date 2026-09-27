#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/EdibleWearable_EdibleStateInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(EdibleWearable_EdibleStateInfo)
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct EdibleWearable_EdibleStateInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EdibleWearable_EdibleStateInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EdibleWearable_EdibleStateInfo, "GorillaTag.Cosmetics", "EdibleWearable/EdibleStateInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.EdibleWearable/EdibleStateInfo
struct CORDL_TYPE EdibleWearable_EdibleStateInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EdibleWearable_EdibleStateInfo() ;

// Ctor Parameters [CppParam { name: "gameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sound", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }]
constexpr EdibleWearable_EdibleStateInfo(::UnityW<::UnityEngine::GameObject>  gameObject, ::UnityW<::UnityEngine::AudioClip>  sound) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4870};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Tooltip("Will be activated when this stage is reached.")]
/// @brief Field gameObject, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  gameObject;

/// [Tooltip("Will be played when this stage is reached.")]
/// @brief Field sound, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  sound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EdibleWearable_EdibleStateInfo, gameObject) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdibleWearable_EdibleStateInfo, sound) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EdibleWearable_EdibleStateInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
