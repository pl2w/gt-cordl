#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneBasedObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ZoneBasedObject)
// Forward declare root types
namespace GlobalNamespace {
class ZoneBasedObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ZoneBasedObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneBasedObject*, "", "ZoneBasedObject");
// Dependencies GTZone, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZoneBasedObject
class CORDL_TYPE ZoneBasedObject : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field zones, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_zones, put=__cordl_internal_set_zones)) ::ArrayW<::GlobalNamespace::GTZone>  zones;

/// @brief Method IsLocalPlayerInZone, addr 0x5a11fc8, size 0x7c, virtual false, abstract: false, final false
inline bool IsLocalPlayerInZone() ;

static inline ::GlobalNamespace::ZoneBasedObject* New_ctor() ;

/// @brief Method SelectRandomEligible, addr 0x5a12044, size 0x1ac, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::ZoneBasedObject> SelectRandomEligible(::ArrayW<::GlobalNamespace::ZoneBasedObject*>  objects, ::StringW  overrideChoice) ;

constexpr ::ArrayW<::GlobalNamespace::GTZone> const& __cordl_internal_get_zones() const;

constexpr ::ArrayW<::GlobalNamespace::GTZone>& __cordl_internal_get_zones() ;

constexpr void __cordl_internal_set_zones(::ArrayW<::GlobalNamespace::GTZone>  value) ;

/// @brief Method .ctor, addr 0x5a13048, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneBasedObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneBasedObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneBasedObject(ZoneBasedObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneBasedObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneBasedObject(ZoneBasedObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2785};

/// @brief Field zones, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GTZone>  ___zones;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZoneBasedObject, ___zones) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZoneBasedObject) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
