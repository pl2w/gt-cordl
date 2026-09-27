#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/RichTextTagParser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_TagType_def.hpp"
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_TagUnitType_def.hpp"
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_TagValueType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RichTextTagParser)
namespace GlobalNamespace {
struct RichTextTagParser_Segment;
}
namespace GlobalNamespace {
struct RichTextTagParser_TagType;
}
namespace GlobalNamespace {
struct RichTextTagParser_TagUnitType;
}
namespace GlobalNamespace {
struct RichTextTagParser_TagValueType;
}
namespace GlobalNamespace {
struct RichTextTagParser_Tag;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine::TextCore {
struct NativeTextGenerationSettings;
}
namespace UnityEngine::TextCore {
class RichTextTagParser_ParseError;
}
namespace UnityEngine::TextCore {
class RichTextTagParser_TagTypeInfo;
}
namespace UnityEngine::TextCore {
class RichTextTagParser_TagValue;
}
namespace UnityEngine::TextCore {
struct TextSpan;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::TextCore {
class RichTextTagParser;
}
namespace UnityEngine::TextCore {
class RichTextTagParser_ParseError;
}
namespace UnityEngine::TextCore {
class RichTextTagParser_TagTypeInfo;
}
namespace UnityEngine::TextCore {
class RichTextTagParser_TagValue;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextCore::RichTextTagParser*);
MARK_REF_T(::UnityEngine::TextCore::RichTextTagParser_ParseError*);
MARK_REF_T(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*);
MARK_REF_T(::UnityEngine::TextCore::RichTextTagParser_TagValue*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::RichTextTagParser*, "UnityEngine.TextCore", "RichTextTagParser");
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::RichTextTagParser_ParseError*, "UnityEngine.TextCore", "RichTextTagParser/ParseError");
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*, "UnityEngine.TextCore", "RichTextTagParser/TagTypeInfo");
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::RichTextTagParser_TagValue*, "UnityEngine.TextCore", "RichTextTagParser/TagValue");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies System.Object, UnityEngine.TextCore.RichTextTagParser::TagTypeInfo
namespace UnityEngine::TextCore {
// Is value type: false
// CS Name: UnityEngine.TextCore.RichTextTagParser
class CORDL_TYPE RichTextTagParser : public ::System::Object {
public:
// Declarations
using Segment = ::GlobalNamespace::RichTextTagParser_Segment;

using Tag = ::GlobalNamespace::RichTextTagParser_Tag;

using TagType = ::GlobalNamespace::RichTextTagParser_TagType;

using TagUnitType = ::GlobalNamespace::RichTextTagParser_TagUnitType;

using TagValueType = ::GlobalNamespace::RichTextTagParser_TagValueType;

using ParseError = ::UnityEngine::TextCore::RichTextTagParser_ParseError;

using TagTypeInfo = ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo;

using TagValue = ::UnityEngine::TextCore::RichTextTagParser_TagValue;

/// @brief Field TagsInfo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TagsInfo, put=setStaticF_TagsInfo)) ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>  TagsInfo;

/// [NullableContext(1)]
/// @brief Method AddLink, addr 0xb6bb670, size 0x230, virtual false, abstract: false, final false
static inline int32_t AddLink(::GlobalNamespace::RichTextTagParser_TagType  type, ::StringW  value, /* [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,::GlobalNamespace::RichTextTagParser_TagType,::StringW>>*  links) ;

/// [NullableContext(1)]
/// @brief Method ApplyStateToSegment, addr 0xb6bb590, size 0xe0, virtual false, abstract: false, final false
static inline void ApplyStateToSegment(::StringW  input, ::System::Collections::Generic::List_1<::GlobalNamespace::RichTextTagParser_Tag>*  tags, ::ArrayW<::GlobalNamespace::RichTextTagParser_Segment>  segments) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method CreateTextGenerationSettingsArray, addr 0xb6bbd60, size 0x2d8, virtual false, abstract: false, final false
static inline void CreateTextGenerationSettingsArray(::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings>  tgs, /* [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,::GlobalNamespace::RichTextTagParser_TagType,::StringW>>*  links, ::UnityEngine::Color  hyperlinkColor) ;

/// @brief Method CreateTextSpan, addr 0xb6bb8a0, size 0x3fc, virtual false, abstract: false, final false
static inline ::UnityEngine::TextCore::TextSpan CreateTextSpan(::GlobalNamespace::RichTextTagParser_Segment  segment, ::by_ref<::UnityEngine::TextCore::NativeTextGenerationSettings>  tgs, /* [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,::GlobalNamespace::RichTextTagParser_TagType,::StringW>>*  links, ::UnityEngine::Color  hyperlinkColor) ;

/// [NullableContext(1)]
/// @brief Method FindTags, addr 0xb6b9be8, size 0xb64, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::RichTextTagParser_Tag>* FindTags(::StringW  inputStr, /* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::List_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>*  errors) ;

/// [NullableContext(1)]
/// @brief Method GenerateSegments, addr 0xb6bb2ec, size 0x2a4, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::RichTextTagParser_Segment> GenerateSegments(::StringW  input, ::System::Collections::Generic::List_1<::GlobalNamespace::RichTextTagParser_Tag>*  tags) ;

/// @brief Method GetAttributeSpan, addr 0xb6ba788, size 0x138, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<char16_t> GetAttributeSpan(::System::ReadOnlySpan_1<char16_t>  atributeSection) ;

/// [NullableContext(1)]
/// @brief Method PickResultingTags, addr 0xb6ba940, size 0x9ac, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::RichTextTagParser_Tag>* PickResultingTags(::System::Collections::Generic::List_1<::GlobalNamespace::RichTextTagParser_Tag>*  allTags, ::StringW  input, int32_t  atPosition, /* [Nullable(2)] */ ::System::Collections::Generic::List_1<::GlobalNamespace::RichTextTagParser_Tag>*  applicableTags) ;

/// @brief Method SpanToEnum, addr 0xb6b9968, size 0x280, virtual false, abstract: false, final false
static inline bool SpanToEnum(::System::ReadOnlySpan_1<char16_t>  tagCandidate, ::by_ref<::GlobalNamespace::RichTextTagParser_TagType>  tagType, /* [Nullable(2)] */ ::by_ref<::StringW>  error, ::by_ref<::System::ReadOnlySpan_1<char16_t>>  attribute) ;

static inline ::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*> getStaticF_TagsInfo() ;

static inline void setStaticF_TagsInfo(::ArrayW<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>  value) ;

/// @brief Method tagMatch, addr 0xb6b9840, size 0x128, virtual false, abstract: false, final false
static inline bool tagMatch(::System::ReadOnlySpan_1<char16_t>  tagCandidate, /* [Nullable(1)] */ ::StringW  tagName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RichTextTagParser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RichTextTagParser(RichTextTagParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RichTextTagParser(RichTextTagParser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26220};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TextCore::RichTextTagParser) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::TextCore
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace UnityEngine::TextCore {
// Is value type: false
// CS Name: UnityEngine.TextCore.RichTextTagParser/ParseError
class CORDL_TYPE RichTextTagParser_ParseError : public ::System::Object {
public:
// Declarations
/// @brief [CompilerGenerated]
 __declspec(property(get=get_EqualityContract)) ::System::Type*  EqualityContract;

/// @brief Field message, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_message, put=__cordl_internal_set_message)) ::StringW  message;

/// @brief Field position, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) int32_t  position;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>*() noexcept;

/// [CompilerGenerated]
/// [NullableContext(2)]
/// @brief Method Equals, addr 0xb6bddd4, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// [CompilerGenerated]
/// [NullableContext(2)]
/// @brief Method Equals, addr 0xb6bde5c, size 0x124, virtual true, abstract: false, final false
inline bool Equals(::UnityEngine::TextCore::RichTextTagParser_ParseError*  other) ;

/// [CompilerGenerated]
/// @brief Method GetHashCode, addr 0xb6bdcdc, size 0xf8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::UnityEngine::TextCore::RichTextTagParser_ParseError* New_ctor(::StringW  message, int32_t  position) ;

/// [CompilerGenerated]
/// @brief Method PrintMembers, addr 0xb6bdc24, size 0xb8, virtual true, abstract: false, final false
inline bool PrintMembers(::System::Text::StringBuilder*  builder) ;

/// [CompilerGenerated]
/// @brief Method ToString, addr 0xb6bdb3c, size 0xe8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_message() const;

constexpr ::StringW& __cordl_internal_get_message() ;

constexpr int32_t const& __cordl_internal_get_position() const;

constexpr int32_t& __cordl_internal_get_position() ;

constexpr void __cordl_internal_set_message(::StringW  value) ;

constexpr void __cordl_internal_set_position(int32_t  value) ;

/// @brief Method .ctor, addr 0xb6ba74c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, int32_t  position) ;

/// [CompilerGenerated]
/// @brief Method get_EqualityContract, addr 0xb6bdadc, size 0x60, virtual true, abstract: false, final false
inline ::System::Type* get_EqualityContract() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>"
constexpr ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_ParseError*>* i___System__IEquatable_1___UnityEngine__TextCore__RichTextTagParser_ParseError__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RichTextTagParser_ParseError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_ParseError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RichTextTagParser_ParseError(RichTextTagParser_ParseError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_ParseError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RichTextTagParser_ParseError(RichTextTagParser_ParseError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26219};

/// @brief Field position, offset: 0x10, size: 0x4, def value: None
 int32_t  ___position;

/// @brief Field message, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_ParseError, ___position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_ParseError, ___message) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::RichTextTagParser_ParseError) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::TextCore
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies System.Object, UnityEngine.Color, UnityEngine.TextCore.RichTextTagParser::TagValueType
namespace UnityEngine::TextCore {
// Is value type: false
// CS Name: UnityEngine.TextCore.RichTextTagParser/TagValue
class CORDL_TYPE RichTextTagParser_TagValue : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ColorValue)) ::UnityEngine::Color  ColorValue;

/// [Nullable(1)]
/// @brief [CompilerGenerated]
 __declspec(property(get=get_EqualityContract)) ::System::Type*  EqualityContract;

 __declspec(property(get=get_StringValue)) ::StringW  StringValue;

/// @brief Field m_colorValue, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_colorValue, put=__cordl_internal_set_m_colorValue)) ::UnityEngine::Color  m_colorValue;

/// @brief Field m_numericalValue, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_numericalValue, put=__cordl_internal_set_m_numericalValue)) float_t  m_numericalValue;

/// @brief Field m_stringValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_stringValue, put=__cordl_internal_set_m_stringValue)) ::StringW  m_stringValue;

/// @brief Field type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::RichTextTagParser_TagValueType  type;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>*() noexcept;

/// [CompilerGenerated]
/// @brief Method Equals, addr 0xb6bd8b8, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// [CompilerGenerated]
/// @brief Method Equals, addr 0xb6bd940, size 0x19c, virtual true, abstract: false, final false
inline bool Equals(::UnityEngine::TextCore::RichTextTagParser_TagValue*  other) ;

/// [CompilerGenerated]
/// @brief Method GetHashCode, addr 0xb6bd73c, size 0x17c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief [NullableContext(1)]
static inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* New_ctor(::StringW  value) ;

static inline ::UnityEngine::TextCore::RichTextTagParser_TagValue* New_ctor(::UnityEngine::Color  value) ;

/// [CompilerGenerated]
/// [NullableContext(1)]
/// @brief Method PrintMembers, addr 0xb6bd734, size 0x8, virtual true, abstract: false, final false
inline bool PrintMembers(::System::Text::StringBuilder*  builder) ;

/// [NullableContext(1)]
/// [CompilerGenerated]
/// @brief Method ToString, addr 0xb6bd64c, size 0xe8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_colorValue() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_colorValue() ;

constexpr float_t const& __cordl_internal_get_m_numericalValue() const;

constexpr float_t& __cordl_internal_get_m_numericalValue() ;

constexpr ::StringW const& __cordl_internal_get_m_stringValue() const;

constexpr ::StringW& __cordl_internal_get_m_stringValue() ;

constexpr ::GlobalNamespace::RichTextTagParser_TagValueType const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::RichTextTagParser_TagValueType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_m_colorValue(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_numericalValue(float_t  value) ;

constexpr void __cordl_internal_set_m_stringValue(::StringW  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::RichTextTagParser_TagValueType  value) ;

/// [NullableContext(1)]
/// @brief Method .ctor, addr 0xb6ba908, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  value) ;

/// @brief Method .ctor, addr 0xb6ba8c0, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Color  value) ;

/// @brief Method get_ColorValue, addr 0xb6bbc9c, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_ColorValue() ;

/// [CompilerGenerated]
/// [NullableContext(1)]
/// @brief Method get_EqualityContract, addr 0xb6bd5ec, size 0x60, virtual true, abstract: false, final false
inline ::System::Type* get_EqualityContract() ;

/// @brief Method get_StringValue, addr 0xb6bbd00, size 0x60, virtual false, abstract: false, final false
inline ::StringW get_StringValue() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>"
constexpr ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagValue*>* i___System__IEquatable_1___UnityEngine__TextCore__RichTextTagParser_TagValue__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RichTextTagParser_TagValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_TagValue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RichTextTagParser_TagValue(RichTextTagParser_TagValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_TagValue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RichTextTagParser_TagValue(RichTextTagParser_TagValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26216};

/// @brief Field type, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::RichTextTagParser_TagValueType  ___type;

/// @brief Field m_stringValue, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_stringValue;

/// @brief Field m_numericalValue, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_numericalValue;

/// @brief Field m_colorValue, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_colorValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValue, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValue, ___m_stringValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValue, ___m_numericalValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagValue, ___m_colorValue) == 0x24, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::RichTextTagParser_TagValue) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::TextCore
// [Nullable(0)]
// [NullableContext(1)]
// Dependencies System.Object, UnityEngine.TextCore.RichTextTagParser::TagType, UnityEngine.TextCore.RichTextTagParser::TagUnitType, UnityEngine.TextCore.RichTextTagParser::TagValueType
namespace UnityEngine::TextCore {
// Is value type: false
// CS Name: UnityEngine.TextCore.RichTextTagParser/TagTypeInfo
class CORDL_TYPE RichTextTagParser_TagTypeInfo : public ::System::Object {
public:
// Declarations
/// @brief [CompilerGenerated]
 __declspec(property(get=get_EqualityContract)) ::System::Type*  EqualityContract;

/// @brief Field TagType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_TagType, put=__cordl_internal_set_TagType)) ::GlobalNamespace::RichTextTagParser_TagType  TagType;

/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field unitType, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_unitType, put=__cordl_internal_set_unitType)) ::GlobalNamespace::RichTextTagParser_TagUnitType  unitType;

/// @brief Field valueType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_valueType, put=__cordl_internal_set_valueType)) ::GlobalNamespace::RichTextTagParser_TagValueType  valueType;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>*() noexcept;

/// [CompilerGenerated]
/// [NullableContext(2)]
/// @brief Method Equals, addr 0xb6bd3d0, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// [CompilerGenerated]
/// [NullableContext(2)]
/// @brief Method Equals, addr 0xb6bd458, size 0x194, virtual true, abstract: false, final false
inline bool Equals(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*  other) ;

/// [CompilerGenerated]
/// @brief Method GetHashCode, addr 0xb6bd258, size 0x178, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo* New_ctor(::GlobalNamespace::RichTextTagParser_TagType  tagType, ::StringW  name, ::GlobalNamespace::RichTextTagParser_TagValueType  valueType, ::GlobalNamespace::RichTextTagParser_TagUnitType  unitType) ;

/// [CompilerGenerated]
/// @brief Method PrintMembers, addr 0xb6bd090, size 0x1c8, virtual true, abstract: false, final false
inline bool PrintMembers(::System::Text::StringBuilder*  builder) ;

/// [CompilerGenerated]
/// @brief Method ToString, addr 0xb6bcfa8, size 0xe8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::GlobalNamespace::RichTextTagParser_TagType const& __cordl_internal_get_TagType() const;

constexpr ::GlobalNamespace::RichTextTagParser_TagType& __cordl_internal_get_TagType() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::GlobalNamespace::RichTextTagParser_TagUnitType const& __cordl_internal_get_unitType() const;

constexpr ::GlobalNamespace::RichTextTagParser_TagUnitType& __cordl_internal_get_unitType() ;

constexpr ::GlobalNamespace::RichTextTagParser_TagValueType const& __cordl_internal_get_valueType() const;

constexpr ::GlobalNamespace::RichTextTagParser_TagValueType& __cordl_internal_get_valueType() ;

constexpr void __cordl_internal_set_TagType(::GlobalNamespace::RichTextTagParser_TagType  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_unitType(::GlobalNamespace::RichTextTagParser_TagUnitType  value) ;

constexpr void __cordl_internal_set_valueType(::GlobalNamespace::RichTextTagParser_TagValueType  value) ;

/// @brief Method .ctor, addr 0xb6bcef8, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::RichTextTagParser_TagType  tagType, ::StringW  name, ::GlobalNamespace::RichTextTagParser_TagValueType  valueType, ::GlobalNamespace::RichTextTagParser_TagUnitType  unitType) ;

/// [CompilerGenerated]
/// @brief Method get_EqualityContract, addr 0xb6bcf48, size 0x60, virtual true, abstract: false, final false
inline ::System::Type* get_EqualityContract() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>"
constexpr ::System::IEquatable_1<::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo*>* i___System__IEquatable_1___UnityEngine__TextCore__RichTextTagParser_TagTypeInfo__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RichTextTagParser_TagTypeInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_TagTypeInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RichTextTagParser_TagTypeInfo(RichTextTagParser_TagTypeInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RichTextTagParser_TagTypeInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RichTextTagParser_TagTypeInfo(RichTextTagParser_TagTypeInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26213};

/// @brief Field TagType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::RichTextTagParser_TagType  ___TagType;

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field valueType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::RichTextTagParser_TagValueType  ___valueType;

/// @brief Field unitType, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::RichTextTagParser_TagUnitType  ___unitType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo, ___TagType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo, ___valueType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo, ___unitType) == 0x24, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::RichTextTagParser_TagTypeInfo) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::TextCore
