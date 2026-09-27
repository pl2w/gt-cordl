#pragma once
// IWYU pragma private; include "GlobalNamespace/DayCycleTexturesSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DayCycleTextureMoment_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(DayCycleTexturesSO)
// Forward declare root types
namespace GlobalNamespace {
class DayCycleTexturesSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DayCycleTexturesSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DayCycleTexturesSO*, "", "DayCycleTexturesSO");
// [CreateAssetMenu(fileName = "DayCycleTextures", menuName = "Gorilla Tag/Day Cycle Textures", order = 0)]
// Dependencies DayCycleTextureMoment, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: DayCycleTexturesSO
class CORDL_TYPE DayCycleTexturesSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field moments, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_moments, put=__cordl_internal_set_moments)) ::ArrayW<::GlobalNamespace::DayCycleTextureMoment*>  moments;

static inline ::GlobalNamespace::DayCycleTexturesSO* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::DayCycleTextureMoment*> const& __cordl_internal_get_moments() const;

constexpr ::ArrayW<::GlobalNamespace::DayCycleTextureMoment*>& __cordl_internal_get_moments() ;

constexpr void __cordl_internal_set_moments(::ArrayW<::GlobalNamespace::DayCycleTextureMoment*>  value) ;

/// @brief Method .ctor, addr 0x566e0b4, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DayCycleTexturesSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DayCycleTexturesSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DayCycleTexturesSO(DayCycleTexturesSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DayCycleTexturesSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DayCycleTexturesSO(DayCycleTexturesSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{790};

/// @brief Field moments, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DayCycleTextureMoment*>  ___moments;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DayCycleTexturesSO, ___moments) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DayCycleTexturesSO) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
