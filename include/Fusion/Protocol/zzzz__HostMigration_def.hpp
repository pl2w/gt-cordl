#pragma once
// IWYU pragma private; include "Fusion/Protocol/HostMigration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Protocol/zzzz__Message_def.hpp"
#include "Fusion/Protocol/zzzz__PeerMode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HostMigration)
namespace Fusion::Protocol {
class BitStream;
}
// Forward declare root types
namespace Fusion::Protocol {
class HostMigration;
}
// Write type traits
MARK_REF_T(::Fusion::Protocol::HostMigration*);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::HostMigration*, "Fusion.Protocol", "HostMigration");
// Dependencies Fusion.Protocol.Message, Fusion.Protocol.PeerMode
namespace Fusion::Protocol {
// Is value type: false
// CS Name: Fusion.Protocol.HostMigration
class CORDL_TYPE HostMigration : public ::Fusion::Protocol::Message {
public:
// Declarations
/// @brief Field PeerMode, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_PeerMode, put=__cordl_internal_set_PeerMode)) ::Fusion::Protocol::PeerMode  PeerMode;

static inline ::Fusion::Protocol::HostMigration* New_ctor() ;

/// @brief Method SerializeProtected, addr 0x6023b14, size 0x3c, virtual true, abstract: false, final false
inline void SerializeProtected(::Fusion::Protocol::BitStream*  stream) ;

/// @brief Method ToString, addr 0x6023b50, size 0x1c0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Fusion::Protocol::PeerMode const& __cordl_internal_get_PeerMode() const;

constexpr ::Fusion::Protocol::PeerMode& __cordl_internal_get_PeerMode() ;

constexpr void __cordl_internal_set_PeerMode(::Fusion::Protocol::PeerMode  value) ;

/// @brief Method .ctor, addr 0x6023b08, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HostMigration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HostMigration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HostMigration(HostMigration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HostMigration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HostMigration(HostMigration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29319};

/// @brief Field PeerMode, offset: 0x28, size: 0x1, def value: None
 ::Fusion::Protocol::PeerMode  ___PeerMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::HostMigration, ___PeerMode) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::HostMigration) == 0x30, "Size mismatch!");

} // namespace end def Fusion::Protocol
