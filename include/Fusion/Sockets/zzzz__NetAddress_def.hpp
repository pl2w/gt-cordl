#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetAddress.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "NanoSockets/zzzz__Address_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetAddress)
namespace Fusion::Protocol {
class BitStream;
}
namespace Fusion::Sockets {
class NetAddress_SubnetMask;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion::Sockets {
class NetAddress_SubnetMask;
}
namespace Fusion::Sockets {
struct NetAddress;
}
// Write type traits
MARK_REF_T(::Fusion::Sockets::NetAddress_SubnetMask*);
MARK_VAL_T(::Fusion::Sockets::NetAddress);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetAddress_SubnetMask*, "Fusion.Sockets", "NetAddress/SubnetMask");
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetAddress, "Fusion.Sockets", "NetAddress");
// Dependencies Fusion.Sockets.NetAddress, System.Object
namespace Fusion::Sockets {
// Is value type: false
// CS Name: Fusion.Sockets.NetAddress/SubnetMask
class CORDL_TYPE NetAddress_SubnetMask : public ::System::Object {
public:
// Declarations
/// @brief Field <SubnetMasks>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__SubnetMasks_k__BackingField, put=setStaticF__SubnetMasks_k__BackingField)) ::ArrayW<::Fusion::Sockets::NetAddress>  _SubnetMasks_k__BackingField;

/// @brief Method GetNetworkAddress, addr 0x6026f6c, size 0xbc, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetAddress GetNetworkAddress(::Fusion::Sockets::NetAddress  netAddress, ::Fusion::Sockets::NetAddress  subnetMask) ;

/// @brief Method IsSameSubNet, addr 0x6026c2c, size 0x340, virtual false, abstract: false, final false
static inline bool IsSameSubNet(::Fusion::Sockets::NetAddress  addressA, ::Fusion::Sockets::NetAddress  addressB) ;

static inline ::ArrayW<::Fusion::Sockets::NetAddress> getStaticF__SubnetMasks_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_SubnetMasks, addr 0x6026bd4, size 0x58, virtual false, abstract: false, final false
static inline ::ArrayW<::Fusion::Sockets::NetAddress> get_SubnetMasks() ;

static inline void setStaticF__SubnetMasks_k__BackingField(::ArrayW<::Fusion::Sockets::NetAddress>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetAddress_SubnetMask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetAddress_SubnetMask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetAddress_SubnetMask(NetAddress_SubnetMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetAddress_SubnetMask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetAddress_SubnetMask(NetAddress_SubnetMask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29336};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::NetAddress_SubnetMask) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Sockets
// Dependencies NanoSockets.Address
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetAddress
struct CORDL_TYPE NetAddress {
public:
// Declarations
using SubnetMask = ::Fusion::Sockets::NetAddress_SubnetMask;

 __declspec(property(get=get_ActorId)) int32_t  ActorId;

/// @brief Field AnyIPv4Addr, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_AnyIPv4Addr, put=setStaticF_AnyIPv4Addr)) ::Fusion::Sockets::NetAddress  AnyIPv4Addr;

/// @brief Field AnyIPv6Addr, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_AnyIPv6Addr, put=setStaticF_AnyIPv6Addr)) ::Fusion::Sockets::NetAddress  AnyIPv6Addr;

/// @brief Field Block0, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Block0, put=__cordl_internal_set_Block0)) uint64_t  Block0;

/// @brief Field Block1, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_Block1, put=__cordl_internal_set_Block1)) uint64_t  Block1;

/// @brief Field Block2, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Block2, put=__cordl_internal_set_Block2)) uint64_t  Block2;

 __declspec(property(get=get_HasAddress)) bool  HasAddress;

 __declspec(property(get=get_IsIPv4)) bool  IsIPv4;

 __declspec(property(get=get_IsIPv6)) bool  IsIPv6;

 __declspec(property(get=get_IsRelayAddr)) bool  IsRelayAddr;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field NativeAddress, offset 0x0, size 0x18 
 __declspec(property(get=__cordl_internal_get_NativeAddress, put=__cordl_internal_set_NativeAddress)) ::NanoSockets::Address  NativeAddress;

/// @brief Field _actorId, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__actorId, put=__cordl_internal_set__actorId)) int32_t  _actorId;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::Sockets::NetAddress>"
constexpr operator  ::System::IEquatable_1<::Fusion::Sockets::NetAddress>*() ;

/// @brief Method Any, addr 0x6026280, size 0xb8, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetAddress Any(uint16_t  port) ;

/// @brief Method CreateFromIpPort, addr 0x6026338, size 0x1b4, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetAddress CreateFromIpPort(::StringW  ip, uint16_t  port) ;

/// @brief Method Equals, addr 0x60264ec, size 0xb0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x60260e8, size 0x3c, virtual true, abstract: false, final true
inline bool Equals(::Fusion::Sockets::NetAddress  other) ;

/// @brief Method FromActorId, addr 0x60261f0, size 0x6c, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetAddress FromActorId(int32_t  actorId) ;

/// @brief Method GetHashCode, addr 0x602659c, size 0x50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Hash64, addr 0x602625c, size 0x24, virtual false, abstract: false, final false
static inline uint64_t Hash64(::Fusion::Sockets::NetAddress  address) ;

/// @brief Method Serialize, addr 0x6024c80, size 0x44, virtual false, abstract: false, final false
inline void Serialize(::Fusion::Protocol::BitStream*  stream) ;

/// @brief Method ToString, addr 0x60265ec, size 0x584, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr uint64_t const& __cordl_internal_get_Block0() const;

constexpr uint64_t& __cordl_internal_get_Block0() ;

constexpr uint64_t const& __cordl_internal_get_Block1() const;

constexpr uint64_t& __cordl_internal_get_Block1() ;

constexpr uint64_t const& __cordl_internal_get_Block2() const;

constexpr uint64_t& __cordl_internal_get_Block2() ;

constexpr ::NanoSockets::Address const& __cordl_internal_get_NativeAddress() const;

constexpr ::NanoSockets::Address& __cordl_internal_get_NativeAddress() ;

constexpr int32_t const& __cordl_internal_get__actorId() const;

constexpr int32_t& __cordl_internal_get__actorId() ;

constexpr void __cordl_internal_set_Block0(uint64_t  value) ;

constexpr void __cordl_internal_set_Block1(uint64_t  value) ;

constexpr void __cordl_internal_set_Block2(uint64_t  value) ;

constexpr void __cordl_internal_set_NativeAddress(::NanoSockets::Address  value) ;

constexpr void __cordl_internal_set__actorId(int32_t  value) ;

static inline ::Fusion::Sockets::NetAddress getStaticF_AnyIPv4Addr() ;

static inline ::Fusion::Sockets::NetAddress getStaticF_AnyIPv6Addr() ;

/// @brief Method get_ActorId, addr 0x6025f88, size 0xc, virtual false, abstract: false, final false
inline int32_t get_ActorId() ;

/// @brief Method get_HasAddress, addr 0x6026124, size 0xcc, virtual false, abstract: false, final false
inline bool get_HasAddress() ;

/// @brief Method get_IsIPv4, addr 0x6026074, size 0x74, virtual false, abstract: false, final false
inline bool get_IsIPv4() ;

/// @brief Method get_IsIPv6, addr 0x6025ff0, size 0x84, virtual false, abstract: false, final false
inline bool get_IsIPv6() ;

/// @brief Method get_IsRelayAddr, addr 0x6025f94, size 0x5c, virtual false, abstract: false, final false
inline bool get_IsRelayAddr() ;

/// @brief Method get_IsValid, addr 0x6024a34, size 0xdc, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::Sockets::NetAddress>"
constexpr ::System::IEquatable_1<::Fusion::Sockets::NetAddress>* i___System__IEquatable_1___Fusion__Sockets__NetAddress_() ;

static inline void setStaticF_AnyIPv4Addr(::Fusion::Sockets::NetAddress  value) ;

static inline void setStaticF_AnyIPv6Addr(::Fusion::Sockets::NetAddress  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetAddress() ;

// Ctor Parameters [CppParam { name: "NativeAddress", ty: "::NanoSockets::Address", modifiers: "", def_value: None, comment: None }, CppParam { name: "Block0", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Block1", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Block2", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_actorId", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetAddress(::NanoSockets::Address  NativeAddress, uint64_t  Block0, uint64_t  Block1, uint64_t  Block2, int32_t  _actorId) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___NativeAddress_padding[0x0];
/// @brief Field NativeAddress, offset: 0x0, size: 0x18, def value: None
 ::NanoSockets::Address  ___NativeAddress;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___NativeAddress_padding_forAlignment[0x0];
/// @brief Field NativeAddress, offset: 0x0, size: 0x18, def value: None
 ::NanoSockets::Address  ___NativeAddress_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Block0_padding[0x0];
/// @brief Field Block0, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___Block0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Block0_padding_forAlignment[0x0];
/// @brief Field Block0, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___Block0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___Block1_padding[0x8];
/// @brief Field Block1, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___Block1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___Block1_padding_forAlignment[0x8];
/// @brief Field Block1, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___Block1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___Block2_padding[0x10];
/// @brief Field Block2, offset: 0x10, size: 0x8, def value: None
 uint64_t  ___Block2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___Block2_padding_forAlignment[0x10];
/// @brief Field Block2, offset: 0x10, size: 0x8, def value: None
 uint64_t  ___Block2_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x14
 uint8_t  ____actorId_padding[0x14];
/// @brief Field _actorId, offset: 0x14, size: 0x4, def value: None
 int32_t  ____actorId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x14 for alignment
 uint8_t  ____actorId_padding_forAlignment[0x14];
/// @brief Field _actorId, offset: 0x14, size: 0x4, def value: None
 int32_t  ____actorId_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29337};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::NetAddress) == 0x18, "Size mismatch!");

} // namespace end def Fusion::Sockets
