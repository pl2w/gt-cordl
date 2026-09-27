#pragma once
// IWYU pragma private; include "Fusion/Protocol/ChangeMasterClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Protocol/zzzz__Message_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChangeMasterClient)
namespace Fusion::Protocol {
class BitStream;
}
namespace Fusion::Protocol {
struct ProtocolMessageVersion;
}
namespace System {
class Version;
}
// Forward declare root types
namespace Fusion::Protocol {
class ChangeMasterClient;
}
// Write type traits
MARK_REF_T(::Fusion::Protocol::ChangeMasterClient*);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::ChangeMasterClient*, "Fusion.Protocol", "ChangeMasterClient");
// Dependencies Fusion.Protocol.Message
namespace Fusion::Protocol {
// Is value type: false
// CS Name: Fusion.Protocol.ChangeMasterClient
class CORDL_TYPE ChangeMasterClient : public ::Fusion::Protocol::Message {
public:
// Declarations
/// @brief Field NewMasterClientCandidate, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_NewMasterClientCandidate, put=__cordl_internal_set_NewMasterClientCandidate)) int32_t  NewMasterClientCandidate;

static inline ::Fusion::Protocol::ChangeMasterClient* New_ctor() ;

static inline ::Fusion::Protocol::ChangeMasterClient* New_ctor(int32_t  newMasterClientCandidate, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion) ;

/// @brief Method SerializeProtected, addr 0x6022d68, size 0x20, virtual true, abstract: false, final false
inline void SerializeProtected(::Fusion::Protocol::BitStream*  stream) ;

/// @brief Method ToString, addr 0x6022d88, size 0x1b4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_NewMasterClientCandidate() const;

constexpr int32_t& __cordl_internal_get_NewMasterClientCandidate() ;

constexpr void __cordl_internal_set_NewMasterClientCandidate(int32_t  value) ;

/// @brief Method .ctor, addr 0x6022c84, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x6022d3c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(int32_t  newMasterClientCandidate, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChangeMasterClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChangeMasterClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangeMasterClient(ChangeMasterClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangeMasterClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangeMasterClient(ChangeMasterClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29314};

/// @brief Field NewMasterClientCandidate, offset: 0x28, size: 0x4, def value: None
 int32_t  ___NewMasterClientCandidate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::ChangeMasterClient, ___NewMasterClientCandidate) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::ChangeMasterClient) == 0x30, "Size mismatch!");

} // namespace end def Fusion::Protocol
