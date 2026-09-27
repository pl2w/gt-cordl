#pragma once
// IWYU pragma private; include "GlobalNamespace/ApplyMaterialProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ApplyMaterialProperty_ApplyMode_def.hpp"
#include "GlobalNamespace/zzzz__ApplyMaterialProperty_SuportedTypes_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ApplyMaterialProperty)
namespace GlobalNamespace {
struct ApplyMaterialProperty_ApplyMode;
}
namespace GlobalNamespace {
class ApplyMaterialProperty_CustomMaterialData;
}
namespace GlobalNamespace {
struct ApplyMaterialProperty_SuportedTypes;
}
namespace GlobalNamespace {
class MaterialInstance;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class ApplyMaterialProperty;
}
namespace GlobalNamespace {
class ApplyMaterialProperty_CustomMaterialData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ApplyMaterialProperty*);
MARK_REF_T(::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ApplyMaterialProperty*, "", "ApplyMaterialProperty");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*, "", "ApplyMaterialProperty/CustomMaterialData");
// Dependencies ApplyMaterialProperty::ApplyMode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ApplyMaterialProperty
class CORDL_TYPE ApplyMaterialProperty : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ApplyMode = ::GlobalNamespace::ApplyMaterialProperty_ApplyMode;

using CustomMaterialData = ::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData;

using SuportedTypes = ::GlobalNamespace::ApplyMaterialProperty_SuportedTypes;

/// @brief Field _block, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__block, put=__cordl_internal_set__block)) ::UnityEngine::MaterialPropertyBlock*  _block;

/// @brief Field _instance, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__instance, put=__cordl_internal_set__instance)) ::UnityW<::GlobalNamespace::MaterialInstance>  _instance;

/// @brief Field _renderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field applyOnStart, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyOnStart, put=__cordl_internal_set_applyOnStart)) bool  applyOnStart;

/// @brief Field customData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_customData, put=__cordl_internal_set_customData)) ::System::Collections::Generic::List_1<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>*  customData;

/// @brief Field mode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::ApplyMaterialProperty_ApplyMode  mode;

/// @brief Field targetMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetMaterial, put=__cordl_internal_set_targetMaterial)) ::UnityW<::UnityEngine::Material>  targetMaterial;

/// @brief Method Apply, addr 0x5645a2c, size 0xc8, virtual false, abstract: false, final false
inline void Apply() ;

/// @brief Method ApplyMaterialInstance, addr 0x5645af4, size 0x3b4, virtual false, abstract: false, final false
inline void ApplyMaterialInstance() ;

/// @brief Method ApplyMaterialPropertyBlock, addr 0x5645ea8, size 0x334, virtual false, abstract: false, final false
inline void ApplyMaterialPropertyBlock() ;

/// @brief Method GetOrCreateData, addr 0x5646278, size 0x174, virtual false, abstract: false, final false
inline ::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData* GetOrCreateData(int32_t  id, ::StringW  propertyName) ;

static inline ::GlobalNamespace::ApplyMaterialProperty* New_ctor() ;

/// @brief Method SetColor, addr 0x5646230, size 0x48, virtual false, abstract: false, final false
inline void SetColor(int32_t  propertyId, ::UnityEngine::Color  color) ;

/// @brief Method SetColor, addr 0x56461dc, size 0x54, virtual false, abstract: false, final false
inline void SetColor(::StringW  propertyName, ::UnityEngine::Color  color) ;

/// @brief Method SetFloat, addr 0x5646420, size 0x34, virtual false, abstract: false, final false
inline void SetFloat(int32_t  propertyId, float_t  value) ;

/// @brief Method SetFloat, addr 0x56463ec, size 0x34, virtual false, abstract: false, final false
inline void SetFloat(::StringW  propertyName, float_t  value) ;

/// @brief Method Start, addr 0x5645908, size 0x28, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateShaderPropertyIds, addr 0x5645930, size 0xfc, virtual false, abstract: false, final false
inline void UpdateShaderPropertyIds() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__block() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__block() ;

constexpr ::UnityW<::GlobalNamespace::MaterialInstance> const& __cordl_internal_get__instance() const;

constexpr ::UnityW<::GlobalNamespace::MaterialInstance>& __cordl_internal_get__instance() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr bool const& __cordl_internal_get_applyOnStart() const;

constexpr bool& __cordl_internal_get_applyOnStart() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>* const& __cordl_internal_get_customData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>*& __cordl_internal_get_customData() ;

constexpr ::GlobalNamespace::ApplyMaterialProperty_ApplyMode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::ApplyMaterialProperty_ApplyMode& __cordl_internal_get_mode() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_targetMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_targetMaterial() ;

