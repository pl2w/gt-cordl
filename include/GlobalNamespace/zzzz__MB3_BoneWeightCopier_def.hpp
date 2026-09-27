#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_BoneWeightCopier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MB3_BoneWeightCopier)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MB3_BoneWeightCopier;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB3_BoneWeightCopier*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_BoneWeightCopier*, "", "MB3_BoneWeightCopier");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_BoneWeightCopier
class CORDL_TYPE MB3_BoneWeightCopier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field inputGameObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputGameObject, put=__cordl_internal_set_inputGameObject)) ::UnityW<::UnityEngine::GameObject>  inputGameObject;

/// @brief Field outputFolder, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputFolder, put=__cordl_internal_set_outputFolder)) ::StringW  outputFolder;

/// @brief Field outputPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputPrefab, put=__cordl_internal_set_outputPrefab)) ::UnityW<::UnityEngine::GameObject>  outputPrefab;

/// @brief Field radius, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Field seamMesh, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_seamMesh, put=__cordl_internal_set_seamMesh)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  seamMesh;

static inline ::GlobalNamespace::MB3_BoneWeightCopier* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_inputGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_inputGameObject() ;

constexpr ::StringW const& __cordl_internal_get_outputFolder() const;

constexpr ::StringW& __cordl_internal_get_outputFolder() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_outputPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_outputPrefab() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_seamMesh() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_seamMesh() ;

constexpr void __cordl_internal_set_inputGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_outputFolder(::StringW  value) ;

constexpr void __cordl_internal_set_outputPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

constexpr void __cordl_internal_set_seamMesh(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x9d75568, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_BoneWeightCopier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_BoneWeightCopier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_BoneWeightCopier(MB3_BoneWeightCopier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_BoneWeightCopier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_BoneWeightCopier(MB3_BoneWeightCopier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22567};

/// @brief Field inputGameObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___inputGameObject;

/// @brief Field outputPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___outputPrefab;

/// @brief Field radius, offset: 0x30, size: 0x4, def value: None
 float_t  ___radius;

/// @brief Field seamMesh, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___seamMesh;

/// @brief Field outputFolder, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___outputFolder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_BoneWeightCopier, ___inputGameObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_BoneWeightCopier, ___outputPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_BoneWeightCopier, ___radius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_BoneWeightCopier, ___seamMesh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_BoneWeightCopier, ___outputFolder) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_BoneWeightCopier) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
