#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/DefaultFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DefaultFormatter)
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormattingInfo;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Extensions {
class DefaultFormatter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter*, "UnityEngine.Localization.SmartFormat.Extensions", "DefaultFormatter");
// Dependencies UnityEngine.Localization.SmartFormat.Core.Extensions.FormatterBase
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.DefaultFormatter
class CORDL_TYPE DefaultFormatter : public ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase {
public:
// Declarations
 __declspec(property(get=get_DefaultNames)) ::ArrayW<::StringW>  DefaultNames;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter* New_ctor() ;

/// @brief Method TryEvaluateFormat, addr 0xb03acac, size 0x70c, virtual true, abstract: false, final false
inline bool TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

/// @brief Method .ctor, addr 0xb028564, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultNames, addr 0xb03abbc, size 0xf0, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> get_DefaultNames() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultFormatter(DefaultFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultFormatter(DefaultFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25184};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
