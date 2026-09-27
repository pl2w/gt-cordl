#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/HandControlledSettingsSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__HandControlledCosmetic_RotationControl_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandControlledSettingsSO)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class HandControlledSettingsSO;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::HandControlledSettingsSO*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::HandControlledSettingsSO*, "GorillaTag.Cosmetics", "HandControlledSettingsSO");
// Dependencies GorillaTag.Cosmetics.HandControlledCosmetic::RotationControl, UnityEngine.ScriptableObject, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.HandControlledSettingsSO
class CORDL_TYPE HandControlledSettingsSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_IsAngle)) bool  IsAngle;

 __declspec(property(get=get_IsTranslation)) bool  IsTranslation;

/// @brief Field angleLimits, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_angleLimits, put=__cordl_internal_set_angleLimits)) ::UnityEngine::Vector3  angleLimits;

/// @brief Field horizontalSensitivity, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_horizontalSensitivity, put=__cordl_internal_set_horizontalSensitivity)) ::UnityEngine::AnimationCurve*  horizontalSensitivity;

/// @brief Field inputDecayCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputDecayCurve, put=__cordl_internal_set_inputDecayCurve)) ::UnityEngine::AnimationCurve*  inputDecayCurve;

/// @brief Field inputDecaySpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputDecaySpeed, put=__cordl_internal_set_inputDecaySpeed)) float_t  inputDecaySpeed;

/// @brief Field inputSensitivity, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputSensitivity, put=__cordl_internal_set_inputSensitivity)) float_t  inputSensitivity;

/// @brief Field rotationControl, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationControl, put=__cordl_internal_set_rotationControl)) ::GlobalNamespace::HandControlledCosmetic_RotationControl  rotationControl;

/// @brief Field rotationSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSpeed, put=__cordl_internal_set_rotationSpeed)) float_t  rotationSpeed;

/// @brief Field verticalSensitivity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_verticalSensitivity, put=__cordl_internal_set_verticalSensitivity)) ::UnityEngine::AnimationCurve*  verticalSensitivity;

static inline ::GorillaTag::Cosmetics::HandControlledSettingsSO* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_angleLimits() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_angleLimits() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_horizontalSensitivity() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_horizontalSensitivity() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_inputDecayCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_inputDecayCurve() ;

constexpr float_t const& __cordl_internal_get_inputDecaySpeed() const;

constexpr float_t& __cordl_internal_get_inputDecaySpeed() ;

constexpr float_t const& __cordl_internal_get_inputSensitivity() const;

constexpr float_t& __cordl_internal_get_inputSensitivity() ;

constexpr ::GlobalNamespace::HandControlledCosmetic_RotationControl const& __cordl_internal_get_rotationControl() const;

constexpr ::GlobalNamespace::HandControlledCosmetic_RotationControl& __cordl_internal_get_rotationControl() ;

constexpr float_t const& __cordl_internal_get_rotationSpeed() const;

constexpr float_t& __cordl_internal_get_rotationSpeed() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_verticalSensitivity() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_verticalSensitivity() ;

constexpr void __cordl_internal_set_angleLimits(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_horizontalSensitivity(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_inputDecayCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_inputDecaySpeed(float_t  value) ;

constexpr void __cordl_internal_set_inputSensitivity(float_t  value) ;

constexpr void __cordl_internal_set_rotationControl(::GlobalNamespace::HandControlledCosmetic_RotationControl  value) ;

constexpr void __cordl_internal_set_rotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_verticalSensitivity(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x5d997a0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsAngle, addr 0x5d99780, size 0x10, virtual false, abstract: false, final false
inline bool get_IsAngle() ;

/// @brief Method get_IsTranslation, addr 0x5d99790, size 0x10, virtual false, abstract: false, final false
inline bool get_IsTranslation() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandControlledSettingsSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandControlledSettingsSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandControlledSettingsSO(HandControlledSettingsSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandControlledSettingsSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandControlledSettingsSO(HandControlledSettingsSO const& ) = delete;

/// @brief Field SENS_TT offset 0xffffffff size 0x8
static constexpr ::ConstString  SENS_TT{u"The difference between the current input and cached input is magnified by this number."};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4944};

/// @brief Field rotationControl, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::HandControlledCosmetic_RotationControl  ___rotationControl;

/// [Tooltip("The difference between the current input and cached input is magnified by this number.")]
/// @brief Field inputSensitivity, offset: 0x1c, size: 0x4, def value: None
 float_t  ___inputSensitivity;

/// [Tooltip("The difference between the current input and cached input is magnified by this number.")]
/// @brief Field verticalSensitivity, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___verticalSensitivity;

/// [Tooltip("The difference between the current input and cached input is magnified by this number.")]
/// @brief Field horizontalSensitivity, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___horizontalSensitivity;

/// [Tooltip("How quickly the cached input approaches the current input. A high value will function more like a mouse, while a low value will function more like a joystick.")]
/// @brief Field inputDecaySpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ___inputDecaySpeed;

/// [Tooltip("How quickly the cached input approaches the current input, as a function of distance. A high value will function more like a mouse, while a low value will function more like a joystick.")]
/// @brief Field inputDecayCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___inputDecayCurve;

/// [Tooltip("How quickly the transform approaches the intended angle (smaller value = more lag).")]
/// @brief Field rotationSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ___rotationSpeed;

/// [Tooltip("The transform\'s local rotation cannot exceed these euler angles.")]
/// @brief Field angleLimits, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___angleLimits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledSettingsSO, ___rotationControl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledSettingsSO, ___inputSensitivity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledSettingsSO, ___verticalSensitivity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledSettingsSO, ___horizontalSensitivity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledSettingsSO, ___inputDecaySpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledSettingsSO, ___inputDecayCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledSettingsSO, ___rotationSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledSettingsSO, ___angleLimits) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::HandControlledSettingsSO) == 0x50, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
