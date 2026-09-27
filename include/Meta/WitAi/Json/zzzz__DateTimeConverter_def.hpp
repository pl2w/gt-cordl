#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/DateTimeConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(DateTimeConverter)
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
class DateTimeConverter;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Json::DateTimeConverter*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::DateTimeConverter*, "Meta.WitAi.Json", "DateTimeConverter");
// Dependencies Meta.WitAi.Json.JsonConverter
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.DateTimeConverter
class CORDL_TYPE DateTimeConverter : public ::Meta::WitAi::Json::JsonConverter {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

/// @brief Method CanConvert, addr 0x9e3fa4c, size 0x70, virtual true, abstract: false, final false
inline bool CanConvert(::System::Type*  objectType) ;

static inline ::Meta::WitAi::Json::DateTimeConverter* New_ctor() ;

/// @brief Method ReadJson, addr 0x9e3fabc, size 0xb0, virtual true, abstract: false, final false
inline ::System::Object* ReadJson(::Meta::WitAi::Json::WitResponseNode*  serializer, ::System::Type*  objectType, ::System::Object*  existingValue) ;

/// @brief Method WriteJson, addr 0x9e3fb6c, size 0x120, virtual true, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseNode* WriteJson(::System::Object*  existingValue) ;

/// @brief Method .ctor, addr 0x9e3fc8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanRead, addr 0x9e3fa3c, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanWrite, addr 0x9e3fa44, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DateTimeConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DateTimeConverter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DateTimeConverter(DateTimeConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeConverter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateTimeConverter(DateTimeConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31010};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Json::DateTimeConverter) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
