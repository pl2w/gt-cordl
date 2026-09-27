#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipStrings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipStrings)
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class ZipStrings;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipStrings*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipStrings*, "ICSharpCode.SharpZipLib.Zip", "ZipStrings");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipStrings
class CORDL_TYPE ZipStrings : public ::System::Object {
public:
// Declarations
/// @brief Field <SystemDefaultCodePage>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SystemDefaultCodePage_k__BackingField, put=setStaticF__SystemDefaultCodePage_k__BackingField)) int32_t  _SystemDefaultCodePage_k__BackingField;

/// @brief Field codePage, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_codePage, put=setStaticF_codePage)) int32_t  codePage;

/// @brief Method ConvertToArray, addr 0x9fcfe38, size 0xa8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ConvertToArray(int32_t  flags, ::StringW  str) ;

/// @brief Method ConvertToArray, addr 0x9fccdb8, size 0x9c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ConvertToArray(::StringW  str) ;

/// @brief Method ConvertToString, addr 0x9fd1a90, size 0x60, virtual false, abstract: false, final false
static inline ::StringW ConvertToString(::ArrayW<uint8_t>  data) ;

/// @brief Method ConvertToString, addr 0x9fd19ec, size 0xa4, virtual false, abstract: false, final false
static inline ::StringW ConvertToString(::ArrayW<uint8_t>  data, int32_t  count) ;

/// @brief Method ConvertToStringExt, addr 0x9fcc22c, size 0x68, virtual false, abstract: false, final false
static inline ::StringW ConvertToStringExt(int32_t  flags, ::ArrayW<uint8_t>  data) ;

/// @brief Method ConvertToStringExt, addr 0x9fd1bcc, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW ConvertToStringExt(int32_t  flags, ::ArrayW<uint8_t>  data, int32_t  count) ;

/// @brief Method EncodingFromFlag, addr 0x9fd1af0, size 0xdc, virtual false, abstract: false, final false
static inline ::System::Text::Encoding* EncodingFromFlag(int32_t  flags) ;

static inline int32_t getStaticF__SystemDefaultCodePage_k__BackingField() ;

static inline int32_t getStaticF_codePage() ;

/// @brief Method get_CodePage, addr 0x9fd16c0, size 0xa4, virtual false, abstract: false, final false
static inline int32_t get_CodePage() ;

/// [CompilerGenerated]
/// @brief Method get_SystemDefaultCodePage, addr 0x9fd1838, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_SystemDefaultCodePage() ;

/// @brief Method get_UseUnicode, addr 0x9fd1890, size 0x80, virtual false, abstract: false, final false
static inline bool get_UseUnicode() ;

static inline void setStaticF__SystemDefaultCodePage_k__BackingField(int32_t  value) ;

static inline void setStaticF_codePage(int32_t  value) ;

/// @brief Method set_CodePage, addr 0x9fd1764, size 0xd4, virtual false, abstract: false, final false
static inline void set_CodePage(int32_t  value) ;

/// @brief Method set_UseUnicode, addr 0x9fd1910, size 0xdc, virtual false, abstract: false, final false
static inline void set_UseUnicode(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipStrings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipStrings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipStrings(ZipStrings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipStrings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipStrings(ZipStrings const& ) = delete;

/// @brief Field AutomaticCodePage offset 0xffffffff size 0x4
static constexpr int32_t  AutomaticCodePage{static_cast<int32_t>(0xffffffff)};

/// @brief Field FallbackCodePage offset 0xffffffff size 0x4
static constexpr int32_t  FallbackCodePage{static_cast<int32_t>(0x1b5)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17369};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipStrings) == 0x10, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
