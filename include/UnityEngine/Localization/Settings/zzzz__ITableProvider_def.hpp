#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/ITableProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Tables/zzzz__LocalizationTable_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ITableProvider)
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
// Forward declare root types
namespace UnityEngine::Localization::Settings {
class ITableProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Settings::ITableProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::ITableProvider*, "UnityEngine.Localization.Settings", "ITableProvider");
// Dependencies UnityEngine.Localization.Tables.LocalizationTable
namespace UnityEngine::Localization::Settings {
// Is value type: false
// CS Name: UnityEngine.Localization.Settings.ITableProvider
class CORDL_TYPE ITableProvider {
public:
// Declarations
/// @brief Method ProvideTableAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename TTable>
requires(::cordl_internals::type_constraint<TTable, ::UnityEngine::Localization::Tables::LocalizationTable*>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable> ProvideTableAsync(::StringW  tableCollectionName, ::UnityEngine::Localization::Locale*  locale) ;

// Ctor Parameters [CppParam { name: "", ty: "ITableProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITableProvider(ITableProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25095};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Settings
