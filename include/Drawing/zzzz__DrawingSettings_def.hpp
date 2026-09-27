#pragma once
// IWYU pragma private; include "Drawing/DrawingSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingSettings)
namespace Drawing {
class DrawingSettings_Settings;
}
// Forward declare root types
namespace Drawing {
class DrawingSettings;
}
namespace Drawing {
class DrawingSettings_Settings;
}
// Write type traits
MARK_REF_T(::Drawing::DrawingSettings*);
MARK_REF_T(::Drawing::DrawingSettings_Settings*);
DEFINE_IL2CPP_CLASS(::Drawing::DrawingSettings*, "Drawing", "DrawingSettings");
DEFINE_IL2CPP_CLASS(::Drawing::DrawingSettings_Settings*, "Drawing", "DrawingSettings/Settings");
// Dependencies UnityEngine.ScriptableObject
namespace Drawing {
// Is value type: false
// CS Name: Drawing.DrawingSettings
class CORDL_TYPE DrawingSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Settings = ::Drawing::DrawingSettings_Settings;

/// @brief Field settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::Drawing::DrawingSettings_Settings*  settings;

/// @brief Field version, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int32_t  version;

/// @brief Method GetSettingsAsset, addr 0x55cc2e8, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::Drawing::DrawingSettings> GetSettingsAsset() ;

static inline ::Drawing::DrawingSettings* New_ctor() ;

constexpr ::Drawing::DrawingSettings_Settings* const& __cordl_internal_get_settings() const;

constexpr ::Drawing::DrawingSettings_Settings*& __cordl_internal_get_settings() ;

constexpr int32_t const& __cordl_internal_get_version() const;

constexpr int32_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_settings(::Drawing::DrawingSettings_Settings*  value) ;

constexpr void __cordl_internal_set_version(int32_t  value) ;

/// @brief Method .ctor, addr 0x55d45b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultSettings, addr 0x55d451c, size 0x74, virtual false, abstract: false, final false
static inline ::Drawing::DrawingSettings_Settings* get_DefaultSettings() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawingSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawingSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawingSettings(DrawingSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawingSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawingSettings(DrawingSettings const& ) = delete;

/// @brief Field SettingsName offset 0xffffffff size 0x8
static constexpr ::ConstString  SettingsName{u"ALINE"};

/// @brief Field SettingsPath offset 0xffffffff size 0x8
static constexpr ::ConstString  SettingsPath{u"Assets/Settings/Resources/ALINE.asset"};

/// @brief Field SettingsPathCompatibility offset 0xffffffff size 0x8
static constexpr ::ConstString  SettingsPathCompatibility{u"Assets/Settings/ALINE.asset"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27758};

/// [SerializeField]
/// @brief Field version, offset: 0x18, size: 0x4, def value: None
 int32_t  ___version;

/// @brief Field settings, offset: 0x20, size: 0x8, def value: None
 ::Drawing::DrawingSettings_Settings*  ___settings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Drawing::DrawingSettings, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingSettings, ___settings) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Drawing::DrawingSettings) == 0x28, "Size mismatch!");

} // namespace end def Drawing
// Dependencies System.Object
namespace Drawing {
// Is value type: false
// CS Name: Drawing.DrawingSettings/Settings
class CORDL_TYPE DrawingSettings_Settings : public ::System::Object {
public:
// Declarations
/// @brief Field curveResolution, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_curveResolution, put=__cordl_internal_set_curveResolution)) float_t  curveResolution;

/// @brief Field lineOpacity, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineOpacity, put=__cordl_internal_set_lineOpacity)) float_t  lineOpacity;

/// @brief Field lineOpacityBehindObjects, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineOpacityBehindObjects, put=__cordl_internal_set_lineOpacityBehindObjects)) float_t  lineOpacityBehindObjects;

/// @brief Field solidOpacity, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_solidOpacity, put=__cordl_internal_set_solidOpacity)) float_t  solidOpacity;

/// @brief Field solidOpacityBehindObjects, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_solidOpacityBehindObjects, put=__cordl_internal_set_solidOpacityBehindObjects)) float_t  solidOpacityBehindObjects;

/// @brief Field textOpacity, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_textOpacity, put=__cordl_internal_set_textOpacity)) float_t  textOpacity;

/// @brief Field textOpacityBehindObjects, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_textOpacityBehindObjects, put=__cordl_internal_set_textOpacityBehindObjects)) float_t  textOpacityBehindObjects;

static inline ::Drawing::DrawingSettings_Settings* New_ctor() ;

constexpr float_t const& __cordl_internal_get_curveResolution() const;

constexpr float_t& __cordl_internal_get_curveResolution() ;

constexpr float_t const& __cordl_internal_get_lineOpacity() const;

constexpr float_t& __cordl_internal_get_lineOpacity() ;

constexpr float_t const& __cordl_internal_get_lineOpacityBehindObjects() const;

constexpr float_t& __cordl_internal_get_lineOpacityBehindObjects() ;

constexpr float_t const& __cordl_internal_get_solidOpacity() const;

constexpr float_t& __cordl_internal_get_solidOpacity() ;

constexpr float_t const& __cordl_internal_get_solidOpacityBehindObjects() const;

constexpr float_t& __cordl_internal_get_solidOpacityBehindObjects() ;

constexpr float_t const& __cordl_internal_get_textOpacity() const;

constexpr float_t& __cordl_internal_get_textOpacity() ;

constexpr float_t const& __cordl_internal_get_textOpacityBehindObjects() const;

constexpr float_t& __cordl_internal_get_textOpacityBehindObjects() ;

constexpr void __cordl_internal_set_curveResolution(float_t  value) ;

constexpr void __cordl_internal_set_lineOpacity(float_t  value) ;

constexpr void __cordl_internal_set_lineOpacityBehindObjects(float_t  value) ;

constexpr void __cordl_internal_set_solidOpacity(float_t  value) ;

constexpr void __cordl_internal_set_solidOpacityBehindObjects(float_t  value) ;

constexpr void __cordl_internal_set_textOpacity(float_t  value) ;

constexpr void __cordl_internal_set_textOpacityBehindObjects(float_t  value) ;

/// @brief Method .ctor, addr 0x55d4590, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawingSettings_Settings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawingSettings_Settings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawingSettings_Settings(DrawingSettings_Settings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawingSettings_Settings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawingSettings_Settings(DrawingSettings_Settings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27757};

/// @brief Field lineOpacity, offset: 0x10, size: 0x4, def value: None
 float_t  ___lineOpacity;

/// @brief Field solidOpacity, offset: 0x14, size: 0x4, def value: None
 float_t  ___solidOpacity;

/// @brief Field textOpacity, offset: 0x18, size: 0x4, def value: None
 float_t  ___textOpacity;

/// @brief Field lineOpacityBehindObjects, offset: 0x1c, size: 0x4, def value: None
 float_t  ___lineOpacityBehindObjects;

/// @brief Field solidOpacityBehindObjects, offset: 0x20, size: 0x4, def value: None
 float_t  ___solidOpacityBehindObjects;

/// @brief Field textOpacityBehindObjects, offset: 0x24, size: 0x4, def value: None
 float_t  ___textOpacityBehindObjects;

/// @brief Field curveResolution, offset: 0x28, size: 0x4, def value: None
 float_t  ___curveResolution;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Drawing::DrawingSettings_Settings, ___lineOpacity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingSettings_Settings, ___solidOpacity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingSettings_Settings, ___textOpacity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingSettings_Settings, ___lineOpacityBehindObjects) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingSettings_Settings, ___solidOpacityBehindObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingSettings_Settings, ___textOpacityBehindObjects) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingSettings_Settings, ___curveResolution) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Drawing::DrawingSettings_Settings) == 0x30, "Size mismatch!");

} // namespace end def Drawing
