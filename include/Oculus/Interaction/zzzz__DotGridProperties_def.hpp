#pragma once
// IWYU pragma private; include "Oculus/Interaction/DotGridProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DotGridProperties)
namespace Oculus::Interaction {
class MaterialPropertyBlockEditor;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Oculus::Interaction {
class DotGridProperties;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DotGridProperties*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DotGridProperties*, "Oculus.Interaction", "DotGridProperties");
// [ExecuteAlways]
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.DotGridProperties
class CORDL_TYPE DotGridProperties : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Color, put=set_Color)) ::UnityEngine::Color  Color;

 __declspec(property(get=get_Columns, put=set_Columns)) int32_t  Columns;

 __declspec(property(get=get_Radius, put=set_Radius)) float_t  Radius;

 __declspec(property(get=get_Rows, put=set_Rows)) int32_t  Rows;

/// @brief Field _change, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__change, put=__cordl_internal_set__change)) bool  _change;

/// @brief Field _color, offset 0x34, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Field _colorShaderID, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__colorShaderID, put=__cordl_internal_set__colorShaderID)) int32_t  _colorShaderID;

/// @brief Field _columns, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__columns, put=__cordl_internal_set__columns)) int32_t  _columns;

/// @brief Field _dimensionsShaderID, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__dimensionsShaderID, put=__cordl_internal_set__dimensionsShaderID)) int32_t  _dimensionsShaderID;

/// @brief Field _materialPropertyBlockEditor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialPropertyBlockEditor, put=__cordl_internal_set__materialPropertyBlockEditor)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  _materialPropertyBlockEditor;

/// @brief Field _radius, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__radius, put=__cordl_internal_set__radius)) float_t  _radius;

/// @brief Field _rows, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__rows, put=__cordl_internal_set__rows)) int32_t  _rows;

/// @brief Method InjectAllDotGridProperties, addr 0xa472330, size 0x8, virtual false, abstract: false, final false
inline void InjectAllDotGridProperties(::Oculus::Interaction::MaterialPropertyBlockEditor*  editor) ;

/// @brief Method InjectMaterialPropertyBlockEditor, addr 0xa472338, size 0x8, virtual false, abstract: false, final false
inline void InjectMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  editor) ;

static inline ::Oculus::Interaction::DotGridProperties* New_ctor() ;

/// @brief Method OnValidate, addr 0xa472324, size 0xc, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Start, addr 0xa471d80, size 0xc, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa471d8c, size 0xd0, virtual true, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__change() const;

constexpr bool& __cordl_internal_get__change() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr int32_t const& __cordl_internal_get__colorShaderID() const;

constexpr int32_t& __cordl_internal_get__colorShaderID() ;

constexpr int32_t const& __cordl_internal_get__columns() const;

constexpr int32_t& __cordl_internal_get__columns() ;

constexpr int32_t const& __cordl_internal_get__dimensionsShaderID() const;

constexpr int32_t& __cordl_internal_get__dimensionsShaderID() ;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& __cordl_internal_get__materialPropertyBlockEditor() const;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& __cordl_internal_get__materialPropertyBlockEditor() ;

constexpr float_t const& __cordl_internal_get__radius() const;

constexpr float_t& __cordl_internal_get__radius() ;

constexpr int32_t const& __cordl_internal_get__rows() const;

constexpr int32_t& __cordl_internal_get__rows() ;

constexpr void __cordl_internal_set__change(bool  value) ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__colorShaderID(int32_t  value) ;

constexpr void __cordl_internal_set__columns(int32_t  value) ;

constexpr void __cordl_internal_set__dimensionsShaderID(int32_t  value) ;

constexpr void __cordl_internal_set__materialPropertyBlockEditor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value) ;

constexpr void __cordl_internal_set__radius(float_t  value) ;

constexpr void __cordl_internal_set__rows(int32_t  value) ;

/// @brief Method .ctor, addr 0xa472340, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Color, addr 0xa471d68, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color() ;

/// @brief Method get_Columns, addr 0xa471d38, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Columns() ;

/// @brief Method get_Radius, addr 0xa471d58, size 0x8, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// @brief Method get_Rows, addr 0xa471d48, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Rows() ;

/// @brief Method set_Color, addr 0xa471d74, size 0xc, virtual false, abstract: false, final false
inline void set_Color(::UnityEngine::Color  value) ;

/// @brief Method set_Columns, addr 0xa471d40, size 0x8, virtual false, abstract: false, final false
inline void set_Columns(int32_t  value) ;

/// @brief Method set_Radius, addr 0xa471d60, size 0x8, virtual false, abstract: false, final false
inline void set_Radius(float_t  value) ;

/// @brief Method set_Rows, addr 0xa471d50, size 0x8, virtual false, abstract: false, final false
inline void set_Rows(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DotGridProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DotGridProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DotGridProperties(DotGridProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DotGridProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DotGridProperties(DotGridProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15932};

/// [SerializeField]
/// @brief Field _materialPropertyBlockEditor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  ____materialPropertyBlockEditor;

/// [SerializeField]
/// @brief Field _columns, offset: 0x28, size: 0x4, def value: None
 int32_t  ____columns;

/// [SerializeField]
/// @brief Field _rows, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____rows;

/// [SerializeField]
/// @brief Field _radius, offset: 0x30, size: 0x4, def value: None
 float_t  ____radius;

/// [SerializeField]
/// @brief Field _color, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

/// @brief Field _change, offset: 0x44, size: 0x1, def value: None
 bool  ____change;

/// @brief Field _colorShaderID, offset: 0x48, size: 0x4, def value: None
 int32_t  ____colorShaderID;

/// @brief Field _dimensionsShaderID, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____dimensionsShaderID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DotGridProperties, ____materialPropertyBlockEditor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DotGridProperties, ____columns) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DotGridProperties, ____rows) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DotGridProperties, ____radius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DotGridProperties, ____color) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DotGridProperties, ____change) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DotGridProperties, ____colorShaderID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DotGridProperties, ____dimensionsShaderID) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DotGridProperties) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction
