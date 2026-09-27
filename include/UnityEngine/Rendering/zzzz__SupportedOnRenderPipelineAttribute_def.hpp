#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SupportedOnRenderPipelineAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SupportedOnRenderPipelineAttribute)
namespace GlobalNamespace {
struct SupportedOnRenderPipelineAttribute_SupportedMode;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class Lazy_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering {
class SupportedOnRenderPipelineAttribute___c;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class SupportedOnRenderPipelineAttribute;
}
namespace UnityEngine::Rendering {
class SupportedOnRenderPipelineAttribute___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*);
MARK_REF_T(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute*, "UnityEngine.Rendering", "SupportedOnRenderPipelineAttribute");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*, "UnityEngine.Rendering", "SupportedOnRenderPipelineAttribute/<>c");
// [AttributeUsage((System.AttributeTargets)4, AllowMultiple = false)]
// Dependencies System.Attribute, System.Type
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SupportedOnRenderPipelineAttribute
class CORDL_TYPE SupportedOnRenderPipelineAttribute : public ::System::Attribute {
public:
// Declarations
using SupportedMode = ::GlobalNamespace::SupportedOnRenderPipelineAttribute_SupportedMode;

using __c = ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c;

/// @brief Field <renderPipelineTypes>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderPipelineTypes_k__BackingField, put=__cordl_internal_set__renderPipelineTypes_k__BackingField)) ::ArrayW<::System::Type*>  _renderPipelineTypes_k__BackingField;

/// @brief Field k_DefaultRenderPipelineAsset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_DefaultRenderPipelineAsset, put=setStaticF_k_DefaultRenderPipelineAsset)) ::System::Lazy_1<::ArrayW<::System::Type*>>*  k_DefaultRenderPipelineAsset;

 __declspec(property(get=get_renderPipelineTypes)) ::ArrayW<::System::Type*>  renderPipelineTypes;

/// @brief Method GetSupportedMode, addr 0xb61a548, size 0x68, virtual false, abstract: false, final false
inline ::GlobalNamespace::SupportedOnRenderPipelineAttribute_SupportedMode GetSupportedMode(::System::Type*  renderPipelineAssetType) ;

/// @brief Method GetSupportedMode, addr 0xb61a5b0, size 0x160, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SupportedOnRenderPipelineAttribute_SupportedMode GetSupportedMode(::ArrayW<::System::Type*>  renderPipelineTypes, ::System::Type*  renderPipelineAssetType) ;

/// @brief Method IsTypeSupportedOnRenderPipeline, addr 0xb61a710, size 0x74, virtual false, abstract: false, final false
static inline bool IsTypeSupportedOnRenderPipeline(::System::Type*  type, ::System::Type*  renderPipelineAssetType) ;

static inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute* New_ctor(/* [ParamArray] */ ::ArrayW<::System::Type*>  renderPipeline) ;

static inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute* New_ctor(::System::Type*  renderPipeline) ;

constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get__renderPipelineTypes_k__BackingField() const;

constexpr ::ArrayW<::System::Type*>& __cordl_internal_get__renderPipelineTypes_k__BackingField() ;

constexpr void __cordl_internal_set__renderPipelineTypes_k__BackingField(::ArrayW<::System::Type*>  value) ;

/// @brief Method .ctor, addr 0xb61a254, size 0x2f4, virtual false, abstract: false, final false
inline void _ctor(/* [ParamArray] */ ::ArrayW<::System::Type*>  renderPipeline) ;

/// @brief Method .ctor, addr 0xb61a1a8, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  renderPipeline) ;

static inline ::System::Lazy_1<::ArrayW<::System::Type*>>* getStaticF_k_DefaultRenderPipelineAsset() ;

/// [CompilerGenerated]
/// @brief Method get_renderPipelineTypes, addr 0xb61a1a0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::System::Type*> get_renderPipelineTypes() ;

static inline void setStaticF_k_DefaultRenderPipelineAsset(::System::Lazy_1<::ArrayW<::System::Type*>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SupportedOnRenderPipelineAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SupportedOnRenderPipelineAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SupportedOnRenderPipelineAttribute(SupportedOnRenderPipelineAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SupportedOnRenderPipelineAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SupportedOnRenderPipelineAttribute(SupportedOnRenderPipelineAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15519};

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <renderPipelineTypes>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Type*>  ____renderPipelineTypes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute, ____renderPipelineTypes_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SupportedOnRenderPipelineAttribute/<>c
class CORDL_TYPE SupportedOnRenderPipelineAttribute___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*  __9;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::System::Func_2<::System::Type*,::StringW>*  __9__6_0;

static inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c* New_ctor() ;

/// @brief Method <.cctor>b__12_0, addr 0xb61a92c, size 0xdc, virtual false, abstract: false, final false
inline ::ArrayW<::System::Type*> __cctor_b__12_0() ;

/// @brief Method <.ctor>b__6_0, addr 0xb61a90c, size 0x20, virtual false, abstract: false, final false
inline ::StringW __ctor_b__6_0(::System::Type*  t) ;

/// @brief Method .ctor, addr 0xb61a904, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Type*,::StringW>* getStaticF___9__6_0() ;

static inline void setStaticF___9(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c*  value) ;

static inline void setStaticF___9__6_0(::System::Func_2<::System::Type*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SupportedOnRenderPipelineAttribute___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SupportedOnRenderPipelineAttribute___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SupportedOnRenderPipelineAttribute___c(SupportedOnRenderPipelineAttribute___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SupportedOnRenderPipelineAttribute___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SupportedOnRenderPipelineAttribute___c(SupportedOnRenderPipelineAttribute___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15518};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::SupportedOnRenderPipelineAttribute___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
