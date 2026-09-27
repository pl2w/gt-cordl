#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_Example.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MB_Example)
namespace GlobalNamespace {
class MB3_MeshBaker;
}
// Forward declare root types
namespace GlobalNamespace {
class MB_Example;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_Example*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_Example*, "", "MB_Example");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_Example
class CORDL_TYPE MB_Example : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field meshbaker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshbaker, put=__cordl_internal_set_meshbaker)) ::UnityW<::GlobalNamespace::MB3_MeshBaker>  meshbaker;

/// @brief Field objsToCombine, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_objsToCombine, put=__cordl_internal_set_objsToCombine)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  objsToCombine;

/// @brief Method LateUpdate, addr 0x9dfd614, size 0x84, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::MB_Example* New_ctor() ;

/// @brief Method OnGUI, addr 0x9dfd698, size 0xb0, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method Start, addr 0x9dfd5b8, size 0x5c, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker> const& __cordl_internal_get_meshbaker() const;

constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker>& __cordl_internal_get_meshbaker() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_objsToCombine() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_objsToCombine() ;

constexpr void __cordl_internal_set_meshbaker(::UnityW<::GlobalNamespace::MB3_MeshBaker>  value) ;

constexpr void __cordl_internal_set_objsToCombine(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0x9dfd748, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_Example() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_Example", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_Example(MB_Example && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_Example", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_Example(MB_Example const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32361};

/// @brief Field meshbaker, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB3_MeshBaker>  ___meshbaker;

/// @brief Field objsToCombine, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___objsToCombine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_Example, ___meshbaker) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_Example, ___objsToCombine) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_Example) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
