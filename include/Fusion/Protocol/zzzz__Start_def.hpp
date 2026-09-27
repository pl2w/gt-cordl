#pragma once
// IWYU pragma private; include "Fusion/Protocol/Start.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Protocol/zzzz__Message_def.hpp"
#include "Fusion/Protocol/zzzz__StartRequests_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Start)
namespace Fusion::Protocol {
class BitStream;
}
// Forward declare root types
namespace Fusion::Protocol {
class Start;
}
// Write type traits
MARK_REF_T(::Fusion::Protocol::Start*);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::Start*, "Fusion.Protocol", "Start");
// Dependencies Fusion.Protocol.Message, Fusion.Protocol.StartRequests
namespace Fusion::Protocol {
// Is value type: false
// CS Name: Fusion.Protocol.Start
class CORDL_TYPE Start : public ::Fusion::Protocol::Message {
public:
// Declarations
/// @brief Field RemoteServerID, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_RemoteServerID, put=__cordl_internal_set_RemoteServerID)) int32_t  RemoteServerID;

/// @brief Field StartRequests, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_StartRequests, put=__cordl_internal_set_StartRequests)) ::Fusion::Protocol::StartRequests  StartRequests;

static inline ::Fusion::Protocol::Start* New_ctor() ;

/// @brief Method SerializeProtected, addr 0x6025934, size 0x54, virtual true, abstract: false, final false
inline void SerializeProtected(::Fusion::Protocol::BitStream*  stream) ;

/// @brief Method ToString, addr 0x6025988, size 0x25c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_RemoteServerID() const;

constexpr int32_t& __cordl_internal_get_RemoteServerID() ;

constexpr ::Fusion::Protocol::StartRequests const& __cordl_internal_get_StartRequests() const;

constexpr ::Fusion::Protocol::StartRequests& __cordl_internal_get_StartRequests() ;

constexpr void __cordl_internal_set_RemoteServerID(int32_t  value) ;

constexpr void __cordl_internal_set_StartRequests(::Fusion::Protocol::StartRequests  value) ;

/// @brief Method .ctor, addr 0x6025928, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Start() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Start", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Start(Start && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Start", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Start(Start const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29331};

/// @brief Field RemoteServerID, offset: 0x28, size: 0x4, def value: None
 int32_t  ___RemoteServerID;

/// @brief Field StartRequests, offset: 0x2c, size: 0x4, def value: None
 ::Fusion::Protocol::StartRequests  ___StartRequests;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::Start, ___RemoteServerID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::Start, ___StartRequests) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::Start) == 0x30, "Size mismatch!");

} // namespace end def Fusion::Protocol
