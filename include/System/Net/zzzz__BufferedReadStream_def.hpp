#pragma once
// IWYU pragma private; include "System/Net/BufferedReadStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedReadStream)
namespace GlobalNamespace {
struct BufferedReadStream__ProcessReadAsync_d__2;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Net {
class WebOperation;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::Net {
class BufferedReadStream;
}
// Write type traits
MARK_REF_T(::System::Net::BufferedReadStream*);
DEFINE_IL2CPP_CLASS(::System::Net::BufferedReadStream*, "System.Net", "BufferedReadStream");
// Dependencies System.Net.WebReadStream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.BufferedReadStream
class CORDL_TYPE BufferedReadStream : public ::System::Net::WebReadStream {
public:
// Declarations
using _ProcessReadAsync_d__2 = ::GlobalNamespace::BufferedReadStream__ProcessReadAsync_d__2;

/// @brief Field readBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_readBuffer, put=__cordl_internal_set_readBuffer)) ::System::Net::BufferOffsetSize*  readBuffer;

static inline ::System::Net::BufferedReadStream* New_ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream, ::System::Net::BufferOffsetSize*  readBuffer) ;

/// [AsyncStateMachine(typeof(System.Net.BufferedReadStream::<ProcessReadAsync>d__2))]
/// @brief Method ProcessReadAsync, addr 0xac8ba80, size 0x168, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TryReadFromBuffer, addr 0xac8bbe8, size 0x90, virtual false, abstract: false, final false
inline bool TryReadFromBuffer(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::by_ref<int32_t>  result) ;

constexpr ::System::Net::BufferOffsetSize* const& __cordl_internal_get_readBuffer() const;

constexpr ::System::Net::BufferOffsetSize*& __cordl_internal_get_readBuffer() ;

constexpr void __cordl_internal_set_readBuffer(::System::Net::BufferOffsetSize*  value) ;

/// @brief Method .ctor, addr 0xac8ba50, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream, ::System::Net::BufferOffsetSize*  readBuffer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferedReadStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferedReadStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferedReadStream(BufferedReadStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferedReadStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferedReadStream(BufferedReadStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10655};

/// @brief Field readBuffer, offset: 0x40, size: 0x8, def value: None
 ::System::Net::BufferOffsetSize*  ___readBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::BufferedReadStream, ___readBuffer) == 0x40, "Offset mismatch!");

static_assert(sizeof(::System::Net::BufferedReadStream) == 0x48, "Size mismatch!");

} // namespace end def System::Net
