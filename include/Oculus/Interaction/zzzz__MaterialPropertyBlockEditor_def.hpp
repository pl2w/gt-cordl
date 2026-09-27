#pragma once
// IWYU pragma private; include "Oculus/Interaction/MaterialPropertyBlockEditor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MaterialPropertyBlockEditor)
namespace Oculus::Interaction {
struct MaterialPropertyColor;
}
namespace Oculus::Interaction {
struct MaterialPropertyFloat;
}
namespace Oculus::Interaction {
struct MaterialPropertyVector;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace Oculus::Interaction {
class MaterialPropertyBlockEditor;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::MaterialPropertyBlockEditor*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::MaterialPropertyBlockEditor*, "Oculus.Interaction", "MaterialPropertyBlockEditor");
// [ExecuteAlways]
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.MaterialPropertyBlockEditor
class CORDL_TYPE MaterialPropertyBlockEditor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ColorProperties, put=set_ColorProperties)) ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyColor>*  ColorProperties;

 __declspec(property(get=get_FloatProperties, put=set_FloatProperties)) ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyFloat>*  FloatProperties;

 __declspec(property(get=get_MaterialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  MaterialPropertyBlock;

 __declspec(property(get=get_Renderers, put=set_Renderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  Renderers;

 __declspec(property(get=get_VectorProperties, put=set_VectorProperties)) ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyVector>*  VectorProperties;

/// @brief Field _colorProperties, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorProperties, put=__cordl_internal_set__colorProperties)) ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyColor>*  _colorProperties;

/// @brief Field _floatProperties, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__floatProperties, put=__cordl_internal_set__floatProperties)) ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyFloat>*  _floatProperties;

/// @brief Field _materialPropertyBlock, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialPropertyBlock, put=__cordl_internal_set__materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  _materialPropertyBlock;

/// @brief Field _renderers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderers, put=__cordl_internal_set__renderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  _renderers;

/// @brief Field _updateEveryFrame, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__updateEveryFrame, put=__cordl_internal_set__updateEveryFrame)) bool  _updateEveryFrame;

/// @brief Field _vectorProperties, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__vectorProperties, put=__cordl_internal_set__vectorProperties)) ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyVector>*  _vectorProperties;

/// @brief Method Awake, addr 0xa47240c, size 0x168, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::Interaction::MaterialPropertyBlockEditor* New_ctor() ;

/// @brief Method Update, addr 0xa472574, size 0x10, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateMaterialPropertyBlock, addr 0xa471ecc, size 0x458, virtual false, abstract: false, final false
inline void UpdateMaterialPropertyBlock() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyColor>* const& __cordl_internal_get__colorProperties() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyColor>*& __cordl_internal_get__colorProperties() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyFloat>* const& __cordl_internal_get__floatProperties() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyFloat>*& __cordl_internal_get__floatProperties() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__materialPropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__materialPropertyBlock() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get__renderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get__renderers() ;

constexpr bool const& __cordl_internal_get__updateEveryFrame() const;

constexpr bool& __cordl_internal_get__updateEveryFrame() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyVector>* const& __cordl_internal_get__vectorProperties() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyVector>*& __cordl_internal_get__vectorProperties() ;

constexpr void __cordl_internal_set__colorProperties(::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyColor>*  value) ;

constexpr void __cordl_internal_set__floatProperties(::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyFloat>*  value) ;

constexpr void __cordl_internal_set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set__updateEveryFrame(bool  value) ;

constexpr void __cordl_internal_set__vectorProperties(::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyVector>*  value) ;

/// @brief Method .ctor, addr 0xa472584, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ColorProperties, addr 0xa4723ec, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyColor>* get_ColorProperties() ;

/// @brief Method get_FloatProperties, addr 0xa4723fc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyFloat>* get_FloatProperties() ;

/// @brief Method get_MaterialPropertyBlock, addr 0xa471e5c, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::MaterialPropertyBlock* get_MaterialPropertyBlock() ;

/// @brief Method get_Renderers, addr 0xa4723cc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* get_Renderers() ;

/// @brief Method get_VectorProperties, addr 0xa4723dc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyVector>* get_VectorProperties() ;

/// @brief Method set_ColorProperties, addr 0xa4723f4, size 0x8, virtual false, abstract: false, final false
inline void set_ColorProperties(::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyColor>*  value) ;

/// @brief Method set_FloatProperties, addr 0xa472404, size 0x8, virtual false, abstract: false, final false
inline void set_FloatProperties(::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyFloat>*  value) ;

/// @brief Method set_Renderers, addr 0xa4723d4, size 0x8, virtual false, abstract: false, final false
inline void set_Renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

/// @brief Method set_VectorProperties, addr 0xa4723e4, size 0x8, virtual false, abstract: false, final false
inline void set_VectorProperties(::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyVector>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialPropertyBlockEditor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockEditor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialPropertyBlockEditor(MaterialPropertyBlockEditor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockEditor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialPropertyBlockEditor(MaterialPropertyBlockEditor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15936};

/// [SerializeField]
/// @brief Field _renderers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ____renderers;

/// [SerializeField]
/// @brief Field _vectorProperties, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyVector>*  ____vectorProperties;

/// [SerializeField]
/// @brief Field _colorProperties, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyColor>*  ____colorProperties;

/// [SerializeField]
/// @brief Field _floatProperties, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::MaterialPropertyFloat>*  ____floatProperties;

/// [SerializeField]
/// @brief Field _updateEveryFrame, offset: 0x40, size: 0x1, def value: None
 bool  ____updateEveryFrame;

/// @brief Field _materialPropertyBlock, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____materialPropertyBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::MaterialPropertyBlockEditor, ____renderers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MaterialPropertyBlockEditor, ____vectorProperties) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MaterialPropertyBlockEditor, ____colorProperties) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MaterialPropertyBlockEditor, ____floatProperties) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MaterialPropertyBlockEditor, ____updateEveryFrame) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MaterialPropertyBlockEditor, ____materialPropertyBlock) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::MaterialPropertyBlockEditor) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction
