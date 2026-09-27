#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/TypeHandlers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeHandlers)
namespace SouthPointe::Serialization::MessagePack {
class IExtTypeHandler;
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
namespace SouthPointe::Serialization::MessagePack {
class TypeHandlers___c__DisplayClass11_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class TypeHandlers;
}
namespace SouthPointe::Serialization::MessagePack {
class TypeHandlers___c__DisplayClass11_0;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::TypeHandlers*);
MARK_REF_T(::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::TypeHandlers*, "SouthPointe.Serialization.MessagePack", "TypeHandlers");
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0*, "SouthPointe.Serialization.MessagePack", "TypeHandlers/<>c__DisplayClass11_0");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.TypeHandlers
class CORDL_TYPE TypeHandlers : public ::System::Object {
public:
// Declarations
using __c__DisplayClass11_0 = ::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0;

/// @brief Field context, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_context, put=__cordl_internal_set_context)) ::SouthPointe::Serialization::MessagePack::SerializationContext*  context;

/// @brief Field extHandlers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_extHandlers, put=__cordl_internal_set_extHandlers)) ::System::Collections::Generic::Dictionary_2<int8_t,::SouthPointe::Serialization::MessagePack::IExtTypeHandler*>*  extHandlers;

/// @brief Field handlers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_handlers, put=__cordl_internal_set_handlers)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::SouthPointe::Serialization::MessagePack::ITypeHandler*>*  handlers;

/// @brief Field mapDefinitions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapDefinitions, put=__cordl_internal_set_mapDefinitions)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::SouthPointe::Serialization::MessagePack::MapDefinition*>*  mapDefinitions;

/// @brief Method AddIfNotExist, addr 0x9d0bd78, size 0x334, virtual false, abstract: false, final false
inline void AddIfNotExist(::System::Type*  type) ;

/// @brief Method AddIfNotExist, addr 0x9d0c0f0, size 0xa4, virtual false, abstract: false, final false
inline void AddIfNotExist(::System::Type*  type, ::SouthPointe::Serialization::MessagePack::ITypeHandler*  handler) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::SouthPointe::Serialization::MessagePack::ITypeHandler* Get() ;

/// @brief Method Get, addr 0x9d09e78, size 0x120, virtual false, abstract: false, final false
inline ::SouthPointe::Serialization::MessagePack::ITypeHandler* Get(::System::Type*  type) ;

/// @brief Method GetExt, addr 0x9d0954c, size 0x110, virtual false, abstract: false, final false
inline ::SouthPointe::Serialization::MessagePack::IExtTypeHandler* GetExt(int8_t  extType) ;

/// @brief Method GetLazyMapDefinition, addr 0x9d0c3c0, size 0x118, virtual false, abstract: false, final false
inline ::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>* GetLazyMapDefinition(::System::Type*  type) ;

static inline ::SouthPointe::Serialization::MessagePack::TypeHandlers* New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context) ;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& __cordl_internal_get_context() const;

constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& __cordl_internal_get_context() ;

constexpr ::System::Collections::Generic::Dictionary_2<int8_t,::SouthPointe::Serialization::MessagePack::IExtTypeHandler*>* const& __cordl_internal_get_extHandlers() const;

constexpr ::System::Collections::Generic::Dictionary_2<int8_t,::SouthPointe::Serialization::MessagePack::IExtTypeHandler*>*& __cordl_internal_get_extHandlers() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::SouthPointe::Serialization::MessagePack::ITypeHandler*>* const& __cordl_internal_get_handlers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::SouthPointe::Serialization::MessagePack::ITypeHandler*>*& __cordl_internal_get_handlers() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::SouthPointe::Serialization::MessagePack::MapDefinition*>* const& __cordl_internal_get_mapDefinitions() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::SouthPointe::Serialization::MessagePack::MapDefinition*>*& __cordl_internal_get_mapDefinitions() ;

constexpr void __cordl_internal_set_context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value) ;

constexpr void __cordl_internal_set_extHandlers(::System::Collections::Generic::Dictionary_2<int8_t,::SouthPointe::Serialization::MessagePack::IExtTypeHandler*>*  value) ;

constexpr void __cordl_internal_set_handlers(::System::Collections::Generic::Dictionary_2<::System::Type*,::SouthPointe::Serialization::MessagePack::ITypeHandler*>*  value) ;

constexpr void __cordl_internal_set_mapDefinitions(::System::Collections::Generic::Dictionary_2<::System::Type*,::SouthPointe::Serialization::MessagePack::MapDefinition*>*  value) ;

/// @brief Method .ctor, addr 0x9d0ad28, size 0xcc0, virtual false, abstract: false, final false
inline void _ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeHandlers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeHandlers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeHandlers(TypeHandlers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeHandlers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeHandlers(TypeHandlers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31758};

/// @brief Field context, offset: 0x10, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::SerializationContext*  ___context;

/// @brief Field handlers, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::SouthPointe::Serialization::MessagePack::ITypeHandler*>*  ___handlers;

/// @brief Field extHandlers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int8_t,::SouthPointe::Serialization::MessagePack::IExtTypeHandler*>*  ___extHandlers;

/// @brief Field mapDefinitions, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::SouthPointe::Serialization::MessagePack::MapDefinition*>*  ___mapDefinitions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::TypeHandlers, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::TypeHandlers, ___handlers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::TypeHandlers, ___extHandlers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::TypeHandlers, ___mapDefinitions) == 0x28, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::TypeHandlers) == 0x30, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
// [CompilerGenerated]
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.TypeHandlers/<>c__DisplayClass11_0
class CORDL_TYPE TypeHandlers___c__DisplayClass11_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::SouthPointe::Serialization::MessagePack::TypeHandlers*  __4__this;

/// @brief Field type, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::System::Type*  type;

static inline ::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0* New_ctor() ;

/// @brief Method <GetLazyMapDefinition>b__0, addr 0x9d0c598, size 0x104, virtual false, abstract: false, final false
inline ::SouthPointe::Serialization::MessagePack::MapDefinition* _GetLazyMapDefinition_b__0() ;

constexpr ::SouthPointe::Serialization::MessagePack::TypeHandlers* const& __cordl_internal_get___4__this() const;

constexpr ::SouthPointe::Serialization::MessagePack::TypeHandlers*& __cordl_internal_get___4__this() ;

constexpr ::System::Type* const& __cordl_internal_get_type() const;

constexpr ::System::Type*& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set___4__this(::SouthPointe::Serialization::MessagePack::TypeHandlers*  value) ;

constexpr void __cordl_internal_set_type(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x9d0c590, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeHandlers___c__DisplayClass11_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeHandlers___c__DisplayClass11_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeHandlers___c__DisplayClass11_0(TypeHandlers___c__DisplayClass11_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeHandlers___c__DisplayClass11_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeHandlers___c__DisplayClass11_0(TypeHandlers___c__DisplayClass11_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31757};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::TypeHandlers*  _____4__this;

/// @brief Field type, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ___type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0, ___type) == 0x18, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0) == 0x20, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
