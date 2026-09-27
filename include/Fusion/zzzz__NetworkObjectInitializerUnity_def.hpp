#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectInitializerUnity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetworkObjectInitializerUnity)
namespace Fusion {
class INetworkObjectInitializer;
}
namespace Fusion {
class NetworkObject;
}
// Forward declare root types
namespace Fusion {
class NetworkObjectInitializerUnity;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectInitializerUnity*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectInitializerUnity*, "Fusion", "NetworkObjectInitializerUnity");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectInitializerUnity
class CORDL_TYPE NetworkObjectInitializerUnity : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Fusion::INetworkObjectInitializer"
constexpr operator  ::Fusion::INetworkObjectInitializer*() noexcept;

/// @brief Method InitializeNetworkState, addr 0x5fc9628, size 0x70, virtual true, abstract: false, final true
inline void InitializeNetworkState(::Fusion::NetworkObject*  networkObject) ;

static inline ::Fusion::NetworkObjectInitializerUnity* New_ctor() ;

/// @brief Method .ctor, addr 0x5fc9698, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Fusion::INetworkObjectInitializer"
constexpr ::Fusion::INetworkObjectInitializer* i___Fusion__INetworkObjectInitializer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectInitializerUnity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectInitializerUnity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectInitializerUnity(NetworkObjectInitializerUnity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectInitializerUnity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectInitializerUnity(NetworkObjectInitializerUnity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19149};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkObjectInitializerUnity) == 0x10, "Size mismatch!");

} // namespace end def Fusion
