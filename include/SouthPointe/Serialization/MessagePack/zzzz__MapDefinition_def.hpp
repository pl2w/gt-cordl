#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/MapDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MapDefinition)
namespace SouthPointe::Serialization::MessagePack {
class ITypeHandler;
}
namespace SouthPointe::Serialization::MessagePack {
class SerializationContext;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class MapDefinition;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::MapDefinition*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::MapDefinition*, "SouthPointe.Serialization.MessagePack", "MapDefinition");
// Dependencies System.Object, System.Type
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.MapDefinition
class CORDL_TYPE MapDefinition : public ::System::Object {
public:
// Declarations
/// @brief Field Callbacks, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Callbacks, put=__cordl_internal_set_Callbacks)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::System::Reflection::MethodInfo*>>*  Callbacks;

/// @brief Field FieldHandlers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_FieldHandlers, put=__cordl_internal_set_FieldHandlers)) ::System::Collections::Generic::Dictionary_2<::StringW,::SouthPointe::Serialization::MessagePack::ITypeHandler*>*  FieldHandlers;

/// @brief Field FieldInfos, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FieldInfos, put=__cordl_internal_set_FieldInfos)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::FieldInfo*>*  FieldInfos;

/// @brief Field Type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::System::Type*  Type;

/// @brief Field callbackTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_callbackTypes, put=setStaticF_callbackTypes)) ::ArrayW<::System::Type*>  callbackTypes;

/// @brief Field serializableUnityTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_serializableUnityTypes, put=setStaticF_serializableUnityTypes)) ::ArrayW<::System::Type*>  serializableUnityTypes;

/// @brief Method AttributesExist, addr 0x9d09f98, size 0x40, virtual false, abstract: false, final false
inline bool AttributesExist(::System::Reflection::MemberInfo*  info, ::System::Type*  attributeType) ;

/// @brief Method IsFieldSerializable, addr 0x9d09d6c, size 0x10c, virtual false, abstract: false, final false
inline bool IsFieldSerializable(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Reflection::FieldInfo*  info) ;

/// @brief Method IsSerializable, addr 0x9d09ca8, size 0xc4, virtual false, abstract: false, final false
inline bool IsSerializable(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Type*  type) ;

static inline ::SouthPointe::Serialization::MessagePack::MapDefinition* New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Type*  type) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::System::Reflection::MethodInfo*>>* const& __cordl_internal_get_Callbacks() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::System::Reflection::MethodInfo*>>*& __cordl_internal_get_Callbacks() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::SouthPointe::Serialization::MessagePack::ITypeHandler*>* const& __cordl_internal_get_FieldHandlers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::SouthPointe::Serialization::MessagePack::ITypeHandler*>*& __cordl_internal_get_FieldHandlers() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::FieldInfo*>* const& __cordl_internal_get_FieldInfos() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::FieldInfo*>*& __cordl_internal_get_FieldInfos() ;

constexpr ::System::Type* const& __cordl_internal_get_Type() const;

constexpr ::System::Type*& __cordl_internal_get_Type() ;

constexpr void __cordl_internal_set_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::System::Reflection::MethodInfo*>>*  value) ;

constexpr void __cordl_internal_set_FieldHandlers(::System::Collections::Generic::Dictionary_2<::StringW,::SouthPointe::Serialization::MessagePack::ITypeHandler*>*  value) ;

constexpr void __cordl_internal_set_FieldInfos(::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::FieldInfo*>*  value) ;

constexpr void __cordl_internal_set_Type(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x9d0965c, size 0x64c, virtual false, abstract: false, final false
inline void _ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Type*  type) ;

static inline ::ArrayW<::System::Type*> getStaticF_callbackTypes() ;

static inline ::ArrayW<::System::Type*> getStaticF_serializableUnityTypes() ;

static inline void setStaticF_callbackTypes(::ArrayW<::System::Type*>  value) ;

static inline void setStaticF_serializableUnityTypes(::ArrayW<::System::Type*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MapDefinition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MapDefinition", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MapDefinition(MapDefinition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MapDefinition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MapDefinition(MapDefinition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31740};

/// @brief Field Type, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___Type;

/// @brief Field FieldInfos, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::FieldInfo*>*  ___FieldInfos;

/// @brief Field FieldHandlers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::SouthPointe::Serialization::MessagePack::ITypeHandler*>*  ___FieldHandlers;

/// @brief Field Callbacks, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::System::Reflection::MethodInfo*>>*  ___Callbacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::MapDefinition, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::MapDefinition, ___FieldInfos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::MapDefinition, ___FieldHandlers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::MapDefinition, ___Callbacks) == 0x28, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::MapDefinition) == 0x30, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
