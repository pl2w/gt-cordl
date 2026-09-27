#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviourUtils_ArrayInitializer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkBehaviourUtils_ArrayInitializer_1)
namespace Fusion {
template<typename T>
struct NetworkArray_1;
}
namespace Fusion {
template<typename T>
struct NetworkLinkedList_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct NetworkBehaviourUtils_ArrayInitializer_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NetworkBehaviourUtils_ArrayInitializer_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NetworkBehaviourUtils_ArrayInitializer_1, "Fusion", "NetworkBehaviourUtils/ArrayInitializer`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Fusion.NetworkBehaviourUtils/ArrayInitializer`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE NetworkBehaviourUtils_ArrayInitializer_1 {
public:
// Declarations
/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Fusion::NetworkArray_1<T> op_Implicit___Fusion__NetworkArray_1_T_(::GlobalNamespace::NetworkBehaviourUtils_ArrayInitializer_1<T>  arr) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Fusion::NetworkLinkedList_1<T> op_Implicit___Fusion__NetworkLinkedList_1_T_(::GlobalNamespace::NetworkBehaviourUtils_ArrayInitializer_1<T>  arr) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviourUtils_ArrayInitializer_1() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18919};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace end def GlobalNamespace
