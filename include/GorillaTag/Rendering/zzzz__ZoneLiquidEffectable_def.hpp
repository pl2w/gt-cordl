#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/ZoneLiquidEffectable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ZoneLiquidEffectable)
// Forward declare root types
namespace GorillaTag::Rendering {
class ZoneLiquidEffectable;
}
// Write type traits
MARK_REF_T(::GorillaTag::Rendering::ZoneLiquidEffectable*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Rendering::ZoneLiquidEffectable*, "GorillaTag.Rendering", "ZoneLiquidEffectable");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Renderer
namespace GorillaTag::Rendering {
// Is value type: false
// CS Name: GorillaTag.Rendering.ZoneLiquidEffectable
class CORDL_TYPE ZoneLiquidEffectable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field childRenderers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_childRenderers, put=__cordl_internal_set_childRenderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  childRenderers;

/// @brief Field inLiquidVolume, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_inLiquidVolume, put=__cordl_internal_set_inLiquidVolume)) bool  inLiquidVolume;

/// @brief Field radius, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Field wasInLiquidVolume, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasInLiquidVolume, put=__cordl_internal_set_wasInLiquidVolume)) bool  wasInLiquidVolume;

/// @brief Method Awake, addr 0x5d5a430, size 0x5c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::Rendering::ZoneLiquidEffectable* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d5a490, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d5a48c, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_childRenderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_childRenderers() ;

constexpr bool const& __cordl_internal_get_inLiquidVolume() const;

constexpr bool& __cordl_internal_get_inLiquidVolume() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr bool const& __cordl_internal_get_wasInLiquidVolume() const;

constexpr bool& __cordl_internal_get_wasInLiquidVolume() ;

constexpr void __cordl_internal_set_childRenderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_inLiquidVolume(bool  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

constexpr void __cordl_internal_set_wasInLiquidVolume(bool  value) ;

/// @brief Method .ctor, addr 0x5d5a494, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneLiquidEffectable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneLiquidEffectable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneLiquidEffectable(ZoneLiquidEffectable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneLiquidEffectable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneLiquidEffectable(ZoneLiquidEffectable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4811};

/// @brief Field radius, offset: 0x20, size: 0x4, def value: None
 float_t  ___radius;

/// @brief Field inLiquidVolume, offset: 0x24, size: 0x1, def value: None
 bool  ___inLiquidVolume;

/// @brief Field wasInLiquidVolume, offset: 0x25, size: 0x1, def value: None
 bool  ___wasInLiquidVolume;

/// @brief Field childRenderers, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___childRenderers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Rendering::ZoneLiquidEffectable, ___radius) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneLiquidEffectable, ___inLiquidVolume) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneLiquidEffectable, ___wasInLiquidVolume) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneLiquidEffectable, ___childRenderers) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Rendering::ZoneLiquidEffectable) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag::Rendering
