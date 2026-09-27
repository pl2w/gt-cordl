#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/ITablePostprocessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITablePostprocessor)
namespace UnityEngine::Localization::Tables {
class LocalizationTable;
}
// Forward declare root types
namespace UnityEngine::Localization::Settings {
class ITablePostprocessor;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Settings::ITablePostprocessor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::ITablePostprocessor*, "UnityEngine.Localization.Settings", "ITablePostprocessor");
// Dependencies 
namespace UnityEngine::Localization::Settings {
// Is value type: false
// CS Name: UnityEngine.Localization.Settings.ITablePostprocessor
class CORDL_TYPE ITablePostprocessor {
public:
// Declarations
/// @brief Method PostprocessTable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PostprocessTable(::UnityEngine::Localization::Tables::LocalizationTable*  table) ;

// Ctor Parameters [CppParam { name: "", ty: "ITablePostprocessor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITablePostprocessor(ITablePostprocessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25096};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Settings
