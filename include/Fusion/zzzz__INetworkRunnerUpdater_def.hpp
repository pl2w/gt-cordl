#pragma once
// IWYU pragma private; include "Fusion/INetworkRunnerUpdater.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INetworkRunnerUpdater)
namespace Fusion {
class NetworkRunner;
}
// Forward declare root types
namespace Fusion {
class INetworkRunnerUpdater;
}
// Write type traits
MARK_REF_T(::Fusion::INetworkRunnerUpdater*);
DEFINE_IL2CPP_CLASS(::Fusion::INetworkRunnerUpdater*, "Fusion", "INetworkRunnerUpdater");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.INetworkRunnerUpdater
class CORDL_TYPE INetworkRunnerUpdater {
public:
// Declarations
/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Initialize(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Shutdown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Shutdown(::Fusion::NetworkRunner*  runner) ;

// Ctor Parameters [CppParam { name: "", ty: "INetworkRunnerUpdater", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetworkRunnerUpdater(INetworkRunnerUpdater const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19227};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
