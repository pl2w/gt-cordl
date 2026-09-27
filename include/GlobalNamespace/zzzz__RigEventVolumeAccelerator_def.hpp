#pragma once
// IWYU pragma private; include "GlobalNamespace/RigEventVolumeAccelerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RigEventVolumeAccelerator)
namespace GlobalNamespace {
class RigEventVolume;
}
// Forward declare root types
namespace GlobalNamespace {
class RigEventVolumeAccelerator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RigEventVolumeAccelerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigEventVolumeAccelerator*, "", "RigEventVolumeAccelerator");
// [RequireComponent(typeof(RigEventVolume))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RigEventVolumeAccelerator
class CORDL_TYPE RigEventVolumeAccelerator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field multiplier, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_multiplier, put=__cordl_internal_set_multiplier)) float_t  multiplier;

/// @brief Field rev, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rev, put=__cordl_internal_set_rev)) ::UnityW<::GlobalNamespace::RigEventVolume>  rev;

/// @brief Method Awake, addr 0x5ac2618, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x5ac26a8, size 0x158, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::RigEventVolumeAccelerator* New_ctor() ;

constexpr float_t const& __cordl_internal_get_multiplier() const;

constexpr float_t& __cordl_internal_get_multiplier() ;

constexpr ::UnityW<::GlobalNamespace::RigEventVolume> const& __cordl_internal_get_rev() const;

constexpr ::UnityW<::GlobalNamespace::RigEventVolume>& __cordl_internal_get_rev() ;

constexpr void __cordl_internal_set_multiplier(float_t  value) ;

constexpr void __cordl_internal_set_rev(::UnityW<::GlobalNamespace::RigEventVolume>  value) ;

/// @brief Method .ctor, addr 0x5ac2800, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigEventVolumeAccelerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigEventVolumeAccelerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigEventVolumeAccelerator(RigEventVolumeAccelerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigEventVolumeAccelerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigEventVolumeAccelerator(RigEventVolumeAccelerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3350};

/// @brief Field min_mult offset 0xffffffff size 0x4
static constexpr float_t  min_mult{static_cast<float_t>(100.0f)};

/// @brief Field rev, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigEventVolume>  ___rev;

/// [SerializeField]
/// @brief Field multiplier, offset: 0x28, size: 0x4, def value: None
 float_t  ___multiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigEventVolumeAccelerator, ___rev) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolumeAccelerator, ___multiplier) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigEventVolumeAccelerator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
