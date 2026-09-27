#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtUiSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/GorillaTag/zzzz__CameraModeAsset_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GtUiSettings)
namespace Liv::Lck::GorillaTag {
struct CameraModeAsset;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtUiSettings;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtUiSettings*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtUiSettings*, "Liv.Lck.GorillaTag", "GtUiSettings");
// [CreateAssetMenu(fileName = "LIV/GT UI Settings", menuName = "GT UI Settings", order = 0)]
// Dependencies Liv.Lck.GorillaTag.CameraModeAsset, UnityEngine.Color, UnityEngine.ScriptableObject
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtUiSettings
class CORDL_TYPE GtUiSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_ActiveButtonOffset)) float_t  ActiveButtonOffset;

 __declspec(property(get=get_CounterAngleOffset)) float_t  CounterAngleOffset;

 __declspec(property(get=get_DefaultBodyMaterial)) ::UnityW<::UnityEngine::Material>  DefaultBodyMaterial;

 __declspec(property(get=get_DisabledTextColor)) ::UnityEngine::Color  DisabledTextColor;

 __declspec(property(get=get_FirstPersonModeAsset)) ::Liv::Lck::GorillaTag::CameraModeAsset  FirstPersonModeAsset;

 __declspec(property(get=get_HeadsetModeAsset)) ::Liv::Lck::GorillaTag::CameraModeAsset  HeadsetModeAsset;

 __declspec(property(get=get_InactiveIconColor)) ::UnityEngine::Color  InactiveIconColor;

 __declspec(property(get=get_PrimaryColor)) ::UnityEngine::Color  PrimaryColor;

 __declspec(property(get=get_PrimaryCounterButtonActiveColor)) ::UnityEngine::Color  PrimaryCounterButtonActiveColor;

 __declspec(property(get=get_PrimaryCounterButtonDefaultColor)) ::UnityEngine::Color  PrimaryCounterButtonDefaultColor;

 __declspec(property(get=get_PrimaryIconColor)) ::UnityEngine::Color  PrimaryIconColor;

 __declspec(property(get=get_PrimaryTextColor)) ::UnityEngine::Color  PrimaryTextColor;

 __declspec(property(get=get_RecordingBodyMaterial)) ::UnityW<::UnityEngine::Material>  RecordingBodyMaterial;

 __declspec(property(get=get_SecondaryIconColor)) ::UnityEngine::Color  SecondaryIconColor;

 __declspec(property(get=get_SecondaryTextColor)) ::UnityEngine::Color  SecondaryTextColor;

 __declspec(property(get=get_SelectedBodyMaterial)) ::UnityW<::UnityEngine::Material>  SelectedBodyMaterial;

 __declspec(property(get=get_SelfieModeAsset)) ::Liv::Lck::GorillaTag::CameraModeAsset  SelfieModeAsset;

 __declspec(property(get=get_ThirdPersonModeAsset)) ::Liv::Lck::GorillaTag::CameraModeAsset  ThirdPersonModeAsset;

/// @brief Field _activeButtonOffset, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__activeButtonOffset, put=__cordl_internal_set__activeButtonOffset)) float_t  _activeButtonOffset;

/// @brief Field _counterAngleOffset, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__counterAngleOffset, put=__cordl_internal_set__counterAngleOffset)) float_t  _counterAngleOffset;

/// @brief Field _defaultBodyMaterial, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultBodyMaterial, put=__cordl_internal_set__defaultBodyMaterial)) ::UnityW<::UnityEngine::Material>  _defaultBodyMaterial;

/// @brief Field _disabledTextColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__disabledTextColor, put=__cordl_internal_set__disabledTextColor)) ::UnityEngine::Color  _disabledTextColor;

/// @brief Field _firstPersonMode, offset 0xd8, size 0x10 
 __declspec(property(get=__cordl_internal_get__firstPersonMode, put=__cordl_internal_set__firstPersonMode)) ::Liv::Lck::GorillaTag::CameraModeAsset  _firstPersonMode;

