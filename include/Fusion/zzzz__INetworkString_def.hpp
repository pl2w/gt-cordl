#pragma once
// IWYU pragma private; include "Fusion/INetworkString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__IFixedStorage_def.hpp"
CORDL_MODULE_EXPORT(INetworkString)
namespace Fusion {
template<typename TSize>
struct NetworkString_1;
}
// Forward declare root types
namespace Fusion {
class INetworkString;
}
// Write type traits
MARK_REF_T(::Fusion::INetworkString*);
DEFINE_IL2CPP_CLASS(::Fusion::INetworkString*, "Fusion", "INetworkString");
// Dependencies Fusion.IFixedStorage
namespace Fusion {
// Is value type: false
// CS Name: Fusion.INetworkString
class CORDL_TYPE INetworkString {
public:
// Declarations
/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline bool Equals(::by_ref<::Fusion::NetworkString_1<TOtherSize>>  other) ;

// Ctor Parameters [CppParam { name: "", ty: "INetworkString", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetworkString(INetworkString const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19079};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
