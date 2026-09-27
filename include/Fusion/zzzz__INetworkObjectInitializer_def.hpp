#pragma once
// IWYU pragma private; include "Fusion/INetworkObjectInitializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INetworkObjectInitializer)
namespace Fusion {
class NetworkObject;
}
// Forward declare root types
namespace Fusion {
class INetworkObjectInitializer;
}
// Write type traits
MARK_REF_T(::Fusion::INetworkObjectInitializer*);
DEFINE_IL2CPP_CLASS(::Fusion::INetworkObjectInitializer*, "Fusion", "INetworkObjectInitializer");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.INetworkObjectInitializer
class CORDL_TYPE INetworkObjectInitializer {
public:
// Declarations
/// @brief Method InitializeNetworkState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void InitializeNetworkState(::Fusion::NetworkObject*  networkObject) ;

// Ctor Parameters [CppParam { name: "", ty: "INetworkObjectInitializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetworkObjectInitializer(INetworkObjectInitializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19148};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
