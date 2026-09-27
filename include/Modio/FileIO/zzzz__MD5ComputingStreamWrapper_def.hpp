#pragma once
// IWYU pragma private; include "Modio/FileIO/MD5ComputingStreamWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MD5ComputingStreamWrapper)
namespace GlobalNamespace {
struct MD5ComputingStreamWrapper__GetMD5HashAsync_d__10;
}
namespace GlobalNamespace {
struct MD5ComputingStreamWrapper__ReadAsync_d__11;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
class MD5;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Modio::FileIO {
class MD5ComputingStreamWrapper;
}
// Write type traits
MARK_REF_T(::Modio::FileIO::MD5ComputingStreamWrapper*);
DEFINE_IL2CPP_CLASS(::Modio::FileIO::MD5ComputingStreamWrapper*, "Modio.FileIO", "MD5ComputingStreamWrapper");
// Dependencies System.IO.Stream
namespace Modio::FileIO {
// Is value type: false
// CS Name: Modio.FileIO.MD5ComputingStreamWrapper
class CORDL_TYPE MD5ComputingStreamWrapper : public ::System::IO::Stream {
public:
// Declarations
using _GetMD5HashAsync_d__10 = ::GlobalNamespace::MD5ComputingStreamWrapper__GetMD5HashAsync_d__10;

using _ReadAsync_d__11 = ::GlobalNamespace::MD5ComputingStreamWrapper__ReadAsync_d__11;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

 __declspec(property(get=get_TotalBytesRead, put=set_TotalBytesRead)) int32_t  TotalBytesRead;

/// @brief Field <TotalBytesRead>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__TotalBytesRead_k__BackingField, put=__cordl_internal_set__TotalBytesRead_k__BackingField)) int32_t  _TotalBytesRead_k__BackingField;

/// @brief Field _baseStream, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseStream, put=__cordl_internal_set__baseStream)) ::System::IO::Stream*  _baseStream;

/// @brief Field _hasTransformedFinalBlock, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasTransformedFinalBlock, put=__cordl_internal_set__hasTransformedFinalBlock)) bool  _hasTransformedFinalBlock;

/// @brief Field _md5, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__md5, put=__cordl_internal_set__md5)) ::System::Security::Cryptography::MD5*  _md5;

/// @brief Method Dispose, addr 0xa053cf8, size 0x50, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush, addr 0xa053cd8, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

/// [AsyncStateMachine(typeof(Modio.FileIO.MD5ComputingStreamWrapper::<GetMD5HashAsync>d__10))]
/// @brief Method GetMD5HashAsync, addr 0xa053d48, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* GetMD5HashAsync() ;

static inline ::Modio::FileIO::MD5ComputingStreamWrapper* New_ctor(::System::IO::Stream*  baseStream) ;

/// @brief Method Read, addr 0xa053fa4, size 0xb0, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// [AsyncStateMachine(typeof(Modio.FileIO.MD5ComputingStreamWrapper::<ReadAsync>d__11))]
/// @brief Method ReadAsync, addr 0xa053e54, size 0x150, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Seek, addr 0xa054054, size 0x20, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xa054074, size 0x38, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0xa0540ac, size 0x38, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr int32_t const& __cordl_internal_get__TotalBytesRead_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__TotalBytesRead_k__BackingField() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__baseStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__baseStream() ;

constexpr bool const& __cordl_internal_get__hasTransformedFinalBlock() const;

constexpr bool& __cordl_internal_get__hasTransformedFinalBlock() ;

constexpr ::System::Security::Cryptography::MD5* const& __cordl_internal_get__md5() const;

constexpr ::System::Security::Cryptography::MD5*& __cordl_internal_get__md5() ;

constexpr void __cordl_internal_set__TotalBytesRead_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__baseStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__hasTransformedFinalBlock(bool  value) ;

constexpr void __cordl_internal_set__md5(::System::Security::Cryptography::MD5*  value) ;

/// @brief Method .ctor, addr 0xa053c4c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseStream) ;

/// @brief Method get_CanRead, addr 0xa0540e4, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa0540ec, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa0540f4, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0xa0540fc, size 0x1c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xa054118, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// [CompilerGenerated]
/// @brief Method get_TotalBytesRead, addr 0xa053c3c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TotalBytesRead() ;

/// @brief Method set_Position, addr 0xa054138, size 0x20, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_TotalBytesRead, addr 0xa053c44, size 0x8, virtual false, abstract: false, final false
inline void set_TotalBytesRead(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MD5ComputingStreamWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MD5ComputingStreamWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MD5ComputingStreamWrapper(MD5ComputingStreamWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MD5ComputingStreamWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MD5ComputingStreamWrapper(MD5ComputingStreamWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17678};

/// [CompilerGenerated]
/// @brief Field <TotalBytesRead>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____TotalBytesRead_k__BackingField;

/// @brief Field _baseStream, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  ____baseStream;

/// @brief Field _md5, offset: 0x38, size: 0x8, def value: None
 ::System::Security::Cryptography::MD5*  ____md5;

/// @brief Field _hasTransformedFinalBlock, offset: 0x40, size: 0x1, def value: None
 bool  ____hasTransformedFinalBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::FileIO::MD5ComputingStreamWrapper, ____TotalBytesRead_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::MD5ComputingStreamWrapper, ____baseStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::MD5ComputingStreamWrapper, ____md5) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::MD5ComputingStreamWrapper, ____hasTransformedFinalBlock) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Modio::FileIO::MD5ComputingStreamWrapper) == 0x48, "Size mismatch!");

} // namespace end def Modio::FileIO
