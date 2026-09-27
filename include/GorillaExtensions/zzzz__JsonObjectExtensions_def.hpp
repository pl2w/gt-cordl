#pragma once
// IWYU pragma private; include "GorillaExtensions/JsonObjectExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JsonObjectExtensions)
namespace PlayFab::Json {
class JsonObject;
}
// Forward declare root types
namespace GorillaExtensions {
class JsonObjectExtensions;
}
// Write type traits
MARK_REF_T(::GorillaExtensions::JsonObjectExtensions*);
DEFINE_IL2CPP_CLASS(::GorillaExtensions::JsonObjectExtensions*, "GorillaExtensions", "JsonObjectExtensions");
// [NullableContext(1)]
// [Nullable(0)]
// [Extension]
// Dependencies System.Object
namespace GorillaExtensions {
// Is value type: false
// CS Name: GorillaExtensions.JsonObjectExtensions
class CORDL_TYPE JsonObjectExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetValue(::PlayFab::Json::JsonObject*  obj, ::StringW  key) ;

/// [Extension]
/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool TryGetValue(::PlayFab::Json::JsonObject*  obj, ::StringW  key, /* [Nullable(2)] */ ::by_ref<T>  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonObjectExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonObjectExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonObjectExtensions(JsonObjectExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonObjectExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonObjectExtensions(JsonObjectExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4560};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaExtensions::JsonObjectExtensions) == 0x10, "Size mismatch!");

} // namespace end def GorillaExtensions
