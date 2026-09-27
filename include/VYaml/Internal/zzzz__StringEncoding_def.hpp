#pragma once
// IWYU pragma private; include "VYaml/Internal/StringEncoding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StringEncoding)
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace VYaml::Internal {
class StringEncoding;
}
// Write type traits
MARK_REF_T(::VYaml::Internal::StringEncoding*);
DEFINE_IL2CPP_CLASS(::VYaml::Internal::StringEncoding*, "VYaml.Internal", "StringEncoding");
// Dependencies System.Object
namespace VYaml::Internal {
// Is value type: false
// CS Name: VYaml.Internal.StringEncoding
class CORDL_TYPE StringEncoding : public ::System::Object {
public:
// Declarations
/// @brief Field Utf8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Utf8, put=setStaticF_Utf8)) ::System::Text::Encoding*  Utf8;

static inline ::System::Text::Encoding* getStaticF_Utf8() ;

static inline void setStaticF_Utf8(::System::Text::Encoding*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringEncoding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringEncoding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringEncoding(StringEncoding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringEncoding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringEncoding(StringEncoding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29037};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Internal::StringEncoding) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Internal
