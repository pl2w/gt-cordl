#pragma once
// IWYU pragma private; include "System/Net/FixedSizeReadStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixedSizeReadStream)
namespace GlobalNamespace {
struct FixedSizeReadStream__ProcessReadAsync_d__5;
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
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::Net {
class FixedSizeReadStream;
}
// Write type traits
MARK_REF_T(::System::Net::FixedSizeReadStream*);
DEFINE_IL2CPP_CLASS(::System::Net::FixedSizeReadStream*, "System.Net", "FixedSizeReadStream");
// Dependencies System.Net.WebReadStream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.FixedSizeReadStream
class CORDL_TYPE FixedSizeReadStream : public ::System::Net::WebReadStream {
public:
// Declarations
using _ProcessReadAsync_d__5 = ::GlobalNamespace::FixedSizeReadStream__ProcessReadAsync_d__5;

 __declspec(property(get=get_ContentLength)) int64_t  ContentLength;

/// @brief Field <ContentLength>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__ContentLength_k__BackingField, put=__cordl_internal_set__ContentLength_k__BackingField)) int64_t  _ContentLength_k__BackingField;

/// @brief Field position, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) int64_t  position;

static inline ::System::Net::FixedSizeReadStream* New_ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream, int64_t  contentLength) ;

/// [AsyncStateMachine(typeof(System.Net.FixedSizeReadStream::<ProcessReadAsync>d__5))]
/// @brief Method ProcessReadAsync, addr 0xac95e34, size 0x168, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr int64_t const& __cordl_internal_get__ContentLength_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__ContentLength_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get_position() const;

constexpr int64_t& __cordl_internal_get_position() ;

constexpr void __cordl_internal_set__ContentLength_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set_position(int64_t  value) ;

/// @brief Method .ctor, addr 0xac95e0c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream, int64_t  contentLength) ;

/// [CompilerGenerated]
/// @brief Method get_ContentLength, addr 0xac95e04, size 0x8, virtual false, abstract: false, final false
inline int64_t get_ContentLength() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedSizeReadStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedSizeReadStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedSizeReadStream(FixedSizeReadStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedSizeReadStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedSizeReadStream(FixedSizeReadStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10675};

/// [CompilerGenerated]
/// @brief Field <ContentLength>k__BackingField, offset: 0x40, size: 0x8, def value: None
 int64_t  ____ContentLength_k__BackingField;

/// @brief Field position, offset: 0x48, size: 0x8, def value: None
 int64_t  ___position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::FixedSizeReadStream, ____ContentLength_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::FixedSizeReadStream, ___position) == 0x48, "Offset mismatch!");

static_assert(sizeof(::System::Net::FixedSizeReadStream) == 0x50, "Size mismatch!");

} // namespace end def System::Net
