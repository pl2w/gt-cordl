#pragma once
// IWYU pragma private; include "Fusion/JsonUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JsonUtils)
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace Fusion {
class JsonUtils;
}
// Write type traits
MARK_REF_T(::Fusion::JsonUtils*);
DEFINE_IL2CPP_CLASS(::Fusion::JsonUtils*, "Fusion", "JsonUtils");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.JsonUtils
class CORDL_TYPE JsonUtils : public ::System::Object {
public:
// Declarations
/// @brief Field ReferencesRegex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReferencesRegex, put=setStaticF_ReferencesRegex)) ::System::Text::RegularExpressions::Regex*  ReferencesRegex;

/// @brief Method RemoveExtraReferences, addr 0x5f3e6dc, size 0x130, virtual false, abstract: false, final false
static inline ::StringW RemoveExtraReferences(::StringW  baseJson) ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_ReferencesRegex() ;

static inline void setStaticF_ReferencesRegex(::System::Text::RegularExpressions::Regex*  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31303};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::JsonUtils) == 0x10, "Size mismatch!");

} // namespace end def Fusion
