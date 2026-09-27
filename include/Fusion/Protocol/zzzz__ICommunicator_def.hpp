#pragma once
// IWYU pragma private; include "Fusion/Protocol/ICommunicator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ICommunicator)
// Forward declare root types
namespace Fusion::Protocol {
class ICommunicator;
}
// Write type traits
MARK_REF_T(::Fusion::Protocol::ICommunicator*);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::ICommunicator*, "Fusion.Protocol", "ICommunicator");
// Dependencies 
namespace Fusion::Protocol {
// Is value type: false
// CS Name: Fusion.Protocol.ICommunicator
class CORDL_TYPE ICommunicator {
public:
// Declarations
 __declspec(property(get=get_CommunicatorID)) int32_t  CommunicatorID;

/// @brief Method ReceivePackage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t ReceivePackage(::by_ref<int32_t>  senderActor, uint8_t*  buffer, int32_t  bufferLength) ;

/// @brief Method SendPackage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool SendPackage(uint8_t  code, int32_t  targetActor, bool  reliable, uint8_t*  buffer, int32_t  bufferLength) ;

/// @brief Method get_CommunicatorID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_CommunicatorID() ;

// Ctor Parameters [CppParam { name: "", ty: "ICommunicator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICommunicator(ICommunicator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31319};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Protocol
