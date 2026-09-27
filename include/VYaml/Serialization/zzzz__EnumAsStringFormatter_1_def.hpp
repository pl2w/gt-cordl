#pragma once
// IWYU pragma private; include "VYaml/Serialization/EnumAsStringFormatter_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EnumAsStringFormatter_1)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace VYaml::Emitter {
struct Utf8YamlEmitter;
}
namespace VYaml::Parser {
struct YamlParser;
}
namespace VYaml::Serialization {
template<typename T>
class EnumAsStringFormatter_1___c__DisplayClass2_0;
}
namespace VYaml::Serialization {
template<typename T>
class EnumAsStringFormatter_1___c;
}
namespace VYaml::Serialization {
template<typename T>
class IYamlFormatter_1;
}
namespace VYaml::Serialization {
class IYamlFormatter;
}
namespace VYaml::Serialization {
class YamlDeserializationContext;
}
namespace VYaml::Serialization {
class YamlSerializationContext;
}
// Forward declare root types
namespace VYaml::Serialization {
template<typename T>
class EnumAsStringFormatter_1;
}
namespace VYaml::Serialization {
template<typename T>
class EnumAsStringFormatter_1___c;
}
namespace VYaml::Serialization {
template<typename T>
class EnumAsStringFormatter_1___c__DisplayClass2_0;
}
// Write type traits
MARK_GEN_REF_T_PTR(::VYaml::Serialization::EnumAsStringFormatter_1);
MARK_GEN_REF_T_PTR(::VYaml::Serialization::EnumAsStringFormatter_1___c);
MARK_GEN_REF_T_PTR(::VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0);
DEFINE_IL2CPP_GEN_CLASS_PTR(::VYaml::Serialization::EnumAsStringFormatter_1, "VYaml.Serialization", "EnumAsStringFormatter`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::VYaml::Serialization::EnumAsStringFormatter_1___c, "VYaml.Serialization", "EnumAsStringFormatter`1/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0, "VYaml.Serialization", "EnumAsStringFormatter`1/<>c__DisplayClass2_0");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Serialization {
// cpp template
template<typename T>
// Is value type: false
// CS Name: VYaml.Serialization.EnumAsStringFormatter`1<T>
class CORDL_TYPE EnumAsStringFormatter_1 : public ::System::Object {
public:
// Declarations
using __c = ::VYaml::Serialization::EnumAsStringFormatter_1___c<T>;

using __c__DisplayClass2_0 = ::VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0<T>;

/// @brief Field NameValueMapping, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NameValueMapping, put=setStaticF_NameValueMapping)) ::System::Collections::Generic::Dictionary_2<::StringW,T>*  NameValueMapping;

/// @brief Field ValueNameMapping, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ValueNameMapping, put=setStaticF_ValueNameMapping)) ::System::Collections::Generic::Dictionary_2<T,::StringW>*  ValueNameMapping;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr operator  ::VYaml::Serialization::IYamlFormatter*() noexcept;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<T>"
constexpr operator  ::VYaml::Serialization::IYamlFormatter_1<T>*() noexcept;

/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context) ;

static inline ::VYaml::Serialization::EnumAsStringFormatter_1<T>* New_ctor() ;

/// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, T  value, ::VYaml::Serialization::YamlSerializationContext*  context) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,T>* getStaticF_NameValueMapping() ;

static inline ::System::Collections::Generic::Dictionary_2<T,::StringW>* getStaticF_ValueNameMapping() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* i___VYaml__Serialization__IYamlFormatter() noexcept;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<T>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<T>* i___VYaml__Serialization__IYamlFormatter_1_T_() noexcept;

static inline void setStaticF_NameValueMapping(::System::Collections::Generic::Dictionary_2<::StringW,T>*  value) ;

static inline void setStaticF_ValueNameMapping(::System::Collections::Generic::Dictionary_2<T,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumAsStringFormatter_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumAsStringFormatter_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumAsStringFormatter_1(EnumAsStringFormatter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumAsStringFormatter_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumAsStringFormatter_1(EnumAsStringFormatter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28935};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Serialization
// [CompilerGenerated]
// Dependencies System.Object
namespace VYaml::Serialization {
// cpp template
template<typename T>
// Is value type: false
// CS Name: VYaml.Serialization.EnumAsStringFormatter`1/<>c__DisplayClass2_0<T>
class CORDL_TYPE EnumAsStringFormatter_1___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Func_2<::System::Reflection::FieldInfo*,bool>*  __9__0;

/// @brief Field type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::System::Type*  type;

static inline ::VYaml::Serialization::EnumAsStringFormatter_1___c__DisplayClass2_0<T>* New_ctor() ;

/// [NullableContext(0)]
/// @brief Method <.cctor>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool __cctor_b__0(::System::Reflection::FieldInfo*  x) ;

constexpr ::System::Func_2<::System::Reflection::FieldInfo*,bool>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Func_2<::System::Reflection::FieldInfo*,bool>*& __cordl_internal_get___9__0() ;

constexpr ::System::Type* const& __cordl_internal_get_type() const;

constexpr ::System::Type*& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set___9__0(::System::Func_2<::System::Reflection::FieldInfo*,bool>*  value) ;

constexpr void __cordl_internal_set_type(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumAsStringFormatter_1___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumAsStringFormatter_1___c__DisplayClass2_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumAsStringFormatter_1___c__DisplayClass2_0(EnumAsStringFormatter_1___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumAsStringFormatter_1___c__DisplayClass2_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumAsStringFormatter_1___c__DisplayClass2_0(EnumAsStringFormatter_1___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28934};

/// [Nullable(0)]
/// @brief Field type, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___type;

/// [Nullable(0)]
/// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<::System::Reflection::FieldInfo*,bool>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Serialization
// [CompilerGenerated]
// Dependencies System.Object
namespace VYaml::Serialization {
// cpp template
template<typename T>
// Is value type: false
// CS Name: VYaml.Serialization.EnumAsStringFormatter`1/<>c<T>
class CORDL_TYPE EnumAsStringFormatter_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VYaml::Serialization::EnumAsStringFormatter_1___c<T>*  __9;

static inline ::VYaml::Serialization::EnumAsStringFormatter_1___c<T>* New_ctor() ;

/// [NullableContext(0)]
/// @brief Method <.cctor>b__2_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::System::Object*,::StringW> __cctor_b__2_1(::System::Object*  v, ::StringW  n) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VYaml::Serialization::EnumAsStringFormatter_1___c<T>* getStaticF___9() ;

static inline void setStaticF___9(::VYaml::Serialization::EnumAsStringFormatter_1___c<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumAsStringFormatter_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumAsStringFormatter_1___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumAsStringFormatter_1___c(EnumAsStringFormatter_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumAsStringFormatter_1___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumAsStringFormatter_1___c(EnumAsStringFormatter_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28933};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Serialization
