#pragma once
// IWYU pragma private; include "System/Net/WebReadStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebReadStream)
namespace GlobalNamespace {
struct WebReadStream__ReadAsync_d__28;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class WebOperation;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class WebReadStream;
}
// Write type traits
MARK_REF_T(::System::Net::WebReadStream*);
DEFINE_IL2CPP_CLASS(::System::Net::WebReadStream*, "System.Net", "WebReadStream");
// Dependencies System.IO.Stream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebReadStream
class CORDL_TYPE WebReadStream : public ::System::IO::Stream {
public:
// Declarations
using _ReadAsync_d__28 = ::GlobalNamespace::WebReadStream__ReadAsync_d__28;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_InnerStream)) ::System::IO::Stream*  InnerStream;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_ME)) ::StringW  ME;

 __declspec(property(get=get_Operation)) ::System::Net::WebOperation*  Operation;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field <InnerStream>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__InnerStream_k__BackingField, put=__cordl_internal_set__InnerStream_k__BackingField)) ::System::IO::Stream*  _InnerStream_k__BackingField;

/// @brief Field <Operation>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Operation_k__BackingField, put=__cordl_internal_set__Operation_k__BackingField)) ::System::Net::WebOperation*  _Operation_k__BackingField;

/// @brief Field disposed, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposed, put=__cordl_internal_set_disposed)) bool  disposed;

/// @brief Method BeginRead, addr 0xacbf804, size 0x1c0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::AsyncCallback*  cb, ::System::Object*  state) ;

/// @brief Method Dispose, addr 0xacbfd48, size 0x4c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EndRead, addr 0xacbf9c4, size 0x120, virtual true, abstract: false, final false
inline int32_t EndRead(::System::IAsyncResult*  r) ;

/// @brief Method FinishReading, addr 0xacbfc44, size 0x104, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* FinishReading(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Flush, addr 0xacbf40c, size 0x38, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method GetException, addr 0xacbf444, size 0x168, virtual false, abstract: false, final false
inline ::System::Exception* GetException(::System::Exception*  e) ;

static inline ::System::Net::WebReadStream* New_ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream) ;

/// @brief Method ProcessReadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Read, addr 0xacbf5ac, size 0x258, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size) ;

/// [AsyncStateMachine(typeof(System.Net.WebReadStream::<ReadAsync>d__28))]
/// @brief Method ReadAsync, addr 0xacbfae4, size 0x160, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Seek, addr 0xacbf39c, size 0x38, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xacbf364, size 0x38, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0xacbf3d4, size 0x38, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__InnerStream_k__BackingField() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__InnerStream_k__BackingField() ;

constexpr ::System::Net::WebOperation* const& __cordl_internal_get__Operation_k__BackingField() const;

constexpr ::System::Net::WebOperation*& __cordl_internal_get__Operation_k__BackingField() ;

constexpr bool const& __cordl_internal_get_disposed() const;

constexpr bool& __cordl_internal_get_disposed() ;

constexpr void __cordl_internal_set__InnerStream_k__BackingField(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__Operation_k__BackingField(::System::Net::WebOperation*  value) ;

constexpr void __cordl_internal_set_disposed(bool  value) ;

/// @brief Method .ctor, addr 0xacbf21c, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream) ;

/// @brief Method get_CanRead, addr 0xacbf354, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xacbf34c, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xacbf35c, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// [CompilerGenerated]
/// @brief Method get_InnerStream, addr 0xacbf20c, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::Stream* get_InnerStream() ;

/// @brief Method get_Length, addr 0xacbf2a4, size 0x38, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_ME, addr 0xacbf214, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ME() ;

/// [CompilerGenerated]
/// @brief Method get_Operation, addr 0xacbf204, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::WebOperation* get_Operation() ;

/// @brief Method get_Position, addr 0xacbf2dc, size 0x38, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_Position, addr 0xacbf314, size 0x38, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebReadStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebReadStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebReadStream(WebReadStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebReadStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebReadStream(WebReadStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10748};

/// [CompilerGenerated]
/// @brief Field <Operation>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Net::WebOperation*  ____Operation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <InnerStream>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  ____InnerStream_k__BackingField;

/// @brief Field disposed, offset: 0x38, size: 0x1, def value: None
 bool  ___disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebReadStream, ____Operation_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebReadStream, ____InnerStream_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebReadStream, ___disposed) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebReadStream) == 0x40, "Size mismatch!");

} // namespace end def System::Net
