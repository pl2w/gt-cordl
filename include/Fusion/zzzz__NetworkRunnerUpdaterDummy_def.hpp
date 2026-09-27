#pragma once
// IWYU pragma private; include "Fusion/NetworkRunnerUpdaterDummy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetworkRunnerUpdaterDummy)
namespace Fusion {
class INetworkRunnerUpdater;
}
namespace Fusion {
class NetworkRunner;
}
// Forward declare root types
namespace Fusion {
class NetworkRunnerUpdaterDummy;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkRunnerUpdaterDummy*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunnerUpdaterDummy*, "Fusion", "NetworkRunnerUpdaterDummy");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunnerUpdaterDummy
class CORDL_TYPE NetworkRunnerUpdaterDummy : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Fusion::INetworkRunnerUpdater"
constexpr operator  ::Fusion::INetworkRunnerUpdater*() noexcept;

/// @brief Method Initialize, addr 0x5fd7664, size 0x4, virtual true, abstract: false, final true
inline void Initialize(::Fusion::NetworkRunner*  runner) ;

static inline ::Fusion::NetworkRunnerUpdaterDummy* New_ctor() ;

/// @brief Method Shutdown, addr 0x5fd7668, size 0x4, virtual true, abstract: false, final true
inline void Shutdown(::Fusion::NetworkRunner*  runner) ;

/// @brief Method .ctor, addr 0x5fd766c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Fusion::INetworkRunnerUpdater"
constexpr ::Fusion::INetworkRunnerUpdater* i___Fusion__INetworkRunnerUpdater() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunnerUpdaterDummy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunnerUpdaterDummy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunnerUpdaterDummy(NetworkRunnerUpdaterDummy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunnerUpdaterDummy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunnerUpdaterDummy(NetworkRunnerUpdaterDummy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19228};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkRunnerUpdaterDummy) == 0x10, "Size mismatch!");

} // namespace end def Fusion
