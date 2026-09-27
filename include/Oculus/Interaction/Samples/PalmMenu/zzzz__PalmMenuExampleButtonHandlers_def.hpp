#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/PalmMenu/PalmMenuExampleButtonHandlers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PalmMenuExampleButtonHandlers)
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Oculus::Interaction::Samples::PalmMenu {
class PalmMenuExampleButtonHandlers;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers*, "Oculus.Interaction.Samples.PalmMenu", "PalmMenuExampleButtonHandlers");
// Dependencies UnityEngine.Color, UnityEngine.GameObject, UnityEngine.Mesh, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Oculus::Interaction::Samples::PalmMenu {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.PalmMenu.PalmMenuExampleButtonHandlers
class CORDL_TYPE PalmMenuExampleButtonHandlers : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _colors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__colors, put=__cordl_internal_set__colors)) ::ArrayW<::UnityEngine::Color>  _colors;

/// @brief Field _controlledObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controlledObject, put=__cordl_internal_set__controlledObject)) ::UnityW<::UnityEngine::GameObject>  _controlledObject;

/// @brief Field _currentColorIdx, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentColorIdx, put=__cordl_internal_set__currentColorIdx)) int32_t  _currentColorIdx;

/// @brief Field _currentRotationDirectionIdx, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentRotationDirectionIdx, put=__cordl_internal_set__currentRotationDirectionIdx)) int32_t  _currentRotationDirectionIdx;

/// @brief Field _currentShapeIdx, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentShapeIdx, put=__cordl_internal_set__currentShapeIdx)) int32_t  _currentShapeIdx;

/// @brief Field _elevationChangeIncrement, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__elevationChangeIncrement, put=__cordl_internal_set__elevationChangeIncrement)) float_t  _elevationChangeIncrement;

/// @brief Field _elevationChangeLerpSpeed, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__elevationChangeLerpSpeed, put=__cordl_internal_set__elevationChangeLerpSpeed)) float_t  _elevationChangeLerpSpeed;

/// @brief Field _elevationText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__elevationText, put=__cordl_internal_set__elevationText)) ::UnityW<::TMPro::TMP_Text>  _elevationText;

/// @brief Field _rotationDirectionIcons, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationDirectionIcons, put=__cordl_internal_set__rotationDirectionIcons)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _rotationDirectionIcons;

/// @brief Field _rotationDirectionNames, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationDirectionNames, put=__cordl_internal_set__rotationDirectionNames)) ::ArrayW<::StringW>  _rotationDirectionNames;

/// @brief Field _rotationDirectionText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationDirectionText, put=__cordl_internal_set__rotationDirectionText)) ::UnityW<::TMPro::TMP_Text>  _rotationDirectionText;

/// @brief Field _rotationDirections, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationDirections, put=__cordl_internal_set__rotationDirections)) ::ArrayW<::UnityEngine::Quaternion>  _rotationDirections;

/// @brief Field _rotationDisabledIcon, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationDisabledIcon, put=__cordl_internal_set__rotationDisabledIcon)) ::UnityW<::UnityEngine::GameObject>  _rotationDisabledIcon;

/// @brief Field _rotationEnabled, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get__rotationEnabled, put=__cordl_internal_set__rotationEnabled)) bool  _rotationEnabled;

/// @brief Field _rotationEnabledIcon, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationEnabledIcon, put=__cordl_internal_set__rotationEnabledIcon)) ::UnityW<::UnityEngine::GameObject>  _rotationEnabledIcon;

/// @brief Field _rotationLerpSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationLerpSpeed, put=__cordl_internal_set__rotationLerpSpeed)) float_t  _rotationLerpSpeed;

/// @brief Field _shapeNameText, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__shapeNameText, put=__cordl_internal_set__shapeNameText)) ::UnityW<::TMPro::TMP_Text>  _shapeNameText;

/// @brief Field _shapeNames, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__shapeNames, put=__cordl_internal_set__shapeNames)) ::ArrayW<::StringW>  _shapeNames;

/// @brief Field _shapes, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__shapes, put=__cordl_internal_set__shapes)) ::ArrayW<::UnityW<::UnityEngine::Mesh>>  _shapes;

/// @brief Field _targetPosition, offset 0x9c, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetPosition, put=__cordl_internal_set__targetPosition)) ::UnityEngine::Vector3  _targetPosition;

/// @brief Method CycleColor, addr 0xa441b50, size 0xb4, virtual false, abstract: false, final false
inline void CycleColor() ;

/// @brief Method CycleRotationDirection, addr 0xa441c4c, size 0xdc, virtual false, abstract: false, final false
inline void CycleRotationDirection() ;

/// @brief Method CycleShape, addr 0xa441e04, size 0xf8, virtual false, abstract: false, final false
inline void CycleShape(bool  cycleForward) ;

/// @brief Method IncrementElevation, addr 0xa441d28, size 0xdc, virtual false, abstract: false, final false
inline void IncrementElevation(bool  up) ;

static inline ::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers* New_ctor() ;

/// @brief Method Start, addr 0xa441ab0, size 0xa0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleRotationEnabled, addr 0xa441c04, size 0x48, virtual false, abstract: false, final false
inline void ToggleRotationEnabled() ;

/// @brief Method Update, addr 0xa441efc, size 0x250, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get__colors() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get__colors() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__controlledObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__controlledObject() ;

constexpr int32_t const& __cordl_internal_get__currentColorIdx() const;

constexpr int32_t& __cordl_internal_get__currentColorIdx() ;

constexpr int32_t const& __cordl_internal_get__currentRotationDirectionIdx() const;

constexpr int32_t& __cordl_internal_get__currentRotationDirectionIdx() ;

