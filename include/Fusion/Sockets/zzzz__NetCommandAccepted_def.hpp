#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetCommandAccepted.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetCommandHeader_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetCommandAccepted)
namespace Fusion::Sockets {
struct NetConnectionId;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetCommandAccepted;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetCommandAccepted);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetCommandAccepted, "Fusion.Sockets", "NetCommandAccepted");
// Dependencies Fusion.Sockets.NetCommandHeader, Fusion.Sockets.NetConnectionId
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetCommandAccepted
struct CORDL_TYPE NetCommandAccepted {
public:
// Declarations
/// @brief Field AcceptedLocalId, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_AcceptedLocalId, put=__cordl_internal_set_AcceptedLocalId)) ::Fusion::Sockets::NetConnectionId  AcceptedLocalId;

/// @brief Field AcceptedRemoteId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AcceptedRemoteId, put=__cordl_internal_set_AcceptedRemoteId)) ::Fusion::Sockets::NetConnectionId  AcceptedRemoteId;

/// @brief Field Counter, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Counter, put=__cordl_internal_set_Counter)) uint32_t  Counter;

/// @brief Field Header, offset 0x0, size 0x2 
 __declspec(property(get=__cordl_internal_get_Header, put=__cordl_internal_set_Header)) ::Fusion::Sockets::NetCommandHeader  Header;

/// @brief Method Create, addr 0x6029b4c, size 0x1c, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetCommandAccepted Create(::Fusion::Sockets::NetConnectionId  localId, ::Fusion::Sockets::NetConnectionId  remoteId, uint32_t  counter) ;

constexpr ::Fusion::Sockets::NetConnectionId const& __cordl_internal_get_AcceptedLocalId() const;

constexpr ::Fusion::Sockets::NetConnectionId& __cordl_internal_get_AcceptedLocalId() ;

constexpr ::Fusion::Sockets::NetConnectionId const& __cordl_internal_get_AcceptedRemoteId() const;

constexpr ::Fusion::Sockets::NetConnectionId& __cordl_internal_get_AcceptedRemoteId() ;

constexpr uint32_t const& __cordl_internal_get_Counter() const;

constexpr uint32_t& __cordl_internal_get_Counter() ;

constexpr ::Fusion::Sockets::NetCommandHeader const& __cordl_internal_get_Header() const;

constexpr ::Fusion::Sockets::NetCommandHeader& __cordl_internal_get_Header() ;

constexpr void __cordl_internal_set_AcceptedLocalId(::Fusion::Sockets::NetConnectionId  value) ;

constexpr void __cordl_internal_set_AcceptedRemoteId(::Fusion::Sockets::NetConnectionId  value) ;

constexpr void __cordl_internal_set_Counter(uint32_t  value) ;

constexpr void __cordl_internal_set_Header(::Fusion::Sockets::NetCommandHeader  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetCommandAccepted() ;

// Ctor Parameters [CppParam { name: "Header", ty: "::Fusion::Sockets::NetCommandHeader", modifiers: "", def_value: None, comment: None }, CppParam { name: "AcceptedLocalId", ty: "::Fusion::Sockets::NetConnectionId", modifiers: "", def_value: None, comment: None }, CppParam { name: "AcceptedRemoteId", ty: "::Fusion::Sockets::NetConnectionId", modifiers: "", def_value: None, comment: None }, CppParam { name: "Counter", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetCommandAccepted(::Fusion::Sockets::NetCommandHeader  Header, ::Fusion::Sockets::NetConnectionId  AcceptedLocalId, ::Fusion::Sockets::NetConnectionId  AcceptedRemoteId, uint32_t  Counter) noexcept;

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
/// @brief Padding field 0x8
 uint8_t  ___AcceptedLocalId_padding[0x8];
/// @brief Field AcceptedLocalId, offset: 0x8, size: 0x8, def value: None
 ::Fusion::Sockets::NetConnectionId  ___AcceptedLocalId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___AcceptedLocalId_padding_forAlignment[0x8];
/// @brief Field AcceptedLocalId, offset: 0x8, size: 0x8, def value: None
 ::Fusion::Sockets::NetConnectionId  ___AcceptedLocalId_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___AcceptedRemoteId_padding[0x10];
/// @brief Field AcceptedRemoteId, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Sockets::NetConnectionId  ___AcceptedRemoteId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___AcceptedRemoteId_padding_forAlignment[0x10];
/// @brief Field AcceptedRemoteId, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Sockets::NetConnectionId  ___AcceptedRemoteId_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ___Counter_padding[0x18];
/// @brief Field Counter, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___Counter;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ___Counter_padding_forAlignment[0x18];
/// @brief Field Counter, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___Counter_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29349};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::NetCommandAccepted) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Sockets