/// @brief Field _headsetMode, offset 0xf8, size 0x10 
 __declspec(property(get=__cordl_internal_get__headsetMode, put=__cordl_internal_set__headsetMode)) ::Liv::Lck::GorillaTag::CameraModeAsset  _headsetMode;

/// @brief Field _inactiveIconColor, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get__inactiveIconColor, put=__cordl_internal_set__inactiveIconColor)) ::UnityEngine::Color  _inactiveIconColor;

/// @brief Field _primaryColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__primaryColor, put=__cordl_internal_set__primaryColor)) ::UnityEngine::Color  _primaryColor;

/// @brief Field _primaryCounterButtonActiveColor, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get__primaryCounterButtonActiveColor, put=__cordl_internal_set__primaryCounterButtonActiveColor)) ::UnityEngine::Color  _primaryCounterButtonActiveColor;

/// @brief Field _primaryCounterButtonDefaultColor, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get__primaryCounterButtonDefaultColor, put=__cordl_internal_set__primaryCounterButtonDefaultColor)) ::UnityEngine::Color  _primaryCounterButtonDefaultColor;

/// @brief Field _primaryIconColor, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get__primaryIconColor, put=__cordl_internal_set__primaryIconColor)) ::UnityEngine::Color  _primaryIconColor;

/// @brief Field _primaryTextColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__primaryTextColor, put=__cordl_internal_set__primaryTextColor)) ::UnityEngine::Color  _primaryTextColor;

/// @brief Field _recordingBodyMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingBodyMaterial, put=__cordl_internal_set__recordingBodyMaterial)) ::UnityW<::UnityEngine::Material>  _recordingBodyMaterial;

/// @brief Field _secondaryIconColor, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get__secondaryIconColor, put=__cordl_internal_set__secondaryIconColor)) ::UnityEngine::Color  _secondaryIconColor;

/// @brief Field _secondaryTextColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__secondaryTextColor, put=__cordl_internal_set__secondaryTextColor)) ::UnityEngine::Color  _secondaryTextColor;

/// @brief Field _selectedBodyMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectedBodyMaterial, put=__cordl_internal_set__selectedBodyMaterial)) ::UnityW<::UnityEngine::Material>  _selectedBodyMaterial;

/// @brief Field _selfieMode, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get__selfieMode, put=__cordl_internal_set__selfieMode)) ::Liv::Lck::GorillaTag::CameraModeAsset  _selfieMode;

/// @brief Field _thirdPersonMode, offset 0xe8, size 0x10 
 __declspec(property(get=__cordl_internal_get__thirdPersonMode, put=__cordl_internal_set__thirdPersonMode)) ::Liv::Lck::GorillaTag::CameraModeAsset  _thirdPersonMode;

static inline ::Liv::Lck::GorillaTag::GtUiSettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get__activeButtonOffset() const;

constexpr float_t& __cordl_internal_get__activeButtonOffset() ;

constexpr float_t const& __cordl_internal_get__counterAngleOffset() const;

constexpr float_t& __cordl_internal_get__counterAngleOffset() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__defaultBodyMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__defaultBodyMaterial() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__disabledTextColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__disabledTextColor() ;

constexpr ::Liv::Lck::GorillaTag::CameraModeAsset const& __cordl_internal_get__firstPersonMode() const;

constexpr ::Liv::Lck::GorillaTag::CameraModeAsset& __cordl_internal_get__firstPersonMode() ;

constexpr ::Liv::Lck::GorillaTag::CameraModeAsset const& __cordl_internal_get__headsetMode() const;

constexpr ::Liv::Lck::GorillaTag::CameraModeAsset& __cordl_internal_get__headsetMode() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__inactiveIconColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__inactiveIconColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__primaryColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__primaryColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__primaryCounterButtonActiveColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__primaryCounterButtonActiveColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__primaryCounterButtonDefaultColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__primaryCounterButtonDefaultColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__primaryIconColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__primaryIconColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__primaryTextColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__primaryTextColor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__recordingBodyMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__recordingBodyMaterial() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__secondaryIconColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__secondaryIconColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__secondaryTextColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__secondaryTextColor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__selectedBodyMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__selectedBodyMaterial() ;

