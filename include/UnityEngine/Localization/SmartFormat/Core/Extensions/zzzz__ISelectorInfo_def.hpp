#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Extensions/ISelectorInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ISelectorInfo)
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormatDetails;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Placeholder;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISelectorInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*, "UnityEngine.Localization.SmartFormat.Core.Extensions", "ISelectorInfo");
// Dependencies 
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Extensions.ISelectorInfo
class CORDL_TYPE ISelectorInfo {
public:
// Declarations
 __declspec(property(get=get_CurrentValue)) ::System::Object*  CurrentValue;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
 __declspec(property(get=get_FormatDetails)) ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  FormatDetails;

/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
 __declspec(property(get=get_Placeholder)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  Placeholder;

 __declspec(property(get=get_Result, put=set_Result)) ::System::Object*  Result;

 __declspec(property(get=get_SelectorIndex)) int32_t  SelectorIndex;

 __declspec(property(get=get_SelectorOperator)) ::StringW  SelectorOperator;

 __declspec(property(get=get_SelectorText)) ::StringW  SelectorText;

/// @brief Method get_CurrentValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* get_CurrentValue() ;

/// @brief Method get_FormatDetails, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails* get_FormatDetails() ;

/// @brief Method get_Placeholder, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder* get_Placeholder() ;

/// @brief Method get_Result, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* get_Result() ;

/// @brief Method get_SelectorIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_SelectorIndex() ;

/// @brief Method get_SelectorOperator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_SelectorOperator() ;

/// @brief Method get_SelectorText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_SelectorText() ;

/// @brief Method set_Result, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Result(::System::Object*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ISelectorInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISelectorInfo(ISelectorInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25243};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::SmartFormat::Core::Extensions
