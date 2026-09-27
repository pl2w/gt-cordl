#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaCaveCrystalSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaCaveCrystalSetup)
namespace GorillaTagScripts {
class CrystalVisualsPreset;
}
namespace GorillaTagScripts {
class GorillaCaveCrystalSetup_CrystalDef;
}
namespace GorillaTagScripts {
class GorillaCaveCrystalSetup___c;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GorillaTagScripts {
class GorillaCaveCrystalSetup;
}
namespace GorillaTagScripts {
class GorillaCaveCrystalSetup_CrystalDef;
}
namespace GorillaTagScripts {
class GorillaCaveCrystalSetup___c;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GorillaCaveCrystalSetup*);
MARK_REF_T(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*);
MARK_REF_T(::GorillaTagScripts::GorillaCaveCrystalSetup___c*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GorillaCaveCrystalSetup*, "GorillaTagScripts", "GorillaCaveCrystalSetup");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*, "GorillaTagScripts", "GorillaCaveCrystalSetup/CrystalDef");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GorillaCaveCrystalSetup___c*, "GorillaTagScripts", "GorillaCaveCrystalSetup/<>c");
// [CreateAssetMenu(fileName = "GorillaCaveCrystalSetup", menuName = "ScriptableObjects/GorillaCaveCrystalSetup", order = 0)]
// Dependencies GorillaTagScripts.GorillaCaveCrystalSetup::CrystalDef, UnityEngine.ScriptableObject
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.GorillaCaveCrystalSetup
class CORDL_TYPE GorillaCaveCrystalSetup : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using CrystalDef = ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef;

using __c = ::GorillaTagScripts::GorillaCaveCrystalSetup___c;

/// @brief Field CrystalAlbedo, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CrystalAlbedo, put=__cordl_internal_set_CrystalAlbedo)) ::UnityW<::UnityEngine::Texture2D>  CrystalAlbedo;

/// @brief Field CrystalDarkAlbedo, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CrystalDarkAlbedo, put=__cordl_internal_set_CrystalDarkAlbedo)) ::UnityW<::UnityEngine::Texture2D>  CrystalDarkAlbedo;

/// @brief Field Dark, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_Dark, put=__cordl_internal_set_Dark)) ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  Dark;

/// @brief Field DarkBlue, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_DarkBlue, put=__cordl_internal_set_DarkBlue)) ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  DarkBlue;

/// @brief Field DarkLight, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_DarkLight, put=__cordl_internal_set_DarkLight)) ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  DarkLight;

/// @brief Field DarkLightUnderWater, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_DarkLightUnderWater, put=__cordl_internal_set_DarkLightUnderWater)) ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  DarkLightUnderWater;

/// @brief Field Green, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Green, put=__cordl_internal_set_Green)) ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  Green;

/// @brief Field Orange, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Orange, put=__cordl_internal_set_Orange)) ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  Orange;

/// @brief Field Pink, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_Pink, put=__cordl_internal_set_Pink)) ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  Pink;

/// @brief Field Red, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Red, put=__cordl_internal_set_Red)) ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  Red;

/// @brief Field SharedBase, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_SharedBase, put=__cordl_internal_set_SharedBase)) ::UnityW<::UnityEngine::Material>  SharedBase;

/// @brief Field Teal, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Teal, put=__cordl_internal_set_Teal)) ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  Teal;

/// @brief Field Yellow, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Yellow, put=__cordl_internal_set_Yellow)) ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  Yellow;

/// @brief Field _notes, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__notes, put=__cordl_internal_set__notes)) ::StringW  _notes;

/// @brief Field _target, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::GameObject>  _target;

/// @brief Field gCrystalDefs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gCrystalDefs, put=setStaticF_gCrystalDefs)) ::ArrayW<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*>  gCrystalDefs;

/// @brief Field gInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gInstance, put=setStaticF_gInstance)) ::UnityW<::GorillaTagScripts::GorillaCaveCrystalSetup>  gInstance;

/// @brief Method GetCrystalDefs, addr 0x5bc5fc4, size 0x1ec, virtual false, abstract: false, final false
inline ::ArrayW<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> GetCrystalDefs() ;

static inline ::GorillaTagScripts::GorillaCaveCrystalSetup* New_ctor() ;