constexpr int32_t const& __cordl_internal_get__currentShapeIdx() const;

constexpr int32_t& __cordl_internal_get__currentShapeIdx() ;

constexpr float_t const& __cordl_internal_get__elevationChangeIncrement() const;

constexpr float_t& __cordl_internal_get__elevationChangeIncrement() ;

constexpr float_t const& __cordl_internal_get__elevationChangeLerpSpeed() const;

constexpr float_t& __cordl_internal_get__elevationChangeLerpSpeed() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__elevationText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__elevationText() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__rotationDirectionIcons() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__rotationDirectionIcons() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__rotationDirectionNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__rotationDirectionNames() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__rotationDirectionText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__rotationDirectionText() ;

constexpr ::ArrayW<::UnityEngine::Quaternion> const& __cordl_internal_get__rotationDirections() const;

constexpr ::ArrayW<::UnityEngine::Quaternion>& __cordl_internal_get__rotationDirections() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__rotationDisabledIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__rotationDisabledIcon() ;

constexpr bool const& __cordl_internal_get__rotationEnabled() const;

constexpr bool& __cordl_internal_get__rotationEnabled() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__rotationEnabledIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__rotationEnabledIcon() ;

constexpr float_t const& __cordl_internal_get__rotationLerpSpeed() const;

constexpr float_t& __cordl_internal_get__rotationLerpSpeed() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__shapeNameText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__shapeNameText() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__shapeNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__shapeNames() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>> const& __cordl_internal_get__shapes() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>>& __cordl_internal_get__shapes() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetPosition() ;

constexpr void __cordl_internal_set__colors(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set__controlledObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__currentColorIdx(int32_t  value) ;

constexpr void __cordl_internal_set__currentRotationDirectionIdx(int32_t  value) ;

constexpr void __cordl_internal_set__currentShapeIdx(int32_t  value) ;

constexpr void __cordl_internal_set__elevationChangeIncrement(float_t  value) ;

constexpr void __cordl_internal_set__elevationChangeLerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set__elevationText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__rotationDirectionIcons(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set__rotationDirectionNames(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__rotationDirectionText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__rotationDirections(::ArrayW<::UnityEngine::Quaternion>  value) ;

constexpr void __cordl_internal_set__rotationDisabledIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__rotationEnabled(bool  value) ;

constexpr void __cordl_internal_set__rotationEnabledIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__rotationLerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set__shapeNameText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__shapeNames(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__shapes(::ArrayW<::UnityW<::UnityEngine::Mesh>>  value) ;

constexpr void __cordl_internal_set__targetPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xa44214c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PalmMenuExampleButtonHandlers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PalmMenuExampleButtonHandlers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PalmMenuExampleButtonHandlers(PalmMenuExampleButtonHandlers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PalmMenuExampleButtonHandlers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PalmMenuExampleButtonHandlers(PalmMenuExampleButtonHandlers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28354};

/// [SerializeField]
/// @brief Field _controlledObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____controlledObject;

/// [SerializeField]
/// @brief Field _colors, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ____colors;

/// [SerializeField]
/// @brief Field _rotationEnabledIcon, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____rotationEnabledIcon;

/// [SerializeField]
/// @brief Field _rotationDisabledIcon, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____rotationDisabledIcon;

/// [SerializeField]
/// @brief Field _rotationLerpSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ____rotationLerpSpeed;

/// [SerializeField]
/// @brief Field _rotationDirectionText, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____rotationDirectionText;

/// [SerializeField]
/// @brief Field _rotationDirectionNames, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____rotationDirectionNames;

/// [SerializeField]
/// @brief Field _rotationDirectionIcons, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____rotationDirectionIcons;

/// [SerializeField]
/// @brief Field _rotationDirections, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Quaternion>  ____rotationDirections;

/// [SerializeField]
/// @brief Field _elevationText, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____elevationText;

/// [SerializeField]
/// @brief Field _elevationChangeIncrement, offset: 0x70, size: 0x4, def value: None
 float_t  ____elevationChangeIncrement;

/// [SerializeField]
/// @brief Field _elevationChangeLerpSpeed, offset: 0x74, size: 0x4, def value: None
 float_t  ____elevationChangeLerpSpeed;

/// [SerializeField]
/// @brief Field _shapeNameText, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____shapeNameText;

/// [SerializeField]
/// @brief Field _shapeNames, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____shapeNames;

/// [SerializeField]
/// @brief Field _shapes, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Mesh>>  ____shapes;

/// @brief Field _currentColorIdx, offset: 0x90, size: 0x4, def value: None
 int32_t  ____currentColorIdx;

/// @brief Field _rotationEnabled, offset: 0x94, size: 0x1, def value: None
 bool  ____rotationEnabled;

/// @brief Field _currentRotationDirectionIdx, offset: 0x98, size: 0x4, def value: None
 int32_t  ____currentRotationDirectionIdx;

/// @brief Field _targetPosition, offset: 0x9c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetPosition;

/// @brief Field _currentShapeIdx, offset: 0xa8, size: 0x4, def value: None
 int32_t  ____currentShapeIdx;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____controlledObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____colors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____rotationEnabledIcon) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____rotationDisabledIcon) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____rotationLerpSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____rotationDirectionText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____rotationDirectionNames) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____rotationDirectionIcons) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____rotationDirections) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____elevationText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____elevationChangeIncrement) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____elevationChangeLerpSpeed) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____shapeNameText) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____shapeNames) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____shapes) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____currentColorIdx) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____rotationEnabled) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____currentRotationDirectionIdx) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____targetPosition) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers, ____currentShapeIdx) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExampleButtonHandlers) == 0xb0, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples::PalmMenu
