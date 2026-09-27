#pragma once
// IWYU pragma private; include "VYaml/Serialization/PrimitiveObjectFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrimitiveObjectFormatter)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace VYaml::Emitter {
struct Utf8YamlEmitter;
}
namespace VYaml::Parser {
struct YamlParser;
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
class PrimitiveObjectFormatter;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::PrimitiveObjectFormatter*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::PrimitiveObjectFormatter*, "VYaml.Serialization", "PrimitiveObjectFormatter");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.PrimitiveObjectFormatter
class CORDL_TYPE PrimitiveObjectFormatter : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::VYaml::Serialization::PrimitiveObjectFormatter*  Instance;

/// @brief Field TypeToJumpCode, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TypeToJumpCode, put=setStaticF_TypeToJumpCode)) ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  TypeToJumpCode;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter"
constexpr operator  ::VYaml::Serialization::IYamlFormatter*() noexcept;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatter_1<::System::Object*>"
constexpr operator  ::VYaml::Serialization::IYamlFormatter_1<::System::Object*>*() noexcept;

/// @brief Method Deserialize, addr 0xb953614, size 0x3c4, virtual true, abstract: false, final true
inline ::System::Object* Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlDeserializationContext*  context) ;

static inline ::VYaml::Serialization::PrimitiveObjectFormatter* New_ctor() ;

/// @brief Method Serialize, addr 0xb952974, size 0xca0, virtual true, abstract: false, final true
inline void Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(2)] */ ::System::Object*  value, ::VYaml::Serialization::YamlSerializationContext*  context) ;

/// @brief Method .ctor, addr 0xb9539e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VYaml::Serialization::PrimitiveObjectFormatter* getStaticF_Instance() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* getStaticF_TypeToJumpCode() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter"
constexpr ::VYaml::Serialization::IYamlFormatter* i___VYaml__Serialization__IYamlFormatter() noexcept;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatter_1<::System::Object*>"
constexpr ::VYaml::Serialization::IYamlFormatter_1<::System::Object*>* i___VYaml__Serialization__IYamlFormatter_1___System__Object__() noexcept;

static inline void setStaticF_Instance(::VYaml::Serialization::PrimitiveObjectFormatter*  value) ;

static inline void setStaticF_TypeToJumpCode(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrimitiveObjectFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrimitiveObjectFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PrimitiveObjectFormatter(PrimitiveObjectFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrimitiveObjectFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrimitiveObjectFormatter(PrimitiveObjectFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28959};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Serialization::PrimitiveObjectFormatter) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Serialization
