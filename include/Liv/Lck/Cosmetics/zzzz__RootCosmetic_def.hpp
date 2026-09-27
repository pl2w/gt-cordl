#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/RootCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RootCosmetic)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Liv::Lck::Cosmetics {
class RootCosmetic;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Cosmetics::RootCosmetic*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Cosmetics::RootCosmetic*, "Liv.Lck.Cosmetics", "RootCosmetic");
// Dependencies System.Object
namespace Liv::Lck::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Cosmetics.RootCosmetic
class CORDL_TYPE RootCosmetic : public ::System::Object {
public:
// Declarations
/// @brief Field Asset, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Asset, put=__cordl_internal_set_Asset)) ::UnityW<::UnityEngine::Object>  Asset;

static inline ::Liv::Lck::Cosmetics::RootCosmetic* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_Asset() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_Asset() ;

constexpr void __cordl_internal_set_Asset(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0x9d64f38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RootCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RootCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RootCosmetic(RootCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RootCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RootCosmetic(RootCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24978};

/// [Tooltip("The asset (Prefab, Material, Texture, etc.) to be included as a root in the bundle.")]
/// @brief Field Asset, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___Asset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Cosmetics::RootCosmetic, ___Asset) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Cosmetics::RootCosmetic) == 0x18, "Size mismatch!");

} // namespace end def Liv::Lck::Cosmetics
