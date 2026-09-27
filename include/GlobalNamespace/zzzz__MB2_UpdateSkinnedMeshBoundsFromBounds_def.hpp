#pragma once
// IWYU pragma private; include "GlobalNamespace/MB2_UpdateSkinnedMeshBoundsFromBounds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MB2_UpdateSkinnedMeshBoundsFromBounds)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MB2_UpdateSkinnedMeshBoundsFromBounds;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds*, "", "MB2_UpdateSkinnedMeshBoundsFromBounds");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB2_UpdateSkinnedMeshBoundsFromBounds
class CORDL_TYPE MB2_UpdateSkinnedMeshBoundsFromBounds : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field objects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_objects, put=__cordl_internal_set_objects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objects;

/// @brief Field smr, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_smr, put=__cordl_internal_set_smr)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  smr;

static inline ::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds* New_ctor() ;

/// @brief Method Start, addr 0x9d74e8c, size 0x324, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x9d751b0, size 0x80, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_objects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_objects() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_smr() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_smr() ;

constexpr void __cordl_internal_set_objects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_smr(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x9d75458, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB2_UpdateSkinnedMeshBoundsFromBounds() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB2_UpdateSkinnedMeshBoundsFromBounds", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB2_UpdateSkinnedMeshBoundsFromBounds(MB2_UpdateSkinnedMeshBoundsFromBounds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB2_UpdateSkinnedMeshBoundsFromBounds", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_UpdateSkinnedMeshBoundsFromBounds(MB2_UpdateSkinnedMeshBoundsFromBounds const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22564};

/// @brief Field objects, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___objects;

/// @brief Field smr, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___smr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds, ___objects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds, ___smr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
