#pragma once
// IWYU pragma private; include "Fusion/Protocol/PlayerRefMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Protocol/zzzz__Message_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerRefMapping)
namespace Fusion::Protocol {
class BitStream;
}
// Forward declare root types
namespace Fusion::Protocol {
class PlayerRefMapping;
}
// Write type traits
MARK_REF_T(::Fusion::Protocol::PlayerRefMapping*);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::PlayerRefMapping*, "Fusion.Protocol", "PlayerRefMapping");
// Dependencies Fusion.Protocol.Message
namespace Fusion::Protocol {
// Is value type: false
// CS Name: Fusion.Protocol.PlayerRefMapping
class CORDL_TYPE PlayerRefMapping : public ::Fusion::Protocol::Message {
public:
// Declarations
/// @brief Field ActorId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ActorId, put=__cordl_internal_set_ActorId)) int32_t  ActorId;

/// @brief Field PlayerRef, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayerRef, put=__cordl_internal_set_PlayerRef)) int32_t  PlayerRef;

/// @brief Field UniqueId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_UniqueId, put=__cordl_internal_set_UniqueId)) ::ArrayW<uint8_t>  UniqueId;

static inline ::Fusion::Protocol::PlayerRefMapping* New_ctor() ;

/// @brief Method SerializeProtected, addr 0x602463c, size 0x4c, virtual true, abstract: false, final false
inline void SerializeProtected(::Fusion::Protocol::BitStream*  stream) ;

/// @brief Method ToString, addr 0x6024688, size 0x314, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_ActorId() const;

constexpr int32_t& __cordl_internal_get_ActorId() ;

constexpr int32_t const& __cordl_internal_get_PlayerRef() const;

constexpr int32_t& __cordl_internal_get_PlayerRef() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_UniqueId() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_UniqueId() ;

constexpr void __cordl_internal_set_ActorId(int32_t  value) ;

constexpr void __cordl_internal_set_PlayerRef(int32_t  value) ;

constexpr void __cordl_internal_set_UniqueId(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x602499c, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerRefMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerRefMapping", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerRefMapping(PlayerRefMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerRefMapping", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerRefMapping(PlayerRefMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29326};

/// @brief Field ActorId, offset: 0x28, size: 0x4, def value: None
 int32_t  ___ActorId;

/// @brief Field PlayerRef, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___PlayerRef;

/// @brief Field UniqueId, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___UniqueId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::PlayerRefMapping, ___ActorId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::PlayerRefMapping, ___PlayerRef) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::PlayerRefMapping, ___UniqueId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::PlayerRefMapping) == 0x38, "Size mismatch!");

} // namespace end def Fusion::Protocol
