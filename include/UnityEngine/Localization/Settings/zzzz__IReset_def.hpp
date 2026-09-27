#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/IReset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IReset)
// Forward declare root types
namespace UnityEngine::Localization::Settings {
class IReset;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Settings::IReset*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::IReset*, "UnityEngine.Localization.Settings", "IReset");
// Dependencies 
namespace UnityEngine::Localization::Settings {
// Is value type: false
// CS Name: UnityEngine.Localization.Settings.IReset
class CORDL_TYPE IReset {
public:
// Declarations
/// @brief Method ResetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ResetState() ;

// Ctor Parameters [CppParam { name: "", ty: "IReset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IReset(IReset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25103};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Settings
