#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_Utility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB_Utility)
namespace DigitalOpus::MB::Core {
class MB_Utility_MB_Triangle;
}
namespace GlobalNamespace {
struct MB_Utility_MeshAnalysisResult;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
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
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB_Utility;
}
namespace DigitalOpus::MB::Core {
class MB_Utility_MB_Triangle;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB_Utility*);
MARK_REF_T(::DigitalOpus::MB::Core::MB_Utility_MB_Triangle*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_Utility*, "DigitalOpus.MB.Core", "MB_Utility");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_Utility_MB_Triangle*, "DigitalOpus.MB.Core", "MB_Utility/MB_Triangle");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_Utility
class CORDL_TYPE MB_Utility : public ::System::Object {
public:
// Declarations
using MB_Triangle = ::DigitalOpus::MB::Core::MB_Utility_MB_Triangle;

using MeshAnalysisResult = ::GlobalNamespace::MB_Utility_MeshAnalysisResult;

/// @brief Field DO_INTEGRITY_CHECKS, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DO_INTEGRITY_CHECKS, put=setStaticF_DO_INTEGRITY_CHECKS)) bool  DO_INTEGRITY_CHECKS;

/// @brief Method AreAllSharedMaterialsDistinct, addr 0x9dbfc58, size 0x114, virtual false, abstract: false, final false
static inline bool AreAllSharedMaterialsDistinct(::ArrayW<::UnityEngine::Material*>  sharedMaterials) ;

/// @brief Method ArrayBIsSubsetOfA, addr 0x9dbebc4, size 0x98, virtual false, abstract: false, final false
static inline bool ArrayBIsSubsetOfA(::ArrayW<::System::Object*>  a, ::ArrayW<::System::Object*>  b) ;

/// @brief Method BoneWeightToString, addr 0x9dc02b8, size 0x350, virtual false, abstract: false, final false
static inline ::StringW BoneWeightToString(::UnityEngine::BoneWeight  bw) ;

/// @brief Method ConvertAssetsRelativePathToFullSystemPath, addr 0x9dc01e0, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW ConvertAssetsRelativePathToFullSystemPath(::StringW  pth) ;

/// @brief Method Destroy, addr 0x9db9034, size 0xac, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::Object*  o) ;

/// @brief Method DisableRendererInSource, addr 0x9dbf418, size 0x124, virtual false, abstract: false, final false
static inline void DisableRendererInSource(::UnityEngine::GameObject*  go) ;

/// @brief Method GetBounds, addr 0x9dbff9c, size 0x244, virtual false, abstract: false, final false
static inline bool GetBounds(::UnityEngine::GameObject*  go, ::by_ref<::UnityEngine::Bounds>  b) ;

/// @brief Method GetGOMaterials, addr 0x9dbec5c, size 0x55c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Material>> GetGOMaterials(::UnityEngine::GameObject*  go) ;

/// @brief Method GetMesh, addr 0x9dbafb4, size 0x138, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> GetMesh(::UnityEngine::GameObject*  go) ;

/// @brief Method GetRenderer, addr 0x9dbf308, size 0x110, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Renderer> GetRenderer(::UnityEngine::GameObject*  go) ;

/// @brief Method IsSceneInstance, addr 0x9dc0280, size 0x38, virtual false, abstract: false, final false
static inline bool IsSceneInstance(::UnityEngine::GameObject*  go) ;

static inline ::DigitalOpus::MB::Core::MB_Utility* New_ctor() ;

/// @brief Method SetMesh, addr 0x9dbf1b8, size 0x150, virtual false, abstract: false, final false
static inline void SetMesh(::UnityEngine::GameObject*  go, ::UnityEngine::Mesh*  m) ;

/// @brief Method .ctor, addr 0x9dc0608, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method createTextureCopy, addr 0x9dbeae0, size 0xe4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> createTextureCopy(::UnityEngine::Texture2D*  source, bool  expectedToBeGammaCorrectedHint) ;

/// @brief Method doSubmeshesShareVertsOrTris, addr 0x9dbfd6c, size 0x230, virtual false, abstract: false, final false
static inline void doSubmeshesShareVertsOrTris(::UnityEngine::Mesh*  m, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>  mar) ;

static inline bool getStaticF_DO_INTEGRITY_CHECKS() ;

/// @brief Method hasOutOfBoundsUVs, addr 0x9dbf578, size 0x10c, virtual false, abstract: false, final false
static inline bool hasOutOfBoundsUVs(::UnityEngine::Mesh*  m, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>  putResultHere, int32_t  submeshIndex, int32_t  uvChannel) ;

/// @brief Method hasOutOfBoundsUVs, addr 0x9dbf53c, size 0x3c, virtual false, abstract: false, final false
static inline bool hasOutOfBoundsUVs(::UnityEngine::Mesh*  m, ::by_ref<::UnityEngine::Rect>  uvBounds) ;

/// @brief Method hasOutOfBoundsUVs, addr 0x9dbf684, size 0x18c, virtual false, abstract: false, final false
static inline bool hasOutOfBoundsUVs(::ArrayW<::UnityEngine::Vector2>  uvs, ::UnityEngine::Mesh*  m, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>  putResultHere, int32_t  submeshIndex) ;

/// @brief Method hasOutOfBoundsUVs, addr 0x9dbf810, size 0x170, virtual false, abstract: false, final false
static inline bool hasOutOfBoundsUVs(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  uvs, ::UnityEngine::Mesh*  m, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>  putResultHere, int32_t  submeshIndex) ;

/// @brief Method resampleTexture, addr 0x9dbfa1c, size 0x23c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> resampleTexture(::UnityEngine::Texture2D*  source, bool  expectToBeGammaCorrectedHint, int32_t  newWidth, int32_t  newHeight) ;

/// @brief Method setSolidColor, addr 0x9dbf980, size 0x9c, virtual false, abstract: false, final false
static inline void setSolidColor(::UnityEngine::Texture2D*  t, ::UnityEngine::Color  c) ;

static inline void setStaticF_DO_INTEGRITY_CHECKS(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_Utility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_Utility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_Utility(MB_Utility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_Utility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_Utility(MB_Utility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22749};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB_Utility) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_Utility/MB_Triangle
class CORDL_TYPE MB_Utility_MB_Triangle : public ::System::Object {
public:
// Declarations
/// @brief Field submeshIdx, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_submeshIdx, put=__cordl_internal_set_submeshIdx)) int32_t  submeshIdx;

/// @brief Field vs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_vs, put=__cordl_internal_set_vs)) ::ArrayW<int32_t>  vs;

/// @brief Method Initialize, addr 0x9dc0848, size 0xd0, virtual false, abstract: false, final false
inline void Initialize(::ArrayW<int32_t>  ts, int32_t  idx, int32_t  sIdx) ;

static inline ::DigitalOpus::MB::Core::MB_Utility_MB_Triangle* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_submeshIdx() const;

constexpr int32_t& __cordl_internal_get_submeshIdx() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_vs() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_vs() ;

constexpr void __cordl_internal_set_submeshIdx(int32_t  value) ;

constexpr void __cordl_internal_set_vs(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0x9dc0918, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method isSame, addr 0x9dc0610, size 0x114, virtual false, abstract: false, final false
inline bool isSame(::System::Object*  obj) ;

/// @brief Method sharesVerts, addr 0x9dc0724, size 0x124, virtual false, abstract: false, final false
inline bool sharesVerts(::DigitalOpus::MB::Core::MB_Utility_MB_Triangle*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_Utility_MB_Triangle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_Utility_MB_Triangle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_Utility_MB_Triangle(MB_Utility_MB_Triangle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_Utility_MB_Triangle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_Utility_MB_Triangle(MB_Utility_MB_Triangle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22748};

/// @brief Field submeshIdx, offset: 0x10, size: 0x4, def value: None
 int32_t  ___submeshIdx;

/// @brief Field vs, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___vs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB_Utility_MB_Triangle, ___submeshIdx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_Utility_MB_Triangle, ___vs) == 0x18, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB_Utility_MB_Triangle) == 0x20, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
