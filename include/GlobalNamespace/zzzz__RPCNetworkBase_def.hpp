#pragma once
// IWYU pragma private; include "GlobalNamespace/RPCNetworkBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RPCNetworkBase)
namespace GlobalNamespace {
class GorillaWrappedSerializer;
}
namespace GlobalNamespace {
class IWrappedSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class RPCNetworkBase;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RPCNetworkBase*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RPCNetworkBase*, "", "RPCNetworkBase");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RPCNetworkBase
class CORDL_TYPE RPCNetworkBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::RPCNetworkBase* New_ctor() ;

/// @brief Method SetClassTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetClassTarget(::GlobalNamespace::IWrappedSerializable*  target, ::GlobalNamespace::GorillaWrappedSerializer*  netHandler) ;

/// @brief Method .ctor, addr 0x5ac5700, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RPCNetworkBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RPCNetworkBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RPCNetworkBase(RPCNetworkBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RPCNetworkBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RPCNetworkBase(RPCNetworkBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3376};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RPCNetworkBase) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
