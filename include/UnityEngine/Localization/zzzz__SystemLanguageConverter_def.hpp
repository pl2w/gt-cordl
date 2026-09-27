#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SystemLanguageConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SystemLanguageConverter)
namespace UnityEngine {
struct SystemLanguage;
}
// Forward declare root types
namespace UnityEngine::Localization {
class SystemLanguageConverter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SystemLanguageConverter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SystemLanguageConverter*, "UnityEngine.Localization", "SystemLanguageConverter");
// Dependencies System.Object
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.SystemLanguageConverter
class CORDL_TYPE SystemLanguageConverter : public ::System::Object {
public:
// Declarations
/// @brief Method GetSystemLanguageCultureCode, addr 0xb00d298, size 0x260, virtual false, abstract: false, final false
static inline ::StringW GetSystemLanguageCultureCode(::UnityEngine::SystemLanguage  lang) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemLanguageConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemLanguageConverter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemLanguageConverter(SystemLanguageConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemLanguageConverter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemLanguageConverter(SystemLanguageConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25070};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SystemLanguageConverter) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization
