#pragma once
// IWYU pragma private; include "PlayFab/IPlayFabPlugin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlayFabPlugin)
// Forward declare root types
namespace PlayFab {
class IPlayFabPlugin;
}
// Write type traits
MARK_REF_T(::PlayFab::IPlayFabPlugin*);
DEFINE_IL2CPP_CLASS(::PlayFab::IPlayFabPlugin*, "PlayFab", "IPlayFabPlugin");
// Dependencies 
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.IPlayFabPlugin
class CORDL_TYPE IPlayFabPlugin {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IPlayFabPlugin", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlayFabPlugin(IPlayFabPlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19514};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayFab
