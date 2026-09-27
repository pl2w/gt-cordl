#pragma once
// IWYU pragma private; include "Fusion/TickRate_Resolved.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TickRate_Resolved)
// Forward declare root types
namespace GlobalNamespace {
struct TickRate_Resolved;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TickRate_Resolved);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TickRate_Resolved, "Fusion", "TickRate/Resolved");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.TickRate/Resolved
struct CORDL_TYPE TickRate_Resolved {
public:
// Declarations
/// @brief Field Client, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Client, put=__cordl_internal_set_Client)) int32_t  Client;

/// @brief Field ClientSend, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_ClientSend, put=__cordl_internal_set_ClientSend)) int32_t  ClientSend;

 __declspec(property(get=get_ClientSendDelta)) double_t  ClientSendDelta;

 __declspec(property(get=get_ClientTickDelta)) double_t  ClientTickDelta;

 __declspec(property(get=get_ClientTickStride)) int32_t  ClientTickStride;

/// @brief Field Server, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_Server, put=__cordl_internal_set_Server)) int32_t  Server;

/// @brief Field ServerSend, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_ServerSend, put=__cordl_internal_set_ServerSend)) int32_t  ServerSend;

 __declspec(property(get=get_ServerSendDelta)) double_t  ServerSendDelta;

 __declspec(property(get=get_ServerTickDelta)) double_t  ServerTickDelta;

 __declspec(property(get=get_ServerTickStride)) int32_t  ServerTickStride;

/// @brief Method Inverse, addr 0x5fa63b4, size 0x1c, virtual false, abstract: false, final false
static inline double_t Inverse(int32_t  rate) ;

/// @brief Method ToString, addr 0x5fa61e4, size 0x1d0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_Client() const;

constexpr int32_t& __cordl_internal_get_Client() ;

constexpr int32_t const& __cordl_internal_get_ClientSend() const;

constexpr int32_t& __cordl_internal_get_ClientSend() ;

constexpr int32_t const& __cordl_internal_get_Server() const;

constexpr int32_t& __cordl_internal_get_Server() ;

constexpr int32_t const& __cordl_internal_get_ServerSend() const;

constexpr int32_t& __cordl_internal_get_ServerSend() ;

constexpr void __cordl_internal_set_Client(int32_t  value) ;

constexpr void __cordl_internal_set_ClientSend(int32_t  value) ;

constexpr void __cordl_internal_set_Server(int32_t  value) ;

constexpr void __cordl_internal_set_ServerSend(int32_t  value) ;

/// @brief Method .ctor, addr 0x5fa60e4, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  client, int32_t  clientSend, int32_t  server, int32_t  serverSend) ;

/// @brief Method get_ClientSendDelta, addr 0x5fa61bc, size 0x20, virtual false, abstract: false, final false
inline double_t get_ClientSendDelta() ;

/// @brief Method get_ClientTickDelta, addr 0x5fa619c, size 0x20, virtual false, abstract: false, final false
inline double_t get_ClientTickDelta() ;

/// @brief Method get_ClientTickStride, addr 0x5fa61dc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ClientTickStride() ;

/// @brief Method get_ServerSendDelta, addr 0x5fa616c, size 0x20, virtual false, abstract: false, final false
inline double_t get_ServerSendDelta() ;

/// @brief Method get_ServerTickDelta, addr 0x5fa614c, size 0x20, virtual false, abstract: false, final false
inline double_t get_ServerTickDelta() ;

/// @brief Method get_ServerTickStride, addr 0x5fa618c, size 0x10, virtual false, abstract: false, final false
inline int32_t get_ServerTickStride() ;

// Ctor Parameters []
// @brief default ctor
constexpr TickRate_Resolved() ;

// Ctor Parameters [CppParam { name: "Client", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ClientSend", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Server", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ServerSend", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TickRate_Resolved(int32_t  Client, int32_t  ClientSend, int32_t  Server, int32_t  ServerSend) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Client_padding[0x0];
/// @brief Field Client, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Client;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Client_padding_forAlignment[0x0];
/// @brief Field Client, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Client_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___ClientSend_padding[0x4];
/// @brief Field ClientSend, offset: 0x4, size: 0x4, def value: None
 int32_t  ___ClientSend;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___ClientSend_padding_forAlignment[0x4];
/// @brief Field ClientSend, offset: 0x4, size: 0x4, def value: None
 int32_t  ___ClientSend_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___Server_padding[0x8];
/// @brief Field Server, offset: 0x8, size: 0x4, def value: None
 int32_t  ___Server;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___Server_padding_forAlignment[0x8];
/// @brief Field Server, offset: 0x8, size: 0x4, def value: None
 int32_t  ___Server_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___ServerSend_padding[0xc];
/// @brief Field ServerSend, offset: 0xc, size: 0x4, def value: None
 int32_t  ___ServerSend;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___ServerSend_padding_forAlignment[0xc];
/// @brief Field ServerSend, offset: 0xc, size: 0x4, def value: None
 int32_t  ___ServerSend_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x10)};

/// @brief Field WORDS offset 0xffffffff size 0x4
static constexpr int32_t  WORDS{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19105};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TickRate_Resolved) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
