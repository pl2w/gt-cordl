#pragma once
// IWYU pragma private; include "GlobalNamespace/JsonUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JsonUtils)
// Forward declare root types
namespace GlobalNamespace {
class JsonUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::JsonUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JsonUtils*, "", "JsonUtils");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: JsonUtils
class CORDL_TYPE JsonUtils : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method FromJson, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FromJson(::StringW  s) ;

/// [Extension]
/// @brief Method JsonDeserializeEventData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T JsonDeserializeEventData(::StringW  s) ;

/// [Extension]
/// @brief Method JsonSerializeEventData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW JsonSerializeEventData(T  obj) ;

/// [Extension]
/// @brief Method ToJson, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW ToJson(T  obj, bool  indent) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonUtils(JsonUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonUtils(JsonUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3505};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::JsonUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