/// @brief Method OnEnable, addr 0x5bc5f10, size 0xb4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// [CompilerGenerated]
/// @brief Method <GetCrystalDefs>b__19_1, addr 0x5bc61b8, size 0x98, virtual false, abstract: false, final false
inline ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* _GetCrystalDefs_b__19_1(::System::Reflection::FieldInfo*  f) ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_CrystalAlbedo() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_CrystalAlbedo() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_CrystalDarkAlbedo() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_CrystalDarkAlbedo() ;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& __cordl_internal_get_Dark() const;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& __cordl_internal_get_Dark() ;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& __cordl_internal_get_DarkBlue() const;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& __cordl_internal_get_DarkBlue() ;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& __cordl_internal_get_DarkLight() const;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& __cordl_internal_get_DarkLight() ;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& __cordl_internal_get_DarkLightUnderWater() const;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& __cordl_internal_get_DarkLightUnderWater() ;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& __cordl_internal_get_Green() const;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& __cordl_internal_get_Green() ;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& __cordl_internal_get_Orange() const;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& __cordl_internal_get_Orange() ;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& __cordl_internal_get_Pink() const;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& __cordl_internal_get_Pink() ;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& __cordl_internal_get_Red() const;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& __cordl_internal_get_Red() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_SharedBase() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_SharedBase() ;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& __cordl_internal_get_Teal() const;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& __cordl_internal_get_Teal() ;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* const& __cordl_internal_get_Yellow() const;

constexpr ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*& __cordl_internal_get_Yellow() ;

constexpr ::StringW const& __cordl_internal_get__notes() const;

