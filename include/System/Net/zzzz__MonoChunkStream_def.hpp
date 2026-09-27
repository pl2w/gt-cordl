#pragma once
// IWYU pragma private; include "System/Net/MonoChunkStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoChunkStream)
namespace GlobalNamespace {
struct MonoChunkStream__FinishReading_d__8;
}
namespace GlobalNamespace {
struct MonoChunkStream__ProcessReadAsync_d__7;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class MonoChunkParser;
}
namespace System::Net {
class WebHeaderCollection;
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
// Forward declare root types
namespace System::Net {
class MonoChunkStream;
}
// Write type traits
MARK_REF_T(::System::Net::MonoChunkStream*);
DEFINE_IL2CPP_CLASS(::System::Net::MonoChunkStream*, "System.Net", "MonoChunkStream");
// Dependencies System.Net.WebReadStream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.MonoChunkStream
class CORDL_TYPE MonoChunkStream : public ::System::Net::WebReadStream {
public:
// Declarations
using _FinishReading_d__8 = ::GlobalNamespace::MonoChunkStream__FinishReading_d__8;

using _ProcessReadAsync_d__7 = ::GlobalNamespace::MonoChunkStream__ProcessReadAsync_d__7;

 __declspec(property(get=get_Decoder)) ::System::Net::MonoChunkParser*  Decoder;

 __declspec(property(get=get_Headers)) ::System::Net::WebHeaderCollection*  Headers;

/// @brief Field <Decoder>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Decoder_k__BackingField, put=__cordl_internal_set__Decoder_k__BackingField)) ::System::Net::MonoChunkParser*  _Decoder_k__BackingField;

/// @brief Field <Headers>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Headers_k__BackingField, put=__cordl_internal_set__Headers_k__BackingField)) ::System::Net::WebHeaderCollection*  _Headers_k__BackingField;

/// [AsyncStateMachine(typeof(System.Net.MonoChunkStream::<FinishReading>d__8))]
/// @brief Method FinishReading, addr 0xacabad0, size 0xfc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* FinishReading(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Net::MonoChunkStream* New_ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream, ::System::Net::WebHeaderCollection*  headers) ;

/// [AsyncStateMachine(typeof(System.Net.MonoChunkStream::<ProcessReadAsync>d__7))]
/// @brief Method ProcessReadAsync, addr 0xacab96c, size 0x164, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ThrowExpectingChunkTrailer, addr 0xacabbcc, size 0x58, virtual false, abstract: false, final false
static inline void ThrowExpectingChunkTrailer() ;

constexpr ::System::Net::MonoChunkParser* const& __cordl_internal_get__Decoder_k__BackingField() const;

constexpr ::System::Net::MonoChunkParser*& __cordl_internal_get__Decoder_k__BackingField() ;

constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get__Headers_k__BackingField() const;

constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get__Headers_k__BackingField() ;

constexpr void __cordl_internal_set__Decoder_k__BackingField(::System::Net::MonoChunkParser*  value) ;

constexpr void __cordl_internal_set__Headers_k__BackingField(::System::Net::WebHeaderCollection*  value) ;

/// [CompilerGenerated]
/// [DebuggerHidden]
/// @brief Method <>n__0, addr 0xacabc24, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* __n__0(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xacab8cc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream, ::System::Net::WebHeaderCollection*  headers) ;

/// [CompilerGenerated]
/// @brief Method get_Decoder, addr 0xacab8c4, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::MonoChunkParser* get_Decoder() ;

/// [CompilerGenerated]
/// @brief Method get_Headers, addr 0xacab8bc, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::WebHeaderCollection* get_Headers() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoChunkStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoChunkStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoChunkStream(MonoChunkStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoChunkStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoChunkStream(MonoChunkStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10710};

/// [CompilerGenerated]
/// @brief Field <Headers>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::Net::WebHeaderCollection*  ____Headers_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Decoder>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::System::Net::MonoChunkParser*  ____Decoder_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::MonoChunkStream, ____Headers_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::MonoChunkStream, ____Decoder_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::System::Net::MonoChunkStream) == 0x50, "Size mismatch!");

} // namespace end def System::Net
