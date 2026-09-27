#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetCommandConnect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetCommandConnect__TokenData_e__FixedBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__NetCommandConnect__UniqueId_e__FixedBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__NetCommandHeader_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionId_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetCommandConnect)
namespace Fusion::Sockets {
struct NetConnectionId;
}
namespace GlobalNamespace {
struct NetCommandConnect__TokenData_e__FixedBuffer;
}
namespace GlobalNamespace {
struct NetCommandConnect__UniqueId_e__FixedBuffer;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetCommandConnect;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetCommandConnect);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetCommandConnect, "Fusion.Sockets", "NetCommandConnect");
// Dependencies Fusion.Sockets.NetCommandConnect::<TokenData>e__FixedBuffer, Fusion.Sockets.NetCommandConnect::<UniqueId>e__FixedBuffer, Fusion.Sockets.NetCommandHeader, Fusion.Sockets.NetConnectionId
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetCommandConnect
struct CORDL_TYPE NetCommandConnect {
public:
// Declarations
using _TokenData_e__FixedBuffer = ::GlobalNamespace::NetCommandConnect__TokenData_e__FixedBuffer;

using _UniqueId_e__FixedBuffer = ::GlobalNamespace::NetCommandConnect__UniqueId_e__FixedBuffer;

/// @brief Field ConnectionId, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectionId, put=__cordl_internal_set_ConnectionId)) ::Fusion::Sockets::NetConnectionId  ConnectionId;

/// @brief Field Header, offset 0x0, size 0x2 
 __declspec(property(get=__cordl_internal_get_Header, put=__cordl_internal_set_Header)) ::Fusion::Sockets::NetCommandHeader  Header;

/// @brief Field TokenData, offset 0x10, size 0x80 
 __declspec(property(get=__cordl_internal_get_TokenData, put=__cordl_internal_set_TokenData)) ::GlobalNamespace::NetCommandConnect__TokenData_e__FixedBuffer  TokenData;

/// @brief Field TokenLength, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_TokenLength, put=__cordl_internal_set_TokenLength)) int32_t  TokenLength;

/// @brief Field UniqueId, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_UniqueId, put=__cordl_internal_set_UniqueId)) ::GlobalNamespace::NetCommandConnect__UniqueId_e__FixedBuffer  UniqueId;

/// @brief Method ClampTokenLength, addr 0x6029818, size 0x134, virtual false, abstract: false, final false
static inline int32_t ClampTokenLength(int32_t  tokenLength) ;

/// @brief Method Create, addr 0x6029a54, size 0xf8, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetCommandConnect Create(::Fusion::Sockets::NetConnectionId  id, uint8_t*  token, int32_t  tokenLength, uint8_t*  uniqueId) ;

/// @brief Method GetTokenDataAsArray, addr 0x602994c, size 0x90, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> GetTokenDataAsArray(::Fusion::Sockets::NetCommandConnect  command) ;

/// @brief Method GetUniqueIdAsArray, addr 0x60299dc, size 0x78, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> GetUniqueIdAsArray(::Fusion::Sockets::NetCommandConnect  command) ;

constexpr ::Fusion::Sockets::NetConnectionId const& __cordl_internal_get_ConnectionId() const;

constexpr ::Fusion::Sockets::NetConnectionId& __cordl_internal_get_ConnectionId() ;

constexpr ::Fusion::Sockets::NetCommandHeader const& __cordl_internal_get_Header() const;

constexpr ::Fusion::Sockets::NetCommandHeader& __cordl_internal_get_Header() ;

constexpr ::GlobalNamespace::NetCommandConnect__TokenData_e__FixedBuffer const& __cordl_internal_get_TokenData() const;

constexpr ::GlobalNamespace::NetCommandConnect__TokenData_e__FixedBuffer& __cordl_internal_get_TokenData() ;

constexpr int32_t const& __cordl_internal_get_TokenLength() const;

constexpr int32_t& __cordl_internal_get_TokenLength() ;

constexpr ::GlobalNamespace::NetCommandConnect__UniqueId_e__FixedBuffer const& __cordl_internal_get_UniqueId() const;

constexpr ::GlobalNamespace::NetCommandConnect__UniqueId_e__FixedBuffer& __cordl_internal_get_UniqueId() ;

constexpr void __cordl_internal_set_ConnectionId(::Fusion::Sockets::NetConnectionId  value) ;

constexpr void __cordl_internal_set_Header(::Fusion::Sockets::NetCommandHeader  value) ;

constexpr void __cordl_internal_set_TokenData(::GlobalNamespace::NetCommandConnect__TokenData_e__FixedBuffer  value) ;

constexpr void __cordl_internal_set_TokenLength(int32_t  value) ;

constexpr void __cordl_internal_set_UniqueId(::GlobalNamespace::NetCommandConnect__UniqueId_e__FixedBuffer  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetCommandConnect() ;

// Ctor Parameters [CppParam { name: "Header", ty: "::Fusion::Sockets::NetCommandHeader", modifiers: "", def_value: None, comment: None }, CppParam { name: "TokenLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ConnectionId", ty: "::Fusion::Sockets::NetConnectionId", modifiers: "", def_value: None, comment: None }, CppParam { name: "TokenData", ty: "::GlobalNamespace::NetCommandConnect__TokenData_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "UniqueId", ty: "::GlobalNamespace::NetCommandConnect__UniqueId_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr NetCommandConnect(::Fusion::Sockets::NetCommandHeader  Header, int32_t  TokenLength, ::Fusion::Sockets::NetConnectionId  ConnectionId, ::GlobalNamespace::NetCommandConnect__TokenData_e__FixedBuffer  TokenData, ::GlobalNamespace::NetCommandConnect__UniqueId_e__FixedBuffer  UniqueId) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Header_padding[0x0];
/// @brief Field Header, offset: 0x0, size: 0x2, def value: None
 ::Fusion::Sockets::NetCommandHeader  ___Header;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Header_padding_forAlignment[0x0];
/// @brief Field Header, offset: 0x0, size: 0x2, def value: None
 ::Fusion::Sockets::NetCommandHeader  ___Header_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___TokenLength_padding[0x4];
/// @brief Field TokenLength, offset: 0x4, size: 0x4, def value: None
 int32_t  ___TokenLength;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___TokenLength_padding_forAlignment[0x4];
/// @brief Field TokenLength, offset: 0x4, size: 0x4, def value: None
 int32_t  ___TokenLength_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___ConnectionId_padding[0x8];
/// @brief Field ConnectionId, offset: 0x8, size: 0x8, def value: None
 ::Fusion::Sockets::NetConnectionId  ___ConnectionId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___ConnectionId_padding_forAlignment[0x8];
/// @brief Field ConnectionId, offset: 0x8, size: 0x8, def value: None
 ::Fusion::Sockets::NetConnectionId  ___ConnectionId_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___TokenData_padding[0x10];
/// [FixedBuffer(typeof(System.Byte), 128)]
/// @brief Field TokenData, offset: 0x10, size: 0x80, def value: None
 ::GlobalNamespace::NetCommandConnect__TokenData_e__FixedBuffer  ___TokenData;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___TokenData_padding_forAlignment[0x10];
/// [FixedBuffer(typeof(System.Byte), 128)]
/// @brief Field TokenData, offset: 0x10, size: 0x80, def value: None
 ::GlobalNamespace::NetCommandConnect__TokenData_e__FixedBuffer  ___TokenData_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x90
 uint8_t  ___UniqueId_padding[0x90];
/// [FixedBuffer(typeof(System.Byte), 8)]
/// @brief Field UniqueId, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::NetCommandConnect__UniqueId_e__FixedBuffer  ___UniqueId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x90 for alignment
 uint8_t  ___UniqueId_padding_forAlignment[0x90];
/// [FixedBuffer(typeof(System.Byte), 8)]
/// @brief Field UniqueId, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::NetCommandConnect__UniqueId_e__FixedBuffer  ___UniqueId_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29348};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x98};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::NetCommandConnect) == 0x98, "Size mismatch!");

} // namespace end def Fusion::Sockets
