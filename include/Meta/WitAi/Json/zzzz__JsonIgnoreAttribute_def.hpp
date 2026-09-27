#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/JsonIgnoreAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(JsonIgnoreAttribute)
// Forward declare root types
namespace Meta::WitAi::Json {
class JsonIgnoreAttribute;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Json::JsonIgnoreAttribute*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::JsonIgnoreAttribute*, "Meta.WitAi.Json", "JsonIgnoreAttribute");
// [AttributeUsage((System.AttributeTargets)384, AllowMultiple = false)]
// Dependencies System.Attribute
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.JsonIgnoreAttribute
class CORDL_TYPE JsonIgnoreAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Meta::WitAi::Json::JsonIgnoreAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x9e442b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonIgnoreAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonIgnoreAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonIgnoreAttribute(JsonIgnoreAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonIgnoreAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonIgnoreAttribute(JsonIgnoreAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31022};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Json::JsonIgnoreAttribute) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
