#pragma once
// IWYU pragma private; include "VYaml/Serialization/YamlFormatterResolverExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(YamlFormatterResolverExtensions)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
namespace VYaml::Serialization {
class IYamlFormatterResolver;
}
namespace VYaml::Serialization {
template<typename T>
class IYamlFormatter_1;
}
namespace VYaml::Serialization {
class IYamlFormatter;
}
// Forward declare root types
namespace VYaml::Serialization {
class YamlFormatterResolverExtensions;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::YamlFormatterResolverExtensions*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::YamlFormatterResolverExtensions*, "VYaml.Serialization", "YamlFormatterResolverExtensions");
// [NullableContext(1)]
// [Nullable(0)]
// [Extension]
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.YamlFormatterResolverExtensions
class CORDL_TYPE YamlFormatterResolverExtensions : public ::System::Object {
public:
// Declarations
/// @brief Field FormatterGetters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FormatterGetters, put=setStaticF_FormatterGetters)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_2<::VYaml::Serialization::IYamlFormatterResolver*,::VYaml::Serialization::IYamlFormatter*>*>*  FormatterGetters;

/// [Extension]
/// @brief Method GetFormatterWithVerify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::VYaml::Serialization::IYamlFormatter_1<T>* GetFormatterWithVerify(::VYaml::Serialization::IYamlFormatterResolver*  resolver) ;

/// @brief Method Throw, addr 0xb955580, size 0xa8, virtual false, abstract: false, final false
static inline void Throw(::System::Type*  t, ::VYaml::Serialization::IYamlFormatterResolver*  resolver) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_2<::VYaml::Serialization::IYamlFormatterResolver*,::VYaml::Serialization::IYamlFormatter*>*>* getStaticF_FormatterGetters() ;

static inline void setStaticF_FormatterGetters(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_2<::VYaml::Serialization::IYamlFormatterResolver*,::VYaml::Serialization::IYamlFormatter*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YamlFormatterResolverExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YamlFormatterResolverExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YamlFormatterResolverExtensions(YamlFormatterResolverExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YamlFormatterResolverExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YamlFormatterResolverExtensions(YamlFormatterResolverExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28992};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Serialization::YamlFormatterResolverExtensions) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Serialization
