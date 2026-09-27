#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSkinCatalog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaSkin_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GorillaSkinCatalog)
// Forward declare root types
namespace GlobalNamespace {
class GorillaSkinCatalog;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaSkinCatalog*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSkinCatalog*, "", "GorillaSkinCatalog");
// Dependencies GorillaSkin, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaSkinCatalog
class CORDL_TYPE GorillaSkinCatalog : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field skins, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_skins, put=__cordl_internal_set_skins)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaSkin>>  skins;

static inline ::GlobalNamespace::GorillaSkinCatalog* New_ctor() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaSkin>> const& __cordl_internal_get_skins() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaSkin>>& __cordl_internal_get_skins() ;

constexpr void __cordl_internal_set_skins(::ArrayW<::UnityW<::GlobalNamespace::GorillaSkin>>  value) ;

/// @brief Method .ctor, addr 0x5652260, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaSkinCatalog() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaSkinCatalog", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaSkinCatalog(GorillaSkinCatalog && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaSkinCatalog", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaSkinCatalog(GorillaSkinCatalog const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{730};

/// @brief Field skins, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaSkin>>  ___skins;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaSkinCatalog, ___skins) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaSkinCatalog) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
