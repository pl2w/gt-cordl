#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/SpawnedBundle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SpawnedBundle)
namespace GorillaNetworking::Store {
class BundleStand;
}
// Forward declare root types
namespace GorillaNetworking::Store {
class SpawnedBundle;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::SpawnedBundle*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::SpawnedBundle*, "GorillaNetworking.Store", "SpawnedBundle");
// Dependencies System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.SpawnedBundle
class CORDL_TYPE SpawnedBundle : public ::System::Object {
public:
// Declarations
/// @brief Field bundleStand, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_bundleStand, put=__cordl_internal_set_bundleStand)) ::UnityW<::GorillaNetworking::Store::BundleStand>  bundleStand;

/// @brief Field spawnLocationPath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnLocationPath, put=__cordl_internal_set_spawnLocationPath)) ::StringW  spawnLocationPath;

static inline ::GorillaNetworking::Store::SpawnedBundle* New_ctor() ;

constexpr ::UnityW<::GorillaNetworking::Store::BundleStand> const& __cordl_internal_get_bundleStand() const;

constexpr ::UnityW<::GorillaNetworking::Store::BundleStand>& __cordl_internal_get_bundleStand() ;

constexpr ::StringW const& __cordl_internal_get_spawnLocationPath() const;

constexpr ::StringW& __cordl_internal_get_spawnLocationPath() ;

constexpr void __cordl_internal_set_bundleStand(::UnityW<::GorillaNetworking::Store::BundleStand>  value) ;

constexpr void __cordl_internal_set_spawnLocationPath(::StringW  value) ;

/// @brief Method .ctor, addr 0x5ca3c38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpawnedBundle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpawnedBundle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnedBundle(SpawnedBundle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnedBundle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnedBundle(SpawnedBundle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4418};

/// @brief Field spawnLocationPath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___spawnLocationPath;

/// @brief Field bundleStand, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::BundleStand>  ___bundleStand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::SpawnedBundle, ___spawnLocationPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::SpawnedBundle, ___bundleStand) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::SpawnedBundle) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
