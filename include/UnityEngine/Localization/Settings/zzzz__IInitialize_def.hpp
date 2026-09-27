#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/IInitialize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInitialize)
namespace UnityEngine::Localization::Settings {
class LocalizationSettings;
}
// Forward declare root types
namespace UnityEngine::Localization::Settings {
class IInitialize;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Settings::IInitialize*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::IInitialize*, "UnityEngine.Localization.Settings", "IInitialize");
// Dependencies 
namespace UnityEngine::Localization::Settings {
// Is value type: false
// CS Name: UnityEngine.Localization.Settings.IInitialize
class CORDL_TYPE IInitialize {
public:
// Declarations
/// @brief Method PostInitialization, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PostInitialization(::UnityEngine::Localization::Settings::LocalizationSettings*  settings) ;

// Ctor Parameters [CppParam { name: "", ty: "IInitialize", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInitialize(IInitialize const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25101};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Settings
