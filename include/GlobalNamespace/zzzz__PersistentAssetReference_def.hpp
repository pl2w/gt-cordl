#pragma once
// IWYU pragma private; include "GlobalNamespace/PersistentAssetReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PersistentAssetReference)
// Forward declare root types
namespace GlobalNamespace {
class PersistentAssetReference;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PersistentAssetReference*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PersistentAssetReference*, "", "PersistentAssetReference");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PersistentAssetReference
class CORDL_TYPE PersistentAssetReference : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_assets, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_assets, put=__cordl_internal_set_m_assets)) ::ArrayW<::UnityW<::UnityEngine::Object>>  m_assets;

static inline ::GlobalNamespace::PersistentAssetReference* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Object>> const& __cordl_internal_get_m_assets() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Object>>& __cordl_internal_get_m_assets() ;

constexpr void __cordl_internal_set_m_assets(::ArrayW<::UnityW<::UnityEngine::Object>>  value) ;

/// @brief Method .ctor, addr 0x5abce70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PersistentAssetReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PersistentAssetReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PersistentAssetReference(PersistentAssetReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PersistentAssetReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PersistentAssetReference(PersistentAssetReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3314};

/// [SerializeField]
/// @brief Field m_assets, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Object>>  ___m_assets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PersistentAssetReference, ___m_assets) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PersistentAssetReference) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
