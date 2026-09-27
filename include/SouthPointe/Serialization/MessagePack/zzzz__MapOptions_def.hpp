#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/MapOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MapOptions)
namespace SouthPointe::Serialization::MessagePack {
class IMapNamingStrategy;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class MapOptions;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::MapOptions*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::MapOptions*, "SouthPointe.Serialization.MessagePack", "MapOptions");
// Dependencies System.Object, System.Reflection.BindingFlags
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.MapOptions
class CORDL_TYPE MapOptions : public ::System::Object {
public:
// Declarations
/// @brief Field AllowEmptyArrayOnUnpack, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowEmptyArrayOnUnpack, put=__cordl_internal_set_AllowEmptyArrayOnUnpack)) bool  AllowEmptyArrayOnUnpack;

/// @brief Field FieldFlags, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_FieldFlags, put=__cordl_internal_set_FieldFlags)) ::System::Reflection::BindingFlags  FieldFlags;

/// @brief Field IgnoreAutoPropertyValues, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_IgnoreAutoPropertyValues, put=__cordl_internal_set_IgnoreAutoPropertyValues)) bool  IgnoreAutoPropertyValues;

/// @brief Field IgnoreNullOnPack, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_IgnoreNullOnPack, put=__cordl_internal_set_IgnoreNullOnPack)) bool  IgnoreNullOnPack;

/// @brief Field IgnoreUnknownFieldOnUnpack, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_IgnoreUnknownFieldOnUnpack, put=__cordl_internal_set_IgnoreUnknownFieldOnUnpack)) bool  IgnoreUnknownFieldOnUnpack;

/// @brief Field NamingStrategy, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_NamingStrategy, put=__cordl_internal_set_NamingStrategy)) ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*  NamingStrategy;

/// @brief Field RequireSerializableAttribute, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_RequireSerializableAttribute, put=__cordl_internal_set_RequireSerializableAttribute)) bool  RequireSerializableAttribute;

static inline ::SouthPointe::Serialization::MessagePack::MapOptions* New_ctor() ;

constexpr bool const& __cordl_internal_get_AllowEmptyArrayOnUnpack() const;

constexpr bool& __cordl_internal_get_AllowEmptyArrayOnUnpack() ;

constexpr ::System::Reflection::BindingFlags const& __cordl_internal_get_FieldFlags() const;

constexpr ::System::Reflection::BindingFlags& __cordl_internal_get_FieldFlags() ;

constexpr bool const& __cordl_internal_get_IgnoreAutoPropertyValues() const;

constexpr bool& __cordl_internal_get_IgnoreAutoPropertyValues() ;

constexpr bool const& __cordl_internal_get_IgnoreNullOnPack() const;

constexpr bool& __cordl_internal_get_IgnoreNullOnPack() ;

constexpr bool const& __cordl_internal_get_IgnoreUnknownFieldOnUnpack() const;

constexpr bool& __cordl_internal_get_IgnoreUnknownFieldOnUnpack() ;

constexpr ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy* const& __cordl_internal_get_NamingStrategy() const;

constexpr ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*& __cordl_internal_get_NamingStrategy() ;

constexpr bool const& __cordl_internal_get_RequireSerializableAttribute() const;

constexpr bool& __cordl_internal_get_RequireSerializableAttribute() ;

constexpr void __cordl_internal_set_AllowEmptyArrayOnUnpack(bool  value) ;

constexpr void __cordl_internal_set_FieldFlags(::System::Reflection::BindingFlags  value) ;

constexpr void __cordl_internal_set_IgnoreAutoPropertyValues(bool  value) ;

constexpr void __cordl_internal_set_IgnoreNullOnPack(bool  value) ;

constexpr void __cordl_internal_set_IgnoreUnknownFieldOnUnpack(bool  value) ;

constexpr void __cordl_internal_set_NamingStrategy(::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*  value) ;

constexpr void __cordl_internal_set_RequireSerializableAttribute(bool  value) ;

/// @brief Method .ctor, addr 0x9d0aaf4, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MapOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MapOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MapOptions(MapOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MapOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MapOptions(MapOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31749};

/// @brief Field RequireSerializableAttribute, offset: 0x10, size: 0x1, def value: None
 bool  ___RequireSerializableAttribute;

/// @brief Field IgnoreAutoPropertyValues, offset: 0x11, size: 0x1, def value: None
 bool  ___IgnoreAutoPropertyValues;

/// @brief Field IgnoreNullOnPack, offset: 0x12, size: 0x1, def value: None
 bool  ___IgnoreNullOnPack;

/// @brief Field IgnoreUnknownFieldOnUnpack, offset: 0x13, size: 0x1, def value: None
 bool  ___IgnoreUnknownFieldOnUnpack;

/// @brief Field AllowEmptyArrayOnUnpack, offset: 0x14, size: 0x1, def value: None
 bool  ___AllowEmptyArrayOnUnpack;

/// @brief Field NamingStrategy, offset: 0x18, size: 0x8, def value: None
 ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*  ___NamingStrategy;

/// @brief Field FieldFlags, offset: 0x20, size: 0x4, def value: None
 ::System::Reflection::BindingFlags  ___FieldFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::MapOptions, ___RequireSerializableAttribute) == 0x10, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::MapOptions, ___IgnoreAutoPropertyValues) == 0x11, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::MapOptions, ___IgnoreNullOnPack) == 0x12, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::MapOptions, ___IgnoreUnknownFieldOnUnpack) == 0x13, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::MapOptions, ___AllowEmptyArrayOnUnpack) == 0x14, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::MapOptions, ___NamingStrategy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::MapOptions, ___FieldFlags) == 0x20, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::MapOptions) == 0x28, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
