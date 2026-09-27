#pragma once
// IWYU pragma private; include "System/Net/ContentDecodeStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContentDecodeStream)
namespace GlobalNamespace {
struct ContentDecodeStream_Mode;
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
// Forward declare root types
namespace System::Net {
class ContentDecodeStream;
}
// Write type traits
MARK_REF_T(::System::Net::ContentDecodeStream*);
DEFINE_IL2CPP_CLASS(::System::Net::ContentDecodeStream*, "System.Net", "ContentDecodeStream");
// Dependencies System.Net.WebReadStream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ContentDecodeStream
class CORDL_TYPE ContentDecodeStream : public ::System::Net::WebReadStream {
public:
// Declarations
using Mode = ::GlobalNamespace::ContentDecodeStream_Mode;

 __declspec(property(get=get_OriginalInnerStream)) ::System::IO::Stream*  OriginalInnerStream;

/// @brief Field <OriginalInnerStream>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__OriginalInnerStream_k__BackingField, put=__cordl_internal_set__OriginalInnerStream_k__BackingField)) ::System::IO::Stream*  _OriginalInnerStream_k__BackingField;

/// @brief Method Create, addr 0xac8cd5c, size 0xe8, virtual false, abstract: false, final false
static inline ::System::Net::ContentDecodeStream* Create(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream, ::GlobalNamespace::ContentDecodeStream_Mode  mode) ;

/// @brief Method FinishReading, addr 0xac8ce9c, size 0xf0, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* FinishReading(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Net::ContentDecodeStream* New_ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  decodeStream, ::System::IO::Stream*  originalInnerStream) ;

/// @brief Method ProcessReadAsync, addr 0xac8ce7c, size 0x20, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__OriginalInnerStream_k__BackingField() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__OriginalInnerStream_k__BackingField() ;

constexpr void __cordl_internal_set__OriginalInnerStream_k__BackingField(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0xac8ce44, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  decodeStream, ::System::IO::Stream*  originalInnerStream) ;

/// [CompilerGenerated]
/// @brief Method get_OriginalInnerStream, addr 0xac8ce74, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::Stream* get_OriginalInnerStream() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContentDecodeStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContentDecodeStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContentDecodeStream(ContentDecodeStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContentDecodeStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContentDecodeStream(ContentDecodeStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10659};

/// [CompilerGenerated]
/// @brief Field <OriginalInnerStream>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::IO::Stream*  ____OriginalInnerStream_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ContentDecodeStream, ____OriginalInnerStream_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::System::Net::ContentDecodeStream) == 0x48, "Size mismatch!");

} // namespace end def System::Net
