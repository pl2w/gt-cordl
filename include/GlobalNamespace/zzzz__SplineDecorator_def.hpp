#pragma once
// IWYU pragma private; include "GlobalNamespace/SplineDecorator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SplineDecorator)
namespace GlobalNamespace {
class BezierSpline;
}
// Forward declare root types
namespace GlobalNamespace {
class SplineDecorator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SplineDecorator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineDecorator*, "", "SplineDecorator");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: SplineDecorator
class CORDL_TYPE SplineDecorator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field frequency, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_frequency, put=__cordl_internal_set_frequency)) int32_t  frequency;

/// @brief Field items, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_items, put=__cordl_internal_set_items)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  items;

/// @brief Field lookForward, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_lookForward, put=__cordl_internal_set_lookForward)) bool  lookForward;

/// @brief Field spline, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_spline, put=__cordl_internal_set_spline)) ::UnityW<::GlobalNamespace::BezierSpline>  spline;

/// @brief Method Awake, addr 0x5b16070, size 0x218, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SplineDecorator* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_frequency() const;

constexpr int32_t& __cordl_internal_get_frequency() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_items() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_items() ;

constexpr bool const& __cordl_internal_get_lookForward() const;

constexpr bool& __cordl_internal_get_lookForward() ;

constexpr ::UnityW<::GlobalNamespace::BezierSpline> const& __cordl_internal_get_spline() const;

constexpr ::UnityW<::GlobalNamespace::BezierSpline>& __cordl_internal_get_spline() ;

constexpr void __cordl_internal_set_frequency(int32_t  value) ;

constexpr void __cordl_internal_set_items(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_lookForward(bool  value) ;

constexpr void __cordl_internal_set_spline(::UnityW<::GlobalNamespace::BezierSpline>  value) ;

/// @brief Method .ctor, addr 0x5b16288, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineDecorator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineDecorator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineDecorator(SplineDecorator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineDecorator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineDecorator(SplineDecorator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3557};

/// @brief Field spline, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BezierSpline>  ___spline;

/// @brief Field frequency, offset: 0x28, size: 0x4, def value: None
 int32_t  ___frequency;

/// @brief Field lookForward, offset: 0x2c, size: 0x1, def value: None
 bool  ___lookForward;

/// @brief Field items, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___items;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineDecorator, ___spline) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineDecorator, ___frequency) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineDecorator, ___lookForward) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineDecorator, ___items) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineDecorator) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
