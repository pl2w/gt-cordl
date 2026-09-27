#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/StringExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringExtensions)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class StringExtensions;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::StringExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::StringExtensions*, "Unity.XR.CoreUtils", "StringExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.StringExtensions
class CORDL_TYPE StringExtensions : public ::System::Object {
public:
// Declarations
/// @brief Field k_StringBuilder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_StringBuilder, put=setStaticF_k_StringBuilder)) ::System::Text::StringBuilder*  k_StringBuilder;

/// [Extension]
/// @brief Method FirstToUpper, addr 0xb3f00fc, size 0x130, virtual false, abstract: false, final false
static inline ::StringW FirstToUpper(::StringW  str) ;

/// [Extension]
/// @brief Method InsertSpacesBetweenWords, addr 0xb3f022c, size 0x250, virtual false, abstract: false, final false
static inline ::StringW InsertSpacesBetweenWords(::StringW  str) ;

static inline ::System::Text::StringBuilder* getStaticF_k_StringBuilder() ;

static inline void setStaticF_k_StringBuilder(::System::Text::StringBuilder*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringExtensions(StringExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringExtensions(StringExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30400};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::StringExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
