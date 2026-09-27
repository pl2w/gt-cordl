#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/XPathScanner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MS/Internal/Xml/XPath/zzzz__XPathScanner_LexKind_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XPathScanner)
namespace GlobalNamespace {
struct XPathScanner_LexKind;
}
// Forward declare root types
namespace MS::Internal::Xml::XPath {
class XPathScanner;
}
// Write type traits
MARK_REF_T(::MS::Internal::Xml::XPath::XPathScanner*);
DEFINE_IL2CPP_CLASS(::MS::Internal::Xml::XPath::XPathScanner*, "MS.Internal.Xml.XPath", "XPathScanner");
// Dependencies MS.Internal.Xml.XPath.XPathScanner::LexKind, System.Object, System.Xml.XmlCharType
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: MS.Internal.Xml.XPath.XPathScanner
class CORDL_TYPE XPathScanner : public ::System::Object {
public:
// Declarations
using LexKind = ::GlobalNamespace::XPathScanner_LexKind;

 __declspec(property(get=get_CanBeFunction)) bool  CanBeFunction;

 __declspec(property(get=get_CurrentChar)) char16_t  CurrentChar;

 __declspec(property(get=get_Kind)) ::GlobalNamespace::XPathScanner_LexKind  Kind;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NumberValue)) double_t  NumberValue;

 __declspec(property(get=get_Prefix)) ::StringW  Prefix;

 __declspec(property(get=get_SourceText)) ::StringW  SourceText;

 __declspec(property(get=get_StringValue)) ::StringW  StringValue;

/// @brief Field _canBeFunction, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__canBeFunction, put=__cordl_internal_set__canBeFunction)) bool  _canBeFunction;

/// @brief Field _currentChar, offset 0x20, size 0x2 
 __declspec(property(get=__cordl_internal_get__currentChar, put=__cordl_internal_set__currentChar)) char16_t  _currentChar;

/// @brief Field _kind, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__kind, put=__cordl_internal_set__kind)) ::GlobalNamespace::XPathScanner_LexKind  _kind;

/// @brief Field _name, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _numberValue, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__numberValue, put=__cordl_internal_set__numberValue)) double_t  _numberValue;

/// @brief Field _prefix, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefix, put=__cordl_internal_set__prefix)) ::StringW  _prefix;

/// @brief Field _stringValue, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__stringValue, put=__cordl_internal_set__stringValue)) ::StringW  _stringValue;

/// @brief Field _xmlCharType, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__xmlCharType, put=__cordl_internal_set__xmlCharType)) ::System::Xml::XmlCharType  _xmlCharType;

/// @brief Field _xpathExpr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__xpathExpr, put=__cordl_internal_set__xpathExpr)) ::StringW  _xpathExpr;

/// @brief Field _xpathExprIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__xpathExprIndex, put=__cordl_internal_set__xpathExprIndex)) int32_t  _xpathExprIndex;

static inline ::MS::Internal::Xml::XPath::XPathScanner* New_ctor(::StringW  xpathExpr) ;

/// @brief Method NextChar, addr 0xab8b484, size 0x60, virtual false, abstract: false, final false
inline bool NextChar() ;

/// @brief Method NextLex, addr 0xab89e90, size 0x43c, virtual false, abstract: false, final false
inline bool NextLex() ;

/// @brief Method ScanFraction, addr 0xab8b554, size 0xb0, virtual false, abstract: false, final false
inline double_t ScanFraction() ;

/// @brief Method ScanName, addr 0xab8b78c, size 0x6c, virtual false, abstract: false, final false
inline ::StringW ScanName() ;

/// @brief Method ScanNumber, addr 0xab8b6b4, size 0xd8, virtual false, abstract: false, final false
inline double_t ScanNumber() ;

/// @brief Method ScanString, addr 0xab8b604, size 0xb0, virtual false, abstract: false, final false
inline ::StringW ScanString() ;

/// @brief Method SkipSpace, addr 0xab8b524, size 0x30, virtual false, abstract: false, final false
inline void SkipSpace() ;

constexpr bool const& __cordl_internal_get__canBeFunction() const;

constexpr bool& __cordl_internal_get__canBeFunction() ;

constexpr char16_t const& __cordl_internal_get__currentChar() const;

