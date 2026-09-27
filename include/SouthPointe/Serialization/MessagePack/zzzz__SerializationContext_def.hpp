#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/SerializationContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializationContext)
namespace SouthPointe::Serialization::MessagePack {
class ArrayOptions;
}
namespace SouthPointe::Serialization::MessagePack {
class DateTimeOptions;
}
namespace SouthPointe::Serialization::MessagePack {
class EnumOptions;
}
namespace SouthPointe::Serialization::MessagePack {
class JsonOptions;
}
namespace SouthPointe::Serialization::MessagePack {
class MapOptions;
}
namespace SouthPointe::Serialization::MessagePack {
class TypeHandlers;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class SerializationContext;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::SerializationContext*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::SerializationContext*, "SouthPointe.Serialization.MessagePack", "SerializationContext");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.SerializationContext
class CORDL_TYPE SerializationContext : public ::System::Object {
public:
// Declarations
/// @brief Field ArrayOptions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ArrayOptions, put=__cordl_internal_set_ArrayOptions)) ::SouthPointe::Serialization::MessagePack::ArrayOptions*  ArrayOptions;

/// @brief Field DateTimeOptions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DateTimeOptions, put=__cordl_internal_set_DateTimeOptions)) ::SouthPointe::Serialization::MessagePack::DateTimeOptions*  DateTimeOptions;

/// @brief Field EnumOptions, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_EnumOptions, put=__cordl_internal_set_EnumOptions)) ::SouthPointe::Serialization::MessagePack::EnumOptions*  EnumOptions;

/// @brief Field JsonOptions, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_JsonOptions, put=__cordl_internal_set_JsonOptions)) ::SouthPointe::Serialization::MessagePack::JsonOptions*  JsonOptions;

/// @brief Field MapOptions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MapOptions, put=__cordl_internal_set_MapOptions)) ::SouthPointe::Serialization::MessagePack::MapOptions*  MapOptions;

/// @brief Field TypeHandlers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_TypeHandlers, put=__cordl_internal_set_TypeHandlers)) ::SouthPointe::Serialization::MessagePack::TypeHandlers*  TypeHandlers;

/// @brief Field defaultContext, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_defaultContext, put=setStaticF_defaultContext)) ::SouthPointe::Serialization::MessagePack::SerializationContext*  defaultContext;

static inline ::SouthPointe::Serialization::MessagePack::SerializationContext* New_ctor() ;

constexpr ::SouthPointe::Serialization::MessagePack::ArrayOptions* const& __cordl_internal_get_ArrayOptions() const;

constexpr ::SouthPointe::Serialization::MessagePack::ArrayOptions*& __cordl_internal_get_ArrayOptions() ;

constexpr ::SouthPointe::Serialization::MessagePack::DateTimeOptions* const& __cordl_internal_get_DateTimeOptions() const;

constexpr ::SouthPointe::Serialization::MessagePack::DateTimeOptions*& __cordl_internal_get_DateTimeOptions() ;

constexpr ::SouthPointe::Serialization::MessagePack::EnumOptions* const& __cordl_internal_get_EnumOptions() const;

constexpr ::SouthPointe::Serialization::MessagePack::EnumOptions*& __cordl_internal_get_EnumOptions() ;

constexpr ::SouthPointe::Serialization::MessagePack::JsonOptions* const& __cordl_internal_get_JsonOptions() const;

constexpr ::SouthPointe::Serialization::MessagePack::JsonOptions*& __cordl_internal_get_JsonOptions() ;

constexpr ::SouthPointe::Serialization::MessagePack::MapOptions* const& __cordl_internal_get_MapOptions() const;

constexpr ::SouthPointe::Serialization::MessagePack::MapOptions*& __cordl_internal_get_MapOptions() ;

constexpr ::SouthPointe::Serialization::MessagePack::TypeHandlers* const& __cordl_internal_get_TypeHandlers() const;

constexpr ::SouthPointe::Serialization::MessagePack::TypeHandlers*& __cordl_internal_get_TypeHandlers() ;

constexpr void __cordl_internal_set_ArrayOptions(::SouthPointe::Serialization::MessagePack::ArrayOptions*  value) ;

constexpr void __cordl_internal_set_DateTimeOptions(::SouthPointe::Serialization::MessagePack::DateTimeOptions*  value) ;

constexpr void __cordl_internal_set_EnumOptions(::SouthPointe::Serialization::MessagePack::EnumOptions*  value) ;

constexpr void __cordl_internal_set_JsonOptions(::SouthPointe::Serialization::MessagePack::JsonOptions*  value) ;

constexpr void __cordl_internal_set_MapOptions(::SouthPointe::Serialization::MessagePack::MapOptions*  value) ;

constexpr void __cordl_internal_set_TypeHandlers(::SouthPointe::Serialization::MessagePack::TypeHandlers*  value) ;

/// @brief Method .ctor, addr 0x9d0ab8c, size 0x19c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::SouthPointe::Serialization::MessagePack::SerializationContext* getStaticF_defaultContext() ;

/// @brief Method get_Default, addr 0x9d08dc8, size 0x78, virtual false, abstract: false, final false
static inline ::SouthPointe::Serialization::MessagePack::SerializationContext* get_Default() ;

static inline void setStaticF_defaultContext(::SouthPointe::Serialization::MessagePack::SerializationContext*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializationContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializationContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializationContext(SerializationContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializationContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializationContext(SerializationContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31751};

/// @brief Field DateTimeOptions, offset: 0x10, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::DateTimeOptions*  ___DateTimeOptions;

/// @brief Field EnumOptions, offset: 0x18, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::EnumOptions*  ___EnumOptions;

/// @brief Field ArrayOptions, offset: 0x20, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::ArrayOptions*  ___ArrayOptions;

/// @brief Field MapOptions, offset: 0x28, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::MapOptions*  ___MapOptions;

/// @brief Field JsonOptions, offset: 0x30, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::JsonOptions*  ___JsonOptions;

/// @brief Field TypeHandlers, offset: 0x38, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::TypeHandlers*  ___TypeHandlers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::SerializationContext, ___DateTimeOptions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::SerializationContext, ___EnumOptions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::SerializationContext, ___ArrayOptions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::SerializationContext, ___MapOptions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::SerializationContext, ___JsonOptions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::SerializationContext, ___TypeHandlers) == 0x38, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::SerializationContext) == 0x40, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
