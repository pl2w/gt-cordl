#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectInactivityGuard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(NetworkObjectInactivityGuard)
namespace Fusion {
class NetworkObject;
}
// Forward declare root types
namespace Fusion {
class NetworkObjectInactivityGuard;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectInactivityGuard*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectInactivityGuard*, "Fusion", "NetworkObjectInactivityGuard");
// [AddComponentMenu("")]
// Dependencies Fusion.Behaviour
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectInactivityGuard
class CORDL_TYPE NetworkObjectInactivityGuard : public ::Fusion::Behaviour {
public:
// Declarations
/// @brief Field Object, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Object, put=__cordl_internal_set_Object)) ::UnityW<::Fusion::NetworkObject>  Object;

static inline ::Fusion::NetworkObjectInactivityGuard* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5fc9568, size 0xac, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x5fc93b0, size 0x1b8, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::Fusion::NetworkObject> const& __cordl_internal_get_Object() const;

constexpr ::UnityW<::Fusion::NetworkObject>& __cordl_internal_get_Object() ;

constexpr void __cordl_internal_set_Object(::UnityW<::Fusion::NetworkObject>  value) ;

/// @brief Method .ctor, addr 0x5fc9620, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectInactivityGuard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectInactivityGuard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectInactivityGuard(NetworkObjectInactivityGuard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectInactivityGuard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectInactivityGuard(NetworkObjectInactivityGuard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19147};

/// @brief Field Object, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkObject>  ___Object;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectInactivityGuard, ___Object) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectInactivityGuard) == 0x28, "Size mismatch!");

} // namespace end def Fusion
