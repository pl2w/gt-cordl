#pragma once
// IWYU pragma private; include "System/Net/WebProxyDataBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WebProxyDataBuilder)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Net {
class WebProxyData;
}
namespace System {
class FormatException;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class WebProxyDataBuilder;
}
// Write type traits
MARK_REF_T(::System::Net::WebProxyDataBuilder*);
DEFINE_IL2CPP_CLASS(::System::Net::WebProxyDataBuilder*, "System.Net", "WebProxyDataBuilder");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebProxyDataBuilder
class CORDL_TYPE WebProxyDataBuilder : public ::System::Object {
public:
// Declarations
/// @brief Field m_Result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Result, put=__cordl_internal_set_m_Result)) ::System::Net::WebProxyData*  m_Result;

/// @brief Method Build, addr 0xac77008, size 0x7c, virtual false, abstract: false, final false
inline ::System::Net::WebProxyData* Build() ;

/// @brief Method BuildInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void BuildInternal() ;

/// @brief Method BypassStringEscape, addr 0xac778a4, size 0x31c, virtual false, abstract: false, final false
static inline ::StringW BypassStringEscape(::StringW  rawString) ;

/// @brief Method ConvertRegexReservedChars, addr 0xac77bc0, size 0x13c, virtual false, abstract: false, final false
static inline ::StringW ConvertRegexReservedChars(::StringW  rawString) ;

/// @brief Method CreateInvalidProxyStringException, addr 0xac777a4, size 0x100, virtual false, abstract: false, final false
static inline ::System::FormatException* CreateInvalidProxyStringException(::StringW  originalProxyString) ;

static inline ::System::Net::WebProxyDataBuilder* New_ctor() ;

/// @brief Method ParseBypassList, addr 0xac77564, size 0x180, virtual false, abstract: false, final false
static inline ::System::Collections::ArrayList* ParseBypassList(::StringW  bypassListString, ::by_ref<bool>  bypassOnLocal) ;

/// @brief Method ParseProtocolProxies, addr 0xac772f4, size 0x270, virtual false, abstract: false, final false
static inline ::System::Collections::Hashtable* ParseProtocolProxies(::StringW  proxyListString) ;

/// @brief Method ParseProxyUri, addr 0xac771a4, size 0x150, virtual false, abstract: false, final false
static inline ::System::Uri* ParseProxyUri(::StringW  proxyString) ;

/// @brief Method SetAutoDetectSettings, addr 0xac77788, size 0x1c, virtual false, abstract: false, final false
inline void SetAutoDetectSettings(bool  value) ;

/// @brief Method SetAutoProxyUrl, addr 0xac776e4, size 0xa4, virtual false, abstract: false, final false
inline void SetAutoProxyUrl(::StringW  autoConfigUrl) ;

/// @brief Method SetProxyAndBypassList, addr 0xac77084, size 0x120, virtual false, abstract: false, final false
inline void SetProxyAndBypassList(::StringW  addressString, ::StringW  bypassListString) ;

constexpr ::System::Net::WebProxyData* const& __cordl_internal_get_m_Result() const;

constexpr ::System::Net::WebProxyData*& __cordl_internal_get_m_Result() ;

constexpr void __cordl_internal_set_m_Result(::System::Net::WebProxyData*  value) ;

/// @brief Method .ctor, addr 0xac77cfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebProxyDataBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebProxyDataBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebProxyDataBuilder(WebProxyDataBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebProxyDataBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebProxyDataBuilder(WebProxyDataBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10615};

/// @brief Field addressListDelimiter offset 0xffffffff size 0x2
static constexpr char16_t  addressListDelimiter{u';'};

/// @brief Field addressListSchemeValueDelimiter offset 0xffffffff size 0x2
static constexpr char16_t  addressListSchemeValueDelimiter{u'='};

/// @brief Field bypassListDelimiter offset 0xffffffff size 0x2
static constexpr char16_t  bypassListDelimiter{u';'};

/// @brief Field regexReserved offset 0xffffffff size 0x8
static constexpr ::ConstString  regexReserved{u"#$()+.?[\\^{|"};

/// @brief Field m_Result, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebProxyData*  ___m_Result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebProxyDataBuilder, ___m_Result) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebProxyDataBuilder) == 0x18, "Size mismatch!");

} // namespace end def System::Net
