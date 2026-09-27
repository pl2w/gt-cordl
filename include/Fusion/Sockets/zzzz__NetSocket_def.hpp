#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetSocket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "NanoSockets/zzzz__Socket_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetSocket)
// Forward declare root types
namespace Fusion::Sockets {
struct NetSocket;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetSocket);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetSocket, "Fusion.Sockets", "NetSocket");
// Dependencies NanoSockets.Socket
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetSocket
struct CORDL_TYPE NetSocket {
public:
// Declarations
/// @brief Field Handle, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Handle, put=__cordl_internal_set_Handle)) int64_t  Handle;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Field NativeSocket, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_NativeSocket, put=__cordl_internal_set_NativeSocket)) ::NanoSockets::Socket  NativeSocket;

constexpr int64_t const& __cordl_internal_get_Handle() const;

constexpr int64_t& __cordl_internal_get_Handle() ;

constexpr ::NanoSockets::Socket const& __cordl_internal_get_NativeSocket() const;

constexpr ::NanoSockets::Socket& __cordl_internal_get_NativeSocket() ;

constexpr void __cordl_internal_set_Handle(int64_t  value) ;

constexpr void __cordl_internal_set_NativeSocket(::NanoSockets::Socket  value) ;

/// @brief Method get_IsCreated, addr 0x6033c8c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetSocket() ;

// Ctor Parameters [CppParam { name: "Handle", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NativeSocket", ty: "::NanoSockets::Socket", modifiers: "", def_value: None, comment: None }]
constexpr NetSocket(int64_t  Handle, ::NanoSockets::Socket  NativeSocket) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Handle_padding[0x0];
/// @brief Field Handle, offset: 0x0, size: 0x8, def value: None
 int64_t  ___Handle;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Handle_padding_forAlignment[0x0];
/// @brief Field Handle, offset: 0x0, size: 0x8, def value: None
 int64_t  ___Handle_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___NativeSocket_padding[0x0];
/// @brief Field NativeSocket, offset: 0x0, size: 0x8, def value: None
 ::NanoSockets::Socket  ___NativeSocket;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___NativeSocket_padding_forAlignment[0x0];
/// @brief Field NativeSocket, offset: 0x0, size: 0x8, def value: None
 ::NanoSockets::Socket  ___NativeSocket_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29390};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::NetSocket) == 0x8, "Size mismatch!");

} // namespace end def Fusion::Sockets