constexpr char16_t& __cordl_internal_get__currentChar() ;

constexpr ::GlobalNamespace::XPathScanner_LexKind const& __cordl_internal_get__kind() const;

constexpr ::GlobalNamespace::XPathScanner_LexKind& __cordl_internal_get__kind() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr double_t const& __cordl_internal_get__numberValue() const;

constexpr double_t& __cordl_internal_get__numberValue() ;

constexpr ::StringW const& __cordl_internal_get__prefix() const;

constexpr ::StringW& __cordl_internal_get__prefix() ;

constexpr ::StringW const& __cordl_internal_get__stringValue() const;

constexpr ::StringW& __cordl_internal_get__stringValue() ;

constexpr ::System::Xml::XmlCharType const& __cordl_internal_get__xmlCharType() const;

constexpr ::System::Xml::XmlCharType& __cordl_internal_get__xmlCharType() ;

constexpr ::StringW const& __cordl_internal_get__xpathExpr() const;

constexpr ::StringW& __cordl_internal_get__xpathExpr() ;

constexpr int32_t const& __cordl_internal_get__xpathExprIndex() const;

constexpr int32_t& __cordl_internal_get__xpathExprIndex() ;

constexpr void __cordl_internal_set__canBeFunction(bool  value) ;

constexpr void __cordl_internal_set__currentChar(char16_t  value) ;

constexpr void __cordl_internal_set__kind(::GlobalNamespace::XPathScanner_LexKind  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__numberValue(double_t  value) ;

constexpr void __cordl_internal_set__prefix(::StringW  value) ;

constexpr void __cordl_internal_set__stringValue(::StringW  value) ;

constexpr void __cordl_internal_set__xmlCharType(::System::Xml::XmlCharType  value) ;

constexpr void __cordl_internal_set__xpathExpr(::StringW  value) ;

constexpr void __cordl_internal_set__xpathExprIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0xab88128, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::StringW  xpathExpr) ;

/// @brief Method get_CanBeFunction, addr 0xab8b51c, size 0x8, virtual false, abstract: false, final false
inline bool get_CanBeFunction() ;

/// @brief Method get_CurrentChar, addr 0xab8b4ec, size 0x8, virtual false, abstract: false, final false
inline char16_t get_CurrentChar() ;

/// @brief Method get_Kind, addr 0xab8b4f4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XPathScanner_LexKind get_Kind() ;

/// @brief Method get_Name, addr 0xab8b4fc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NumberValue, addr 0xab8b514, size 0x8, virtual false, abstract: false, final false
inline double_t get_NumberValue() ;

/// @brief Method get_Prefix, addr 0xab8b504, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Prefix() ;

/// @brief Method get_SourceText, addr 0xab8b4e4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_SourceText() ;

/// @brief Method get_StringValue, addr 0xab8b50c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_StringValue() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XPathScanner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XPathScanner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XPathScanner(XPathScanner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XPathScanner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XPathScanner(XPathScanner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14608};

/// @brief Field _xpathExpr, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____xpathExpr;

/// @brief Field _xpathExprIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ____xpathExprIndex;

/// @brief Field _kind, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::XPathScanner_LexKind  ____kind;

/// @brief Field _currentChar, offset: 0x20, size: 0x2, def value: None
 char16_t  ____currentChar;

/// @brief Field _name, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _prefix, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____prefix;

/// @brief Field _stringValue, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____stringValue;

/// @brief Field _numberValue, offset: 0x40, size: 0x8, def value: None
 double_t  ____numberValue;

/// @brief Field _canBeFunction, offset: 0x48, size: 0x1, def value: None
 bool  ____canBeFunction;

/// @brief Field _xmlCharType, offset: 0x50, size: 0x8, def value: None
 ::System::Xml::XmlCharType  ____xmlCharType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____xpathExpr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____xpathExprIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____kind) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____currentChar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____prefix) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____stringValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____numberValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____canBeFunction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::XPathScanner, ____xmlCharType) == 0x50, "Offset mismatch!");

static_assert(sizeof(::MS::Internal::Xml::XPath::XPathScanner) == 0x58, "Size mismatch!");

} // namespace end def MS::Internal::Xml::XPath
