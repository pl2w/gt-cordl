#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_TooYoungToPlay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(KIDUI_TooYoungToPlay)
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_TooYoungToPlay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_TooYoungToPlay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_TooYoungToPlay*, "", "KIDUI_TooYoungToPlay");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_TooYoungToPlay
class CORDL_TYPE KIDUI_TooYoungToPlay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::KIDUI_TooYoungToPlay* New_ctor() ;

/// @brief Method OnQuitPressed, addr 0x5a5bb04, size 0x50, virtual false, abstract: false, final false
inline void OnQuitPressed() ;

/// @brief Method ShowTooYoungToPlayScreen, addr 0x5a4d998, size 0x24, virtual false, abstract: false, final false
inline void ShowTooYoungToPlayScreen() ;

/// @brief Method .ctor, addr 0x5a5bb54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_TooYoungToPlay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_TooYoungToPlay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_TooYoungToPlay(KIDUI_TooYoungToPlay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_TooYoungToPlay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_TooYoungToPlay(KIDUI_TooYoungToPlay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3040};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KIDUI_TooYoungToPlay) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