constexpr ::Liv::Lck::GorillaTag::CameraModeAsset const& __cordl_internal_get__selfieMode() const;

constexpr ::Liv::Lck::GorillaTag::CameraModeAsset& __cordl_internal_get__selfieMode() ;

constexpr ::Liv::Lck::GorillaTag::CameraModeAsset const& __cordl_internal_get__thirdPersonMode() const;

constexpr ::Liv::Lck::GorillaTag::CameraModeAsset& __cordl_internal_get__thirdPersonMode() ;

constexpr void __cordl_internal_set__activeButtonOffset(float_t  value) ;

constexpr void __cordl_internal_set__counterAngleOffset(float_t  value) ;

constexpr void __cordl_internal_set__defaultBodyMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__disabledTextColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__firstPersonMode(::Liv::Lck::GorillaTag::CameraModeAsset  value) ;

constexpr void __cordl_internal_set__headsetMode(::Liv::Lck::GorillaTag::CameraModeAsset  value) ;

constexpr void __cordl_internal_set__inactiveIconColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__primaryColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__primaryCounterButtonActiveColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__primaryCounterButtonDefaultColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__primaryIconColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__primaryTextColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__recordingBodyMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__secondaryIconColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__secondaryTextColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__selectedBodyMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__selfieMode(::Liv::Lck::GorillaTag::CameraModeAsset  value) ;

constexpr void __cordl_internal_set__thirdPersonMode(::Liv::Lck::GorillaTag::CameraModeAsset  value) ;

/// @brief Method .ctor, addr 0x9d2fea0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActiveButtonOffset, addr 0x9d2fe6c, size 0x8, virtual false, abstract: false, final false
inline float_t get_ActiveButtonOffset() ;

/// @brief Method get_CounterAngleOffset, addr 0x9d2fe74, size 0x8, virtual false, abstract: false, final false
inline float_t get_CounterAngleOffset() ;

/// @brief Method get_DefaultBodyMaterial, addr 0x9d2fddc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_DefaultBodyMaterial() ;

/// @brief Method get_DisabledTextColor, addr 0x9d2fe18, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_DisabledTextColor() ;

/// @brief Method get_FirstPersonModeAsset, addr 0x9d2fe48, size 0xc, virtual false, abstract: false, final false
inline ::Liv::Lck::GorillaTag::CameraModeAsset get_FirstPersonModeAsset() ;

/// @brief Method get_HeadsetModeAsset, addr 0x9d2fe60, size 0xc, virtual false, abstract: false, final false
inline ::Liv::Lck::GorillaTag::CameraModeAsset get_HeadsetModeAsset() ;

/// @brief Method get_InactiveIconColor, addr 0x9d2fe94, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_InactiveIconColor() ;

/// @brief Method get_PrimaryColor, addr 0x9d2fdf4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_PrimaryColor() ;

/// @brief Method get_PrimaryCounterButtonActiveColor, addr 0x9d2fe30, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_PrimaryCounterButtonActiveColor() ;

/// @brief Method get_PrimaryCounterButtonDefaultColor, addr 0x9d2fe24, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_PrimaryCounterButtonDefaultColor() ;

/// @brief Method get_PrimaryIconColor, addr 0x9d2fe7c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_PrimaryIconColor() ;

/// @brief Method get_PrimaryTextColor, addr 0x9d2fe00, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_PrimaryTextColor() ;

/// @brief Method get_RecordingBodyMaterial, addr 0x9d2fdec, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_RecordingBodyMaterial() ;

/// @brief Method get_SecondaryIconColor, addr 0x9d2fe88, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_SecondaryIconColor() ;

/// @brief Method get_SecondaryTextColor, addr 0x9d2fe0c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_SecondaryTextColor() ;

/// @brief Method get_SelectedBodyMaterial, addr 0x9d2fde4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_SelectedBodyMaterial() ;

