#pragma once
// IWYU pragma private; include "GlobalNamespace/GreyZoneActivator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GreyZoneActivator)
// Forward declare root types
namespace GlobalNamespace {
class GreyZoneActivator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GreyZoneActivator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GreyZoneActivator*, "", "GreyZoneActivator");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GreyZoneActivator
class CORDL_TYPE GreyZoneActivator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field activateOnEnable, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_activateOnEnable, put=__cordl_internal_set_activateOnEnable)) bool  activateOnEnable;

/// @brief Field deactivateOnDisable, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_deactivateOnDisable, put=__cordl_internal_set_deactivateOnDisable)) bool  deactivateOnDisable;

/// @brief Field gMultiplier, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_gMultiplier, put=__cordl_internal_set_gMultiplier)) float_t  gMultiplier;

/// @brief Method Activate, addr 0x56bd05c, size 0x68, virtual false, abstract: false, final false
inline void Activate() ;

/// @brief Method ActivateWithG, addr 0x56bd138, size 0x70, virtual false, abstract: false, final false
inline void ActivateWithG(float_t  g) ;

/// @brief Method Deactivate, addr 0x56bd0d4, size 0x64, virtual false, abstract: false, final false
inline void Deactivate() ;

static inline ::GlobalNamespace::GreyZoneActivator* New_ctor() ;

/// @brief Method OnDisable, addr 0x56bd0c4, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56bd04c, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr bool const& __cordl_internal_get_activateOnEnable() const;

constexpr bool& __cordl_internal_get_activateOnEnable() ;

constexpr bool const& __cordl_internal_get_deactivateOnDisable() const;

constexpr bool& __cordl_internal_get_deactivateOnDisable() ;

constexpr float_t const& __cordl_internal_get_gMultiplier() const;

constexpr float_t& __cordl_internal_get_gMultiplier() ;

constexpr void __cordl_internal_set_activateOnEnable(bool  value) ;

constexpr void __cordl_internal_set_deactivateOnDisable(bool  value) ;

constexpr void __cordl_internal_set_gMultiplier(float_t  value) ;

/// @brief Method .ctor, addr 0x56bd1a8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GreyZoneActivator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GreyZoneActivator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GreyZoneActivator(GreyZoneActivator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GreyZoneActivator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GreyZoneActivator(GreyZoneActivator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{985};

/// [SerializeField]
/// @brief Field activateOnEnable, offset: 0x20, size: 0x1, def value: None
 bool  ___activateOnEnable;

/// [SerializeField]
/// @brief Field deactivateOnDisable, offset: 0x21, size: 0x1, def value: None
 bool  ___deactivateOnDisable;

/// [Range(-5, 5)]
/// [SerializeField]
/// @brief Field gMultiplier, offset: 0x24, size: 0x4, def value: None
 float_t  ___gMultiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GreyZoneActivator, ___activateOnEnable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneActivator, ___deactivateOnDisable) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneActivator, ___gMultiplier) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GreyZoneActivator) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
