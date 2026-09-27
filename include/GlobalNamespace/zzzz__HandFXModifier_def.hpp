#pragma once
// IWYU pragma private; include "GlobalNamespace/HandFXModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FXModifier_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandFXModifier)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class HandFXModifier;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HandFXModifier*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandFXModifier*, "", "HandFXModifier");
// Dependencies FXModifier, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandFXModifier
class CORDL_TYPE HandFXModifier : public ::GlobalNamespace::FXModifier {
public:
// Declarations
/// @brief Field dustBurst, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_dustBurst, put=__cordl_internal_set_dustBurst)) ::UnityW<::UnityEngine::ParticleSystem>  dustBurst;

/// @brief Field dustLinger, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_dustLinger, put=__cordl_internal_set_dustLinger)) ::UnityW<::UnityEngine::ParticleSystem>  dustLinger;

/// @brief Field maxScale, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxScale, put=__cordl_internal_set_maxScale)) float_t  maxScale;

/// @brief Field minScale, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minScale, put=__cordl_internal_set_minScale)) float_t  minScale;

/// @brief Field originalScale, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_originalScale, put=__cordl_internal_set_originalScale)) ::UnityEngine::Vector3  originalScale;

/// @brief Method Awake, addr 0x567b014, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::HandFXModifier* New_ctor() ;

/// @brief Method OnDisable, addr 0x567b044, size 0x2c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method UpdateScale, addr 0x567b070, size 0x60, virtual true, abstract: false, final false
inline void UpdateScale(float_t  scale, ::UnityEngine::Color  color) ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_dustBurst() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_dustBurst() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_dustLinger() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_dustLinger() ;

constexpr float_t const& __cordl_internal_get_maxScale() const;

constexpr float_t& __cordl_internal_get_maxScale() ;

constexpr float_t const& __cordl_internal_get_minScale() const;

constexpr float_t& __cordl_internal_get_minScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_originalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_originalScale() ;

constexpr void __cordl_internal_set_dustBurst(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_dustLinger(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_maxScale(float_t  value) ;

constexpr void __cordl_internal_set_minScale(float_t  value) ;

constexpr void __cordl_internal_set_originalScale(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x567b0d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandFXModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandFXModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandFXModifier(HandFXModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandFXModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandFXModifier(HandFXModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{852};

/// @brief Field originalScale, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___originalScale;

/// [SerializeField]
/// @brief Field minScale, offset: 0x2c, size: 0x4, def value: None
 float_t  ___minScale;

/// [SerializeField]
/// @brief Field maxScale, offset: 0x30, size: 0x4, def value: None
 float_t  ___maxScale;

/// [SerializeField]
/// @brief Field dustBurst, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___dustBurst;

/// [SerializeField]
/// @brief Field dustLinger, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___dustLinger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandFXModifier, ___originalScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandFXModifier, ___minScale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandFXModifier, ___maxScale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandFXModifier, ___dustBurst) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandFXModifier, ___dustLinger) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandFXModifier) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
