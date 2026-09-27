#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/CrossAppDomainSink_ProcessMessageRes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CrossAppDomainSink_ProcessMessageRes)
namespace System::Runtime::Remoting::Messaging {
class CADMethodReturnMessage;
}
// Forward declare root types
namespace GlobalNamespace {
struct CrossAppDomainSink_ProcessMessageRes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CrossAppDomainSink_ProcessMessageRes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrossAppDomainSink_ProcessMessageRes, "System.Runtime.Remoting.Channels", "CrossAppDomainSink/ProcessMessageRes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes
struct CORDL_TYPE CrossAppDomainSink_ProcessMessageRes {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CrossAppDomainSink_ProcessMessageRes() ;

// Ctor Parameters [CppParam { name: "arrResponse", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cadMrm", ty: "::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*", modifiers: "", def_value: None, comment: None }]
constexpr CrossAppDomainSink_ProcessMessageRes(::ArrayW<uint8_t>  arrResponse, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*  cadMrm) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6251};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field arrResponse, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  arrResponse;

/// @brief Field cadMrm, offset: 0x8, size: 0x8, def value: None
 ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*  cadMrm;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrossAppDomainSink_ProcessMessageRes, arrResponse) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossAppDomainSink_ProcessMessageRes, cadMrm) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrossAppDomainSink_ProcessMessageRes) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
