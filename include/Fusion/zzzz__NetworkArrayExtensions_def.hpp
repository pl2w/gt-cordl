#pragma once
// IWYU pragma private; include "Fusion/NetworkArrayExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkArrayExtensions)
namespace Fusion {
template<typename T>
struct NetworkArray_1;
}
// Forward declare root types
namespace Fusion {
class NetworkArrayExtensions;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkArrayExtensions*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkArrayExtensions*, "Fusion", "NetworkArrayExtensions");
// [Extension]
// Dependencies System.IEquatable`1<T>, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkArrayExtensions
class CORDL_TYPE NetworkArrayExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::by_ref<T> GetRef(::Fusion::NetworkArray_1<T>  array, int32_t  index) ;

/// [Extension]
/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t IndexOf(::Fusion::NetworkArray_1<T>  array, T  elem) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkArrayExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkArrayExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkArrayExtensions(NetworkArrayExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkArrayExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkArrayExtensions(NetworkArrayExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19058};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkArrayExtensions) == 0x10, "Size mismatch!");

} // namespace end def Fusion
