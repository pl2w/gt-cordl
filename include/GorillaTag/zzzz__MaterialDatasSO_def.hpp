#pragma once
// IWYU pragma private; include "GorillaTag/MaterialDatasSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(MaterialDatasSO)
namespace GlobalNamespace {
struct GTPlayer_MaterialData;
}
namespace GorillaTag {
struct HashWrapper;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaTag {
class MaterialDatasSO;
}
// Write type traits
MARK_REF_T(::GorillaTag::MaterialDatasSO*);
DEFINE_IL2CPP_CLASS(::GorillaTag::MaterialDatasSO*, "GorillaTag", "MaterialDatasSO");
// [CreateAssetMenu(fileName = "MaterialDatasSO", menuName = "Gorilla Tag/MaterialDatasSO")]
// Dependencies UnityEngine.ScriptableObject
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.MaterialDatasSO
class CORDL_TYPE MaterialDatasSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field datas, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_datas, put=__cordl_internal_set_datas)) ::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_MaterialData>*  datas;

/// @brief Field surfaceEffects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_surfaceEffects, put=__cordl_internal_set_surfaceEffects)) ::System::Collections::Generic::List_1<::GorillaTag::HashWrapper>*  surfaceEffects;

static inline ::GorillaTag::MaterialDatasSO* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_MaterialData>* const& __cordl_internal_get_datas() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_MaterialData>*& __cordl_internal_get_datas() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTag::HashWrapper>* const& __cordl_internal_get_surfaceEffects() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTag::HashWrapper>*& __cordl_internal_get_surfaceEffects() ;

constexpr void __cordl_internal_set_datas(::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_MaterialData>*  value) ;

constexpr void __cordl_internal_set_surfaceEffects(::System::Collections::Generic::List_1<::GorillaTag::HashWrapper>*  value) ;

/// @brief Method .ctor, addr 0x5d23038, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialDatasSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialDatasSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialDatasSO(MaterialDatasSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialDatasSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialDatasSO(MaterialDatasSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4612};

/// @brief Field datas, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_MaterialData>*  ___datas;

/// @brief Field surfaceEffects, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTag::HashWrapper>*  ___surfaceEffects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::MaterialDatasSO, ___datas) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::MaterialDatasSO, ___surfaceEffects) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::MaterialDatasSO) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag
