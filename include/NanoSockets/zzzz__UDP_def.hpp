#pragma once
// IWYU pragma private; include "NanoSockets/UDP.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UDP)
namespace NanoSockets {
struct Address;
}
namespace NanoSockets {
struct Status;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace NanoSockets {
class UDP;
}
// Write type traits
MARK_REF_T(::NanoSockets::UDP*);
DEFINE_IL2CPP_CLASS(::NanoSockets::UDP*, "NanoSockets", "UDP");
// Dependencies System.Object
namespace NanoSockets {
// Is value type: false
// CS Name: NanoSockets.UDP
class CORDL_TYPE UDP : public ::System::Object {
public:
// Declarations
/// @brief Method Bind, addr 0xa367ddc, size 0x80, virtual false, abstract: false, final false
static inline int32_t Bind(int64_t  socket, ::by_ref<::NanoSockets::Address>  address) ;

/// @brief Method Create, addr 0xa367cdc, size 0x84, virtual false, abstract: false, final false
static inline int64_t Create(int32_t  sendBufferSize, int32_t  receiveBufferSize) ;

/// @brief Method Destroy, addr 0xa367d60, size 0x7c, virtual false, abstract: false, final false
static inline void Destroy(::by_ref<int64_t>  socket) ;

/// @brief Method GetAddress, addr 0xa368010, size 0x84, virtual false, abstract: false, final false
static inline ::NanoSockets::Status GetAddress(int64_t  socket, ::by_ref<::NanoSockets::Address>  address) ;

/// @brief Method GetIP, addr 0xa367be4, size 0x94, virtual false, abstract: false, final false
static inline ::NanoSockets::Status GetIP(::by_ref<::NanoSockets::Address>  address, ::System::IntPtr  ip, int32_t  ipLength) ;

/// @brief Method Initialize, addr 0xa367c78, size 0x64, virtual false, abstract: false, final false
static inline ::NanoSockets::Status Initialize() ;

/// @brief Method Receive, addr 0xa367f74, size 0x9c, virtual false, abstract: false, final false
static inline int32_t Receive(int64_t  socket, ::NanoSockets::Address*  address, uint8_t*  buffer, int32_t  bufferLength) ;

/// @brief Method Send, addr 0xa367ed8, size 0x9c, virtual false, abstract: false, final false
static inline int32_t Send(int64_t  socket, ::NanoSockets::Address*  address, uint8_t*  buffer, int32_t  bufferLength) ;

/// @brief Method SetIP, addr 0xa368094, size 0xa0, virtual false, abstract: false, final false
static inline ::NanoSockets::Status SetIP(::by_ref<::NanoSockets::Address>  address, ::StringW  ip) ;

/// @brief Method SetNonBlocking, addr 0xa367e5c, size 0x7c, virtual false, abstract: false, final false
static inline ::NanoSockets::Status SetNonBlocking(int64_t  socket) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UDP() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UDP", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UDP(UDP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UDP", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UDP(UDP const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33106};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::NanoSockets::UDP) == 0x10, "Size mismatch!");

} // namespace end def NanoSockets
