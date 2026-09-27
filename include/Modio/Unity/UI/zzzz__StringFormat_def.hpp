#pragma once
// IWYU pragma private; include "Modio/Unity/UI/StringFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringFormat)
namespace Modio::Unity::UI {
struct StringFormatBytes;
}
namespace Modio::Unity::UI {
struct StringFormatKilo;
}
// Forward declare root types
namespace Modio::Unity::UI {
class StringFormat;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::StringFormat*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::StringFormat*, "Modio.Unity.UI", "StringFormat");
// Dependencies System.Object
namespace Modio::Unity::UI {
// Is value type: false
// CS Name: Modio.Unity.UI.StringFormat
class CORDL_TYPE StringFormat : public ::System::Object {
public:
// Declarations
/// @brief Field BytesSuffixes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BytesSuffixes, put=setStaticF_BytesSuffixes)) ::ArrayW<::StringW>  BytesSuffixes;

/// @brief Field BytesSuffixesLoc, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BytesSuffixesLoc, put=setStaticF_BytesSuffixesLoc)) ::ArrayW<::StringW>  BytesSuffixesLoc;

/// @brief Method Bytes, addr 0x9f9dd14, size 0x1c8, virtual false, abstract: false, final false
static inline ::StringW Bytes(::Modio::Unity::UI::StringFormatBytes  format, int64_t  bytes, ::StringW  custom, bool  reducePrecision) ;

/// @brief Method BytesComma, addr 0x9f9dedc, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW BytesComma(int64_t  bytes) ;

/// @brief Method BytesSuffix, addr 0x9f9df8c, size 0x230, virtual false, abstract: false, final false
static inline ::StringW BytesSuffix(int64_t  bytes, bool  reducePrecision) ;

/// @brief Method Kilo, addr 0x9f9e1bc, size 0xec, virtual false, abstract: false, final false
static inline ::StringW Kilo(::Modio::Unity::UI::StringFormatKilo  format, int64_t  value, ::StringW  custom) ;

/// @brief Method Kilo, addr 0x9f9e2a8, size 0x21c, virtual false, abstract: false, final false
static inline ::StringW Kilo(int64_t  value) ;

static inline ::ArrayW<::StringW> getStaticF_BytesSuffixes() ;

static inline ::ArrayW<::StringW> getStaticF_BytesSuffixesLoc() ;

static inline void setStaticF_BytesSuffixes(::ArrayW<::StringW>  value) ;

static inline void setStaticF_BytesSuffixesLoc(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringFormat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringFormat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringFormat(StringFormat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringFormat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringFormat(StringFormat const& ) = delete;

/// @brief Field BYTES_FORMAT_TOOLTIP offset 0xffffffff size 0x8
static constexpr ::ConstString  BYTES_FORMAT_TOOLTIP{u"Bytes: \"1048576\".\r\nBytesComma: \"1,048,576\".\r\nSuffix: \"1 MB\"."};

/// @brief Field KILO_FORMAT_TOOLTIP offset 0xffffffff size 0x8
static constexpr ::ConstString  KILO_FORMAT_TOOLTIP{u"None: \"10500\".\r\nComma: \"10,500\".\r\nKilo: \"10.5k\"."};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27034};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::StringFormat) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity::UI
