#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_TextureArrayReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MB_TextureArrayReference)
namespace UnityEngine {
class Texture2DArray;
}
// Forward declare root types
namespace GlobalNamespace {
class MB_TextureArrayReference;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_TextureArrayReference*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_TextureArrayReference*, "", "MB_TextureArrayReference");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_TextureArrayReference
class CORDL_TYPE MB_TextureArrayReference : public ::System::Object {
public:
// Declarations
/// @brief Field texArray, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_texArray, put=__cordl_internal_set_texArray)) ::UnityW<::UnityEngine::Texture2DArray>  texArray;

/// @brief Field texFromatSetName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_texFromatSetName, put=__cordl_internal_set_texFromatSetName)) ::StringW  texFromatSetName;

static inline ::GlobalNamespace::MB_TextureArrayReference* New_ctor(::StringW  formatSetName, ::UnityEngine::Texture2DArray*  ta) ;

constexpr ::UnityW<::UnityEngine::Texture2DArray> const& __cordl_internal_get_texArray() const;

constexpr ::UnityW<::UnityEngine::Texture2DArray>& __cordl_internal_get_texArray() ;

constexpr ::StringW const& __cordl_internal_get_texFromatSetName() const;

constexpr ::StringW& __cordl_internal_get_texFromatSetName() ;

constexpr void __cordl_internal_set_texArray(::UnityW<::UnityEngine::Texture2DArray>  value) ;

constexpr void __cordl_internal_set_texFromatSetName(::StringW  value) ;

/// @brief Method .ctor, addr 0x9d728f0, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  formatSetName, ::UnityEngine::Texture2DArray*  ta) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TextureArrayReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureArrayReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TextureArrayReference(MB_TextureArrayReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureArrayReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TextureArrayReference(MB_TextureArrayReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22553};

/// @brief Field texFromatSetName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___texFromatSetName;

/// @brief Field texArray, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2DArray>  ___texArray;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_TextureArrayReference, ___texFromatSetName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureArrayReference, ___texArray) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_TextureArrayReference) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
