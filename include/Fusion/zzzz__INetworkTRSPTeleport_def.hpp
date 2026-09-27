#pragma once
// IWYU pragma private; include "Fusion/INetworkTRSPTeleport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INetworkTRSPTeleport)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion {
class INetworkTRSPTeleport;
}
// Write type traits
MARK_REF_T(::Fusion::INetworkTRSPTeleport*);
DEFINE_IL2CPP_CLASS(::Fusion::INetworkTRSPTeleport*, "Fusion", "INetworkTRSPTeleport");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.INetworkTRSPTeleport
class CORDL_TYPE INetworkTRSPTeleport {
public:
// Declarations
/// @brief Method Teleport, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Teleport(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation) ;

// Ctor Parameters [CppParam { name: "", ty: "INetworkTRSPTeleport", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetworkTRSPTeleport(INetworkTRSPTeleport const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18934};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
