#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Skinned/SkinnedColliderCreator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SkinnedColliderCreator)
namespace Technie::PhysicsCreator::Skinned {
class BoneData;
}
namespace Technie::PhysicsCreator::Skinned {
class BoneHullData;
}
namespace Technie::PhysicsCreator::Skinned {
class SkinnedColliderEditorData;
}
namespace Technie::PhysicsCreator {
class ICreatorComponent;
}
namespace Technie::PhysicsCreator {
class IEditorData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Technie::PhysicsCreator::Skinned {
class SkinnedColliderCreator;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator*, "Technie.PhysicsCreator.Skinned", "SkinnedColliderCreator");
// [ExecuteInEditMode]
// [DisallowMultipleComponent]
// Dependencies UnityEngine.MonoBehaviour
namespace Technie::PhysicsCreator::Skinned {
// Is value type: false
// CS Name: Technie.PhysicsCreator.Skinned.SkinnedColliderCreator
class CORDL_TYPE SkinnedColliderCreator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field editorData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_editorData, put=__cordl_internal_set_editorData)) ::UnityW<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData>  editorData;

/// @brief Field targetSkinnedRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetSkinnedRenderer, put=__cordl_internal_set_targetSkinnedRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  targetSkinnedRenderer;

/// @brief Convert operator to "::Technie::PhysicsCreator::ICreatorComponent"
constexpr operator  ::Technie::PhysicsCreator::ICreatorComponent*() noexcept;

/// @brief Method FindBone, addr 0xadd8d10, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> FindBone(::Technie::PhysicsCreator::Skinned::BoneData*  boneData) ;

/// @brief Method FindBone, addr 0xadd8d28, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> FindBone(::Technie::PhysicsCreator::Skinned::BoneHullData*  hullData) ;

/// @brief Method FindBone, addr 0xadd8730, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> FindBone(::UnityEngine::SkinnedMeshRenderer*  skinnedRenderer, ::StringW  nameToFind) ;

/// @brief Method GetEditorData, addr 0xadd8d08, size 0x8, virtual true, abstract: false, final true
inline ::Technie::PhysicsCreator::IEditorData* GetEditorData() ;

/// @brief Method GetGameObject, addr 0xadd8ca0, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::GameObject> GetGameObject() ;

/// @brief Method HasEditorData, addr 0xadd8ca8, size 0x60, virtual true, abstract: false, final true
inline bool HasEditorData() ;

static inline ::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator* New_ctor() ;

/// @brief Method OnDestroy, addr 0xadd8c34, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0xadd8c38, size 0x68, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData> const& __cordl_internal_get_editorData() const;

constexpr ::UnityW<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData>& __cordl_internal_get_editorData() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_targetSkinnedRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_targetSkinnedRenderer() ;

constexpr void __cordl_internal_set_editorData(::UnityW<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData>  value) ;

constexpr void __cordl_internal_set_targetSkinnedRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

/// @brief Method .ctor, addr 0xadd8d40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Technie::PhysicsCreator::ICreatorComponent"
constexpr ::Technie::PhysicsCreator::ICreatorComponent* i___Technie__PhysicsCreator__ICreatorComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkinnedColliderCreator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkinnedColliderCreator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkinnedColliderCreator(SkinnedColliderCreator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkinnedColliderCreator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkinnedColliderCreator(SkinnedColliderCreator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30527};

/// @brief Field targetSkinnedRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___targetSkinnedRenderer;

/// @brief Field editorData, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData>  ___editorData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator, ___targetSkinnedRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator, ___editorData) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::Skinned::SkinnedColliderCreator) == 0x30, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator::Skinned
