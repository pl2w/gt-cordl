#pragma once
// IWYU pragma private; include "Fusion/NetworkString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__IFixedStorage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkString)
// Forward declare root types
namespace Fusion {
class NetworkString;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkString*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkString*, "Fusion", "NetworkString");
// Dependencies Fusion.IFixedStorage, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkString
class CORDL_TYPE NetworkString : public ::System::Object {
public:
// Declarations
/// @brief Method GetCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSize>
requires(::cordl_internals::type_constraint<TSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TSize> && ::cordl_internals::default_constructor_constraint<TSize>)
static inline int32_t GetCapacity() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkString", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkString(NetworkString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkString", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkString(NetworkString const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19081};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkString) == 0x10, "Size mismatch!");

} // namespace end def Fusion
