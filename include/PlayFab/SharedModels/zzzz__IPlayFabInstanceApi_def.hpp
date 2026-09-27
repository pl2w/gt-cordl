#pragma once
// IWYU pragma private; include "PlayFab/SharedModels/IPlayFabInstanceApi.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlayFabInstanceApi)
// Forward declare root types
namespace PlayFab::SharedModels {
class IPlayFabInstanceApi;
}
// Write type traits
MARK_REF_T(::PlayFab::SharedModels::IPlayFabInstanceApi*);
DEFINE_IL2CPP_CLASS(::PlayFab::SharedModels::IPlayFabInstanceApi*, "PlayFab.SharedModels", "IPlayFabInstanceApi");
// Dependencies 
namespace PlayFab::SharedModels {
// Is value type: false
// CS Name: PlayFab.SharedModels.IPlayFabInstanceApi
class CORDL_TYPE IPlayFabInstanceApi {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IPlayFabInstanceApi", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlayFabInstanceApi(IPlayFabInstanceApi const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19531};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayFab::SharedModels
