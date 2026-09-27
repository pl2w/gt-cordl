#pragma once
// IWYU pragma private; include "PlayFab/Json/JsonProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/Json/zzzz__NullValueHandling_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JsonProperty)
// Forward declare root types
namespace PlayFab::Json {
class JsonProperty;
}
// Write type traits
MARK_REF_T(::PlayFab::Json::JsonProperty*);
DEFINE_IL2CPP_CLASS(::PlayFab::Json::JsonProperty*, "PlayFab.Json", "JsonProperty");
// [AttributeUsage((System.AttributeTargets)384)]
// Dependencies PlayFab.Json.NullValueHandling, System.Attribute
namespace PlayFab::Json {
// Is value type: false
// CS Name: PlayFab.Json.JsonProperty
class CORDL_TYPE JsonProperty : public ::System::Attribute {
public:
// Declarations
/// @brief Field NullValueHandling, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_NullValueHandling, put=__cordl_internal_set_NullValueHandling)) ::PlayFab::Json::NullValueHandling  NullValueHandling;

/// @brief Field PropertyName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PropertyName, put=__cordl_internal_set_PropertyName)) ::StringW  PropertyName;

static inline ::PlayFab::Json::JsonProperty* New_ctor() ;

constexpr ::PlayFab::Json::NullValueHandling const& __cordl_internal_get_NullValueHandling() const;

constexpr ::PlayFab::Json::NullValueHandling& __cordl_internal_get_NullValueHandling() ;

constexpr ::StringW const& __cordl_internal_get_PropertyName() const;

constexpr ::StringW& __cordl_internal_get_PropertyName() ;

constexpr void __cordl_internal_set_NullValueHandling(::PlayFab::Json::NullValueHandling  value) ;

constexpr void __cordl_internal_set_PropertyName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa7dfc58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonProperty(JsonProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonProperty(JsonProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19539};

/// @brief Field PropertyName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___PropertyName;

/// @brief Field NullValueHandling, offset: 0x18, size: 0x4, def value: None
 ::PlayFab::Json::NullValueHandling  ___NullValueHandling;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Json::JsonProperty, ___PropertyName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Json::JsonProperty, ___NullValueHandling) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Json::JsonProperty) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::Json
