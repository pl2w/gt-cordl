#pragma once
// IWYU pragma private; include "TMPro/TMP_ResourceManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_ResourceManager)
namespace GlobalNamespace {
struct TMP_ResourceManager_FontAssetRef;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_Settings;
}
// Forward declare root types
namespace TMPro {
class TMP_ResourceManager;
}
// Write type traits
MARK_REF_T(::TMPro::TMP_ResourceManager*);
DEFINE_IL2CPP_CLASS(::TMPro::TMP_ResourceManager*, "TMPro", "TMP_ResourceManager");
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_ResourceManager
class CORDL_TYPE TMP_ResourceManager : public ::System::Object {
public:
// Declarations
using FontAssetRef = ::GlobalNamespace::TMP_ResourceManager_FontAssetRef;

/// @brief Field k_RegularStyleHashCode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_RegularStyleHashCode, put=setStaticF_k_RegularStyleHashCode)) int32_t  k_RegularStyleHashCode;

/// @brief Field s_FontAssetFamilyNameAndStyleReferenceLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup, put=setStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup)) ::System::Collections::Generic::Dictionary_2<int64_t,::UnityW<::TMPro::TMP_FontAsset>>*  s_FontAssetFamilyNameAndStyleReferenceLookup;

/// @brief Field s_FontAssetNameReferenceLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FontAssetNameReferenceLookup, put=setStaticF_s_FontAssetNameReferenceLookup)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::TMPro::TMP_FontAsset>>*  s_FontAssetNameReferenceLookup;

/// @brief Field s_FontAssetReferences, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FontAssetReferences, put=setStaticF_s_FontAssetReferences)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::TMP_ResourceManager_FontAssetRef>*  s_FontAssetReferences;

/// @brief Field s_FontAssetRemovalList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FontAssetRemovalList, put=setStaticF_s_FontAssetRemovalList)) ::System::Collections::Generic::List_1<int32_t>*  s_FontAssetRemovalList;

/// @brief Field s_TextSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TextSettings, put=setStaticF_s_TextSettings)) ::UnityW<::TMPro::TMP_Settings>  s_TextSettings;

/// @brief Method AddFontAsset, addr 0xb39d208, size 0x524, virtual false, abstract: false, final false
static inline void AddFontAsset(::TMPro::TMP_FontAsset*  fontAsset) ;

/// @brief Method ClearFontAssetGlyphCache, addr 0xb39da0c, size 0x4c, virtual false, abstract: false, final false
static inline void ClearFontAssetGlyphCache() ;

/// @brief Method GetTextSettings, addr 0xb39d0f0, size 0x118, virtual false, abstract: false, final false
static inline ::UnityW<::TMPro::TMP_Settings> GetTextSettings() ;

static inline ::TMPro::TMP_ResourceManager* New_ctor() ;

/// @brief Method RebuildFontAssetCache, addr 0xb39da58, size 0x440, virtual false, abstract: false, final false
static inline void RebuildFontAssetCache() ;

/// @brief Method RemoveFontAsset, addr 0xb39d754, size 0x154, virtual false, abstract: false, final false
static inline void RemoveFontAsset(::TMPro::TMP_FontAsset*  fontAsset) ;

/// @brief Method TryGetFontAssetByFamilyName, addr 0xb39d948, size 0xc4, virtual false, abstract: false, final false
static inline bool TryGetFontAssetByFamilyName(int32_t  familyNameHashCode, int32_t  styleNameHashCode, ::by_ref<::TMPro::TMP_FontAsset*>  fontAsset) ;

/// @brief Method TryGetFontAssetByName, addr 0xb39d8a8, size 0xa0, virtual false, abstract: false, final false
static inline bool TryGetFontAssetByName(int32_t  nameHashcode, ::by_ref<::TMPro::TMP_FontAsset*>  fontAsset) ;

/// @brief Method .ctor, addr 0xb39de98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_k_RegularStyleHashCode() ;

static inline ::System::Collections::Generic::Dictionary_2<int64_t,::UnityW<::TMPro::TMP_FontAsset>>* getStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::TMPro::TMP_FontAsset>>* getStaticF_s_FontAssetNameReferenceLookup() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::TMP_ResourceManager_FontAssetRef>* getStaticF_s_FontAssetReferences() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_s_FontAssetRemovalList() ;

static inline ::UnityW<::TMPro::TMP_Settings> getStaticF_s_TextSettings() ;

static inline void setStaticF_k_RegularStyleHashCode(int32_t  value) ;

static inline void setStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup(::System::Collections::Generic::Dictionary_2<int64_t,::UnityW<::TMPro::TMP_FontAsset>>*  value) ;

static inline void setStaticF_s_FontAssetNameReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::TMPro::TMP_FontAsset>>*  value) ;

static inline void setStaticF_s_FontAssetReferences(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::TMP_ResourceManager_FontAssetRef>*  value) ;

static inline void setStaticF_s_FontAssetRemovalList(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_s_TextSettings(::UnityW<::TMPro::TMP_Settings>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TMP_ResourceManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TMP_ResourceManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TMP_ResourceManager(TMP_ResourceManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMP_ResourceManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMP_ResourceManager(TMP_ResourceManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22995};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::TMPro::TMP_ResourceManager) == 0x10, "Size mismatch!");

} // namespace end def TMPro