constexpr void __cordl_internal_set__block(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__instance(::UnityW<::GlobalNamespace::MaterialInstance>  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_applyOnStart(bool  value) ;

constexpr void __cordl_internal_set_customData(::System::Collections::Generic::List_1<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>*  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::ApplyMaterialProperty_ApplyMode  value) ;

constexpr void __cordl_internal_set_targetMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x56464b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ApplyMaterialProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ApplyMaterialProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ApplyMaterialProperty(ApplyMaterialProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ApplyMaterialProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ApplyMaterialProperty(ApplyMaterialProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{680};

/// @brief Field mode, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::ApplyMaterialProperty_ApplyMode  ___mode;

/// [FormerlySerializedAs("materialToApplyBlock")]
/// @brief Field targetMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___targetMaterial;

/// [SerializeField]
/// @brief Field _instance, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MaterialInstance>  ____instance;

/// [SerializeField]
/// @brief Field _renderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field customData, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>*  ___customData;

/// [SerializeField]
/// @brief Field applyOnStart, offset: 0x48, size: 0x1, def value: None
 bool  ___applyOnStart;

/// @brief Field _block, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____block;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty, ___mode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty, ___targetMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty, ____instance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty, ____renderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty, ___customData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty, ___applyOnStart) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty, ____block) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ApplyMaterialProperty) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ApplyMaterialProperty::SuportedTypes, System.Object, UnityEngine.Color, UnityEngine.Vector2, UnityEngine.Vector3, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: ApplyMaterialProperty/CustomMaterialData
class CORDL_TYPE ApplyMaterialProperty_CustomMaterialData : public ::System::Object {
public:
// Declarations
/// @brief Field float, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__cordl_float, put=__cordl_internal_set__cordl_float)) float_t  _cordl_float;

/// @brief Field color, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field dataType, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_dataType, put=__cordl_internal_set_dataType)) ::GlobalNamespace::ApplyMaterialProperty_SuportedTypes  dataType;

/// @brief Field id, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int32_t  id;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field texture2D, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture2D, put=__cordl_internal_set_texture2D)) ::UnityW<::UnityEngine::Texture2D>  texture2D;

/// @brief Field vector2, offset 0x34, size 0x8 
 __declspec(property(get=__cordl_internal_get_vector2, put=__cordl_internal_set_vector2)) ::UnityEngine::Vector2  vector2;

/// @brief Field vector3, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_vector3, put=__cordl_internal_set_vector3)) ::UnityEngine::Vector3  vector3;

/// @brief Field vector4, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_vector4, put=__cordl_internal_set_vector4)) ::UnityEngine::Vector4  vector4;

/// @brief Method GetHashCode, addr 0x5646524, size 0x150, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData* New_ctor(int32_t  propertyId, ::StringW  propertyName) ;

static inline ::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData* New_ctor(::StringW  propertyName) ;

constexpr float_t const& __cordl_internal_get__cordl_float() const;

constexpr float_t& __cordl_internal_get__cordl_float() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr ::GlobalNamespace::ApplyMaterialProperty_SuportedTypes const& __cordl_internal_get_dataType() const;

constexpr ::GlobalNamespace::ApplyMaterialProperty_SuportedTypes& __cordl_internal_get_dataType() ;

constexpr int32_t const& __cordl_internal_get_id() const;

constexpr int32_t& __cordl_internal_get_id() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_texture2D() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_texture2D() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_vector2() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_vector2() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_vector3() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_vector3() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_vector4() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_vector4() ;

constexpr void __cordl_internal_set__cordl_float(float_t  value) ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_dataType(::GlobalNamespace::ApplyMaterialProperty_SuportedTypes  value) ;

constexpr void __cordl_internal_set_id(int32_t  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_texture2D(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_vector2(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_vector3(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_vector4(::UnityEngine::Vector4  value) ;

/// @brief Method .ctor, addr 0x5646454, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(int32_t  propertyId, ::StringW  propertyName) ;

/// @brief Method .ctor, addr 0x56464c0, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::StringW  propertyName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ApplyMaterialProperty_CustomMaterialData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ApplyMaterialProperty_CustomMaterialData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ApplyMaterialProperty_CustomMaterialData(ApplyMaterialProperty_CustomMaterialData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ApplyMaterialProperty_CustomMaterialData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ApplyMaterialProperty_CustomMaterialData(ApplyMaterialProperty_CustomMaterialData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{679};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field id, offset: 0x18, size: 0x4, def value: None
 int32_t  ___id;

/// @brief Field dataType, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::ApplyMaterialProperty_SuportedTypes  ___dataType;

/// @brief Field color, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

/// @brief Field float, offset: 0x30, size: 0x4, def value: None
 float_t  ____cordl_float;

/// @brief Field vector2, offset: 0x34, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___vector2;

/// @brief Field vector3, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___vector3;

/// @brief Field vector4, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___vector4;

/// @brief Field texture2D, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___texture2D;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData, ___id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData, ___dataType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData, ___color) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData, ____cordl_float) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData, ___vector2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData, ___vector3) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData, ___vector4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData, ___texture2D) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
