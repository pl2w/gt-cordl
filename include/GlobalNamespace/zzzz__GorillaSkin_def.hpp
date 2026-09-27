#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSkin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(GorillaSkin)
namespace GlobalNamespace {
struct GorillaSkin_SkinType;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaSkin;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaSkin*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSkin*, "", "GorillaSkin");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaSkin
class CORDL_TYPE GorillaSkin : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using SkinType = ::GlobalNamespace::GorillaSkin_SkinType;

/// @brief Field _bodyMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyMaterial, put=__cordl_internal_set__bodyMaterial)) ::UnityW<::UnityEngine::Material>  _bodyMaterial;

/// @brief Field _bodyMesh, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyMesh, put=__cordl_internal_set__bodyMesh)) ::UnityW<::UnityEngine::Mesh>  _bodyMesh;

/// @brief Field _bodyRuntime, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyRuntime, put=__cordl_internal_set__bodyRuntime)) ::UnityW<::UnityEngine::Material>  _bodyRuntime;

/// @brief Field _chestMaterial, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__chestMaterial, put=__cordl_internal_set__chestMaterial)) ::UnityW<::UnityEngine::Material>  _chestMaterial;

/// @brief Field _chestRuntime, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__chestRuntime, put=__cordl_internal_set__chestRuntime)) ::UnityW<::UnityEngine::Material>  _chestRuntime;

/// @brief Field _disableHeadless, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__disableHeadless, put=__cordl_internal_set__disableHeadless)) bool  _disableHeadless;

/// @brief Field _g_materialsWriteCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__g_materialsWriteCache, put=setStaticF__g_materialsWriteCache)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  _g_materialsWriteCache;

/// @brief Field _g_sharedMaterialsCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__g_sharedMaterialsCache, put=setStaticF__g_sharedMaterialsCache)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  _g_sharedMaterialsCache;

/// @brief Field _scoreRuntime, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__scoreRuntime, put=__cordl_internal_set__scoreRuntime)) ::UnityW<::UnityEngine::Material>  _scoreRuntime;

/// @brief Field _scoreboardMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__scoreboardMaterial, put=__cordl_internal_set__scoreboardMaterial)) ::UnityW<::UnityEngine::Material>  _scoreboardMaterial;

 __declspec(property(get=get_allowHeadless)) bool  allowHeadless;

 __declspec(property(get=get_bodyMaterial)) ::UnityW<::UnityEngine::Material>  bodyMaterial;

 __declspec(property(get=get_bodyMesh)) ::UnityW<::UnityEngine::Mesh>  bodyMesh;

 __declspec(property(get=get_chestMaterial)) ::UnityW<::UnityEngine::Material>  chestMaterial;

 __declspec(property(get=get_scoreboardMaterial)) ::UnityW<::UnityEngine::Material>  scoreboardMaterial;

/// @brief Method ApplySkinToMannequin, addr 0x5651834, size 0x7b4, virtual false, abstract: false, final false
inline void ApplySkinToMannequin(::UnityEngine::GameObject*  mannequin, bool  swapMesh) ;

/// @brief Method ApplyToRig, addr 0x5651fe8, size 0x1a8, virtual false, abstract: false, final false
static inline void ApplyToRig(::GlobalNamespace::VRRig*  rig, ::GlobalNamespace::GorillaSkin*  skin, ::GlobalNamespace::GorillaSkin_SkinType  type) ;

/// @brief Method CopyWithInstancedMaterials, addr 0x56513a0, size 0x1b4, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GorillaSkin> CopyWithInstancedMaterials(::GlobalNamespace::GorillaSkin*  basis) ;

/// @brief Method GetActiveSkin, addr 0x56515e0, size 0xec, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GorillaSkin> GetActiveSkin(::GlobalNamespace::VRRig*  rig, ::by_ref<bool>  useDefaultBodySkin) ;

static inline ::GlobalNamespace::GorillaSkin* New_ctor() ;

/// @brief Method ShowActiveSkin, addr 0x565156c, size 0x74, virtual false, abstract: false, final false
static inline void ShowActiveSkin(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method ShowSkin, addr 0x56516cc, size 0x168, virtual false, abstract: false, final false
static inline void ShowSkin(::GlobalNamespace::VRRig*  rig, ::GlobalNamespace::GorillaSkin*  skin, bool  useDefaultBodySkin) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__bodyMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__bodyMaterial() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__bodyMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__bodyMesh() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__bodyRuntime() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__bodyRuntime() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__chestMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__chestMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__chestRuntime() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__chestRuntime() ;

constexpr bool const& __cordl_internal_get__disableHeadless() const;

constexpr bool& __cordl_internal_get__disableHeadless() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__scoreRuntime() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__scoreRuntime() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__scoreboardMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__scoreboardMaterial() ;

constexpr void __cordl_internal_set__bodyMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__bodyMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__bodyRuntime(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__chestMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__chestRuntime(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__disableHeadless(bool  value) ;

constexpr void __cordl_internal_set__scoreRuntime(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__scoreboardMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x5652190, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* getStaticF__g_materialsWriteCache() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* getStaticF__g_sharedMaterialsCache() ;

/// @brief Method get_allowHeadless, addr 0x5651390, size 0x10, virtual false, abstract: false, final false
inline bool get_allowHeadless() ;

/// @brief Method get_bodyMaterial, addr 0x5651554, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_bodyMaterial() ;

/// @brief Method get_bodyMesh, addr 0x5651388, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_bodyMesh() ;

/// @brief Method get_chestMaterial, addr 0x565155c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_chestMaterial() ;

/// @brief Method get_scoreboardMaterial, addr 0x5651564, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_scoreboardMaterial() ;

static inline void setStaticF__g_materialsWriteCache(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

static inline void setStaticF__g_sharedMaterialsCache(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaSkin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaSkin", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaSkin(GorillaSkin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaSkin", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaSkin(GorillaSkin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{729};

/// [FormerlySerializedAs("chestMaterial")]
/// [FormerlySerializedAs("chestEarsMaterial")]
/// [SerializeField]
/// @brief Field _chestMaterial, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____chestMaterial;

/// [FormerlySerializedAs("bodyMaterial")]
/// [SerializeField]
/// @brief Field _bodyMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____bodyMaterial;

/// [SerializeField]
/// @brief Field _scoreboardMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____scoreboardMaterial;

/// [Tooltip("Check this if skin materials are incompatible with HeadlessMonkeRig mesh")]
/// [SerializeField]
/// @brief Field _disableHeadless, offset: 0x30, size: 0x1, def value: None
 bool  ____disableHeadless;

/// [Space]
/// [SerializeField]
/// @brief Field _bodyMesh, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____bodyMesh;

/// [Space]
/// @brief Field _bodyRuntime, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____bodyRuntime;

/// @brief Field _chestRuntime, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____chestRuntime;

/// @brief Field _scoreRuntime, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____scoreRuntime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaSkin, ____chestMaterial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSkin, ____bodyMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSkin, ____scoreboardMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSkin, ____disableHeadless) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSkin, ____bodyMesh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSkin, ____bodyRuntime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSkin, ____chestRuntime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSkin, ____scoreRuntime) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaSkin) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
