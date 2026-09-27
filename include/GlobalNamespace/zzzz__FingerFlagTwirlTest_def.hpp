#pragma once
// IWYU pragma private; include "GlobalNamespace/FingerFlagTwirlTest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(FingerFlagTwirlTest)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class FingerFlagTwirlTest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FingerFlagTwirlTest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FingerFlagTwirlTest*, "", "FingerFlagTwirlTest");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FingerFlagTwirlTest
class CORDL_TYPE FingerFlagTwirlTest : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animTimes, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_animTimes, put=__cordl_internal_set_animTimes)) ::UnityEngine::Vector3  animTimes;

/// @brief Field rotAnimAmplitudes, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotAnimAmplitudes, put=__cordl_internal_set_rotAnimAmplitudes)) ::UnityEngine::Vector3  rotAnimAmplitudes;

/// @brief Field rotAnimDurations, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotAnimDurations, put=__cordl_internal_set_rotAnimDurations)) ::UnityEngine::Vector3  rotAnimDurations;

/// @brief Field rotXAnimCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotXAnimCurve, put=__cordl_internal_set_rotXAnimCurve)) ::UnityEngine::AnimationCurve*  rotXAnimCurve;

/// @brief Field rotYAnimCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotYAnimCurve, put=__cordl_internal_set_rotYAnimCurve)) ::UnityEngine::AnimationCurve*  rotYAnimCurve;

/// @brief Field rotZAnimCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotZAnimCurve, put=__cordl_internal_set_rotZAnimCurve)) ::UnityEngine::AnimationCurve*  rotZAnimCurve;

/// @brief Method FixedUpdate, addr 0x5dfca74, size 0x130, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::FingerFlagTwirlTest* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_animTimes() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_animTimes() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotAnimAmplitudes() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotAnimAmplitudes() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotAnimDurations() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotAnimDurations() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_rotXAnimCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rotXAnimCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_rotYAnimCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rotYAnimCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_rotZAnimCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rotZAnimCurve() ;

constexpr void __cordl_internal_set_animTimes(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotAnimAmplitudes(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotAnimDurations(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotXAnimCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_rotYAnimCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_rotZAnimCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x5dfcba4, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFlagTwirlTest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFlagTwirlTest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFlagTwirlTest(FingerFlagTwirlTest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFlagTwirlTest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFlagTwirlTest(FingerFlagTwirlTest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{507};

/// @brief Field rotAnimDurations, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotAnimDurations;

/// @brief Field rotAnimAmplitudes, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotAnimAmplitudes;

/// @brief Field rotXAnimCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___rotXAnimCurve;

/// @brief Field rotYAnimCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___rotYAnimCurve;

/// @brief Field rotZAnimCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___rotZAnimCurve;

/// @brief Field animTimes, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___animTimes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FingerFlagTwirlTest, ___rotAnimDurations) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagTwirlTest, ___rotAnimAmplitudes) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagTwirlTest, ___rotXAnimCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagTwirlTest, ___rotYAnimCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagTwirlTest, ___rotZAnimCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlagTwirlTest, ___animTimes) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FingerFlagTwirlTest) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
