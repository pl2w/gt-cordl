#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialUVOffsetListSetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialUVOffsetListSetter)
namespace GlobalNamespace {
class IBuildValidation;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialUVOffsetListSetter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MaterialUVOffsetListSetter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MaterialUVOffsetListSetter*, "", "MaterialUVOffsetListSetter");
// [RequireComponent(typeof(UnityEngine.MeshRenderer))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialUVOffsetListSetter
class CORDL_TYPE MaterialUVOffsetListSetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field matPropertyBlock, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_matPropertyBlock, put=__cordl_internal_set_matPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  matPropertyBlock;

/// @brief Field meshRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  meshRenderer;

/// @brief Field uvOffsetList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_uvOffsetList, put=__cordl_internal_set_uvOffsetList)) ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvOffsetList;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method Awake, addr 0x5b0886c, size 0xb4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BuildValidationCheck, addr 0x5b08b0c, size 0x1c0, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

static inline ::GlobalNamespace::MaterialUVOffsetListSetter* New_ctor() ;

/// @brief Method SetUVOffset, addr 0x5b08920, size 0x1ec, virtual false, abstract: false, final false
inline void SetUVOffset(int32_t  listIndex) ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_matPropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_matPropertyBlock() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& __cordl_internal_get_uvOffsetList() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& __cordl_internal_get_uvOffsetList() ;

constexpr void __cordl_internal_set_matPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_uvOffsetList(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method .ctor, addr 0x5b08ccc, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialUVOffsetListSetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialUVOffsetListSetter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialUVOffsetListSetter(MaterialUVOffsetListSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialUVOffsetListSetter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialUVOffsetListSetter(MaterialUVOffsetListSetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3514};

/// [SerializeField]
/// @brief Field uvOffsetList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  ___uvOffsetList;

/// @brief Field meshRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___meshRenderer;

/// @brief Field matPropertyBlock, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___matPropertyBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialUVOffsetListSetter, ___uvOffsetList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialUVOffsetListSetter, ___meshRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialUVOffsetListSetter, ___matPropertyBlock) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MaterialUVOffsetListSetter) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
