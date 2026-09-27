#pragma once
// IWYU pragma private; include "System/Net/ClosableStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__DelegatedStream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClosableStream)
namespace System::IO {
class Stream;
}
namespace System {
class EventHandler;
}
// Forward declare root types
namespace System::Net {
class ClosableStream;
}
// Write type traits
MARK_REF_T(::System::Net::ClosableStream*);
DEFINE_IL2CPP_CLASS(::System::Net::ClosableStream*, "System.Net", "ClosableStream");
// Dependencies System.Net.DelegatedStream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ClosableStream
class CORDL_TYPE ClosableStream : public ::System::Net::DelegatedStream {
public:
// Declarations
/// @brief Field _closed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__closed, put=__cordl_internal_set__closed)) int32_t  _closed;

/// @brief Field _onClose, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__onClose, put=__cordl_internal_set__onClose)) ::System::EventHandler*  _onClose;

/// @brief Method Close, addr 0xadafa00, size 0x90, virtual true, abstract: false, final false
inline void Close() ;

static inline ::System::Net::ClosableStream* New_ctor(::System::IO::Stream*  stream, ::System::EventHandler*  onClose) ;

constexpr int32_t const& __cordl_internal_get__closed() const;

constexpr int32_t& __cordl_internal_get__closed() ;

constexpr ::System::EventHandler* const& __cordl_internal_get__onClose() const;

constexpr ::System::EventHandler*& __cordl_internal_get__onClose() ;

constexpr void __cordl_internal_set__closed(int32_t  value) ;

constexpr void __cordl_internal_set__onClose(::System::EventHandler*  value) ;

/// @brief Method .ctor, addr 0xadaf9d4, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::System::EventHandler*  onClose) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClosableStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClosableStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClosableStream(ClosableStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClosableStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClosableStream(ClosableStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10406};

/// @brief Field _onClose, offset: 0x38, size: 0x8, def value: None
 ::System::EventHandler*  ____onClose;

/// @brief Field _closed, offset: 0x40, size: 0x4, def value: None
 int32_t  ____closed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ClosableStream, ____onClose) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::ClosableStream, ____closed) == 0x40, "Offset mismatch!");

static_assert(sizeof(::System::Net::ClosableStream) == 0x48, "Size mismatch!");

} // namespace end def System::Net
