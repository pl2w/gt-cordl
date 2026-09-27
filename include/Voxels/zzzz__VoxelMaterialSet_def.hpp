#pragma once
// IWYU pragma private; include "Voxels/VoxelMaterialSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "Voxels/zzzz__VoxelMaterial_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelMaterialSet)
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2DArray;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector3;
}
namespace Voxels {
class VoxelMaterialSet___c;
}
namespace Voxels {
struct VoxelMaterial;
}
// Forward declare root types
namespace Voxels {
class VoxelMaterialSet;
}
namespace Voxels {
class VoxelMaterialSet___c;
}
// Write type traits
MARK_REF_T(::Voxels::VoxelMaterialSet*);
MARK_REF_T(::Voxels::VoxelMaterialSet___c*);
DEFINE_IL2CPP_CLASS(::Voxels::VoxelMaterialSet*, "Voxels", "VoxelMaterialSet");
DEFINE_IL2CPP_CLASS(::Voxels::VoxelMaterialSet___c*, "Voxels", "VoxelMaterialSet/<>c");
// [CreateAssetMenu(fileName = "VoxelMaterialSet", menuName = "Voxels/VoxelMaterialSet")]
// Dependencies UnityEngine.ScriptableObject, Voxels.VoxelMaterial
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelMaterialSet
class CORDL_TYPE VoxelMaterialSet : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using __c = ::Voxels::VoxelMaterialSet___c;

 __declspec(property(get=get_Material, put=set_Material)) ::UnityW<::UnityEngine::Material>  Material;

/// @brief Field Materials, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Materials, put=__cordl_internal_set_Materials)) ::ArrayW<::Voxels::VoxelMaterial>  Materials;

 __declspec(property(get=get_TextureArray, put=set_TextureArray)) ::UnityW<::UnityEngine::Texture2DArray>  TextureArray;

/// @brief Field <TextureArray>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__TextureArray_k__BackingField, put=__cordl_internal_set__TextureArray_k__BackingField)) ::UnityW<::UnityEngine::Texture2DArray>  _TextureArray_k__BackingField;

/// @brief Field _callCount, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__callCount, put=__cordl_internal_set__callCount)) int32_t  _callCount;

/// @brief Field _initialized, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _lastFrame, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastFrame, put=__cordl_internal_set__lastFrame)) int32_t  _lastFrame;

/// @brief Field _material, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__material, put=__cordl_internal_set__material)) ::UnityW<::UnityEngine::Material>  _material;

/// @brief Field backlightPower, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_backlightPower, put=__cordl_internal_set_backlightPower)) float_t  backlightPower;

/// @brief Field tile, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_tile, put=__cordl_internal_set_tile)) float_t  tile;

/// @brief Method GetHardness, addr 0x5dce190, size 0x38, virtual false, abstract: false, final false
inline int32_t GetHardness(uint8_t  material) ;

/// @brief Method Init, addr 0x5dcdec8, size 0x2c0, virtual false, abstract: false, final false
inline void Init() ;

static inline ::Voxels::VoxelMaterialSet* New_ctor() ;

/// @brief Method PlayDigFX, addr 0x5dc3cdc, size 0x194, virtual false, abstract: false, final false
inline void PlayDigFX(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal, ::ArrayW<int32_t>  amounts) ;

constexpr ::ArrayW<::Voxels::VoxelMaterial> const& __cordl_internal_get_Materials() const;

constexpr ::ArrayW<::Voxels::VoxelMaterial>& __cordl_internal_get_Materials() ;

constexpr ::UnityW<::UnityEngine::Texture2DArray> const& __cordl_internal_get__TextureArray_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Texture2DArray>& __cordl_internal_get__TextureArray_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__callCount() const;

constexpr int32_t& __cordl_internal_get__callCount() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr int32_t const& __cordl_internal_get__lastFrame() const;

constexpr int32_t& __cordl_internal_get__lastFrame() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material() ;

constexpr float_t const& __cordl_internal_get_backlightPower() const;

