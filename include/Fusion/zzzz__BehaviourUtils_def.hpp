#pragma once
// IWYU pragma private; include "Fusion/BehaviourUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BehaviourUtils)
namespace Fusion {
class Behaviour;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
class SimulationBehaviour;
}
namespace GlobalNamespace {
struct BehaviourUtils_DeferredJoin;
}
namespace GlobalNamespace {
struct BehaviourUtils_NameDeferred;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Fusion {
class BehaviourUtils;
}
// Write type traits
MARK_REF_T(::Fusion::BehaviourUtils*);
DEFINE_IL2CPP_CLASS(::Fusion::BehaviourUtils*, "Fusion", "BehaviourUtils");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.BehaviourUtils
class CORDL_TYPE BehaviourUtils : public ::System::Object {
public:
// Declarations
using DeferredJoin = ::GlobalNamespace::BehaviourUtils_DeferredJoin;

using NameDeferred = ::GlobalNamespace::BehaviourUtils_NameDeferred;

/// @brief Method GetName, addr 0x5f9767c, size 0x1c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BehaviourUtils_NameDeferred GetName(::Fusion::Behaviour*  obj) ;

/// @brief Method IsAlive, addr 0x5f97634, size 0x14, virtual false, abstract: false, final false
static inline bool IsAlive(::Fusion::NetworkObject*  obj) ;

/// @brief Method IsAlive, addr 0x5f9754c, size 0x58, virtual false, abstract: false, final false
static inline bool IsAlive(::Fusion::NetworkRunner*  obj) ;

/// @brief Method IsAlive, addr 0x5f97608, size 0x14, virtual false, abstract: false, final false
static inline bool IsAlive(::Fusion::SimulationBehaviour*  obj) ;

/// @brief Method IsNotAlive, addr 0x5f97648, size 0x18, virtual false, abstract: false, final false
static inline bool IsNotAlive(::Fusion::NetworkObject*  obj) ;

/// @brief Method IsNotAlive, addr 0x5f975a4, size 0x64, virtual false, abstract: false, final false
static inline bool IsNotAlive(::Fusion::NetworkRunner*  obj) ;

/// @brief Method IsNotAlive, addr 0x5f9761c, size 0x18, virtual false, abstract: false, final false
static inline bool IsNotAlive(::Fusion::SimulationBehaviour*  obj) ;

/// @brief Method IsNotNull, addr 0x5f97540, size 0xc, virtual false, abstract: false, final false
static inline bool IsNotNull(::Fusion::Behaviour*  obj) ;

/// @brief Method IsNull, addr 0x5f97534, size 0xc, virtual false, abstract: false, final false
static inline bool IsNull(::Fusion::Behaviour*  obj) ;

/// @brief Method IsSame, addr 0x5f97660, size 0xc, virtual false, abstract: false, final false
static inline bool IsSame(::Fusion::Behaviour*  a, ::Fusion::Behaviour*  b) ;

/// @brief Method IsSameNotNull, addr 0x5f9766c, size 0x10, virtual false, abstract: false, final false
static inline bool IsSameNotNull(::Fusion::Behaviour*  a, ::Fusion::Behaviour*  b) ;

/// @brief Method Join, addr 0x5f976a0, size 0x1c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BehaviourUtils_DeferredJoin Join(::System::Collections::IEnumerable*  objects) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BehaviourUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BehaviourUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BehaviourUtils(BehaviourUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BehaviourUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BehaviourUtils(BehaviourUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18974};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::BehaviourUtils) == 0x10, "Size mismatch!");

} // namespace end def Fusion
