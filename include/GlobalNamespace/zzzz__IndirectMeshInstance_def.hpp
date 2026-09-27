#pragma once
// IWYU pragma private; include "GlobalNamespace/IndirectMeshInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(IndirectMeshInstance)
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class IndirectMeshInstance;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IndirectMeshInstance*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IndirectMeshInstance*, "", "IndirectMeshInstance");
// [DisallowMultipleComponent]
// [RequireComponent(typeof(UnityEngine.MeshRenderer), typeof(UnityEngine.MeshFilter))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: IndirectMeshInstance
class CORDL_TYPE IndirectMeshInstance : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _registered, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__registered, put=__cordl_internal_set__registered)) bool  _registered;

/// @brief Field dynamic, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_dynamic, put=__cordl_internal_set_dynamic)) bool  dynamic;

/// @brief Field meshFilter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshFilter, put=__cordl_internal_set_meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  meshFilter;

/// @brief Field meshRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  meshRenderer;

/// @brief Method Awake, addr 0x5694870, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::IndirectMeshInstance* New_ctor() ;

/// @brief Method OnEnable, addr 0x5694900, size 0x148, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr bool const& __cordl_internal_get__registered() const;

constexpr bool& __cordl_internal_get__registered() ;

constexpr bool const& __cordl_internal_get_dynamic() const;

constexpr bool& __cordl_internal_get_dynamic() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_meshFilter() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr void __cordl_internal_set__registered(bool  value) ;

constexpr void __cordl_internal_set_dynamic(bool  value) ;

constexpr void __cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x56956d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IndirectMeshInstance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IndirectMeshInstance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IndirectMeshInstance(IndirectMeshInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IndirectMeshInstance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IndirectMeshInstance(IndirectMeshInstance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{893};

/// [Tooltip("When true, the transform is tracked and updated each frame instead of baked at registration time.")]
/// [SerializeField]
/// @brief Field dynamic, offset: 0x20, size: 0x1, def value: None
 bool  ___dynamic;

/// @brief Field meshRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___meshRenderer;

/// @brief Field meshFilter, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ___meshFilter;

/// @brief Field _registered, offset: 0x38, size: 0x1, def value: None
 bool  ____registered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IndirectMeshInstance, ___dynamic) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshInstance, ___meshRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshInstance, ___meshFilter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IndirectMeshInstance, ____registered) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IndirectMeshInstance) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
