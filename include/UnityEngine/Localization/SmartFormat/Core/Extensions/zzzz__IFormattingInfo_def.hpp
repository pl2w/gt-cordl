#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Extensions/IFormattingInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IFormattingInfo)
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormatDetails;
}
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormattingException;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class FormatItem;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Placeholder;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormattingInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*, "UnityEngine.Localization.SmartFormat.Core.Extensions", "IFormattingInfo");
// Dependencies 
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Extensions.IFormattingInfo
class CORDL_TYPE IFormattingInfo {
public:
// Declarations
 __declspec(property(get=get_Alignment)) int32_t  Alignment;

 __declspec(property(get=get_CurrentValue)) ::System::Object*  CurrentValue;

 __declspec(property(get=get_Format)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  Format;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
 __declspec(property(get=get_FormatDetails)) ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  FormatDetails;

 __declspec(property(get=get_FormatterOptions)) ::StringW  FormatterOptions;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
 __declspec(property(get=get_Placeholder)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  Placeholder;

/// @brief Method FormattingException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException* FormattingException(::StringW  issue, ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  problemItem, int32_t  startIndex) ;

/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Write(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format, ::System::Object*  value) ;

/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Write(::StringW  text) ;

/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Write(::StringW  text, int32_t  startIndex, int32_t  length) ;

/// @brief Method get_Alignment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_Alignment() ;

/// @brief Method get_CurrentValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* get_CurrentValue() ;

/// @brief Method get_Format, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* get_Format() ;

/// @brief Method get_FormatDetails, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails* get_FormatDetails() ;

/// @brief Method get_FormatterOptions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_FormatterOptions() ;

/// @brief Method get_Placeholder, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder* get_Placeholder() ;

// Ctor Parameters [CppParam { name: "", ty: "IFormattingInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFormattingInfo(IFormattingInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25242};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::SmartFormat::Core::Extensions
