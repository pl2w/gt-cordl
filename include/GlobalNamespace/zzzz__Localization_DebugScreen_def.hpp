#pragma once
// IWYU pragma private; include "GlobalNamespace/Localization_DebugScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Localization_DebugScreen)
// Forward declare root types
namespace GlobalNamespace {
class Localization_DebugScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Localization_DebugScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Localization_DebugScreen*, "", "Localization_DebugScreen");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Localization_DebugScreen
class CORDL_TYPE Localization_DebugScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::Localization_DebugScreen* New_ctor() ;

/// @brief Method .ctor, addr 0x5a68dbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Localization_DebugScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Localization_DebugScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Localization_DebugScreen(Localization_DebugScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Localization_DebugScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Localization_DebugScreen(Localization_DebugScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3087};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Localization_DebugScreen) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
