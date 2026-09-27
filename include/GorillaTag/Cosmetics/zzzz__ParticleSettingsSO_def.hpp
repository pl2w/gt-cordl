#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ParticleSettingsSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ParticleSettingsSO)
// Forward declare root types
namespace GorillaTag::Cosmetics {
class ParticleSettingsSO;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::ParticleSettingsSO*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ParticleSettingsSO*, "GorillaTag.Cosmetics", "ParticleSettingsSO");
// [CreateAssetMenu(fileName = "Particle Settings", menuName = "ScriptableObjects/ParticleSettings")]
// Dependencies UnityEngine.Color, UnityEngine.ScriptableObject
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ParticleSettingsSO
class CORDL_TYPE ParticleSettingsSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field startColor, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_startColor, put=__cordl_internal_set_startColor)) ::UnityEngine::Color  startColor;

/// @brief Field startSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_startSize, put=__cordl_internal_set_startSize)) float_t  startSize;

static inline ::GorillaTag::Cosmetics::ParticleSettingsSO* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_startColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_startColor() ;

constexpr float_t const& __cordl_internal_get_startSize() const;

constexpr float_t& __cordl_internal_get_startSize() ;

constexpr void __cordl_internal_set_startColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_startSize(float_t  value) ;

/// @brief Method .ctor, addr 0x5d9da1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleSettingsSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleSettingsSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleSettingsSO(ParticleSettingsSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSettingsSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleSettingsSO(ParticleSettingsSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4961};

/// @brief Field startColor, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  ___startColor;

/// @brief Field startSize, offset: 0x28, size: 0x4, def value: None
 float_t  ___startSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::ParticleSettingsSO, ___startColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ParticleSettingsSO, ___startSize) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::ParticleSettingsSO) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
