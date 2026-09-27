#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/ListFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListFormatter)
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormatterLiteralExtractor;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormattingInfo;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISelectorInfo;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISource;
}
namespace UnityEngine::Localization::SmartFormat::Core::Settings {
class SmartSettings;
}
namespace UnityEngine::Localization::SmartFormat {
class SmartFormatter;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Extensions {
class ListFormatter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*, "UnityEngine.Localization.SmartFormat.Extensions", "ListFormatter");
// Dependencies UnityEngine.Localization.SmartFormat.Core.Extensions.FormatterBase
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.ListFormatter
class CORDL_TYPE ListFormatter : public ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase {
public:
// Declarations
 __declspec(property(get=get_DefaultNames)) ::ArrayW<::StringW>  DefaultNames;

/// @brief Field <CollectionIndex>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CollectionIndex_k__BackingField, put=setStaticF__CollectionIndex_k__BackingField)) int32_t  _CollectionIndex_k__BackingField;

/// @brief Field m_SmartSettings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SmartSettings, put=__cordl_internal_set_m_SmartSettings)) ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  m_SmartSettings;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr operator  ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr operator  ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*() noexcept;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter* New_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter) ;

/// @brief Method TryEvaluateFormat, addr 0xb03d77c, size 0xe08, virtual true, abstract: false, final false
inline bool TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

/// @brief Method TryEvaluateSelector, addr 0xb03d0e0, size 0x5e8, virtual true, abstract: false, final true
inline bool TryEvaluateSelector(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selectorInfo) ;

/// @brief Method WriteAllLiterals, addr 0xb03e68c, size 0x4ac, virtual true, abstract: false, final true
inline void WriteAllLiterals(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings* const& __cordl_internal_get_m_SmartSettings() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*& __cordl_internal_get_m_SmartSettings() ;

constexpr void __cordl_internal_set_m_SmartSettings(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  value) ;

/// @brief Method .ctor, addr 0xb027e54, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter) ;

static inline int32_t getStaticF__CollectionIndex_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_CollectionIndex, addr 0xb03d6c8, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_CollectionIndex() ;

/// @brief Method get_DefaultNames, addr 0xb03cff0, size 0xf0, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> get_DefaultNames() ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor* i___UnityEngine__Localization__SmartFormat__Core__Extensions__IFormatterLiteralExtractor() noexcept;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource* i___UnityEngine__Localization__SmartFormat__Core__Extensions__ISource() noexcept;

static inline void setStaticF__CollectionIndex_k__BackingField(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_CollectionIndex, addr 0xb03d720, size 0x5c, virtual false, abstract: false, final false
static inline void set_CollectionIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListFormatter(ListFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListFormatter(ListFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25190};

/// [SerializeReference]
/// [HideInInspector]
/// @brief Field m_SmartSettings, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  ___m_SmartSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter, ___m_SmartSettings) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
