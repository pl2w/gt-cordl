#pragma once
// IWYU pragma private; include "Meta/Conduit/ConduitUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConduitUtilities)
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::Conduit {
class ConduitUtilities;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::ConduitUtilities*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::ConduitUtilities*, "Meta.Conduit", "ConduitUtilities");
// [Extension]
// Dependencies System.Object
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.ConduitUtilities
class CORDL_TYPE ConduitUtilities : public ::System::Object {
public:
// Declarations
/// @brief Field UnderscoreSplitter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UnderscoreSplitter, put=setStaticF_UnderscoreSplitter)) ::System::Text::RegularExpressions::Regex*  UnderscoreSplitter;

/// @brief Method DelimitWithUnderscores, addr 0x9e1ea84, size 0x84, virtual false, abstract: false, final false
static inline ::StringW DelimitWithUnderscores(::StringW  input) ;

/// @brief Method GetTypedParameterValue, addr 0x9e1eb08, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Object* GetTypedParameterValue(::System::Reflection::ParameterInfo*  formalParameter, ::System::Object*  parameterValue) ;

/// @brief Method GetTypedParameterValue, addr 0x9e1eb84, size 0x3bc, virtual false, abstract: false, final false
static inline ::System::Object* GetTypedParameterValue(::System::Type*  parameterType, ::System::Object*  parameterValue) ;

/// [Extension]
/// @brief Method IsNullableType, addr 0x9e1d6ec, size 0xc0, virtual false, abstract: false, final false
static inline bool IsNullableType(::System::Type*  type) ;

/// @brief Method SanitizeString, addr 0x9e1ef40, size 0x154, virtual false, abstract: false, final false
static inline ::StringW SanitizeString(::StringW  input) ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_UnderscoreSplitter() ;

static inline void setStaticF_UnderscoreSplitter(::System::Text::RegularExpressions::Regex*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConduitUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConduitUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConduitUtilities(ConduitUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConduitUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConduitUtilities(ConduitUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25410};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Conduit::ConduitUtilities) == 0x10, "Size mismatch!");

} // namespace end def Meta::Conduit
