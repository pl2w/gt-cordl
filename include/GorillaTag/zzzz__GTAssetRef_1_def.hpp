#pragma once
// IWYU pragma private; include "GorillaTag/GTAssetRef_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GTAssetRef_1)
// Forward declare root types
namespace GorillaTag {
template<typename TObject>
class GTAssetRef_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GorillaTag::GTAssetRef_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GorillaTag::GTAssetRef_1, "GorillaTag", "GTAssetRef`1");
// Dependencies UnityEngine.AddressableAssets.AssetReferenceT`1<TObject>
namespace GorillaTag {
// cpp template
template<typename TObject>
// Is value type: false
// CS Name: GorillaTag.GTAssetRef`1<TObject>
class CORDL_TYPE GTAssetRef_1 : public ::UnityEngine::AddressableAssets::AssetReferenceT_1<TObject> {
public:
// Declarations
static inline ::GorillaTag::GTAssetRef_1<TObject>* New_ctor(::StringW  guid) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  guid) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTAssetRef_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTAssetRef_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTAssetRef_1(GTAssetRef_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTAssetRef_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTAssetRef_1(GTAssetRef_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4594};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag
