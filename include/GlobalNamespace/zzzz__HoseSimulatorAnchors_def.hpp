#pragma once
// IWYU pragma private; include "GlobalNamespace/HoseSimulatorAnchors.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(HoseSimulatorAnchors)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class HoseSimulatorAnchors;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HoseSimulatorAnchors*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HoseSimulatorAnchors*, "", "HoseSimulatorAnchors");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: HoseSimulatorAnchors
class CORDL_TYPE HoseSimulatorAnchors : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field leftAnchorPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftAnchorPoint, put=__cordl_internal_set_leftAnchorPoint)) ::UnityW<::UnityEngine::Transform>  leftAnchorPoint;

/// @brief Field miscAnchorsLeft, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_miscAnchorsLeft, put=__cordl_internal_set_miscAnchorsLeft)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  miscAnchorsLeft;

/// @brief Field miscAnchorsRight, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_miscAnchorsRight, put=__cordl_internal_set_miscAnchorsRight)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  miscAnchorsRight;

/// @brief Field rightAnchorPoint, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightAnchorPoint, put=__cordl_internal_set_rightAnchorPoint)) ::UnityW<::UnityEngine::Transform>  rightAnchorPoint;

static inline ::GlobalNamespace::HoseSimulatorAnchors* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftAnchorPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftAnchorPoint() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_miscAnchorsLeft() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_miscAnchorsLeft() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_miscAnchorsRight() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_miscAnchorsRight() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightAnchorPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightAnchorPoint() ;

constexpr void __cordl_internal_set_leftAnchorPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_miscAnchorsLeft(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_miscAnchorsRight(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_rightAnchorPoint(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5654f88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoseSimulatorAnchors() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoseSimulatorAnchors", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HoseSimulatorAnchors(HoseSimulatorAnchors && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoseSimulatorAnchors", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoseSimulatorAnchors(HoseSimulatorAnchors const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{743};

/// @brief Field leftAnchorPoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftAnchorPoint;

/// @brief Field rightAnchorPoint, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightAnchorPoint;

/// @brief Field miscAnchorsLeft, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___miscAnchorsLeft;

/// @brief Field miscAnchorsRight, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___miscAnchorsRight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HoseSimulatorAnchors, ___leftAnchorPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulatorAnchors, ___rightAnchorPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulatorAnchors, ___miscAnchorsLeft) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulatorAnchors, ___miscAnchorsRight) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HoseSimulatorAnchors) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
