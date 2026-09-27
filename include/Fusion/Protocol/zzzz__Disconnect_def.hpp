#pragma once
// IWYU pragma private; include "Fusion/Protocol/Disconnect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Protocol/zzzz__DisconnectReason_def.hpp"
#include "Fusion/Protocol/zzzz__Message_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Disconnect)
namespace Fusion::Protocol {
class BitStream;
}
// Forward declare root types
namespace Fusion::Protocol {
class Disconnect;
}
// Write type traits
MARK_REF_T(::Fusion::Protocol::Disconnect*);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::Disconnect*, "Fusion.Protocol", "Disconnect");
// Dependencies Fusion.Protocol.DisconnectReason, Fusion.Protocol.Message
namespace Fusion::Protocol {
// Is value type: false
// CS Name: Fusion.Protocol.Disconnect
class CORDL_TYPE Disconnect : public ::Fusion::Protocol::Message {
public:
// Declarations
/// @brief Field DisconnectReason, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisconnectReason, put=__cordl_internal_set_DisconnectReason)) ::Fusion::Protocol::DisconnectReason  DisconnectReason;

static inline ::Fusion::Protocol::Disconnect* New_ctor() ;

/// @brief Method SerializeProtected, addr 0x60234e0, size 0xc4, virtual true, abstract: false, final false
inline void SerializeProtected(::Fusion::Protocol::BitStream*  stream) ;

/// @brief Method ToString, addr 0x60235a4, size 0x1c0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Fusion::Protocol::DisconnectReason const& __cordl_internal_get_DisconnectReason() const;

constexpr ::Fusion::Protocol::DisconnectReason& __cordl_internal_get_DisconnectReason() ;

constexpr void __cordl_internal_set_DisconnectReason(::Fusion::Protocol::DisconnectReason  value) ;

/// @brief Method .ctor, addr 0x60234d4, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Disconnect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Disconnect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Disconnect(Disconnect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Disconnect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Disconnect(Disconnect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29316};

/// @brief Field DisconnectReason, offset: 0x28, size: 0x1, def value: None
 ::Fusion::Protocol::DisconnectReason  ___DisconnectReason;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::Disconnect, ___DisconnectReason) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::Disconnect) == 0x30, "Size mismatch!");

} // namespace end def Fusion::Protocol
