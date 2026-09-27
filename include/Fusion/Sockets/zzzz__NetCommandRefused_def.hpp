#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetCommandRefused.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetCommandHeader_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectFailedReason_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetCommandRefused)
namespace Fusion::Sockets {
struct NetConnectFailedReason;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetCommandRefused;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetCommandRefused);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetCommandRefused, "Fusion.Sockets", "NetCommandRefused");
// Dependencies Fusion.Sockets.NetCommandHeader, Fusion.Sockets.NetConnectFailedReason
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetCommandRefused
struct CORDL_TYPE NetCommandRefused {
public:
// Declarations
/// @brief Field Header, offset 0x0, size 0x2 
 __declspec(property(get=__cordl_internal_get_Header, put=__cordl_internal_set_Header)) ::Fusion::Sockets::NetCommandHeader  Header;

/// @brief Field Reason, offset 0x2, size 0x1 
 __declspec(property(get=__cordl_internal_get_Reason, put=__cordl_internal_set_Reason)) ::Fusion::Sockets::NetConnectFailedReason  Reason;

/// @brief Method Create, addr 0x6029b68, size 0xc, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetCommandRefused Create(::Fusion::Sockets::NetConnectFailedReason  reason) ;

constexpr ::Fusion::Sockets::NetCommandHeader const& __cordl_internal_get_Header() const;

constexpr ::Fusion::Sockets::NetCommandHeader& __cordl_internal_get_Header() ;

constexpr ::Fusion::Sockets::NetConnectFailedReason const& __cordl_internal_get_Reason() const;

constexpr ::Fusion::Sockets::NetConnectFailedReason& __cordl_internal_get_Reason() ;

constexpr void __cordl_internal_set_Header(::Fusion::Sockets::NetCommandHeader  value) ;

constexpr void __cordl_internal_set_Reason(::Fusion::Sockets::NetConnectFailedReason  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetCommandRefused() ;

// Ctor Parameters [CppParam { name: "Header", ty: "::Fusion::Sockets::NetCommandHeader", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reason", ty: "::Fusion::Sockets::NetConnectFailedReason", modifiers: "", def_value: None, comment: None }]
constexpr NetCommandRefused(::Fusion::Sockets::NetCommandHeader  Header, ::Fusion::Sockets::NetConnectFailedReason  Reason) noexcept;

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
/// @brief Padding field 0x2
 uint8_t  ___Reason_padding[0x2];
/// @brief Field Reason, offset: 0x2, size: 0x1, def value: None
 ::Fusion::Sockets::NetConnectFailedReason  ___Reason;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2 for alignment
 uint8_t  ___Reason_padding_forAlignment[0x2];
/// @brief Field Reason, offset: 0x2, size: 0x1, def value: None
 ::Fusion::Sockets::NetConnectFailedReason  ___Reason_forAlignment;
};
};
public:

/// @brief Field SIZE_IN_BITS offset 0xffffffff size 0x4
static constexpr int32_t  SIZE_IN_BITS{static_cast<int32_t>(0x18)};

/// @brief Field SIZE_IN_BYTES offset 0xffffffff size 0x4
static constexpr int32_t  SIZE_IN_BYTES{static_cast<int32_t>(0x3)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29350};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::NetCommandRefused) == 0x3, "Size mismatch!");

} // namespace end def Fusion::Sockets
