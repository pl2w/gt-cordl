#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/IJsonVariableInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IJsonVariableInfo)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::WitAi::Json {
class IJsonVariableInfo;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Json::IJsonVariableInfo*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::IJsonVariableInfo*, "Meta.WitAi.Json", "IJsonVariableInfo");
// Dependencies 
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.IJsonVariableInfo
class CORDL_TYPE IJsonVariableInfo {
public:
// Declarations
/// @brief Method GetSerializeNames, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::StringW> GetSerializeNames() ;

/// @brief Method GetShouldDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetShouldDeserialize() ;

/// @brief Method GetShouldSerialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetShouldSerialize() ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* GetValue(::System::Object*  obj) ;

/// @brief Method GetVariableType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Type* GetVariableType() ;

/// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetValue(::System::Object*  obj, ::System::Object*  newValue) ;

// Ctor Parameters [CppParam { name: "", ty: "IJsonVariableInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IJsonVariableInfo(IJsonVariableInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31013};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Json
