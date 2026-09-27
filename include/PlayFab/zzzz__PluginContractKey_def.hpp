#pragma once
// IWYU pragma private; include "PlayFab/PluginContractKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/zzzz__PluginContract_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PluginContractKey)
// Forward declare root types
namespace PlayFab {
struct PluginContractKey;
}
// Write type traits
MARK_VAL_T(::PlayFab::PluginContractKey);
DEFINE_IL2CPP_CLASS(::PlayFab::PluginContractKey, "PlayFab", "PluginContractKey");
// Dependencies PlayFab.PluginContract
namespace PlayFab {
// Is value type: true
// CS Name: PlayFab.PluginContractKey
struct CORDL_TYPE PluginContractKey {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PluginContractKey() ;

// Ctor Parameters [CppParam { name: "_pluginContract", ty: "::PlayFab::PluginContract", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pluginName", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr PluginContractKey(::PlayFab::PluginContract  _pluginContract, ::StringW  _pluginName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19526};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _pluginContract, offset: 0x0, size: 0x4, def value: None
 ::PlayFab::PluginContract  _pluginContract;

/// @brief Field _pluginName, offset: 0x8, size: 0x8, def value: None
 ::StringW  _pluginName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PluginContractKey, _pluginContract) == 0x0, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PluginContractKey, _pluginName) == 0x8, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PluginContractKey) == 0x10, "Size mismatch!");

} // namespace end def PlayFab
