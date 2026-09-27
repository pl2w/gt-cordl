#pragma once
// IWYU pragma private; include "PlayFab/Json/JsonArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonArray)
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::Json {
class JsonArray;
}
// Write type traits
MARK_REF_T(::PlayFab::Json::JsonArray*);
DEFINE_IL2CPP_CLASS(::PlayFab::Json::JsonArray*, "PlayFab.Json", "JsonArray");
// [GeneratedCode("simple-json", "1.0.0")]
// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
// Dependencies System.Collections.Generic.List`1<T>
namespace PlayFab::Json {
// Is value type: false
// CS Name: PlayFab.Json.JsonArray
class CORDL_TYPE JsonArray : public ::System::Collections::Generic::List_1<::System::Object*> {
public:
// Declarations
static inline ::PlayFab::Json::JsonArray* New_ctor() ;

static inline ::PlayFab::Json::JsonArray* New_ctor(int32_t  capacity) ;

/// @brief Method ToString, addr 0xa7dfd48, size 0x74, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xa7dfc60, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa7dfccc, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonArray", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonArray(JsonArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonArray", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonArray(JsonArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19540};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::Json::JsonArray) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::Json
