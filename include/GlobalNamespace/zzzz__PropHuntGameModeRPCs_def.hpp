#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntGameModeRPCs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RPCNetworkBase_def.hpp"
CORDL_MODULE_EXPORT(PropHuntGameModeRPCs)
namespace GlobalNamespace {
class GameModeSerializer;
}
namespace GlobalNamespace {
class GorillaPropHuntGameManager;
}
namespace GlobalNamespace {
class GorillaWrappedSerializer;
}
namespace GlobalNamespace {
class IWrappedSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class PropHuntGameModeRPCs;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropHuntGameModeRPCs*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropHuntGameModeRPCs*, "", "PropHuntGameModeRPCs");
// Dependencies RPCNetworkBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropHuntGameModeRPCs
class CORDL_TYPE PropHuntGameModeRPCs : public ::GlobalNamespace::RPCNetworkBase {
public:
// Declarations
/// @brief Field propHuntManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_propHuntManager, put=__cordl_internal_set_propHuntManager)) ::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>  propHuntManager;

/// @brief Field serializer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializer, put=__cordl_internal_set_serializer)) ::UnityW<::GlobalNamespace::GameModeSerializer>  serializer;

static inline ::GlobalNamespace::PropHuntGameModeRPCs* New_ctor() ;

/// @brief Method SetClassTarget, addr 0x5637dc8, size 0x110, virtual true, abstract: false, final false
inline void SetClassTarget(::GlobalNamespace::IWrappedSerializable*  target, ::GlobalNamespace::GorillaWrappedSerializer*  netHandler) ;

constexpr ::UnityW<::GlobalNamespace::GorillaPropHuntGameManager> const& __cordl_internal_get_propHuntManager() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>& __cordl_internal_get_propHuntManager() ;

constexpr ::UnityW<::GlobalNamespace::GameModeSerializer> const& __cordl_internal_get_serializer() const;

constexpr ::UnityW<::GlobalNamespace::GameModeSerializer>& __cordl_internal_get_serializer() ;

constexpr void __cordl_internal_set_propHuntManager(::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>  value) ;

constexpr void __cordl_internal_set_serializer(::UnityW<::GlobalNamespace::GameModeSerializer>  value) ;

/// @brief Method .ctor, addr 0x5637ed8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropHuntGameModeRPCs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropHuntGameModeRPCs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropHuntGameModeRPCs(PropHuntGameModeRPCs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropHuntGameModeRPCs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropHuntGameModeRPCs(PropHuntGameModeRPCs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{633};

/// @brief Field serializer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameModeSerializer>  ___serializer;

/// @brief Field propHuntManager, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>  ___propHuntManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropHuntGameModeRPCs, ___serializer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntGameModeRPCs, ___propHuntManager) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropHuntGameModeRPCs) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
