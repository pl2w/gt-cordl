#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/HashSetConverter_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(HashSetConverter_1)
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
template<typename T>
class HashSetConverter_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::WitAi::Json::HashSetConverter_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::Json::HashSetConverter_1, "Meta.WitAi.Json", "HashSetConverter`1");
// Dependencies Meta.WitAi.Json.JsonConverter
namespace Meta::WitAi::Json {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Meta.WitAi.Json.HashSetConverter`1<T>
class CORDL_TYPE HashSetConverter_1 : public ::Meta::WitAi::Json::JsonConverter {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

/// @brief Method CanConvert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool CanConvert(::System::Type*  objectType) ;

static inline ::Meta::WitAi::Json::HashSetConverter_1<T>* New_ctor() ;

/// @brief Method ReadJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* ReadJson(::Meta::WitAi::Json::WitResponseNode*  serializer, ::System::Type*  objectType, ::System::Object*  existingValue) ;

/// @brief Method WriteJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseNode* WriteJson(::System::Object*  existingValue) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanRead, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HashSetConverter_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HashSetConverter_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HashSetConverter_1(HashSetConverter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashSetConverter_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashSetConverter_1(HashSetConverter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31011};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Json
