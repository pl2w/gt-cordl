#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/DynamicMapHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicMapHandler)
namespace SouthPointe::Serialization::MessagePack {
class FormatReader;
}
namespace SouthPointe::Serialization::MessagePack {
class FormatWriter;
}
namespace SouthPointe::Serialization::MessagePack {
struct Format;
}
namespace SouthPointe::Serialization::MessagePack {
class IMapNamingStrategy;
}
namespace SouthPointe::Serialization::MessagePack {
class ITypeHandler;
}
namespace SouthPointe::Serialization::MessagePack {
template<typename T>
class Lazy_1;
}
namespace SouthPointe::Serialization::MessagePack {
class MapDefinition;
}
namespace SouthPointe::Serialization::MessagePack {
class SerializationContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class DynamicMapHandler;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::DynamicMapHandler*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::DynamicMapHandler*, "SouthPointe.Serialization.MessagePack", "DynamicMapHandler");
// Dependencies System.Attribute, System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.DynamicMapHandler
class CORDL_TYPE DynamicMapHandler : public ::System::Object {
public:
// Declarations
/// @brief Field callbackParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_callbackParameters, put=setStaticF_callbackParameters)) ::ArrayW<::System::Object*>  callbackParameters;

/// @brief Field context, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_context, put=__cordl_internal_set_context)) ::SouthPointe::Serialization::MessagePack::SerializationContext*  context;

/// @brief Field lazyDefinition, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lazyDefinition, put=__cordl_internal_set_lazyDefinition)) ::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>*  lazyDefinition;

/// @brief Field nameConverter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameConverter, put=__cordl_internal_set_nameConverter)) ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*  nameConverter;

/// @brief Field nameHandler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameHandler, put=__cordl_internal_set_nameHandler)) ::SouthPointe::Serialization::MessagePack::ITypeHandler*  nameHandler;

/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr operator  ::SouthPointe::Serialization::MessagePack::ITypeHandler*() noexcept;

/// @brief Method DetermineSize, addr 0x9d10b88, size 0x1d0, virtual false, abstract: false, final false
inline int32_t DetermineSize(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::MapDefinition*  definition) ;

/// @brief Method InvokeCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::Attribute*>)
inline void InvokeCallback(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::MapDefinition*  definition) ;

static inline ::SouthPointe::Serialization::MessagePack::DynamicMapHandler* New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>*  lazyDefinition) ;

/// @brief Method Read, addr 0x9d10274, size 0x4a4, virtual true, abstract: false, final true
inline ::System::Object* Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader) ;

/// @brief Method Write, addr 0x9d10718, size 0x470, virtual true, abstract: false, final true
inline void Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer) ;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& __cordl_internal_get_context() const;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& __cordl_internal_get_context() ;

constexpr ::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>* const& __cordl_internal_get_lazyDefinition() const;

constexpr ::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>*& __cordl_internal_get_lazyDefinition() ;

constexpr ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy* const& __cordl_internal_get_nameConverter() const;

constexpr ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*& __cordl_internal_get_nameConverter() ;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& __cordl_internal_get_nameHandler() const;

constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& __cordl_internal_get_nameHandler() ;

constexpr void __cordl_internal_set_context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value) ;

constexpr void __cordl_internal_set_lazyDefinition(::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>*  value) ;

constexpr void __cordl_internal_set_nameConverter(::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*  value) ;

constexpr void __cordl_internal_set_nameHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value) ;

/// @brief Method .ctor, addr 0x9d0c4d8, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>*  lazyDefinition) ;

static inline ::ArrayW<::System::Object*> getStaticF_callbackParameters() ;

/// @brief Convert to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* i___SouthPointe__Serialization__MessagePack__ITypeHandler() noexcept;

static inline void setStaticF_callbackParameters(::ArrayW<::System::Object*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicMapHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicMapHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicMapHandler(DynamicMapHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicMapHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicMapHandler(DynamicMapHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31772};

/// @brief Field context, offset: 0x10, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::SerializationContext*  ___context;

/// @brief Field lazyDefinition, offset: 0x18, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>*  ___lazyDefinition;

/// @brief Field nameHandler, offset: 0x20, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::ITypeHandler*  ___nameHandler;

/// @brief Field nameConverter, offset: 0x28, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*  ___nameConverter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DynamicMapHandler, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DynamicMapHandler, ___lazyDefinition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DynamicMapHandler, ___nameHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DynamicMapHandler, ___nameConverter) == 0x28, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::DynamicMapHandler) == 0x30, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