constexpr ::StringW& __cordl_internal_get__notes() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set_CrystalAlbedo(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_CrystalDarkAlbedo(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_Dark(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value) ;

constexpr void __cordl_internal_set_DarkBlue(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value) ;

constexpr void __cordl_internal_set_DarkLight(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value) ;

constexpr void __cordl_internal_set_DarkLightUnderWater(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value) ;

constexpr void __cordl_internal_set_Green(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value) ;

constexpr void __cordl_internal_set_Orange(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value) ;

constexpr void __cordl_internal_set_Pink(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value) ;

constexpr void __cordl_internal_set_Red(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value) ;

constexpr void __cordl_internal_set_SharedBase(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_Teal(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value) ;

constexpr void __cordl_internal_set_Yellow(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  value) ;

constexpr void __cordl_internal_set__notes(::StringW  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5bc61b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> getStaticF_gCrystalDefs() ;

static inline ::UnityW<::GorillaTagScripts::GorillaCaveCrystalSetup> getStaticF_gInstance() ;

/// @brief Method get_Instance, addr 0x5bc5ec8, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaTagScripts::GorillaCaveCrystalSetup> get_Instance() ;

static inline void setStaticF_gCrystalDefs(::ArrayW<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*>  value) ;

static inline void setStaticF_gInstance(::UnityW<::GorillaTagScripts::GorillaCaveCrystalSetup>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaCaveCrystalSetup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaCaveCrystalSetup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaCaveCrystalSetup(GorillaCaveCrystalSetup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaCaveCrystalSetup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaCaveCrystalSetup(GorillaCaveCrystalSetup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3985};

/// @brief Field SharedBase, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___SharedBase;

/// @brief Field CrystalAlbedo, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___CrystalAlbedo;

/// @brief Field CrystalDarkAlbedo, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___CrystalDarkAlbedo;

/// @brief Field Red, offset: 0x30, size: 0x8, def value: None
 ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  ___Red;

/// @brief Field Orange, offset: 0x38, size: 0x8, def value: None
 ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  ___Orange;

/// @brief Field Yellow, offset: 0x40, size: 0x8, def value: None
 ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  ___Yellow;

/// @brief Field Green, offset: 0x48, size: 0x8, def value: None
 ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  ___Green;

/// @brief Field Teal, offset: 0x50, size: 0x8, def value: None
 ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  ___Teal;

/// @brief Field DarkBlue, offset: 0x58, size: 0x8, def value: None
 ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  ___DarkBlue;

/// @brief Field Pink, offset: 0x60, size: 0x8, def value: None
 ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  ___Pink;

/// @brief Field Dark, offset: 0x68, size: 0x8, def value: None
 ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  ___Dark;

/// @brief Field DarkLight, offset: 0x70, size: 0x8, def value: None
 ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  ___DarkLight;

/// @brief Field DarkLightUnderWater, offset: 0x78, size: 0x8, def value: None
 ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*  ___DarkLightUnderWater;

/// [SerializeField]
/// [TextArea(4, 10)]
/// @brief Field _notes, offset: 0x80, size: 0x8, def value: None
 ::StringW  ____notes;

/// [Space]
/// [SerializeField]
/// @brief Field _target, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup, ___SharedBase) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup, ___CrystalAlbedo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup, ___CrystalDarkAlbedo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup, ___Red) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup, ___Orange) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup, ___Yellow) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup, ___Green) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup, ___Teal) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup, ___DarkBlue) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup, ___Pink) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup, ___Dark) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup, ___DarkLight) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup, ___DarkLightUnderWater) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup, ____notes) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup, ____target) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GorillaCaveCrystalSetup) == 0x90, "Size mismatch!");

} // namespace end def GorillaTagScripts
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.GorillaCaveCrystalSetup/<>c
class CORDL_TYPE GorillaCaveCrystalSetup___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaTagScripts::GorillaCaveCrystalSetup___c*  __9;

/// @brief Field <>9__19_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_0, put=setStaticF___9__19_0)) ::System::Func_2<::System::Reflection::FieldInfo*,bool>*  __9__19_0;

static inline ::GorillaTagScripts::GorillaCaveCrystalSetup___c* New_ctor() ;

/// @brief Method <GetCrystalDefs>b__19_0, addr 0x5bc62c8, size 0xbc, virtual false, abstract: false, final false
inline bool _GetCrystalDefs_b__19_0(::System::Reflection::FieldInfo*  f) ;

/// @brief Method .ctor, addr 0x5bc62c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaTagScripts::GorillaCaveCrystalSetup___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Reflection::FieldInfo*,bool>* getStaticF___9__19_0() ;

static inline void setStaticF___9(::GorillaTagScripts::GorillaCaveCrystalSetup___c*  value) ;

static inline void setStaticF___9__19_0(::System::Func_2<::System::Reflection::FieldInfo*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaCaveCrystalSetup___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaCaveCrystalSetup___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaCaveCrystalSetup___c(GorillaCaveCrystalSetup___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaCaveCrystalSetup___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaCaveCrystalSetup___c(GorillaCaveCrystalSetup___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3984};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::GorillaCaveCrystalSetup___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaTagScripts
// Dependencies System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.GorillaCaveCrystalSetup/CrystalDef
class CORDL_TYPE GorillaCaveCrystalSetup_CrystalDef : public ::System::Object {
public:
// Declarations
/// @brief Field high, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_high, put=__cordl_internal_set_high)) int32_t  high;

/// @brief Field keyMaterial, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyMaterial, put=__cordl_internal_set_keyMaterial)) ::UnityW<::UnityEngine::Material>  keyMaterial;

/// @brief Field low, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_low, put=__cordl_internal_set_low)) int32_t  low;

/// @brief Field mid, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_mid, put=__cordl_internal_set_mid)) int32_t  mid;

/// @brief Field visualPreset, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_visualPreset, put=__cordl_internal_set_visualPreset)) ::UnityW<::GorillaTagScripts::CrystalVisualsPreset>  visualPreset;

static inline ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_high() const;

constexpr int32_t& __cordl_internal_get_high() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_keyMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_keyMaterial() ;

constexpr int32_t const& __cordl_internal_get_low() const;

constexpr int32_t& __cordl_internal_get_low() ;

constexpr int32_t const& __cordl_internal_get_mid() const;

constexpr int32_t& __cordl_internal_get_mid() ;

constexpr ::UnityW<::GorillaTagScripts::CrystalVisualsPreset> const& __cordl_internal_get_visualPreset() const;

constexpr ::UnityW<::GorillaTagScripts::CrystalVisualsPreset>& __cordl_internal_get_visualPreset() ;

constexpr void __cordl_internal_set_high(int32_t  value) ;

constexpr void __cordl_internal_set_keyMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_low(int32_t  value) ;

constexpr void __cordl_internal_set_mid(int32_t  value) ;

constexpr void __cordl_internal_set_visualPreset(::UnityW<::GorillaTagScripts::CrystalVisualsPreset>  value) ;

/// @brief Method .ctor, addr 0x5bc6250, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaCaveCrystalSetup_CrystalDef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaCaveCrystalSetup_CrystalDef", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaCaveCrystalSetup_CrystalDef(GorillaCaveCrystalSetup_CrystalDef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaCaveCrystalSetup_CrystalDef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaCaveCrystalSetup_CrystalDef(GorillaCaveCrystalSetup_CrystalDef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3983};

/// @brief Field keyMaterial, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___keyMaterial;

/// @brief Field visualPreset, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::CrystalVisualsPreset>  ___visualPreset;

/// [Space]
/// @brief Field low, offset: 0x20, size: 0x4, def value: None
 int32_t  ___low;

/// @brief Field mid, offset: 0x24, size: 0x4, def value: None
 int32_t  ___mid;

/// @brief Field high, offset: 0x28, size: 0x4, def value: None
 int32_t  ___high;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef, ___keyMaterial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef, ___visualPreset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef, ___low) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef, ___mid) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef, ___high) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts
