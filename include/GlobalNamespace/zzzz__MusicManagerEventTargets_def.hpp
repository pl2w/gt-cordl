#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicManagerEventTargets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MusicManagerEventTargets)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class MusicManagerEventTargets;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MusicManagerEventTargets*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MusicManagerEventTargets*, "", "MusicManagerEventTargets");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MusicManagerEventTargets
class CORDL_TYPE MusicManagerEventTargets : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::MusicManagerEventTargets* New_ctor() ;

/// @brief Method StopAllMusic, addr 0x56d3900, size 0xc, virtual false, abstract: false, final false
inline void StopAllMusic() ;

/// @brief Method StopAllMusic, addr 0x56d390c, size 0xc, virtual false, abstract: false, final false
inline void StopAllMusic(::UnityEngine::AudioClip*  clip) ;

/// @brief Method .ctor, addr 0x56d3918, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MusicManagerEventTargets() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MusicManagerEventTargets", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MusicManagerEventTargets(MusicManagerEventTargets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MusicManagerEventTargets", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MusicManagerEventTargets(MusicManagerEventTargets const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1066};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MusicManagerEventTargets) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
