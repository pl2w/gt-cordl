#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Utilities/CommonLanguagesTimeTextInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CommonLanguagesTimeTextInfo)
namespace UnityEngine::Localization::SmartFormat::Utilities {
class TimeTextInfo;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Utilities {
class CommonLanguagesTimeTextInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Utilities::CommonLanguagesTimeTextInfo*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Utilities::CommonLanguagesTimeTextInfo*, "UnityEngine.Localization.SmartFormat.Utilities", "CommonLanguagesTimeTextInfo");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Utilities.CommonLanguagesTimeTextInfo
class CORDL_TYPE CommonLanguagesTimeTextInfo : public ::System::Object {
public:
// Declarations
/// @brief Method GetTimeTextInfo, addr 0xb0378b4, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo* GetTimeTextInfo(::StringW  twoLetterIsoLanguageName) ;

/// @brief Method get_English, addr 0xb03734c, size 0x568, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo* get_English() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommonLanguagesTimeTextInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommonLanguagesTimeTextInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CommonLanguagesTimeTextInfo(CommonLanguagesTimeTextInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommonLanguagesTimeTextInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommonLanguagesTimeTextInfo(CommonLanguagesTimeTextInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25167};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Utilities::CommonLanguagesTimeTextInfo) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Utilities