/// @brief Method get_SelfieModeAsset, addr 0x9d2fe3c, size 0xc, virtual false, abstract: false, final false
inline ::Liv::Lck::GorillaTag::CameraModeAsset get_SelfieModeAsset() ;

/// @brief Method get_ThirdPersonModeAsset, addr 0x9d2fe54, size 0xc, virtual false, abstract: false, final false
inline ::Liv::Lck::GorillaTag::CameraModeAsset get_ThirdPersonModeAsset() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtUiSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtUiSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtUiSettings(GtUiSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtUiSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtUiSettings(GtUiSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29669};

/// [Header("Body Materials")]
/// [SerializeField]
/// @brief Field _defaultBodyMaterial, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____defaultBodyMaterial;

/// [SerializeField]
/// @brief Field _selectedBodyMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____selectedBodyMaterial;

/// [SerializeField]
/// @brief Field _recordingBodyMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____recordingBodyMaterial;

/// [Space(10)]
/// [Header("UI")]
/// [SerializeField]
/// @brief Field _primaryColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____primaryColor;

/// [Space(10)]
/// [Header("Text Colors")]
/// [SerializeField]
/// @brief Field _primaryTextColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____primaryTextColor;

/// [SerializeField]
/// @brief Field _secondaryTextColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____secondaryTextColor;

/// [SerializeField]
/// @brief Field _disabledTextColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ____disabledTextColor;

/// [Space(10)]
/// [SerializeField]
/// @brief Field _primaryCounterButtonDefaultColor, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Color  ____primaryCounterButtonDefaultColor;

/// [SerializeField]
/// @brief Field _primaryCounterButtonActiveColor, offset: 0x80, size: 0x10, def value: None
 ::UnityEngine::Color  ____primaryCounterButtonActiveColor;

/// [Space(10)]
/// [Header("Icon Colors")]
/// [SerializeField]
/// @brief Field _primaryIconColor, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::Color  ____primaryIconColor;

/// [SerializeField]
/// @brief Field _secondaryIconColor, offset: 0xa0, size: 0x10, def value: None
 ::UnityEngine::Color  ____secondaryIconColor;

/// [SerializeField]
/// @brief Field _inactiveIconColor, offset: 0xb0, size: 0x10, def value: None
 ::UnityEngine::Color  ____inactiveIconColor;

/// [Space(10)]
/// [Header("Offsets")]
/// [SerializeField]
/// @brief Field _activeButtonOffset, offset: 0xc0, size: 0x4, def value: None
 float_t  ____activeButtonOffset;

/// [SerializeField]
/// @brief Field _counterAngleOffset, offset: 0xc4, size: 0x4, def value: None
 float_t  ____counterAngleOffset;

/// [Space(10)]
/// [Header("Elements for Selector Modes")]
/// [SerializeField]
/// @brief Field _selfieMode, offset: 0xc8, size: 0x10, def value: None
 ::Liv::Lck::GorillaTag::CameraModeAsset  ____selfieMode;

/// [SerializeField]
/// @brief Field _firstPersonMode, offset: 0xd8, size: 0x10, def value: None
 ::Liv::Lck::GorillaTag::CameraModeAsset  ____firstPersonMode;

/// [SerializeField]
/// @brief Field _thirdPersonMode, offset: 0xe8, size: 0x10, def value: None
 ::Liv::Lck::GorillaTag::CameraModeAsset  ____thirdPersonMode;

/// [SerializeField]
/// @brief Field _headsetMode, offset: 0xf8, size: 0x10, def value: None
 ::Liv::Lck::GorillaTag::CameraModeAsset  ____headsetMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____defaultBodyMaterial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____selectedBodyMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____recordingBodyMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____primaryColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____primaryTextColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____secondaryTextColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____disabledTextColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____primaryCounterButtonDefaultColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____primaryCounterButtonActiveColor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____primaryIconColor) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____secondaryIconColor) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____inactiveIconColor) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____activeButtonOffset) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____counterAngleOffset) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____selfieMode) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____firstPersonMode) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____thirdPersonMode) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtUiSettings, ____headsetMode) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtUiSettings) == 0x108, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
