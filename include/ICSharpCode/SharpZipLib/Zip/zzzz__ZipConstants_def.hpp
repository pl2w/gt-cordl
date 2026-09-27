#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipConstants)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class ZipConstants;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipConstants*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipConstants*, "ICSharpCode.SharpZipLib.Zip", "ZipConstants");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipConstants
class CORDL_TYPE ZipConstants : public ::System::Object {
public:
// Declarations
/// [Obsolete("Use ZipStrings.ConvertToArray instead")]
/// @brief Method ConvertToArray, addr 0x9f7f5c4, size 0x68, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ConvertToArray(int32_t  flags, ::StringW  str) ;

/// [Obsolete("Use ZipStrings.ConvertToArray instead")]
/// @brief Method ConvertToArray, addr 0x9f7f56c, size 0x58, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ConvertToArray(::StringW  str) ;

/// [Obsolete("Use ZipStrings.ConvertToString instead")]
/// @brief Method ConvertToString, addr 0x9f7f43c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ConvertToString(::ArrayW<uint8_t>  data) ;

/// [Obsolete("Use ZipStrings.ConvertToString instead")]
/// @brief Method ConvertToString, addr 0x9f7f3d4, size 0x68, virtual false, abstract: false, final false
static inline ::StringW ConvertToString(::ArrayW<uint8_t>  data, int32_t  count) ;

/// [Obsolete("Use ZipStrings.ConvertToStringExt instead")]
/// @brief Method ConvertToStringExt, addr 0x9f7f504, size 0x68, virtual false, abstract: false, final false
static inline ::StringW ConvertToStringExt(int32_t  flags, ::ArrayW<uint8_t>  data) ;

/// [Obsolete("Use ZipStrings.ConvertToStringExt instead")]
/// @brief Method ConvertToStringExt, addr 0x9f7f494, size 0x70, virtual false, abstract: false, final false
static inline ::StringW ConvertToStringExt(int32_t  flags, ::ArrayW<uint8_t>  data, int32_t  count) ;

/// @brief Method get_DefaultCodePage, addr 0x9f7f32c, size 0x50, virtual false, abstract: false, final false
static inline int32_t get_DefaultCodePage() ;

/// @brief Method set_DefaultCodePage, addr 0x9f7f37c, size 0x58, virtual false, abstract: false, final false
static inline void set_DefaultCodePage(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipConstants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipConstants(ZipConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipConstants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipConstants(ZipConstants const& ) = delete;

/// @brief Field ArchiveExtraDataSignature offset 0xffffffff size 0x4
static constexpr int32_t  ArchiveExtraDataSignature{static_cast<int32_t>(0x7064b50)};

/// @brief Field CENDIGITALSIG offset 0xffffffff size 0x4
static constexpr int32_t  CENDIGITALSIG{static_cast<int32_t>(0x5054b50)};

/// @brief Field CENHDR offset 0xffffffff size 0x4
static constexpr int32_t  CENHDR{static_cast<int32_t>(0x2e)};

/// @brief Field CENSIG offset 0xffffffff size 0x4
static constexpr int32_t  CENSIG{static_cast<int32_t>(0x2014b50)};

/// @brief Field CENSIG64 offset 0xffffffff size 0x4
static constexpr int32_t  CENSIG64{static_cast<int32_t>(0x6064b50)};

/// @brief Field CRYPTO_HEADER_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  CRYPTO_HEADER_SIZE{static_cast<int32_t>(0xc)};

/// @brief Field CentralHeaderBaseSize offset 0xffffffff size 0x4
static constexpr int32_t  CentralHeaderBaseSize{static_cast<int32_t>(0x2e)};

/// @brief Field CentralHeaderDigitalSignature offset 0xffffffff size 0x4
static constexpr int32_t  CentralHeaderDigitalSignature{static_cast<int32_t>(0x5054b50)};

/// @brief Field CentralHeaderSignature offset 0xffffffff size 0x4
static constexpr int32_t  CentralHeaderSignature{static_cast<int32_t>(0x2014b50)};

/// @brief Field CryptoHeaderSize offset 0xffffffff size 0x4
static constexpr int32_t  CryptoHeaderSize{static_cast<int32_t>(0xc)};

/// @brief Field DataDescriptorSignature offset 0xffffffff size 0x4
static constexpr int32_t  DataDescriptorSignature{static_cast<int32_t>(0x8074b50)};

/// @brief Field DataDescriptorSize offset 0xffffffff size 0x4
static constexpr int32_t  DataDescriptorSize{static_cast<int32_t>(0x10)};

/// @brief Field ENDHDR offset 0xffffffff size 0x4
static constexpr int32_t  ENDHDR{static_cast<int32_t>(0x16)};

/// @brief Field ENDSIG offset 0xffffffff size 0x4
static constexpr int32_t  ENDSIG{static_cast<int32_t>(0x6054b50)};

/// @brief Field EXTHDR offset 0xffffffff size 0x4
static constexpr int32_t  EXTHDR{static_cast<int32_t>(0x10)};

/// @brief Field EXTSIG offset 0xffffffff size 0x4
static constexpr int32_t  EXTSIG{static_cast<int32_t>(0x8074b50)};

/// @brief Field EndOfCentralDirectorySignature offset 0xffffffff size 0x4
static constexpr int32_t  EndOfCentralDirectorySignature{static_cast<int32_t>(0x6054b50)};

/// @brief Field EndOfCentralRecordBaseSize offset 0xffffffff size 0x4
static constexpr int32_t  EndOfCentralRecordBaseSize{static_cast<int32_t>(0x16)};

/// @brief Field LOCHDR offset 0xffffffff size 0x4
static constexpr int32_t  LOCHDR{static_cast<int32_t>(0x1e)};

/// @brief Field LOCSIG offset 0xffffffff size 0x4
static constexpr int32_t  LOCSIG{static_cast<int32_t>(0x4034b50)};

/// @brief Field LocalHeaderBaseSize offset 0xffffffff size 0x4
static constexpr int32_t  LocalHeaderBaseSize{static_cast<int32_t>(0x1e)};

/// @brief Field LocalHeaderSignature offset 0xffffffff size 0x4
static constexpr int32_t  LocalHeaderSignature{static_cast<int32_t>(0x4034b50)};

/// @brief Field SPANNINGSIG offset 0xffffffff size 0x4
static constexpr int32_t  SPANNINGSIG{static_cast<int32_t>(0x8074b50)};

/// @brief Field SPANTEMPSIG offset 0xffffffff size 0x4
static constexpr int32_t  SPANTEMPSIG{static_cast<int32_t>(0x30304b50)};

/// @brief Field SpanningSignature offset 0xffffffff size 0x4
static constexpr int32_t  SpanningSignature{static_cast<int32_t>(0x8074b50)};

/// @brief Field SpanningTempSignature offset 0xffffffff size 0x4
static constexpr int32_t  SpanningTempSignature{static_cast<int32_t>(0x30304b50)};

/// @brief Field VERSION_AES offset 0xffffffff size 0x4
static constexpr int32_t  VERSION_AES{static_cast<int32_t>(0x33)};

/// @brief Field VERSION_MADE_BY offset 0xffffffff size 0x4
static constexpr int32_t  VERSION_MADE_BY{static_cast<int32_t>(0x33)};

/// @brief Field VERSION_STRONG_ENCRYPTION offset 0xffffffff size 0x4
static constexpr int32_t  VERSION_STRONG_ENCRYPTION{static_cast<int32_t>(0x32)};

/// @brief Field VersionBZip2 offset 0xffffffff size 0x4
static constexpr int32_t  VersionBZip2{static_cast<int32_t>(0x2e)};

/// @brief Field VersionMadeBy offset 0xffffffff size 0x4
static constexpr int32_t  VersionMadeBy{static_cast<int32_t>(0x33)};

/// @brief Field VersionStrongEncryption offset 0xffffffff size 0x4
static constexpr int32_t  VersionStrongEncryption{static_cast<int32_t>(0x32)};

/// @brief Field VersionZip64 offset 0xffffffff size 0x4
static constexpr int32_t  VersionZip64{static_cast<int32_t>(0x2d)};

/// @brief Field Zip64CentralDirLocatorSignature offset 0xffffffff size 0x4
static constexpr int32_t  Zip64CentralDirLocatorSignature{static_cast<int32_t>(0x7064b50)};

/// @brief Field Zip64CentralFileHeaderSignature offset 0xffffffff size 0x4
static constexpr int32_t  Zip64CentralFileHeaderSignature{static_cast<int32_t>(0x6064b50)};

/// @brief Field Zip64DataDescriptorSize offset 0xffffffff size 0x4
static constexpr int32_t  Zip64DataDescriptorSize{static_cast<int32_t>(0x18)};

/// @brief Field Zip64EndOfCentralDirectoryLocatorSize offset 0xffffffff size 0x4
static constexpr int32_t  Zip64EndOfCentralDirectoryLocatorSize{static_cast<int32_t>(0x14)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17321};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipConstants) == 0x10, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
