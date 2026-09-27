#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckCompositionEngine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LckCompositionEngine)
namespace Liv::Lck::Rendering {
class ILckCompositionLayer;
}
namespace Liv::Lck::Rendering {
class LckCompositionEngine___c;
}
namespace Liv::Lck::Rendering {
class LckCompositionLayer;
}
namespace Liv::Lck::Rendering {
class LckCompositionProfile;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace Liv::Lck::Rendering {
class LckCompositionEngine;
}
namespace Liv::Lck::Rendering {
class LckCompositionEngine___c;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Rendering::LckCompositionEngine*);
MARK_REF_T(::Liv::Lck::Rendering::LckCompositionEngine___c*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Rendering::LckCompositionEngine*, "Liv.Lck.Rendering", "LckCompositionEngine");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Rendering::LckCompositionEngine___c*, "Liv.Lck.Rendering", "LckCompositionEngine/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::Rendering {
// Is value type: false
// CS Name: Liv.Lck.Rendering.LckCompositionEngine
class CORDL_TYPE LckCompositionEngine : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Liv::Lck::Rendering::LckCompositionEngine___c;

 __declspec(property(get=get_ActiveLayers, put=set_ActiveLayers)) ::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>*  ActiveLayers;

/// @brief Field DefaultBlendMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DefaultBlendMaterial, put=__cordl_internal_set_DefaultBlendMaterial)) ::UnityW<::UnityEngine::Material>  DefaultBlendMaterial;

 __declspec(property(get=get_HasActiveLayers, put=set_HasActiveLayers)) bool  HasActiveLayers;

 __declspec(property(get=get_IsDirty, put=set_IsDirty)) bool  IsDirty;

/// @brief Field <ActiveLayers>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ActiveLayers_k__BackingField, put=__cordl_internal_set__ActiveLayers_k__BackingField)) ::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>*  _ActiveLayers_k__BackingField;

/// @brief Field <HasActiveLayers>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasActiveLayers_k__BackingField, put=__cordl_internal_set__HasActiveLayers_k__BackingField)) bool  _HasActiveLayers_k__BackingField;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::Liv::Lck::Rendering::LckCompositionEngine>  _Instance_k__BackingField;

/// @brief Field <IsDirty>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDirty_k__BackingField, put=__cordl_internal_set__IsDirty_k__BackingField)) bool  _IsDirty_k__BackingField;

/// @brief Field _compositionProfile, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__compositionProfile, put=__cordl_internal_set__compositionProfile)) ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>  _compositionProfile;

static inline ::Liv::Lck::Rendering::LckCompositionEngine* New_ctor() ;

/// @brief Method OnDisable, addr 0x9d3ec80, size 0xdc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9d3e9ac, size 0x168, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetDirty, addr 0x9d3eb14, size 0x16c, virtual false, abstract: false, final false
inline void SetDirty() ;

/// @brief Method UpdateActiveLayers, addr 0x9d3ed5c, size 0x288, virtual false, abstract: false, final false
inline void UpdateActiveLayers() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_DefaultBlendMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_DefaultBlendMaterial() ;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>* const& __cordl_internal_get__ActiveLayers_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>*& __cordl_internal_get__ActiveLayers_k__BackingField() ;

constexpr bool const& __cordl_internal_get__HasActiveLayers_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasActiveLayers_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsDirty_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDirty_k__BackingField() ;

constexpr ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile> const& __cordl_internal_get__compositionProfile() const;

constexpr ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>& __cordl_internal_get__compositionProfile() ;

constexpr void __cordl_internal_set_DefaultBlendMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__ActiveLayers_k__BackingField(::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>*  value) ;

constexpr void __cordl_internal_set__HasActiveLayers_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsDirty_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__compositionProfile(::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>  value) ;

/// @brief Method .ctor, addr 0x9d3efe4, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Liv::Lck::Rendering::LckCompositionEngine> getStaticF__Instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_ActiveLayers, addr 0x9d3e98c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>* get_ActiveLayers() ;

/// [CompilerGenerated]
/// @brief Method get_HasActiveLayers, addr 0x9d3e97c, size 0x8, virtual false, abstract: false, final false
inline bool get_HasActiveLayers() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x9d3e8dc, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::Liv::Lck::Rendering::LckCompositionEngine> get_Instance() ;

/// [CompilerGenerated]
/// @brief Method get_IsDirty, addr 0x9d3e99c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDirty() ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::Liv::Lck::Rendering::LckCompositionEngine>  value) ;

/// [CompilerGenerated]
/// @brief Method set_ActiveLayers, addr 0x9d3e994, size 0x8, virtual false, abstract: false, final false
inline void set_ActiveLayers(::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_HasActiveLayers, addr 0x9d3e984, size 0x8, virtual false, abstract: false, final false
inline void set_HasActiveLayers(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x9d3e924, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::Liv::Lck::Rendering::LckCompositionEngine*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsDirty, addr 0x9d3e9a4, size 0x8, virtual false, abstract: false, final false
inline void set_IsDirty(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCompositionEngine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCompositionEngine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCompositionEngine(LckCompositionEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCompositionEngine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCompositionEngine(LckCompositionEngine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24852};

/// [SerializeField]
/// @brief Field _compositionProfile, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>  ____compositionProfile;

/// [Tooltip("The material to use for blending if a layer does not define its own.")]
/// [SerializeField]
/// @brief Field DefaultBlendMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___DefaultBlendMaterial;

/// [CompilerGenerated]
/// @brief Field <HasActiveLayers>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____HasActiveLayers_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ActiveLayers>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>*  ____ActiveLayers_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsDirty>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____IsDirty_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Rendering::LckCompositionEngine, ____compositionProfile) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckCompositionEngine, ___DefaultBlendMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckCompositionEngine, ____HasActiveLayers_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckCompositionEngine, ____ActiveLayers_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckCompositionEngine, ____IsDirty_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Rendering::LckCompositionEngine) == 0x48, "Size mismatch!");

} // namespace end def Liv::Lck::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Rendering {
// Is value type: false
// CS Name: Liv.Lck.Rendering.LckCompositionEngine/<>c
class CORDL_TYPE LckCompositionEngine___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Liv::Lck::Rendering::LckCompositionEngine___c*  __9;

/// @brief Field <>9__20_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_0, put=setStaticF___9__20_0)) ::System::Func_2<::Liv::Lck::Rendering::LckCompositionLayer*,bool>*  __9__20_0;

static inline ::Liv::Lck::Rendering::LckCompositionEngine___c* New_ctor() ;

/// @brief Method <SetDirty>b__20_0, addr 0x9d3f0e4, size 0x94, virtual false, abstract: false, final false
inline bool _SetDirty_b__20_0(::Liv::Lck::Rendering::LckCompositionLayer*  layer) ;

/// @brief Method .ctor, addr 0x9d3f0dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::Rendering::LckCompositionEngine___c* getStaticF___9() ;

static inline ::System::Func_2<::Liv::Lck::Rendering::LckCompositionLayer*,bool>* getStaticF___9__20_0() ;

static inline void setStaticF___9(::Liv::Lck::Rendering::LckCompositionEngine___c*  value) ;

static inline void setStaticF___9__20_0(::System::Func_2<::Liv::Lck::Rendering::LckCompositionLayer*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCompositionEngine___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCompositionEngine___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCompositionEngine___c(LckCompositionEngine___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCompositionEngine___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCompositionEngine___c(LckCompositionEngine___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24851};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Rendering::LckCompositionEngine___c) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Rendering