constexpr float_t& __cordl_internal_get_backlightPower() ;

constexpr float_t const& __cordl_internal_get_tile() const;

constexpr float_t& __cordl_internal_get_tile() ;

constexpr void __cordl_internal_set_Materials(::ArrayW<::Voxels::VoxelMaterial>  value) ;

constexpr void __cordl_internal_set__TextureArray_k__BackingField(::UnityW<::UnityEngine::Texture2DArray>  value) ;

constexpr void __cordl_internal_set__callCount(int32_t  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__lastFrame(int32_t  value) ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_backlightPower(float_t  value) ;

constexpr void __cordl_internal_set_tile(float_t  value) ;

/// @brief Method .ctor, addr 0x5dce1c8, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Material, addr 0x5dcdeb0, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_Material() ;

/// [CompilerGenerated]
/// @brief Method get_TextureArray, addr 0x5dcdea0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2DArray> get_TextureArray() ;

/// @brief Method set_Material, addr 0x5dce188, size 0x8, virtual false, abstract: false, final false
inline void set_Material(::UnityEngine::Material*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TextureArray, addr 0x5dcdea8, size 0x8, virtual false, abstract: false, final false
inline void set_TextureArray(::UnityEngine::Texture2DArray*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelMaterialSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelMaterialSet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelMaterialSet(VoxelMaterialSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelMaterialSet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelMaterialSet(VoxelMaterialSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5075};

/// @brief Field Materials, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Voxels::VoxelMaterial>  ___Materials;

/// [SerializeField]
/// @brief Field tile, offset: 0x20, size: 0x4, def value: None
 float_t  ___tile;

/// [SerializeField]
/// @brief Field backlightPower, offset: 0x24, size: 0x4, def value: None
 float_t  ___backlightPower;

/// [CompilerGenerated]
/// @brief Field <TextureArray>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2DArray>  ____TextureArray_k__BackingField;

/// @brief Field _initialized, offset: 0x30, size: 0x1, def value: None
 bool  ____initialized;

/// @brief Field _material, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

/// @brief Field _lastFrame, offset: 0x40, size: 0x4, def value: None
 int32_t  ____lastFrame;

/// @brief Field _callCount, offset: 0x44, size: 0x4, def value: None
 int32_t  ____callCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelMaterialSet, ___Materials) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelMaterialSet, ___tile) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelMaterialSet, ___backlightPower) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelMaterialSet, ____TextureArray_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelMaterialSet, ____initialized) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelMaterialSet, ____material) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelMaterialSet, ____lastFrame) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelMaterialSet, ____callCount) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelMaterialSet) == 0x48, "Size mismatch!");

} // namespace end def Voxels
// [CompilerGenerated]
// Dependencies System.Object
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelMaterialSet/<>c
class CORDL_TYPE VoxelMaterialSet___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Voxels::VoxelMaterialSet___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Func_2<::Voxels::VoxelMaterial,::UnityW<::UnityEngine::Texture2D>>*  __9__14_0;

static inline ::Voxels::VoxelMaterialSet___c* New_ctor() ;

/// @brief Method <Init>b__14_0, addr 0x5dce24c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> _Init_b__14_0(::Voxels::VoxelMaterial  m) ;

/// @brief Method .ctor, addr 0x5dce244, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Voxels::VoxelMaterialSet___c* getStaticF___9() ;

static inline ::System::Func_2<::Voxels::VoxelMaterial,::UnityW<::UnityEngine::Texture2D>>* getStaticF___9__14_0() ;

static inline void setStaticF___9(::Voxels::VoxelMaterialSet___c*  value) ;

static inline void setStaticF___9__14_0(::System::Func_2<::Voxels::VoxelMaterial,::UnityW<::UnityEngine::Texture2D>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelMaterialSet___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelMaterialSet___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelMaterialSet___c(VoxelMaterialSet___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelMaterialSet___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelMaterialSet___c(VoxelMaterialSet___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5074};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Voxels::VoxelMaterialSet___c) == 0x10, "Size mismatch!");

} // namespace end def Voxels
