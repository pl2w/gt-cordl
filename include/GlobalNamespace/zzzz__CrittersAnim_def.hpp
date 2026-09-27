#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersAnim.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CrittersAnim)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersAnim;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersAnim*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersAnim*, "", "CrittersAnim");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersAnim
class CORDL_TYPE CrittersAnim : public ::System::Object {
public:
// Declarations
/// @brief Field forwardOffset, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_forwardOffset, put=__cordl_internal_set_forwardOffset)) ::UnityEngine::AnimationCurve*  forwardOffset;

/// @brief Field horizontalOffset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_horizontalOffset, put=__cordl_internal_set_horizontalOffset)) ::UnityEngine::AnimationCurve*  horizontalOffset;

/// @brief Field playSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_playSpeed, put=__cordl_internal_set_playSpeed)) float_t  playSpeed;

/// @brief Field squashAmount, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_squashAmount, put=__cordl_internal_set_squashAmount)) ::UnityEngine::AnimationCurve*  squashAmount;

/// @brief Field verticalOffset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_verticalOffset, put=__cordl_internal_set_verticalOffset)) ::UnityEngine::AnimationCurve*  verticalOffset;

/// @brief Method IsModified, addr 0x55fb530, size 0x78, virtual false, abstract: false, final false
inline bool IsModified() ;

/// @brief Method IsModified, addr 0x55fb5a8, size 0xc, virtual false, abstract: false, final false
static inline bool IsModified(::GlobalNamespace::CrittersAnim*  anim) ;

static inline ::GlobalNamespace::CrittersAnim* New_ctor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_forwardOffset() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_forwardOffset() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_horizontalOffset() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_horizontalOffset() ;

constexpr float_t const& __cordl_internal_get_playSpeed() const;

constexpr float_t& __cordl_internal_get_playSpeed() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_squashAmount() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_squashAmount() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_verticalOffset() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_verticalOffset() ;

constexpr void __cordl_internal_set_forwardOffset(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_horizontalOffset(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_playSpeed(float_t  value) ;

constexpr void __cordl_internal_set_squashAmount(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_verticalOffset(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x55fb5b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersAnim() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersAnim", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersAnim(CrittersAnim && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersAnim", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersAnim(CrittersAnim const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{82};

/// @brief Field squashAmount, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___squashAmount;

/// @brief Field forwardOffset, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___forwardOffset;

/// @brief Field horizontalOffset, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___horizontalOffset;

/// @brief Field verticalOffset, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___verticalOffset;

/// @brief Field playSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ___playSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersAnim, ___squashAmount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersAnim, ___forwardOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersAnim, ___horizontalOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersAnim, ___verticalOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersAnim, ___playSpeed) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersAnim) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
