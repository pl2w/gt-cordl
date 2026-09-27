#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticMaterial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MetaXRAcousticMaterial)
namespace GlobalNamespace {
struct MetaXRAcousticMaterialProperties_BuiltinPreset;
}
namespace GlobalNamespace {
class MetaXRAcousticMaterialProperties;
}
namespace GlobalNamespace {
class MetaXRAcousticMaterial___c;
}
namespace Meta::XR::Acoustics {
class IMaterialDataProvider;
}
namespace Meta::XR::Acoustics {
class MaterialData;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MetaXRAcousticMaterial;
}
namespace GlobalNamespace {
class MetaXRAcousticMaterial___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetaXRAcousticMaterial*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticMaterial___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticMaterial*, "", "MetaXRAcousticMaterial");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticMaterial___c*, "", "MetaXRAcousticMaterial/<>c");
// Dependencies System.IntPtr, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticMaterial
class CORDL_TYPE MetaXRAcousticMaterial : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::MetaXRAcousticMaterial___c;

 __declspec(property(get=get_Color)) ::UnityEngine::Color  Color;

 __declspec(property(get=get_Data)) ::Meta::XR::Acoustics::MaterialData*  Data;

 __declspec(property(get=get_Properties, put=set_Properties)) ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>  Properties;

/// @brief Field customData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_customData, put=__cordl_internal_set_customData)) ::Meta::XR::Acoustics::MaterialData*  customData;

/// @brief Field hasCustomData, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCustomData, put=__cordl_internal_set_hasCustomData)) bool  hasCustomData;

/// @brief Field materialHandle, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialHandle, put=__cordl_internal_set_materialHandle)) ::System::IntPtr  materialHandle;

/// @brief Field properties, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_properties, put=__cordl_internal_set_properties)) ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>  properties;

/// @brief Convert operator to "::Meta::XR::Acoustics::IMaterialDataProvider"
constexpr operator  ::Meta::XR::Acoustics::IMaterialDataProvider*() noexcept;

/// @brief Method ApplyMaterialProperties, addr 0x9ea8e7c, size 0x38, virtual false, abstract: false, final false
inline bool ApplyMaterialProperties() ;

/// @brief Method ApplyPropertiesToNative, addr 0x9ea8eb4, size 0x8, virtual false, abstract: false, final false
static inline bool ApplyPropertiesToNative(::System::IntPtr  handle, ::Meta::XR::Acoustics::MaterialData*  data) ;

