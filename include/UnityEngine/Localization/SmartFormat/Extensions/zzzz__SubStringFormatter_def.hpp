#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/SubStringFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__SubStringFormatter_SubStringOutOfRangeBehavior_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SubStringFormatter)
namespace GlobalNamespace {
struct SubStringFormatter_SubStringOutOfRangeBehavior;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormattingInfo;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Extensions {
class SubStringFormatter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::SubStringFormatter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::SubStringFormatter*, "UnityEngine.Localization.SmartFormat.Extensions", "SubStringFormatter");
// Dependencies UnityEngine.Localization.SmartFormat.Core.Extensions.FormatterBase, UnityEngine.Localization.SmartFormat.Extensions.SubStringFormatter::SubStringOutOfRangeBehavior
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.SubStringFormatter
class CORDL_TYPE SubStringFormatter : public ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase {
public:
// Declarations
using SubStringOutOfRangeBehavior = ::GlobalNamespace::SubStringFormatter_SubStringOutOfRangeBehavior;

 __declspec(property(get=get_DefaultNames)) ::ArrayW<::StringW>  DefaultNames;

 __declspec(property(get=get_NullDisplayString, put=set_NullDisplayString)) ::StringW  NullDisplayString;

 __declspec(property(get=get_OutOfRangeBehavior, put=set_OutOfRangeBehavior)) ::GlobalNamespace::SubStringFormatter_SubStringOutOfRangeBehavior  OutOfRangeBehavior;

 __declspec(property(get=get_ParameterDelimiter, put=set_ParameterDelimiter)) char16_t  ParameterDelimiter;

/// @brief Field m_NullDisplayString, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NullDisplayString, put=__cordl_internal_set_m_NullDisplayString)) ::StringW  m_NullDisplayString;

/// @brief Field m_OutOfRangeBehavior, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_OutOfRangeBehavior, put=__cordl_internal_set_m_OutOfRangeBehavior)) ::GlobalNamespace::SubStringFormatter_SubStringOutOfRangeBehavior  m_OutOfRangeBehavior;

/// @brief Field m_ParameterDelimiter, offset 0x18, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_ParameterDelimiter, put=__cordl_internal_set_m_ParameterDelimiter)) char16_t  m_ParameterDelimiter;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::SubStringFormatter* New_ctor() ;

/// @brief Method TryEvaluateFormat, addr 0xb042464, size 0x314, virtual true, abstract: false, final false
inline bool TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

constexpr ::StringW const& __cordl_internal_get_m_NullDisplayString() const;

constexpr ::StringW& __cordl_internal_get_m_NullDisplayString() ;

constexpr ::GlobalNamespace::SubStringFormatter_SubStringOutOfRangeBehavior const& __cordl_internal_get_m_OutOfRangeBehavior() const;

constexpr ::GlobalNamespace::SubStringFormatter_SubStringOutOfRangeBehavior& __cordl_internal_get_m_OutOfRangeBehavior() ;

constexpr char16_t const& __cordl_internal_get_m_ParameterDelimiter() const;

constexpr char16_t& __cordl_internal_get_m_ParameterDelimiter() ;

constexpr void __cordl_internal_set_m_NullDisplayString(::StringW  value) ;

constexpr void __cordl_internal_set_m_OutOfRangeBehavior(::GlobalNamespace::SubStringFormatter_SubStringOutOfRangeBehavior  value) ;

constexpr void __cordl_internal_set_m_ParameterDelimiter(char16_t  value) ;

/// @brief Method .ctor, addr 0xb0284b0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultNames, addr 0xb0423bc, size 0x88, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> get_DefaultNames() ;

/// @brief Method get_NullDisplayString, addr 0xb042454, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_NullDisplayString() ;

/// @brief Method get_OutOfRangeBehavior, addr 0xb0423ac, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SubStringFormatter_SubStringOutOfRangeBehavior get_OutOfRangeBehavior() ;

/// @brief Method get_ParameterDelimiter, addr 0xb042444, size 0x8, virtual false, abstract: false, final false
inline char16_t get_ParameterDelimiter() ;

/// @brief Method set_NullDisplayString, addr 0xb04245c, size 0x8, virtual false, abstract: false, final false
inline void set_NullDisplayString(::StringW  value) ;

/// @brief Method set_OutOfRangeBehavior, addr 0xb0423b4, size 0x8, virtual false, abstract: false, final false
inline void set_OutOfRangeBehavior(::GlobalNamespace::SubStringFormatter_SubStringOutOfRangeBehavior  value) ;

/// @brief Method set_ParameterDelimiter, addr 0xb04244c, size 0x8, virtual false, abstract: false, final false
inline void set_ParameterDelimiter(char16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubStringFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubStringFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubStringFormatter(SubStringFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubStringFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubStringFormatter(SubStringFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25202};

/// [SerializeField]
/// @brief Field m_ParameterDelimiter, offset: 0x18, size: 0x2, def value: None
 char16_t  ___m_ParameterDelimiter;

/// [SerializeField]
/// @brief Field m_NullDisplayString, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___m_NullDisplayString;

/// [SerializeField]
/// @brief Field m_OutOfRangeBehavior, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::SubStringFormatter_SubStringOutOfRangeBehavior  ___m_OutOfRangeBehavior;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::SubStringFormatter, ___m_ParameterDelimiter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::SubStringFormatter, ___m_NullDisplayString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::SubStringFormatter, ___m_OutOfRangeBehavior) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::SubStringFormatter) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
