#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/JsonConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JsonConverter)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::WitAi::Json {
class JsonConverter;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Json::JsonConverter*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::JsonConverter*, "Meta.WitAi.Json", "JsonConverter");
// Dependencies System.Object
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.JsonConverter
class CORDL_TYPE JsonConverter : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

/// @brief Field <CanRead>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__CanRead_k__BackingField, put=__cordl_internal_set__CanRead_k__BackingField)) bool  _CanRead_k__BackingField;

/// @brief Field <CanWrite>k__BackingField, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__CanWrite_k__BackingField, put=__cordl_internal_set__CanWrite_k__BackingField)) bool  _CanWrite_k__BackingField;

/// @brief Method CanConvert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CanConvert(::System::Type*  objectType) ;

static inline ::Meta::WitAi::Json::JsonConverter* New_ctor() ;

/// @brief Method ReadJson, addr 0x9e442a4, size 0x8, virtual true, abstract: false, final false
inline ::System::Object* ReadJson(::Meta::WitAi::Json::WitResponseNode*  serializer, ::System::Type*  objectType, ::System::Object*  existingValue) ;

/// @brief Method WriteJson, addr 0x9e442ac, size 0x8, virtual true, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseNode* WriteJson(::System::Object*  existingValue) ;

constexpr bool const& __cordl_internal_get__CanRead_k__BackingField() const;

constexpr bool& __cordl_internal_get__CanRead_k__BackingField() ;

constexpr bool const& __cordl_internal_get__CanWrite_k__BackingField() const;

constexpr bool& __cordl_internal_get__CanWrite_k__BackingField() ;

constexpr void __cordl_internal_set__CanRead_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__CanWrite_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x9e3fa34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CanRead, addr 0x9e44294, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// [CompilerGenerated]
/// @brief Method get_CanWrite, addr 0x9e4429c, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonConverter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonConverter(JsonConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonConverter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonConverter(JsonConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31021};

/// [CompilerGenerated]
/// @brief Field <CanRead>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____CanRead_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CanWrite>k__BackingField, offset: 0x11, size: 0x1, def value: None
 bool  ____CanWrite_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Json::JsonConverter, ____CanRead_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::JsonConverter, ____CanWrite_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Json::JsonConverter) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
