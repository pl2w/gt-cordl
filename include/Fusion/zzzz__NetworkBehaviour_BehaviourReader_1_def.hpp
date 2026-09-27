#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviour_BehaviourReader_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBehaviourId_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_PropertyReader_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkBehaviour_BehaviourReader_1)
namespace Fusion {
struct NetworkBehaviourBuffer;
}
namespace Fusion {
class NetworkRunner;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct NetworkBehaviour_BehaviourReader_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NetworkBehaviour_BehaviourReader_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NetworkBehaviour_BehaviourReader_1, "Fusion", "NetworkBehaviour/BehaviourReader`1");
// Dependencies Fusion.NetworkBehaviour::PropertyReader`1<T>, Fusion.NetworkBehaviourId
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Fusion.NetworkBehaviour/BehaviourReader`1<T>
struct CORDL_TYPE NetworkBehaviour_BehaviourReader_1 {
public:
// Declarations
/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<T,T> Read(::Fusion::NetworkBehaviourBuffer  first, ::Fusion::NetworkBehaviourBuffer  second) ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Read(::Fusion::NetworkBehaviourBuffer  first) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviour_BehaviourReader_1() ;

// Ctor Parameters [CppParam { name: "Runner", ty: "::UnityW<::Fusion::NetworkRunner>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reader", ty: "::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::Fusion::NetworkBehaviourId>", modifiers: "", def_value: None, comment: None }]
constexpr NetworkBehaviour_BehaviourReader_1(::UnityW<::Fusion::NetworkRunner>  Runner, ::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::Fusion::NetworkBehaviourId>  Reader) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18899};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Runner, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  Runner;

/// @brief Field Reader, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::Fusion::NetworkBehaviourId>  Reader;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
