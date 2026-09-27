#pragma once
// IWYU pragma private; include "System/Buffers/ArrayPoolEventSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/Tracing/zzzz__EventSource_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayPoolEventSource)
namespace GlobalNamespace {
struct ArrayPoolEventSource_BufferAllocatedReason;
}
// Forward declare root types
namespace System::Buffers {
class ArrayPoolEventSource;
}
// Write type traits
MARK_REF_T(::System::Buffers::ArrayPoolEventSource*);
DEFINE_IL2CPP_CLASS(::System::Buffers::ArrayPoolEventSource*, "System.Buffers", "ArrayPoolEventSource");
// [EventSource(Guid = "0866B2B8-5CEF-5DB9-2612-0C0FFD814A44", Name = "System.Buffers.ArrayPoolEventSource")]
// Dependencies System.Diagnostics.Tracing.EventSource
namespace System::Buffers {
// Is value type: false
// CS Name: System.Buffers.ArrayPoolEventSource
class CORDL_TYPE ArrayPoolEventSource : public ::System::Diagnostics::Tracing::EventSource {
public:
// Declarations
using BufferAllocatedReason = ::GlobalNamespace::ArrayPoolEventSource_BufferAllocatedReason;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::System::Buffers::ArrayPoolEventSource*  Log;

/// [Event(2, Level = (System.Diagnostics.Tracing.EventLevel)4)]
/// @brief Method BufferAllocated, addr 0xa271c3c, size 0x10c, virtual false, abstract: false, final false
inline void BufferAllocated(int32_t  bufferId, int32_t  bufferSize, int32_t  poolId, int32_t  bucketId, ::GlobalNamespace::ArrayPoolEventSource_BufferAllocatedReason  reason) ;

/// [Event(1, Level = (System.Diagnostics.Tracing.EventLevel)5)]
/// @brief Method BufferRented, addr 0xa271b50, size 0xec, virtual false, abstract: false, final false
inline void BufferRented(int32_t  bufferId, int32_t  bufferSize, int32_t  poolId, int32_t  bucketId) ;

/// [Event(3, Level = (System.Diagnostics.Tracing.EventLevel)5)]
/// @brief Method BufferReturned, addr 0xa271d48, size 0x10, virtual false, abstract: false, final false
inline void BufferReturned(int32_t  bufferId, int32_t  bufferSize, int32_t  poolId) ;

/// [Event(5, Level = (System.Diagnostics.Tracing.EventLevel)4)]
/// @brief Method BufferTrimPoll, addr 0xa271d68, size 0xc, virtual false, abstract: false, final false
inline void BufferTrimPoll(int32_t  milliseconds, int32_t  pressure) ;

/// [Event(4, Level = (System.Diagnostics.Tracing.EventLevel)4)]
/// @brief Method BufferTrimmed, addr 0xa271d58, size 0x10, virtual false, abstract: false, final false
inline void BufferTrimmed(int32_t  bufferId, int32_t  bufferSize, int32_t  poolId) ;

static inline ::System::Buffers::ArrayPoolEventSource* New_ctor() ;

/// @brief Method .ctor, addr 0xa271a98, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Buffers::ArrayPoolEventSource* getStaticF_Log() ;

static inline void setStaticF_Log(::System::Buffers::ArrayPoolEventSource*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArrayPoolEventSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArrayPoolEventSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayPoolEventSource(ArrayPoolEventSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPoolEventSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayPoolEventSource(ArrayPoolEventSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6948};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Buffers::ArrayPoolEventSource) == 0x18, "Size mismatch!");

} // namespace end def System::Buffers
