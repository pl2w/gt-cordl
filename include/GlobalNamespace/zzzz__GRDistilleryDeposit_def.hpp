#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDistilleryDeposit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRDistilleryDeposit)
namespace GlobalNamespace {
class GRDistillery;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class GRDistilleryDeposit;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRDistilleryDeposit*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRDistilleryDeposit*, "", "GRDistilleryDeposit");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRDistilleryDeposit
class CORDL_TYPE GRDistilleryDeposit : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _distillery, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__distillery, put=__cordl_internal_set__distillery)) ::UnityW<::GlobalNamespace::GRDistillery>  _distillery;

/// @brief Field hapticDuration, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticDuration, put=__cordl_internal_set_hapticDuration)) float_t  hapticDuration;

/// @brief Field hapticStrength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrength, put=__cordl_internal_set_hapticStrength)) float_t  hapticStrength;

static inline ::GlobalNamespace::GRDistilleryDeposit* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x587756c, size 0x4, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method Start, addr 0x5877514, size 0x58, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::GRDistillery> const& __cordl_internal_get__distillery() const;

constexpr ::UnityW<::GlobalNamespace::GRDistillery>& __cordl_internal_get__distillery() ;

constexpr float_t const& __cordl_internal_get_hapticDuration() const;

constexpr float_t& __cordl_internal_get_hapticDuration() ;

constexpr float_t const& __cordl_internal_get_hapticStrength() const;

constexpr float_t& __cordl_internal_get_hapticStrength() ;

constexpr void __cordl_internal_set__distillery(::UnityW<::GlobalNamespace::GRDistillery>  value) ;

constexpr void __cordl_internal_set_hapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrength(float_t  value) ;

/// @brief Method .ctor, addr 0x5877570, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRDistilleryDeposit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRDistilleryDeposit", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRDistilleryDeposit(GRDistilleryDeposit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRDistilleryDeposit", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRDistilleryDeposit(GRDistilleryDeposit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1907};

/// @brief Field hapticStrength, offset: 0x20, size: 0x4, def value: None
 float_t  ___hapticStrength;

/// @brief Field hapticDuration, offset: 0x24, size: 0x4, def value: None
 float_t  ___hapticDuration;

/// @brief Field _distillery, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRDistillery>  ____distillery;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRDistilleryDeposit, ___hapticStrength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistilleryDeposit, ___hapticDuration) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistilleryDeposit, ____distillery) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRDistilleryDeposit) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
