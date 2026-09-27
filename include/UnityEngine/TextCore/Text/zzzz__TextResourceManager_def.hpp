#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextResourceManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextResourceManager)
namespace GlobalNamespace {
struct TextResourceManager_FontAssetRef;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextResourceManager;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextCore::Text::TextResourceManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::TextResourceManager*, "UnityEngine.TextCore.Text", "TextResourceManager");
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextResourceManager
class CORDL_TYPE TextResourceManager : public ::System::Object {
public:
// Declarations
using FontAssetRef = ::GlobalNamespace::TextResourceManager_FontAssetRef;

/// @brief Field k_RegularStyleHashCode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_RegularStyleHashCode, put=setStaticF_k_RegularStyleHashCode)) int32_t  k_RegularStyleHashCode;

/// @brief Field s_FontAssetFamilyNameAndStyleReferenceLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup, put=setStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup)) ::System::Collections::Generic::Dictionary_2<int64_t,::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*  s_FontAssetFamilyNameAndStyleReferenceLookup;

/// @brief Field s_FontAssetNameReferenceLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FontAssetNameReferenceLookup, put=setStaticF_s_FontAssetNameReferenceLookup)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*  s_FontAssetNameReferenceLookup;

/// @brief Field s_FontAssetReferences, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FontAssetReferences, put=setStaticF_s_FontAssetReferences)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::TextResourceManager_FontAssetRef>*  s_FontAssetReferences;

/// @brief Field s_FontAssetRemovalList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FontAssetRemovalList, put=setStaticF_s_FontAssetRemovalList)) ::System::Collections::Generic::List_1<int32_t>*  s_FontAssetRemovalList;

/// @brief Method AddFontAsset, addr 0xb6f6de8, size 0x524, virtual false, abstract: false, final false
static inline void AddFontAsset(::UnityEngine::TextCore::Text::FontAsset*  fontAsset) ;

static inline int32_t getStaticF_k_RegularStyleHashCode() ;

static inline ::System::Collections::Generic::Dictionary_2<int64_t,::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* getStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* getStaticF_s_FontAssetNameReferenceLookup() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::TextResourceManager_FontAssetRef>* getStaticF_s_FontAssetReferences() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_s_FontAssetRemovalList() ;

static inline void setStaticF_k_RegularStyleHashCode(int32_t  value) ;

static inline void setStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup(::System::Collections::Generic::Dictionary_2<int64_t,::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*  value) ;

static inline void setStaticF_s_FontAssetNameReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*  value) ;

static inline void setStaticF_s_FontAssetReferences(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::TextResourceManager_FontAssetRef>*  value) ;

static inline void setStaticF_s_FontAssetRemovalList(::System::Collections::Generic::List_1<int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextResourceManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextResourceManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextResourceManager(TextResourceManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextResourceManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextResourceManager(TextResourceManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26302};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TextCore::Text::TextResourceManager) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
