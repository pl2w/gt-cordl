#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipOutputStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/zzzz__DeflaterOutputStream_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__CompressionMethod_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__UseZip64_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipOutputStream)
namespace ICSharpCode::SharpZipLib::Checksum {
class Crc32;
}
namespace ICSharpCode::SharpZipLib::Core {
class INameTransform;
}
namespace ICSharpCode::SharpZipLib::Zip {
struct UseZip64;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipEntry;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipExtraData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class ZipOutputStream;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*, "ICSharpCode.SharpZipLib.Zip", "ZipOutputStream");
// Dependencies ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream, ICSharpCode.SharpZipLib.Zip.CompressionMethod, ICSharpCode.SharpZipLib.Zip.UseZip64
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipOutputStream
class CORDL_TYPE ZipOutputStream : public ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream {
public:
// Declarations
 __declspec(property(get=get_IsFinished)) bool  IsFinished;

 __declspec(property(get=get_NameTransform, put=set_NameTransform)) ::ICSharpCode::SharpZipLib::Core::INameTransform*  NameTransform;

 __declspec(property(get=get_Password, put=set_Password)) ::StringW  Password;

 __declspec(property(get=get_UseZip64, put=set_UseZip64)) ::ICSharpCode::SharpZipLib::Zip::UseZip64  UseZip64;

/// @brief Field <NameTransform>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__NameTransform_k__BackingField, put=__cordl_internal_set__NameTransform_k__BackingField)) ::ICSharpCode::SharpZipLib::Core::INameTransform*  _NameTransform_k__BackingField;

/// @brief Field _aesRnd, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__aesRnd, put=setStaticF__aesRnd)) ::System::Security::Cryptography::RandomNumberGenerator*  _aesRnd;

/// @brief Field crc, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_crc, put=__cordl_internal_set_crc)) ::ICSharpCode::SharpZipLib::Checksum::Crc32*  crc;

/// @brief Field crcPatchPos, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_crcPatchPos, put=__cordl_internal_set_crcPatchPos)) int64_t  crcPatchPos;

/// @brief Field curEntry, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_curEntry, put=__cordl_internal_set_curEntry)) ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  curEntry;

/// @brief Field curMethod, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_curMethod, put=__cordl_internal_set_curMethod)) ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  curMethod;

/// @brief Field defaultCompressionLevel, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultCompressionLevel, put=__cordl_internal_set_defaultCompressionLevel)) int32_t  defaultCompressionLevel;

/// @brief Field entries, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_entries, put=__cordl_internal_set_entries)) ::System::Collections::Generic::List_1<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>*  entries;

/// @brief Field offset, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) int64_t  offset;

/// @brief Field password, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_password, put=__cordl_internal_set_password)) ::StringW  password;

/// @brief Field patchEntryHeader, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_patchEntryHeader, put=__cordl_internal_set_patchEntryHeader)) bool  patchEntryHeader;

/// @brief Field size, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) int64_t  size;

/// @brief Field sizePatchPos, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sizePatchPos, put=__cordl_internal_set_sizePatchPos)) int64_t  sizePatchPos;

/// @brief Field useZip64_, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_useZip64_, put=__cordl_internal_set_useZip64_)) ::ICSharpCode::SharpZipLib::Zip::UseZip64  useZip64_;

/// @brief Field zipComment, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_zipComment, put=__cordl_internal_set_zipComment)) ::ArrayW<uint8_t>  zipComment;

/// @brief Method AddExtraDataAES, addr 0x9fcfee0, size 0x8c, virtual false, abstract: false, final false
static inline void AddExtraDataAES(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::ICSharpCode::SharpZipLib::Zip::ZipExtraData*  extraData) ;

/// @brief Method CloseEntry, addr 0x9fcf704, size 0x718, virtual false, abstract: false, final false
inline void CloseEntry() ;

/// @brief Method CopyAndEncrypt, addr 0x9fd0a7c, size 0xe0, virtual false, abstract: false, final false
inline void CopyAndEncrypt(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Finish, addr 0x9fd0b5c, size 0x96c, virtual true, abstract: false, final false
inline void Finish() ;

/// @brief Method Flush, addr 0x9fd14c8, size 0x2c, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method GetLevel, addr 0x9fceb7c, size 0x18, virtual false, abstract: false, final false
inline int32_t GetLevel() ;

/// @brief Method InitializeAESPassword, addr 0x9fd05b4, size 0x184, virtual false, abstract: false, final false
inline void InitializeAESPassword(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::StringW  rawPassword, ::by_ref<::ArrayW<uint8_t>>  salt, ::by_ref<::ArrayW<uint8_t>>  pwdVerifier) ;

/// @brief Method InitializePassword, addr 0x9fd04f0, size 0xc4, virtual false, abstract: false, final false
inline void InitializePassword(::StringW  password) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream* New_ctor(::System::IO::Stream*  baseOutputStream) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream* New_ctor(::System::IO::Stream*  baseOutputStream, int32_t  bufferSize) ;

/// @brief Method PutNextEntry, addr 0x9fcedd0, size 0x934, virtual false, abstract: false, final false
inline void PutNextEntry(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method SetComment, addr 0x9fce9f0, size 0xcc, virtual false, abstract: false, final false
inline void SetComment(::StringW  comment) ;

/// @brief Method SetLevel, addr 0x9fceabc, size 0x30, virtual false, abstract: false, final false
inline void SetLevel(int32_t  level) ;

/// @brief Method TransformEntryName, addr 0x9fcec94, size 0x13c, virtual false, abstract: false, final false
inline void TransformEntryName(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method Write, addr 0x9fd0800, size 0x254, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteAESHeader, addr 0x9fcffa8, size 0x80, virtual false, abstract: false, final false
inline void WriteAESHeader(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method WriteEncryptionHeader, addr 0x9fd0028, size 0x1ec, virtual false, abstract: false, final false
inline void WriteEncryptionHeader(int64_t  crcValue) ;

/// @brief Method WriteLeInt, addr 0x9fcec2c, size 0x28, virtual false, abstract: false, final false
inline void WriteLeInt(int32_t  value) ;

/// @brief Method WriteLeLong, addr 0x9fcec54, size 0x40, virtual false, abstract: false, final false
inline void WriteLeLong(int64_t  value) ;

/// @brief Method WriteLeShort, addr 0x9fcebdc, size 0x50, virtual false, abstract: false, final false
inline void WriteLeShort(int32_t  value) ;

constexpr ::ICSharpCode::SharpZipLib::Core::INameTransform* const& __cordl_internal_get__NameTransform_k__BackingField() const;

constexpr ::ICSharpCode::SharpZipLib::Core::INameTransform*& __cordl_internal_get__NameTransform_k__BackingField() ;

constexpr ::ICSharpCode::SharpZipLib::Checksum::Crc32* const& __cordl_internal_get_crc() const;

constexpr ::ICSharpCode::SharpZipLib::Checksum::Crc32*& __cordl_internal_get_crc() ;

constexpr int64_t const& __cordl_internal_get_crcPatchPos() const;

constexpr int64_t& __cordl_internal_get_crcPatchPos() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry* const& __cordl_internal_get_curEntry() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry*& __cordl_internal_get_curEntry() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod const& __cordl_internal_get_curMethod() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod& __cordl_internal_get_curMethod() ;

constexpr int32_t const& __cordl_internal_get_defaultCompressionLevel() const;

constexpr int32_t& __cordl_internal_get_defaultCompressionLevel() ;

constexpr ::System::Collections::Generic::List_1<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>* const& __cordl_internal_get_entries() const;

constexpr ::System::Collections::Generic::List_1<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>*& __cordl_internal_get_entries() ;

constexpr int64_t const& __cordl_internal_get_offset() const;

constexpr int64_t& __cordl_internal_get_offset() ;

constexpr ::StringW const& __cordl_internal_get_password() const;

constexpr ::StringW& __cordl_internal_get_password() ;

constexpr bool const& __cordl_internal_get_patchEntryHeader() const;

constexpr bool& __cordl_internal_get_patchEntryHeader() ;

constexpr int64_t const& __cordl_internal_get_size() const;

constexpr int64_t& __cordl_internal_get_size() ;

constexpr int64_t const& __cordl_internal_get_sizePatchPos() const;

constexpr int64_t& __cordl_internal_get_sizePatchPos() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::UseZip64 const& __cordl_internal_get_useZip64_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::UseZip64& __cordl_internal_get_useZip64_() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_zipComment() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_zipComment() ;

constexpr void __cordl_internal_set__NameTransform_k__BackingField(::ICSharpCode::SharpZipLib::Core::INameTransform*  value) ;

constexpr void __cordl_internal_set_crc(::ICSharpCode::SharpZipLib::Checksum::Crc32*  value) ;

constexpr void __cordl_internal_set_crcPatchPos(int64_t  value) ;

constexpr void __cordl_internal_set_curEntry(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  value) ;

constexpr void __cordl_internal_set_curMethod(::ICSharpCode::SharpZipLib::Zip::CompressionMethod  value) ;

constexpr void __cordl_internal_set_defaultCompressionLevel(int32_t  value) ;

constexpr void __cordl_internal_set_entries(::System::Collections::Generic::List_1<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>*  value) ;

constexpr void __cordl_internal_set_offset(int64_t  value) ;

constexpr void __cordl_internal_set_password(::StringW  value) ;

constexpr void __cordl_internal_set_patchEntryHeader(bool  value) ;

constexpr void __cordl_internal_set_size(int64_t  value) ;

constexpr void __cordl_internal_set_sizePatchPos(int64_t  value) ;

constexpr void __cordl_internal_set_useZip64_(::ICSharpCode::SharpZipLib::Zip::UseZip64  value) ;

constexpr void __cordl_internal_set_zipComment(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x9fce384, size 0x188, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseOutputStream) ;

/// @brief Method .ctor, addr 0x9fce668, size 0x194, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseOutputStream, int32_t  bufferSize) ;

static inline ::System::Security::Cryptography::RandomNumberGenerator* getStaticF__aesRnd() ;

/// @brief Method get_IsFinished, addr 0x9fce9e0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFinished() ;

/// [CompilerGenerated]
/// @brief Method get_NameTransform, addr 0x9fceba4, size 0x8, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Core::INameTransform* get_NameTransform() ;

/// @brief Method get_Password, addr 0x9fcebb4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Password() ;

/// @brief Method get_UseZip64, addr 0x9fceb94, size 0x8, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::UseZip64 get_UseZip64() ;

static inline void setStaticF__aesRnd(::System::Security::Cryptography::RandomNumberGenerator*  value) ;

/// [CompilerGenerated]
/// @brief Method set_NameTransform, addr 0x9fcebac, size 0x8, virtual false, abstract: false, final false
inline void set_NameTransform(::ICSharpCode::SharpZipLib::Core::INameTransform*  value) ;

/// @brief Method set_Password, addr 0x9fcebbc, size 0x20, virtual false, abstract: false, final false
inline void set_Password(::StringW  value) ;

/// @brief Method set_UseZip64, addr 0x9fceb9c, size 0x8, virtual false, abstract: false, final false
inline void set_UseZip64(::ICSharpCode::SharpZipLib::Zip::UseZip64  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipOutputStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipOutputStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipOutputStream(ZipOutputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipOutputStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipOutputStream(ZipOutputStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17368};

/// [CompilerGenerated]
/// @brief Field <NameTransform>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Core::INameTransform*  ____NameTransform_k__BackingField;

/// @brief Field entries, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>*  ___entries;

/// @brief Field crc, offset: 0x70, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Checksum::Crc32*  ___crc;

/// @brief Field curEntry, offset: 0x78, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  ___curEntry;

/// @brief Field defaultCompressionLevel, offset: 0x80, size: 0x4, def value: None
 int32_t  ___defaultCompressionLevel;

/// @brief Field curMethod, offset: 0x84, size: 0x4, def value: None
 ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  ___curMethod;

/// @brief Field size, offset: 0x88, size: 0x8, def value: None
 int64_t  ___size;

/// @brief Field offset, offset: 0x90, size: 0x8, def value: None
 int64_t  ___offset;

/// @brief Field zipComment, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___zipComment;

/// @brief Field patchEntryHeader, offset: 0xa0, size: 0x1, def value: None
 bool  ___patchEntryHeader;

/// @brief Field crcPatchPos, offset: 0xa8, size: 0x8, def value: None
 int64_t  ___crcPatchPos;

/// @brief Field sizePatchPos, offset: 0xb0, size: 0x8, def value: None
 int64_t  ___sizePatchPos;

/// @brief Field useZip64_, offset: 0xb8, size: 0x4, def value: None
 ::ICSharpCode::SharpZipLib::Zip::UseZip64  ___useZip64_;

/// @brief Field password, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ___password;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream, ____NameTransform_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream, ___entries) == 0x68, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream, ___crc) == 0x70, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream, ___curEntry) == 0x78, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream, ___defaultCompressionLevel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream, ___curMethod) == 0x84, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream, ___size) == 0x88, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream, ___offset) == 0x90, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream, ___zipComment) == 0x98, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream, ___patchEntryHeader) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream, ___crcPatchPos) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream, ___sizePatchPos) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream, ___useZip64_) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream, ___password) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream) == 0xc8, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
