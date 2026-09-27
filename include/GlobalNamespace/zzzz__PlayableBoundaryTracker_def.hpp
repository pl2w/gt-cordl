#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayableBoundaryTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayableBoundaryTracker)
// Forward declare root types
namespace GlobalNamespace {
class PlayableBoundaryTracker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayableBoundaryTracker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayableBoundaryTracker*, "", "PlayableBoundaryTracker");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayableBoundaryTracker
class CORDL_TYPE PlayableBoundaryTracker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <prevSignedDistanceToBoundary>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__prevSignedDistanceToBoundary_k__BackingField, put=__cordl_internal_set__prevSignedDistanceToBoundary_k__BackingField)) float_t  _prevSignedDistanceToBoundary_k__BackingField;

/// @brief Field <signedDistanceToBoundary>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__signedDistanceToBoundary_k__BackingField, put=__cordl_internal_set__signedDistanceToBoundary_k__BackingField)) float_t  _signedDistanceToBoundary_k__BackingField;

/// @brief Field <timeSinceCrossingBorder>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeSinceCrossingBorder_k__BackingField, put=__cordl_internal_set__timeSinceCrossingBorder_k__BackingField)) float_t  _timeSinceCrossingBorder_k__BackingField;

 __declspec(property(get=get_prevSignedDistanceToBoundary, put=set_prevSignedDistanceToBoundary)) float_t  prevSignedDistanceToBoundary;

/// @brief Field radius, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

 __declspec(property(get=get_signedDistanceToBoundary, put=set_signedDistanceToBoundary)) float_t  signedDistanceToBoundary;

 __declspec(property(get=get_timeSinceCrossingBorder, put=set_timeSinceCrossingBorder)) float_t  timeSinceCrossingBorder;

/// @brief Method IsInsideZone, addr 0x5637540, size 0x10, virtual false, abstract: false, final false
inline bool IsInsideZone() ;

static inline ::GlobalNamespace::PlayableBoundaryTracker* New_ctor() ;

/// @brief Method ResetValues, addr 0x56334d4, size 0x8, virtual false, abstract: false, final false
inline void ResetValues() ;

/// @brief Method UpdateSignedDistanceToBoundary, addr 0x5636f94, size 0x44, virtual false, abstract: false, final false
inline void UpdateSignedDistanceToBoundary(float_t  newDistance, float_t  elapsed) ;

constexpr float_t const& __cordl_internal_get__prevSignedDistanceToBoundary_k__BackingField() const;

constexpr float_t& __cordl_internal_get__prevSignedDistanceToBoundary_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__signedDistanceToBoundary_k__BackingField() const;

constexpr float_t& __cordl_internal_get__signedDistanceToBoundary_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__timeSinceCrossingBorder_k__BackingField() const;

constexpr float_t& __cordl_internal_get__timeSinceCrossingBorder_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr void __cordl_internal_set__prevSignedDistanceToBoundary_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__signedDistanceToBoundary_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__timeSinceCrossingBorder_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

/// @brief Method .ctor, addr 0x5637550, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_prevSignedDistanceToBoundary, addr 0x5637520, size 0x8, virtual false, abstract: false, final false
inline float_t get_prevSignedDistanceToBoundary() ;

/// [CompilerGenerated]
/// @brief Method get_signedDistanceToBoundary, addr 0x5637510, size 0x8, virtual false, abstract: false, final false
inline float_t get_signedDistanceToBoundary() ;

/// [CompilerGenerated]
/// @brief Method get_timeSinceCrossingBorder, addr 0x5637530, size 0x8, virtual false, abstract: false, final false
inline float_t get_timeSinceCrossingBorder() ;

/// [CompilerGenerated]
/// @brief Method set_prevSignedDistanceToBoundary, addr 0x5637528, size 0x8, virtual false, abstract: false, final false
inline void set_prevSignedDistanceToBoundary(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_signedDistanceToBoundary, addr 0x5637518, size 0x8, virtual false, abstract: false, final false
inline void set_signedDistanceToBoundary(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_timeSinceCrossingBorder, addr 0x5637538, size 0x8, virtual false, abstract: false, final false
inline void set_timeSinceCrossingBorder(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayableBoundaryTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayableBoundaryTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayableBoundaryTracker(PlayableBoundaryTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayableBoundaryTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayableBoundaryTracker(PlayableBoundaryTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{629};

/// @brief Field radius, offset: 0x20, size: 0x4, def value: None
 float_t  ___radius;

/// [CompilerGenerated]
/// @brief Field <signedDistanceToBoundary>k__BackingField, offset: 0x24, size: 0x4, def value: None
 float_t  ____signedDistanceToBoundary_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <prevSignedDistanceToBoundary>k__BackingField, offset: 0x28, size: 0x4, def value: None
 float_t  ____prevSignedDistanceToBoundary_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <timeSinceCrossingBorder>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 float_t  ____timeSinceCrossingBorder_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayableBoundaryTracker, ___radius) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayableBoundaryTracker, ____signedDistanceToBoundary_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayableBoundaryTracker, ____prevSignedDistanceToBoundary_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayableBoundaryTracker, ____timeSinceCrossingBorder_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayableBoundaryTracker) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
