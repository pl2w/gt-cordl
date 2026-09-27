#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetNotifyHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetPacketType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetNotifyHeader)
// Forward declare root types
namespace Fusion::Sockets {
struct NetNotifyHeader;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetNotifyHeader);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetNotifyHeader, "Fusion.Sockets", "NetNotifyHeader");
// Dependencies Fusion.Sockets.NetPacketType
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetNotifyHeader
struct CORDL_TYPE NetNotifyHeader {
public:
// Declarations
/// @brief Field AckMask, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_AckMask, put=__cordl_internal_set_AckMask)) uint64_t  AckMask;

/// @brief Field AckSequence, offset 0x4, size 0x2 
 __declspec(property(get=__cordl_internal_get_AckSequence, put=__cordl_internal_set_AckSequence)) uint16_t  AckSequence;

/// @brief Field Fragment, offset 0x1, size 0x1 
 __declspec(property(get=__cordl_internal_get_Fragment, put=__cordl_internal_set_Fragment)) uint8_t  Fragment;

/// @brief Field PacketType, offset 0x0, size 0x1 
 __declspec(property(get=__cordl_internal_get_PacketType, put=__cordl_internal_set_PacketType)) ::Fusion::Sockets::NetPacketType  PacketType;

/// @brief Field Sequence, offset 0x2, size 0x2 
 __declspec(property(get=__cordl_internal_get_Sequence, put=__cordl_internal_set_Sequence)) uint16_t  Sequence;

/// @brief Method CreateAcks, addr 0x602bcac, size 0x1c, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetNotifyHeader CreateAcks(uint16_t  ackSequence, uint64_t  ackMask) ;

/// @brief Method CreateData, addr 0x602bc8c, size 0x20, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetNotifyHeader CreateData(uint16_t  sequence, uint16_t  ackSequence, uint64_t  ackMask) ;

/// @brief Method ToString, addr 0x602ba34, size 0x258, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr uint64_t const& __cordl_internal_get_AckMask() const;

constexpr uint64_t& __cordl_internal_get_AckMask() ;

constexpr uint16_t const& __cordl_internal_get_AckSequence() const;

constexpr uint16_t& __cordl_internal_get_AckSequence() ;

constexpr uint8_t const& __cordl_internal_get_Fragment() const;

constexpr uint8_t& __cordl_internal_get_Fragment() ;

constexpr ::Fusion::Sockets::NetPacketType const& __cordl_internal_get_PacketType() const;

constexpr ::Fusion::Sockets::NetPacketType& __cordl_internal_get_PacketType() ;

constexpr uint16_t const& __cordl_internal_get_Sequence() const;

constexpr uint16_t& __cordl_internal_get_Sequence() ;

constexpr void __cordl_internal_set_AckMask(uint64_t  value) ;

constexpr void __cordl_internal_set_AckSequence(uint16_t  value) ;

constexpr void __cordl_internal_set_Fragment(uint8_t  value) ;

constexpr void __cordl_internal_set_PacketType(::Fusion::Sockets::NetPacketType  value) ;

constexpr void __cordl_internal_set_Sequence(uint16_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetNotifyHeader() ;

// Ctor Parameters [CppParam { name: "PacketType", ty: "::Fusion::Sockets::NetPacketType", modifiers: "", def_value: None, comment: None }, CppParam { name: "Fragment", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Sequence", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AckSequence", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AckMask", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr NetNotifyHeader(::Fusion::Sockets::NetPacketType  PacketType, uint8_t  Fragment, uint16_t  Sequence, uint16_t  AckSequence, uint64_t  AckMask) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___PacketType_padding[0x0];
/// @brief Field PacketType, offset: 0x0, size: 0x1, def value: None
 ::Fusion::Sockets::NetPacketType  ___PacketType;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___PacketType_padding_forAlignment[0x0];
/// @brief Field PacketType, offset: 0x0, size: 0x1, def value: None
 ::Fusion::Sockets::NetPacketType  ___PacketType_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1
 uint8_t  ___Fragment_padding[0x1];
/// @brief Field Fragment, offset: 0x1, size: 0x1, def value: None
 uint8_t  ___Fragment;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1 for alignment
 uint8_t  ___Fragment_padding_forAlignment[0x1];
/// @brief Field Fragment, offset: 0x1, size: 0x1, def value: None
 uint8_t  ___Fragment_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2
 uint8_t  ___Sequence_padding[0x2];
/// @brief Field Sequence, offset: 0x2, size: 0x2, def value: None
 uint16_t  ___Sequence;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2 for alignment
 uint8_t  ___Sequence_padding_forAlignment[0x2];
/// @brief Field Sequence, offset: 0x2, size: 0x2, def value: None
 uint16_t  ___Sequence_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___AckSequence_padding[0x4];
/// @brief Field AckSequence, offset: 0x4, size: 0x2, def value: None
 uint16_t  ___AckSequence;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___AckSequence_padding_forAlignment[0x4];
/// @brief Field AckSequence, offset: 0x4, size: 0x2, def value: None
 uint16_t  ___AckSequence_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___AckMask_padding[0x8];
/// @brief Field AckMask, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___AckMask;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___AckMask_padding_forAlignment[0x8];
/// @brief Field AckMask, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___AckMask_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29372};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::NetNotifyHeader) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Sockets
