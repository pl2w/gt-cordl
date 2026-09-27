#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Extensions/IFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IFormatter)
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormattingInfo;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormatter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*, "UnityEngine.Localization.SmartFormat.Core.Extensions", "IFormatter");
// Dependencies 
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Extensions.IFormatter
class CORDL_TYPE IFormatter {
public:
// Declarations
 __declspec(property(get=get_Names, put=set_Names)) ::ArrayW<::StringW>  Names;

/// @brief Method TryEvaluateFormat, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

/// @brief Method get_Names, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::StringW> get_Names() ;

/// @brief Method set_Names, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Names(::ArrayW<::StringW>  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFormatter(IFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25240};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::SmartFormat::Core::Extensions
