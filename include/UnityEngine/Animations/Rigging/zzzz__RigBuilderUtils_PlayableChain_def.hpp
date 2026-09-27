#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigBuilderUtils_PlayableChain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RigBuilderUtils_PlayableChain)
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace GlobalNamespace {
struct RigBuilderUtils_PlayableChain;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RigBuilderUtils_PlayableChain);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigBuilderUtils_PlayableChain, "UnityEngine.Animations.Rigging", "RigBuilderUtils/PlayableChain");
// Dependencies UnityEngine.Playables.Playable
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Animations.Rigging.RigBuilderUtils/PlayableChain
struct CORDL_TYPE RigBuilderUtils_PlayableChain {
public:
// Declarations
/// @brief Method IsValid, addr 0xae7a940, size 0x20, virtual false, abstract: false, final false
inline bool IsValid() ;

// Ctor Parameters []
// @brief default ctor
constexpr RigBuilderUtils_PlayableChain() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "playables", ty: "::ArrayW<::UnityEngine::Playables::Playable>", modifiers: "", def_value: None, comment: None }]
constexpr RigBuilderUtils_PlayableChain(::StringW  name, ::ArrayW<::UnityEngine::Playables::Playable>  playables) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32305};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field playables, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Playables::Playable>  playables;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigBuilderUtils_PlayableChain, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigBuilderUtils_PlayableChain, playables) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigBuilderUtils_PlayableChain) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
