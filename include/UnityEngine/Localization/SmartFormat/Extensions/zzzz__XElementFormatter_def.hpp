#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/XElementFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XElementFormatter)
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormattingInfo;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Extensions {
class XElementFormatter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::XElementFormatter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::XElementFormatter*, "UnityEngine.Localization.SmartFormat.Extensions", "XElementFormatter");
// Dependencies UnityEngine.Localization.SmartFormat.Core.Extensions.FormatterBase
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.XElementFormatter
class CORDL_TYPE XElementFormatter : public ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase {
public:
// Declarations
 __declspec(property(get=get_DefaultNames)) ::ArrayW<::StringW>  DefaultNames;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::XElementFormatter* New_ctor() ;

/// @brief Method TryEvaluateFormat, addr 0xb044584, size 0x2d4, virtual true, abstract: false, final false
inline bool TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

/// @brief Method .ctor, addr 0xb028440, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultNames, addr 0xb044460, size 0x124, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> get_DefaultNames() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XElementFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XElementFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XElementFormatter(XElementFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XElementFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XElementFormatter(XElementFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25207};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::XElementFormatter) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
