#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/JsonFieldInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Json/zzzz__BaseJsonVariableInfo_1_def.hpp"
CORDL_MODULE_EXPORT(JsonFieldInfo)
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::WitAi::Json {
class JsonFieldInfo;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Json::JsonFieldInfo*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::JsonFieldInfo*, "Meta.WitAi.Json", "JsonFieldInfo");
// Dependencies Meta.WitAi.Json.BaseJsonVariableInfo`1<T>
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.JsonFieldInfo
class CORDL_TYPE JsonFieldInfo : public ::Meta::WitAi::Json::BaseJsonVariableInfo_1<::System::Reflection::FieldInfo*> {
public:
// Declarations
/// @brief Method GetValue, addr 0x9e3fd2c, size 0x20, virtual true, abstract: false, final false
inline ::System::Object* GetValue(::System::Object*  obj) ;

/// @brief Method GetVariableType, addr 0x9e3fcec, size 0x20, virtual true, abstract: false, final false
inline ::System::Type* GetVariableType() ;

/// @brief Method HasGet, addr 0x9e3fd0c, size 0x8, virtual true, abstract: false, final false
inline bool HasGet() ;

/// @brief Method HasSet, addr 0x9e3fd4c, size 0x8, virtual true, abstract: false, final false
inline bool HasSet() ;

/// @brief Method IsGetPublic, addr 0x9e3fd14, size 0x18, virtual true, abstract: false, final false
inline bool IsGetPublic() ;

/// @brief Method IsSetPublic, addr 0x9e3fd54, size 0x18, virtual true, abstract: false, final false
inline bool IsSetPublic() ;

static inline ::Meta::WitAi::Json::JsonFieldInfo* New_ctor(::System::Reflection::FieldInfo*  info) ;

/// @brief Method SetValue, addr 0x9e3fd6c, size 0x18, virtual true, abstract: false, final false
inline void SetValue(::System::Object*  obj, ::System::Object*  value) ;

/// @brief Method .ctor, addr 0x9e3fc94, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::Reflection::FieldInfo*  info) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonFieldInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonFieldInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonFieldInfo(JsonFieldInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonFieldInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonFieldInfo(JsonFieldInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31015};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Json::JsonFieldInfo) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
