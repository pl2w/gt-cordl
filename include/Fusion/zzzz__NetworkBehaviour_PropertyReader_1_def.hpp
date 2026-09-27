#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviour_PropertyReader_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkBehaviour_PropertyReader_1)
namespace Fusion {
struct NetworkBehaviourBuffer;
}
namespace Fusion {
class NetworkBehaviour_PropertyReaderData;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct NetworkBehaviour_PropertyReader_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NetworkBehaviour_PropertyReader_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NetworkBehaviour_PropertyReader_1, "Fusion", "NetworkBehaviour/PropertyReader`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Fusion.NetworkBehaviour/PropertyReader`1<T>
struct CORDL_TYPE NetworkBehaviour_PropertyReader_1 {
public:
// Declarations
/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<T,T> Read(::Fusion::NetworkBehaviourBuffer  first, ::Fusion::NetworkBehaviourBuffer  second) ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Read(::Fusion::NetworkBehaviourBuffer  first) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkBehaviour_PropertyReaderData*  data) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  offset) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviour_PropertyReader_1() ;

// Ctor Parameters [CppParam { name: "Data", ty: "::Fusion::NetworkBehaviour_PropertyReaderData*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkBehaviour_PropertyReader_1(::Fusion::NetworkBehaviour_PropertyReaderData*  Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18901};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Data, offset: 0x0, size: 0x8, def value: None
 ::Fusion::NetworkBehaviour_PropertyReaderData*  Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