/// @brief Method ApplyPropertiesToNative, addr 0x9ea8ebc, size 0x820, virtual false, abstract: false, final false
static inline bool ApplyPropertiesToNative(::System::IntPtr  handle, ::Meta::XR::Acoustics::MaterialData*  data, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method CopyPresetToCustomData, addr 0x9ea8a40, size 0xa4, virtual false, abstract: false, final false
inline void CopyPresetToCustomData(::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset  preset) ;

/// @brief Method CreateMaterialNativeHandle, addr 0x9ea46b4, size 0x118, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateMaterialNativeHandle(::Meta::XR::Acoustics::MaterialData*  data) ;

/// @brief Method DestroyInternal, addr 0x9ea8e5c, size 0x20, virtual false, abstract: false, final false
inline void DestroyInternal() ;

/// @brief Method DestroyMaterialNativeHandle, addr 0x9ea47cc, size 0xac, virtual false, abstract: false, final false
static inline void DestroyMaterialNativeHandle(::System::IntPtr  handle) ;

/// @brief Method Meta.XR.Acoustics.IMaterialDataProvider.get_name, addr 0x9ea96e8, size 0x8, virtual true, abstract: false, final true
inline ::StringW Meta_XR_Acoustics_IMaterialDataProvider_get_name() ;

static inline ::GlobalNamespace::MetaXRAcousticMaterial* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9ea8e3c, size 0x20, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x9ea8db8, size 0x38, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartInternal, addr 0x9ea8df0, size 0x4c, virtual false, abstract: false, final false
inline bool StartInternal() ;

constexpr ::Meta::XR::Acoustics::MaterialData* const& __cordl_internal_get_customData() const;

constexpr ::Meta::XR::Acoustics::MaterialData*& __cordl_internal_get_customData() ;

constexpr bool const& __cordl_internal_get_hasCustomData() const;

constexpr bool& __cordl_internal_get_hasCustomData() ;

constexpr ::System::IntPtr const& __cordl_internal_get_materialHandle() const;

constexpr ::System::IntPtr& __cordl_internal_get_materialHandle() ;

constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties> const& __cordl_internal_get_properties() const;

constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>& __cordl_internal_get_properties() ;

constexpr void __cordl_internal_set_customData(::Meta::XR::Acoustics::MaterialData*  value) ;

constexpr void __cordl_internal_set_hasCustomData(bool  value) ;

constexpr void __cordl_internal_set_materialHandle(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_properties(::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>  value) ;

/// @brief Method .ctor, addr 0x9ea96dc, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Color, addr 0x9ea89ec, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color() ;

/// @brief Method get_Data, addr 0x9ea89c0, size 0x2c, virtual true, abstract: false, final true
inline ::Meta::XR::Acoustics::MaterialData* get_Data() ;

/// @brief Method get_Properties, addr 0x9ea89b0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties> get_Properties() ;

/// @brief Convert to "::Meta::XR::Acoustics::IMaterialDataProvider"
constexpr ::Meta::XR::Acoustics::IMaterialDataProvider* i___Meta__XR__Acoustics__IMaterialDataProvider() noexcept;

/// @brief Method set_Properties, addr 0x9ea89b8, size 0x8, virtual false, abstract: false, final false
inline void set_Properties(::GlobalNamespace::MetaXRAcousticMaterialProperties*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticMaterial() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMaterial", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticMaterial(MetaXRAcousticMaterial && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMaterial", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticMaterial(MetaXRAcousticMaterial const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29930};

/// [SerializeField]
/// @brief Field properties, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>  ___properties;

/// [SerializeField]
/// @brief Field hasCustomData, offset: 0x28, size: 0x1, def value: None
 bool  ___hasCustomData;

/// [SerializeField]
/// @brief Field customData, offset: 0x30, size: 0x8, def value: None
 ::Meta::XR::Acoustics::MaterialData*  ___customData;

/// @brief Field materialHandle, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  ___materialHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMaterial, ___properties) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMaterial, ___hasCustomData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMaterial, ___customData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMaterial, ___materialHandle) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticMaterial) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticMaterial/<>c
class CORDL_TYPE MetaXRAcousticMaterial___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::MetaXRAcousticMaterial___c*  __9;

/// @brief Field <>9__20_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_0, put=setStaticF___9__20_0)) ::System::Func_2<::UnityW<::UnityEngine::Transform>,::StringW>*  __9__20_0;

static inline ::GlobalNamespace::MetaXRAcousticMaterial___c* New_ctor() ;

/// @brief Method <ApplyPropertiesToNative>b__20_0, addr 0x9ea9760, size 0x18, virtual false, abstract: false, final false
inline ::StringW _ApplyPropertiesToNative_b__20_0(::UnityEngine::Transform*  t) ;

/// @brief Method .ctor, addr 0x9ea9758, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::MetaXRAcousticMaterial___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::Transform>,::StringW>* getStaticF___9__20_0() ;

static inline void setStaticF___9(::GlobalNamespace::MetaXRAcousticMaterial___c*  value) ;

static inline void setStaticF___9__20_0(::System::Func_2<::UnityW<::UnityEngine::Transform>,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticMaterial___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMaterial___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticMaterial___c(MetaXRAcousticMaterial___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMaterial___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticMaterial___c(MetaXRAcousticMaterial___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29929};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MetaXRAcousticMaterial___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
