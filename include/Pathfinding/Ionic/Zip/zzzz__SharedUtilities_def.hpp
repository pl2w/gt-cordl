#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/SharedUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SharedUtilities)
namespace System::IO {
class Stream;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Text {
class Encoding;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class SharedUtilities;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::SharedUtilities*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::SharedUtilities*, "Pathfinding.Ionic.Zip", "SharedUtilities");
// Dependencies System.Object
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.SharedUtilities
class CORDL_TYPE SharedUtilities : public ::System::Object {
public:
// Declarations
/// @brief Field doubleDotRegex1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_doubleDotRegex1, put=setStaticF_doubleDotRegex1)) ::System::Text::RegularExpressions::Regex*  doubleDotRegex1;

/// @brief Field ibm437, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ibm437, put=setStaticF_ibm437)) ::System::Text::Encoding*  ibm437;

/// @brief Field utf8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_utf8, put=setStaticF_utf8)) ::System::Text::Encoding*  utf8;

/// @brief Method AdjustTime_Reverse, addr 0xa68d828, size 0x198, virtual false, abstract: false, final false
static inline ::System::DateTime AdjustTime_Reverse(::System::DateTime  time) ;

/// @brief Method CreateAndOpenUniqueTempFile, addr 0xa68e12c, size 0x1a4, virtual false, abstract: false, final false
static inline void CreateAndOpenUniqueTempFile(::StringW  dir, ::by_ref<::System::IO::Stream*>  fs, ::by_ref<::StringW>  filename) ;

/// @brief Method DateTimeToPacked, addr 0xa68e03c, size 0xf0, virtual false, abstract: false, final false
static inline int32_t DateTimeToPacked(::System::DateTime  time) ;

/// @brief Method FindSignature, addr 0xa68d5e0, size 0x248, virtual false, abstract: false, final false
static inline int64_t FindSignature(::System::IO::Stream*  stream, int32_t  SignatureToFind) ;

/// @brief Method GenerateRandomStringImpl, addr 0xa68e364, size 0x12c, virtual false, abstract: false, final false
static inline ::StringW GenerateRandomStringImpl(int32_t  length, int32_t  delta) ;

/// @brief Method GetFileLength, addr 0xa68cc48, size 0x190, virtual false, abstract: false, final false
static inline int64_t GetFileLength(::StringW  fileName) ;

/// @brief Method InternalGetTempFileName, addr 0xa68e2d0, size 0x94, virtual false, abstract: false, final false
static inline ::StringW InternalGetTempFileName() ;

/// @brief Method NormalizePathForUseInZipFile, addr 0xa68cee4, size 0x134, virtual false, abstract: false, final false
static inline ::StringW NormalizePathForUseInZipFile(::StringW  pathName) ;

/// @brief Method PackedToDateTime, addr 0xa68d9c0, size 0x67c, virtual false, abstract: false, final false
static inline ::System::DateTime PackedToDateTime(int32_t  packedDateTime) ;

/// @brief Method ReadEntrySignature, addr 0xa68d358, size 0x21c, virtual false, abstract: false, final false
static inline int32_t ReadEntrySignature(::System::IO::Stream*  s) ;

/// @brief Method ReadInt, addr 0xa68d574, size 0x6c, virtual false, abstract: false, final false
static inline int32_t ReadInt(::System::IO::Stream*  s) ;

/// @brief Method ReadSignature, addr 0xa68d14c, size 0xe8, virtual false, abstract: false, final false
static inline int32_t ReadSignature(::System::IO::Stream*  s) ;

/// @brief Method ReadWithRetry, addr 0xa68e490, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ReadWithRetry(::System::IO::Stream*  s, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::StringW  FileName) ;

/// @brief Method SimplifyFwdSlashPath, addr 0xa68cdd8, size 0x10c, virtual false, abstract: false, final false
static inline ::StringW SimplifyFwdSlashPath(::StringW  path) ;

/// @brief Method StringFromBuffer, addr 0xa68d114, size 0x38, virtual false, abstract: false, final false
static inline ::StringW StringFromBuffer(::ArrayW<uint8_t>  buf, ::System::Text::Encoding*  encoding) ;

/// @brief Method StringToByteArray, addr 0xa68d040, size 0x74, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> StringToByteArray(::StringW  value) ;

/// @brief Method StringToByteArray, addr 0xa68d018, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> StringToByteArray(::StringW  value, ::System::Text::Encoding*  encoding) ;

/// @brief Method Utf8StringFromBuffer, addr 0xa68d0b4, size 0x60, virtual false, abstract: false, final false
static inline ::StringW Utf8StringFromBuffer(::ArrayW<uint8_t>  buf) ;

/// @brief Method _ReadFourBytes, addr 0xa68d234, size 0x124, virtual false, abstract: false, final false
static inline int32_t _ReadFourBytes(::System::IO::Stream*  s, ::StringW  message) ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_doubleDotRegex1() ;

static inline ::System::Text::Encoding* getStaticF_ibm437() ;

static inline ::System::Text::Encoding* getStaticF_utf8() ;

static inline void setStaticF_doubleDotRegex1(::System::Text::RegularExpressions::Regex*  value) ;

static inline void setStaticF_ibm437(::System::Text::Encoding*  value) ;

static inline void setStaticF_utf8(::System::Text::Encoding*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedUtilities(SharedUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedUtilities(SharedUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28155};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Ionic::Zip::SharedUtilities) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
