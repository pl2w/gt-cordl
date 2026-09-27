#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/JsonPropertyInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Json/zzzz__BaseJsonVariableInfo_1_def.hpp"
CORDL_MODULE_EXPORT(JsonPropertyInfo)
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::WitAi::Json {
class JsonPropertyInfo;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Json::JsonPropertyInfo*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::JsonPropertyInfo*, "Meta.WitAi.Json", "JsonPropertyInfo");
// Dependencies Meta.WitAi.Json.BaseJsonVariableInfo`1<T>
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.JsonPropertyInfo
class CORDL_TYPE JsonPropertyInfo : public ::Meta::WitAi::Json::BaseJsonVariableInfo_1<::System::Reflection::PropertyInfo*> {
public:
// Declarations
/// @brief Method GetValue, addr 0x9e3fe5c, size 0x18, virtual true, abstract: false, final false
inline ::System::Object* GetValue(::System::Object*  obj) ;

/// @brief Method GetVariableType, addr 0x9e3fddc, size 0x20, virtual true, abstract: false, final false
inline ::System::Type* GetVariableType() ;

/// @brief Method HasGet, addr 0x9e3fdfc, size 0x30, virtual true, abstract: false, final false
inline bool HasGet() ;

/// @brief Method HasSet, addr 0x9e3fe74, size 0x30, virtual true, abstract: false, final false
inline bool HasSet() ;

/// @brief Method IsGetPublic, addr 0x9e3fe2c, size 0x30, virtual true, abstract: false, final false
inline bool IsGetPublic() ;

/// @brief Method IsSetPublic, addr 0x9e3fea4, size 0x30, virtual true, abstract: false, final false
inline bool IsSetPublic() ;

static inline ::Meta::WitAi::Json::JsonPropertyInfo* New_ctor(::System::Reflection::PropertyInfo*  info) ;

/// @brief Method SetValue, addr 0x9e3fed4, size 0x18, virtual true, abstract: false, final false
inline void SetValue(::System::Object*  obj, ::System::Object*  value) ;

/// @brief Method .ctor, addr 0x9e3fd84, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::Reflection::PropertyInfo*  info) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonPropertyInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonPropertyInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonPropertyInfo(JsonPropertyInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonPropertyInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonPropertyInfo(JsonPropertyInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31016};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Json::JsonPropertyInfo) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
