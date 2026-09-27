#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaNames_Token.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaNames_Token)
// Forward declare root types
namespace GlobalNamespace {
struct SchemaNames_Token;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SchemaNames_Token);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SchemaNames_Token, "System.Xml.Schema", "SchemaNames/Token");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.SchemaNames/Token
struct CORDL_TYPE SchemaNames_Token {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SchemaNames_Token_Unwrapped
enum struct __SchemaNames_Token_Unwrapped : int32_t {
__E_Empty = static_cast<int32_t>(0x0),
__E_SchemaName = static_cast<int32_t>(0x1),
__E_SchemaType = static_cast<int32_t>(0x2),
__E_SchemaMaxOccurs = static_cast<int32_t>(0x3),
__E_SchemaMinOccurs = static_cast<int32_t>(0x4),
__E_SchemaInfinite = static_cast<int32_t>(0x5),
__E_SchemaModel = static_cast<int32_t>(0x6),
__E_SchemaOpen = static_cast<int32_t>(0x7),
__E_SchemaClosed = static_cast<int32_t>(0x8),
__E_SchemaContent = static_cast<int32_t>(0x9),
__E_SchemaMixed = static_cast<int32_t>(0xa),
__E_SchemaEmpty = static_cast<int32_t>(0xb),
__E_SchemaElementOnly = static_cast<int32_t>(0xc),
__E_SchemaTextOnly = static_cast<int32_t>(0xd),
__E_SchemaOrder = static_cast<int32_t>(0xe),
__E_SchemaSeq = static_cast<int32_t>(0xf),
__E_SchemaOne = static_cast<int32_t>(0x10),
__E_SchemaMany = static_cast<int32_t>(0x11),
__E_SchemaRequired = static_cast<int32_t>(0x12),
__E_SchemaYes = static_cast<int32_t>(0x13),
__E_SchemaNo = static_cast<int32_t>(0x14),
__E_SchemaString = static_cast<int32_t>(0x15),
__E_SchemaId = static_cast<int32_t>(0x16),
__E_SchemaIdref = static_cast<int32_t>(0x17),
__E_SchemaIdrefs = static_cast<int32_t>(0x18),
__E_SchemaEntity = static_cast<int32_t>(0x19),
__E_SchemaEntities = static_cast<int32_t>(0x1a),
__E_SchemaNmtoken = static_cast<int32_t>(0x1b),
__E_SchemaNmtokens = static_cast<int32_t>(0x1c),
__E_SchemaEnumeration = static_cast<int32_t>(0x1d),
__E_SchemaDefault = static_cast<int32_t>(0x1e),
__E_XdrRoot = static_cast<int32_t>(0x1f),
__E_XdrElementType = static_cast<int32_t>(0x20),
__E_XdrElement = static_cast<int32_t>(0x21),
__E_XdrGroup = static_cast<int32_t>(0x22),
__E_XdrAttributeType = static_cast<int32_t>(0x23),
__E_XdrAttribute = static_cast<int32_t>(0x24),
__E_XdrDatatype = static_cast<int32_t>(0x25),
__E_XdrDescription = static_cast<int32_t>(0x26),
__E_XdrExtends = static_cast<int32_t>(0x27),
__E_SchemaXdrRootAlias = static_cast<int32_t>(0x28),
__E_SchemaDtType = static_cast<int32_t>(0x29),
__E_SchemaDtValues = static_cast<int32_t>(0x2a),
__E_SchemaDtMaxLength = static_cast<int32_t>(0x2b),
__E_SchemaDtMinLength = static_cast<int32_t>(0x2c),
__E_SchemaDtMax = static_cast<int32_t>(0x2d),
__E_SchemaDtMin = static_cast<int32_t>(0x2e),
__E_SchemaDtMinExclusive = static_cast<int32_t>(0x2f),
__E_SchemaDtMaxExclusive = static_cast<int32_t>(0x30),
__E_SchemaTargetNamespace = static_cast<int32_t>(0x31),
__E_SchemaVersion = static_cast<int32_t>(0x32),
__E_SchemaFinalDefault = static_cast<int32_t>(0x33),
__E_SchemaBlockDefault = static_cast<int32_t>(0x34),
__E_SchemaFixed = static_cast<int32_t>(0x35),
__E_SchemaAbstract = static_cast<int32_t>(0x36),
__E_SchemaBlock = static_cast<int32_t>(0x37),
__E_SchemaSubstitutionGroup = static_cast<int32_t>(0x38),
__E_SchemaFinal = static_cast<int32_t>(0x39),
__E_SchemaNillable = static_cast<int32_t>(0x3a),
__E_SchemaRef = static_cast<int32_t>(0x3b),
__E_SchemaBase = static_cast<int32_t>(0x3c),
__E_SchemaDerivedBy = static_cast<int32_t>(0x3d),
__E_SchemaNamespace = static_cast<int32_t>(0x3e),
__E_SchemaProcessContents = static_cast<int32_t>(0x3f),
__E_SchemaRefer = static_cast<int32_t>(0x40),
__E_SchemaPublic = static_cast<int32_t>(0x41),
__E_SchemaSystem = static_cast<int32_t>(0x42),
__E_SchemaSchemaLocation = static_cast<int32_t>(0x43),
__E_SchemaValue = static_cast<int32_t>(0x44),
__E_SchemaSource = static_cast<int32_t>(0x45),
__E_SchemaAttributeFormDefault = static_cast<int32_t>(0x46),
__E_SchemaElementFormDefault = static_cast<int32_t>(0x47),
__E_SchemaUse = static_cast<int32_t>(0x48),
__E_SchemaForm = static_cast<int32_t>(0x49),
__E_XsdSchema = static_cast<int32_t>(0x4a),
__E_XsdAnnotation = static_cast<int32_t>(0x4b),
__E_XsdInclude = static_cast<int32_t>(0x4c),
__E_XsdImport = static_cast<int32_t>(0x4d),
__E_XsdElement = static_cast<int32_t>(0x4e),
__E_XsdAttribute = static_cast<int32_t>(0x4f),
__E_xsdAttributeGroup = static_cast<int32_t>(0x50),
__E_XsdAnyAttribute = static_cast<int32_t>(0x51),
__E_XsdGroup = static_cast<int32_t>(0x52),
__E_XsdAll = static_cast<int32_t>(0x53),
__E_XsdChoice = static_cast<int32_t>(0x54),
__E_XsdSequence = static_cast<int32_t>(0x55),
__E_XsdAny = static_cast<int32_t>(0x56),
__E_XsdNotation = static_cast<int32_t>(0x57),
__E_XsdSimpleType = static_cast<int32_t>(0x58),
__E_XsdComplexType = static_cast<int32_t>(0x59),
__E_XsdUnique = static_cast<int32_t>(0x5a),
__E_XsdKey = static_cast<int32_t>(0x5b),
__E_XsdKeyref = static_cast<int32_t>(0x5c),
__E_XsdSelector = static_cast<int32_t>(0x5d),
__E_XsdField = static_cast<int32_t>(0x5e),
__E_XsdMinExclusive = static_cast<int32_t>(0x5f),
__E_XsdMinInclusive = static_cast<int32_t>(0x60),
__E_XsdMaxExclusive = static_cast<int32_t>(0x61),
__E_XsdMaxInclusive = static_cast<int32_t>(0x62),
__E_XsdTotalDigits = static_cast<int32_t>(0x63),
__E_XsdFractionDigits = static_cast<int32_t>(0x64),
__E_XsdLength = static_cast<int32_t>(0x65),
__E_XsdMinLength = static_cast<int32_t>(0x66),
__E_XsdMaxLength = static_cast<int32_t>(0x67),
__E_XsdEnumeration = static_cast<int32_t>(0x68),
__E_XsdPattern = static_cast<int32_t>(0x69),
__E_XsdDocumentation = static_cast<int32_t>(0x6a),
__E_XsdAppInfo = static_cast<int32_t>(0x6b),
__E_XsdComplexContent = static_cast<int32_t>(0x6c),
__E_XsdComplexContentExtension = static_cast<int32_t>(0x6d),
__E_XsdComplexContentRestriction = static_cast<int32_t>(0x6e),
__E_XsdSimpleContent = static_cast<int32_t>(0x6f),
__E_XsdSimpleContentExtension = static_cast<int32_t>(0x70),
__E_XsdSimpleContentRestriction = static_cast<int32_t>(0x71),
__E_XsdSimpleTypeList = static_cast<int32_t>(0x72),
__E_XsdSimpleTypeRestriction = static_cast<int32_t>(0x73),
__E_XsdSimpleTypeUnion = static_cast<int32_t>(0x74),
__E_XsdWhitespace = static_cast<int32_t>(0x75),
__E_XsdRedefine = static_cast<int32_t>(0x76),
__E_SchemaItemType = static_cast<int32_t>(0x77),
__E_SchemaMemberTypes = static_cast<int32_t>(0x78),
__E_SchemaXPath = static_cast<int32_t>(0x79),
__E_XmlLang = static_cast<int32_t>(0x7a),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SchemaNames_Token_Unwrapped () const noexcept {
return static_cast<__SchemaNames_Token_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SchemaNames_Token() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SchemaNames_Token(int32_t  value__) noexcept;

/// @brief Field Empty value: I32(0)
static ::GlobalNamespace::SchemaNames_Token const Empty;

/// @brief Field SchemaAbstract value: I32(54)
static ::GlobalNamespace::SchemaNames_Token const SchemaAbstract;

/// @brief Field SchemaAttributeFormDefault value: I32(70)
static ::GlobalNamespace::SchemaNames_Token const SchemaAttributeFormDefault;

/// @brief Field SchemaBase value: I32(60)
static ::GlobalNamespace::SchemaNames_Token const SchemaBase;

/// @brief Field SchemaBlock value: I32(55)
static ::GlobalNamespace::SchemaNames_Token const SchemaBlock;

/// @brief Field SchemaBlockDefault value: I32(52)
static ::GlobalNamespace::SchemaNames_Token const SchemaBlockDefault;

/// @brief Field SchemaClosed value: I32(8)
static ::GlobalNamespace::SchemaNames_Token const SchemaClosed;

/// @brief Field SchemaContent value: I32(9)
static ::GlobalNamespace::SchemaNames_Token const SchemaContent;

/// @brief Field SchemaDefault value: I32(30)
static ::GlobalNamespace::SchemaNames_Token const SchemaDefault;

/// @brief Field SchemaDerivedBy value: I32(61)
static ::GlobalNamespace::SchemaNames_Token const SchemaDerivedBy;

/// @brief Field SchemaDtMax value: I32(45)
static ::GlobalNamespace::SchemaNames_Token const SchemaDtMax;

/// @brief Field SchemaDtMaxExclusive value: I32(48)
static ::GlobalNamespace::SchemaNames_Token const SchemaDtMaxExclusive;

/// @brief Field SchemaDtMaxLength value: I32(43)
static ::GlobalNamespace::SchemaNames_Token const SchemaDtMaxLength;

/// @brief Field SchemaDtMin value: I32(46)
static ::GlobalNamespace::SchemaNames_Token const SchemaDtMin;

/// @brief Field SchemaDtMinExclusive value: I32(47)
static ::GlobalNamespace::SchemaNames_Token const SchemaDtMinExclusive;

/// @brief Field SchemaDtMinLength value: I32(44)
static ::GlobalNamespace::SchemaNames_Token const SchemaDtMinLength;

/// @brief Field SchemaDtType value: I32(41)
static ::GlobalNamespace::SchemaNames_Token const SchemaDtType;

/// @brief Field SchemaDtValues value: I32(42)
static ::GlobalNamespace::SchemaNames_Token const SchemaDtValues;

/// @brief Field SchemaElementFormDefault value: I32(71)
static ::GlobalNamespace::SchemaNames_Token const SchemaElementFormDefault;

/// @brief Field SchemaElementOnly value: I32(12)
static ::GlobalNamespace::SchemaNames_Token const SchemaElementOnly;

/// @brief Field SchemaEmpty value: I32(11)
static ::GlobalNamespace::SchemaNames_Token const SchemaEmpty;

/// @brief Field SchemaEntities value: I32(26)
static ::GlobalNamespace::SchemaNames_Token const SchemaEntities;

/// @brief Field SchemaEntity value: I32(25)
static ::GlobalNamespace::SchemaNames_Token const SchemaEntity;

/// @brief Field SchemaEnumeration value: I32(29)
static ::GlobalNamespace::SchemaNames_Token const SchemaEnumeration;

/// @brief Field SchemaFinal value: I32(57)
static ::GlobalNamespace::SchemaNames_Token const SchemaFinal;

/// @brief Field SchemaFinalDefault value: I32(51)
static ::GlobalNamespace::SchemaNames_Token const SchemaFinalDefault;

/// @brief Field SchemaFixed value: I32(53)
static ::GlobalNamespace::SchemaNames_Token const SchemaFixed;

/// @brief Field SchemaForm value: I32(73)
static ::GlobalNamespace::SchemaNames_Token const SchemaForm;

/// @brief Field SchemaId value: I32(22)
static ::GlobalNamespace::SchemaNames_Token const SchemaId;

/// @brief Field SchemaIdref value: I32(23)
static ::GlobalNamespace::SchemaNames_Token const SchemaIdref;

/// @brief Field SchemaIdrefs value: I32(24)
static ::GlobalNamespace::SchemaNames_Token const SchemaIdrefs;

/// @brief Field SchemaInfinite value: I32(5)
static ::GlobalNamespace::SchemaNames_Token const SchemaInfinite;

/// @brief Field SchemaItemType value: I32(119)
static ::GlobalNamespace::SchemaNames_Token const SchemaItemType;

/// @brief Field SchemaMany value: I32(17)
static ::GlobalNamespace::SchemaNames_Token const SchemaMany;

/// @brief Field SchemaMaxOccurs value: I32(3)
static ::GlobalNamespace::SchemaNames_Token const SchemaMaxOccurs;

/// @brief Field SchemaMemberTypes value: I32(120)
static ::GlobalNamespace::SchemaNames_Token const SchemaMemberTypes;

/// @brief Field SchemaMinOccurs value: I32(4)
static ::GlobalNamespace::SchemaNames_Token const SchemaMinOccurs;

/// @brief Field SchemaMixed value: I32(10)
static ::GlobalNamespace::SchemaNames_Token const SchemaMixed;

/// @brief Field SchemaModel value: I32(6)
static ::GlobalNamespace::SchemaNames_Token const SchemaModel;

/// @brief Field SchemaName value: I32(1)
static ::GlobalNamespace::SchemaNames_Token const SchemaName;

/// @brief Field SchemaNamespace value: I32(62)
static ::GlobalNamespace::SchemaNames_Token const SchemaNamespace;

/// @brief Field SchemaNillable value: I32(58)
static ::GlobalNamespace::SchemaNames_Token const SchemaNillable;

/// @brief Field SchemaNmtoken value: I32(27)
static ::GlobalNamespace::SchemaNames_Token const SchemaNmtoken;

/// @brief Field SchemaNmtokens value: I32(28)
static ::GlobalNamespace::SchemaNames_Token const SchemaNmtokens;

/// @brief Field SchemaNo value: I32(20)
static ::GlobalNamespace::SchemaNames_Token const SchemaNo;

/// @brief Field SchemaOne value: I32(16)
static ::GlobalNamespace::SchemaNames_Token const SchemaOne;

/// @brief Field SchemaOpen value: I32(7)
static ::GlobalNamespace::SchemaNames_Token const SchemaOpen;

/// @brief Field SchemaOrder value: I32(14)
static ::GlobalNamespace::SchemaNames_Token const SchemaOrder;

/// @brief Field SchemaProcessContents value: I32(63)
static ::GlobalNamespace::SchemaNames_Token const SchemaProcessContents;

/// @brief Field SchemaPublic value: I32(65)
static ::GlobalNamespace::SchemaNames_Token const SchemaPublic;

/// @brief Field SchemaRef value: I32(59)
static ::GlobalNamespace::SchemaNames_Token const SchemaRef;

/// @brief Field SchemaRefer value: I32(64)
static ::GlobalNamespace::SchemaNames_Token const SchemaRefer;

/// @brief Field SchemaRequired value: I32(18)
static ::GlobalNamespace::SchemaNames_Token const SchemaRequired;

/// @brief Field SchemaSchemaLocation value: I32(67)
static ::GlobalNamespace::SchemaNames_Token const SchemaSchemaLocation;

/// @brief Field SchemaSeq value: I32(15)
static ::GlobalNamespace::SchemaNames_Token const SchemaSeq;

/// @brief Field SchemaSource value: I32(69)
static ::GlobalNamespace::SchemaNames_Token const SchemaSource;

/// @brief Field SchemaString value: I32(21)
static ::GlobalNamespace::SchemaNames_Token const SchemaString;

/// @brief Field SchemaSubstitutionGroup value: I32(56)
static ::GlobalNamespace::SchemaNames_Token const SchemaSubstitutionGroup;

/// @brief Field SchemaSystem value: I32(66)
static ::GlobalNamespace::SchemaNames_Token const SchemaSystem;

/// @brief Field SchemaTargetNamespace value: I32(49)
static ::GlobalNamespace::SchemaNames_Token const SchemaTargetNamespace;

/// @brief Field SchemaTextOnly value: I32(13)
static ::GlobalNamespace::SchemaNames_Token const SchemaTextOnly;

/// @brief Field SchemaType value: I32(2)
static ::GlobalNamespace::SchemaNames_Token const SchemaType;

/// @brief Field SchemaUse value: I32(72)
static ::GlobalNamespace::SchemaNames_Token const SchemaUse;

/// @brief Field SchemaValue value: I32(68)
static ::GlobalNamespace::SchemaNames_Token const SchemaValue;

/// @brief Field SchemaVersion value: I32(50)
static ::GlobalNamespace::SchemaNames_Token const SchemaVersion;

/// @brief Field SchemaXPath value: I32(121)
static ::GlobalNamespace::SchemaNames_Token const SchemaXPath;

/// @brief Field SchemaXdrRootAlias value: I32(40)
static ::GlobalNamespace::SchemaNames_Token const SchemaXdrRootAlias;

/// @brief Field SchemaYes value: I32(19)
static ::GlobalNamespace::SchemaNames_Token const SchemaYes;

/// @brief Field XdrAttribute value: I32(36)
static ::GlobalNamespace::SchemaNames_Token const XdrAttribute;

/// @brief Field XdrAttributeType value: I32(35)
static ::GlobalNamespace::SchemaNames_Token const XdrAttributeType;

/// @brief Field XdrDatatype value: I32(37)
static ::GlobalNamespace::SchemaNames_Token const XdrDatatype;

/// @brief Field XdrDescription value: I32(38)
static ::GlobalNamespace::SchemaNames_Token const XdrDescription;

/// @brief Field XdrElement value: I32(33)
static ::GlobalNamespace::SchemaNames_Token const XdrElement;

/// @brief Field XdrElementType value: I32(32)
static ::GlobalNamespace::SchemaNames_Token const XdrElementType;

/// @brief Field XdrExtends value: I32(39)
static ::GlobalNamespace::SchemaNames_Token const XdrExtends;

/// @brief Field XdrGroup value: I32(34)
static ::GlobalNamespace::SchemaNames_Token const XdrGroup;

/// @brief Field XdrRoot value: I32(31)
static ::GlobalNamespace::SchemaNames_Token const XdrRoot;

/// @brief Field XmlLang value: I32(122)
static ::GlobalNamespace::SchemaNames_Token const XmlLang;

/// @brief Field XsdAll value: I32(83)
static ::GlobalNamespace::SchemaNames_Token const XsdAll;

/// @brief Field XsdAnnotation value: I32(75)
static ::GlobalNamespace::SchemaNames_Token const XsdAnnotation;

/// @brief Field XsdAny value: I32(86)
static ::GlobalNamespace::SchemaNames_Token const XsdAny;

/// @brief Field XsdAnyAttribute value: I32(81)
static ::GlobalNamespace::SchemaNames_Token const XsdAnyAttribute;

/// @brief Field XsdAppInfo value: I32(107)
static ::GlobalNamespace::SchemaNames_Token const XsdAppInfo;

/// @brief Field XsdAttribute value: I32(79)
static ::GlobalNamespace::SchemaNames_Token const XsdAttribute;

/// @brief Field XsdChoice value: I32(84)
static ::GlobalNamespace::SchemaNames_Token const XsdChoice;

/// @brief Field XsdComplexContent value: I32(108)
static ::GlobalNamespace::SchemaNames_Token const XsdComplexContent;

/// @brief Field XsdComplexContentExtension value: I32(109)
static ::GlobalNamespace::SchemaNames_Token const XsdComplexContentExtension;

/// @brief Field XsdComplexContentRestriction value: I32(110)
static ::GlobalNamespace::SchemaNames_Token const XsdComplexContentRestriction;

/// @brief Field XsdComplexType value: I32(89)
static ::GlobalNamespace::SchemaNames_Token const XsdComplexType;

/// @brief Field XsdDocumentation value: I32(106)
static ::GlobalNamespace::SchemaNames_Token const XsdDocumentation;

/// @brief Field XsdElement value: I32(78)
static ::GlobalNamespace::SchemaNames_Token const XsdElement;

/// @brief Field XsdEnumeration value: I32(104)
static ::GlobalNamespace::SchemaNames_Token const XsdEnumeration;

/// @brief Field XsdField value: I32(94)
static ::GlobalNamespace::SchemaNames_Token const XsdField;

/// @brief Field XsdFractionDigits value: I32(100)
static ::GlobalNamespace::SchemaNames_Token const XsdFractionDigits;

/// @brief Field XsdGroup value: I32(82)
static ::GlobalNamespace::SchemaNames_Token const XsdGroup;

/// @brief Field XsdImport value: I32(77)
static ::GlobalNamespace::SchemaNames_Token const XsdImport;

/// @brief Field XsdInclude value: I32(76)
static ::GlobalNamespace::SchemaNames_Token const XsdInclude;

/// @brief Field XsdKey value: I32(91)
static ::GlobalNamespace::SchemaNames_Token const XsdKey;

/// @brief Field XsdKeyref value: I32(92)
static ::GlobalNamespace::SchemaNames_Token const XsdKeyref;

/// @brief Field XsdLength value: I32(101)
static ::GlobalNamespace::SchemaNames_Token const XsdLength;

/// @brief Field XsdMaxExclusive value: I32(97)
static ::GlobalNamespace::SchemaNames_Token const XsdMaxExclusive;

/// @brief Field XsdMaxInclusive value: I32(98)
static ::GlobalNamespace::SchemaNames_Token const XsdMaxInclusive;

/// @brief Field XsdMaxLength value: I32(103)
static ::GlobalNamespace::SchemaNames_Token const XsdMaxLength;

/// @brief Field XsdMinExclusive value: I32(95)
static ::GlobalNamespace::SchemaNames_Token const XsdMinExclusive;

/// @brief Field XsdMinInclusive value: I32(96)
static ::GlobalNamespace::SchemaNames_Token const XsdMinInclusive;

/// @brief Field XsdMinLength value: I32(102)
static ::GlobalNamespace::SchemaNames_Token const XsdMinLength;

/// @brief Field XsdNotation value: I32(87)
static ::GlobalNamespace::SchemaNames_Token const XsdNotation;

/// @brief Field XsdPattern value: I32(105)
static ::GlobalNamespace::SchemaNames_Token const XsdPattern;

/// @brief Field XsdRedefine value: I32(118)
static ::GlobalNamespace::SchemaNames_Token const XsdRedefine;

/// @brief Field XsdSchema value: I32(74)
static ::GlobalNamespace::SchemaNames_Token const XsdSchema;

/// @brief Field XsdSelector value: I32(93)
static ::GlobalNamespace::SchemaNames_Token const XsdSelector;

/// @brief Field XsdSequence value: I32(85)
static ::GlobalNamespace::SchemaNames_Token const XsdSequence;

/// @brief Field XsdSimpleContent value: I32(111)
static ::GlobalNamespace::SchemaNames_Token const XsdSimpleContent;

/// @brief Field XsdSimpleContentExtension value: I32(112)
static ::GlobalNamespace::SchemaNames_Token const XsdSimpleContentExtension;

/// @brief Field XsdSimpleContentRestriction value: I32(113)
static ::GlobalNamespace::SchemaNames_Token const XsdSimpleContentRestriction;

/// @brief Field XsdSimpleType value: I32(88)
static ::GlobalNamespace::SchemaNames_Token const XsdSimpleType;

/// @brief Field XsdSimpleTypeList value: I32(114)
static ::GlobalNamespace::SchemaNames_Token const XsdSimpleTypeList;

/// @brief Field XsdSimpleTypeRestriction value: I32(115)
static ::GlobalNamespace::SchemaNames_Token const XsdSimpleTypeRestriction;

/// @brief Field XsdSimpleTypeUnion value: I32(116)
static ::GlobalNamespace::SchemaNames_Token const XsdSimpleTypeUnion;

/// @brief Field XsdTotalDigits value: I32(99)
static ::GlobalNamespace::SchemaNames_Token const XsdTotalDigits;

/// @brief Field XsdUnique value: I32(90)
static ::GlobalNamespace::SchemaNames_Token const XsdUnique;

/// @brief Field XsdWhitespace value: I32(117)
static ::GlobalNamespace::SchemaNames_Token const XsdWhitespace;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14444};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field xsdAttributeGroup value: I32(80)
static ::GlobalNamespace::SchemaNames_Token const xsdAttributeGroup;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SchemaNames_Token, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SchemaNames_Token) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
