#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlUntypedConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlListConverter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlUntypedConverter)
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlUntypedConverter;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::XmlUntypedConverter*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XmlUntypedConverter*, "System.Xml.Schema", "XmlUntypedConverter");
// Dependencies System.Xml.Schema.XmlListConverter
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlUntypedConverter
class CORDL_TYPE XmlUntypedConverter : public ::System::Xml::Schema::XmlListConverter {
public:
// Declarations
/// @brief Field Untyped, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Untyped, put=setStaticF_Untyped)) ::System::Xml::Schema::XmlValueConverter*  Untyped;

/// @brief Field UntypedList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UntypedList, put=setStaticF_UntypedList)) ::System::Xml::Schema::XmlValueConverter*  UntypedList;

/// @brief Field allowListToList, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowListToList, put=__cordl_internal_set_allowListToList)) bool  allowListToList;

/// @brief Method ChangeListType, addr 0xab6b5dc, size 0x2e4, virtual true, abstract: false, final false
inline ::System::Object* ChangeListType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0xab69478, size 0xc30, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::StringW  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0xab68b58, size 0x1bc, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::System::DateTime  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeType, addr 0xab68d14, size 0x230, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::System::Decimal  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeType, addr 0xab6a0a8, size 0x1534, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0xab68814, size 0x1c0, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(bool  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeType, addr 0xab68f44, size 0x1bc, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(double_t  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeType, addr 0xab69100, size 0x1bc, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(int32_t  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeType, addr 0xab692bc, size 0x1bc, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(int64_t  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeTypeWildcardDestination, addr 0xab66834, size 0x130, virtual false, abstract: false, final false
inline ::System::Object* ChangeTypeWildcardDestination(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeTypeWildcardSource, addr 0xab689d4, size 0x184, virtual false, abstract: false, final false
inline ::System::Object* ChangeTypeWildcardSource(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

static inline ::System::Xml::Schema::XmlUntypedConverter* New_ctor() ;

static inline ::System::Xml::Schema::XmlUntypedConverter* New_ctor(::System::Xml::Schema::XmlUntypedConverter*  atomicConverter, bool  allowListToList) ;

/// @brief Method SupportsType, addr 0xab6b8c0, size 0x524, virtual false, abstract: false, final false
inline bool SupportsType(::System::Type*  clrType) ;

/// @brief Method ToBoolean, addr 0xab665ec, size 0xa4, virtual true, abstract: false, final false
inline bool ToBoolean(::StringW  value) ;

/// @brief Method ToBoolean, addr 0xab66690, size 0x1a4, virtual true, abstract: false, final false
inline bool ToBoolean(::System::Object*  value) ;

/// @brief Method ToDateTime, addr 0xab66964, size 0xa4, virtual true, abstract: false, final false
inline ::System::DateTime ToDateTime(::StringW  value) ;

/// @brief Method ToDateTime, addr 0xab66a08, size 0x1a0, virtual true, abstract: false, final false
inline ::System::DateTime ToDateTime(::System::Object*  value) ;

/// @brief Method ToDateTimeOffset, addr 0xab66ba8, size 0xa4, virtual true, abstract: false, final false
inline ::System::DateTimeOffset ToDateTimeOffset(::StringW  value) ;

/// @brief Method ToDateTimeOffset, addr 0xab66c4c, size 0x19c, virtual true, abstract: false, final false
inline ::System::DateTimeOffset ToDateTimeOffset(::System::Object*  value) ;

/// @brief Method ToDecimal, addr 0xab66de8, size 0xa4, virtual true, abstract: false, final false
inline ::System::Decimal ToDecimal(::StringW  value) ;

/// @brief Method ToDecimal, addr 0xab66e8c, size 0x1b4, virtual true, abstract: false, final false
inline ::System::Decimal ToDecimal(::System::Object*  value) ;

/// @brief Method ToDouble, addr 0xab67040, size 0xa4, virtual true, abstract: false, final false
inline double_t ToDouble(::StringW  value) ;

/// @brief Method ToDouble, addr 0xab670e4, size 0x1a4, virtual true, abstract: false, final false
inline double_t ToDouble(::System::Object*  value) ;

/// @brief Method ToInt32, addr 0xab67288, size 0xa4, virtual true, abstract: false, final false
inline int32_t ToInt32(::StringW  value) ;

/// @brief Method ToInt32, addr 0xab6732c, size 0x1a4, virtual true, abstract: false, final false
inline int32_t ToInt32(::System::Object*  value) ;

/// @brief Method ToInt64, addr 0xab674d0, size 0xa4, virtual true, abstract: false, final false
inline int64_t ToInt64(::StringW  value) ;

/// @brief Method ToInt64, addr 0xab67574, size 0x1a4, virtual true, abstract: false, final false
inline int64_t ToInt64(::System::Object*  value) ;

/// @brief Method ToSingle, addr 0xab67718, size 0xa4, virtual true, abstract: false, final false
inline float_t ToSingle(::StringW  value) ;

/// @brief Method ToSingle, addr 0xab677bc, size 0x1a4, virtual true, abstract: false, final false
inline float_t ToSingle(::System::Object*  value) ;

/// @brief Method ToString, addr 0xab679b8, size 0x58, virtual true, abstract: false, final false
inline ::StringW ToString(::System::DateTime  value) ;

/// @brief Method ToString, addr 0xab67a10, size 0x68, virtual true, abstract: false, final false
inline ::StringW ToString(::System::DateTimeOffset  value) ;

/// @brief Method ToString, addr 0xab67a78, size 0x68, virtual true, abstract: false, final false
inline ::StringW ToString(::System::Decimal  value) ;

/// @brief Method ToString, addr 0xab67c50, size 0xbc4, virtual true, abstract: false, final false
inline ::StringW ToString(::System::Object*  value, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ToString, addr 0xab67960, size 0x58, virtual true, abstract: false, final false
inline ::StringW ToString(bool  value) ;

/// @brief Method ToString, addr 0xab67ae0, size 0x60, virtual true, abstract: false, final false
inline ::StringW ToString(double_t  value) ;

/// @brief Method ToString, addr 0xab67bf0, size 0x60, virtual true, abstract: false, final false
inline ::StringW ToString(float_t  value) ;

/// @brief Method ToString, addr 0xab67b40, size 0x58, virtual true, abstract: false, final false
inline ::StringW ToString(int32_t  value) ;

/// @brief Method ToString, addr 0xab67b98, size 0x58, virtual true, abstract: false, final false
inline ::StringW ToString(int64_t  value) ;

constexpr bool const& __cordl_internal_get_allowListToList() const;

constexpr bool& __cordl_internal_get_allowListToList() ;

constexpr void __cordl_internal_set_allowListToList(bool  value) ;

/// @brief Method .ctor, addr 0xab663d4, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xab664cc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Schema::XmlUntypedConverter*  atomicConverter, bool  allowListToList) ;

static inline ::System::Xml::Schema::XmlValueConverter* getStaticF_Untyped() ;

static inline ::System::Xml::Schema::XmlValueConverter* getStaticF_UntypedList() ;

static inline void setStaticF_Untyped(::System::Xml::Schema::XmlValueConverter*  value) ;

static inline void setStaticF_UntypedList(::System::Xml::Schema::XmlValueConverter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlUntypedConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlUntypedConverter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlUntypedConverter(XmlUntypedConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlUntypedConverter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlUntypedConverter(XmlUntypedConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14570};

/// @brief Field allowListToList, offset: 0x30, size: 0x1, def value: None
 bool  ___allowListToList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlUntypedConverter, ___allowListToList) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Schema::XmlUntypedConverter) == 0x38, "Size mismatch!");

} // namespace end def System::Xml::Schema
