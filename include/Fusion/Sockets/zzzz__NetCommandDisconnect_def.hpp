#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetCommandDisconnect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetCommandDisconnect__TokenData_e__FixedBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__NetCommandHeader_def.hpp"
#include "Fusion/Sockets/zzzz__NetDisconnectReason_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetCommandDisconnect)
namespace Fusion::Sockets {
struct NetDisconnectReason;
}
namespace GlobalNamespace {
struct NetCommandDisconnect__TokenData_e__FixedBuffer;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetCommandDisconnect;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetCommandDisconnect);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetCommandDisconnect, "Fusion.Sockets", "NetCommandDisconnect");
// Dependencies Fusion.Sockets.NetCommandDisconnect::<TokenData>e__FixedBuffer, Fusion.Sockets.NetCommandHeader, Fusion.Sockets.NetDisconnectReason
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetCommandDisconnect
struct CORDL_TYPE NetCommandDisconnect {
public:
// Declarations
using _TokenData_e__FixedBuffer = ::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer;

/// @brief Field Header, offset 0x0, size 0x2 
 __declspec(property(get=__cordl_internal_get_Header, put=__cordl_internal_set_Header)) ::Fusion::Sockets::NetCommandHeader  Header;

/// @brief Field Reason, offset 0x2, size 0x1 
 __declspec(property(get=__cordl_internal_get_Reason, put=__cordl_internal_set_Reason)) ::Fusion::Sockets::NetDisconnectReason  Reason;

/// @brief Field TokenData, offset 0x8, size 0x80 
 __declspec(property(get=__cordl_internal_get_TokenData, put=__cordl_internal_set_TokenData)) ::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer  TokenData;

/// @brief Field TokenLength, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_TokenLength, put=__cordl_internal_set_TokenLength)) int32_t  TokenLength;

/// @brief Method Create, addr 0x6029b74, size 0x1a4, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetCommandDisconnect Create(::Fusion::Sockets::NetDisconnectReason  reason, ::ArrayW<uint8_t>  token) ;

/// @brief Method Create, addr 0x6029d18, size 0x120, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetCommandDisconnect Create(::Fusion::Sockets::NetDisconnectReason  reason, uint8_t*  token, int32_t  tokenLength) ;

constexpr ::Fusion::Sockets::NetCommandHeader const& __cordl_internal_get_Header() const;

constexpr ::Fusion::Sockets::NetCommandHeader& __cordl_internal_get_Header() ;

constexpr ::Fusion::Sockets::NetDisconnectReason const& __cordl_internal_get_Reason() const;

constexpr ::Fusion::Sockets::NetDisconnectReason& __cordl_internal_get_Reason() ;

constexpr ::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer const& __cordl_internal_get_TokenData() const;

constexpr ::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer& __cordl_internal_get_TokenData() ;

constexpr int32_t const& __cordl_internal_get_TokenLength() const;

constexpr int32_t& __cordl_internal_get_TokenLength() ;

constexpr void __cordl_internal_set_Header(::Fusion::Sockets::NetCommandHeader  value) ;

constexpr void __cordl_internal_set_Reason(::Fusion::Sockets::NetDisconnectReason  value) ;

constexpr void __cordl_internal_set_TokenData(::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer  value) ;

constexpr void __cordl_internal_set_TokenLength(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetCommandDisconnect() ;

// Ctor Parameters [CppParam { name: "Header", ty: "::Fusion::Sockets::NetCommandHeader", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reason", ty: "::Fusion::Sockets::NetDisconnectReason", modifiers: "", def_value: None, comment: None }, CppParam { name: "TokenLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TokenData", ty: "::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr NetCommandDisconnect(::Fusion::Sockets::NetCommandHeader  Header, ::Fusion::Sockets::NetDisconnectReason  Reason, int32_t  TokenLength, ::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer  TokenData) noexcept;

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
 ::Fusion::Sockets::NetDisconnectReason  ___Reason;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2 for alignment
 uint8_t  ___Reason_padding_forAlignment[0x2];
/// @brief Field Reason, offset: 0x2, size: 0x1, def value: None
 ::Fusion::Sockets::NetDisconnectReason  ___Reason_forAlignment;
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
 uint8_t  ___TokenData_padding[0x8];
/// [FixedBuffer(typeof(System.Byte), 128)]
/// @brief Field TokenData, offset: 0x8, size: 0x80, def value: None
 ::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer  ___TokenData;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___TokenData_padding_forAlignment[0x8];
/// [FixedBuffer(typeof(System.Byte), 128)]
/// @brief Field TokenData, offset: 0x8, size: 0x80, def value: None
 ::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer  ___TokenData_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29352};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::NetCommandDisconnect) == 0x88, "Size mismatch!");

} // namespace end def Fusion::Sockets
