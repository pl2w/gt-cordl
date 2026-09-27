#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGameEntityStealthVisibility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIGameEntityStealthVisibility)
// Forward declare root types
namespace GlobalNamespace {
class SIGameEntityStealthVisibility;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGameEntityStealthVisibility*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGameEntityStealthVisibility*, "", "SIGameEntityStealthVisibility");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Renderer
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGameEntityStealthVisibility
class CORDL_TYPE SIGameEntityStealthVisibility : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field hideRange, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hideRange, put=__cordl_internal_set_hideRange)) float_t  hideRange;

/// @brief Field isStealthed, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isStealthed, put=__cordl_internal_set_isStealthed)) bool  isStealthed;

/// @brief Field revealRange, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_revealRange, put=__cordl_internal_set_revealRange)) float_t  revealRange;

/// @brief Field stealthedComponents, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_stealthedComponents, put=__cordl_internal_set_stealthedComponents)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  stealthedComponents;

/// @brief Method LateUpdate, addr 0x59d6000, size 0x144, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::SIGameEntityStealthVisibility* New_ctor() ;

/// @brief Method OnDisable, addr 0x59d5f88, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59d5f74, size 0x14, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetVisibility, addr 0x59d5f90, size 0x70, virtual false, abstract: false, final false
inline void SetVisibility(bool  visible) ;

constexpr float_t const& __cordl_internal_get_hideRange() const;

constexpr float_t& __cordl_internal_get_hideRange() ;

constexpr bool const& __cordl_internal_get_isStealthed() const;

constexpr bool& __cordl_internal_get_isStealthed() ;

constexpr float_t const& __cordl_internal_get_revealRange() const;

constexpr float_t& __cordl_internal_get_revealRange() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_stealthedComponents() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_stealthedComponents() ;

constexpr void __cordl_internal_set_hideRange(float_t  value) ;

constexpr void __cordl_internal_set_isStealthed(bool  value) ;

constexpr void __cordl_internal_set_revealRange(float_t  value) ;

constexpr void __cordl_internal_set_stealthedComponents(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

/// @brief Method .ctor, addr 0x59d6144, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGameEntityStealthVisibility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGameEntityStealthVisibility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGameEntityStealthVisibility(SIGameEntityStealthVisibility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGameEntityStealthVisibility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGameEntityStealthVisibility(SIGameEntityStealthVisibility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{284};

/// [SerializeField]
/// @brief Field stealthedComponents, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___stealthedComponents;

/// [SerializeField]
/// @brief Field revealRange, offset: 0x28, size: 0x4, def value: None
 float_t  ___revealRange;

/// [SerializeField]
/// @brief Field hideRange, offset: 0x2c, size: 0x4, def value: None
 float_t  ___hideRange;

/// @brief Field isStealthed, offset: 0x30, size: 0x1, def value: None
 bool  ___isStealthed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGameEntityStealthVisibility, ___stealthedComponents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGameEntityStealthVisibility, ___revealRange) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGameEntityStealthVisibility, ___hideRange) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGameEntityStealthVisibility, ___isStealthed) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGameEntityStealthVisibility) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
