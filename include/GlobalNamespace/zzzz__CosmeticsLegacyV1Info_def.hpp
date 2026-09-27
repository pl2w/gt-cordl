#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticsLegacyV1Info.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsLegacyV1Info)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticsLegacyV1Info;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticsLegacyV1Info*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsLegacyV1Info*, "", "CosmeticsLegacyV1Info");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticsLegacyV1Info
class CORDL_TYPE CosmeticsLegacyV1Info : public ::System::Object {
public:
// Declarations
/// @brief Field _k_playFabId_to_bodyDockPositions_allObjects_indexes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__k_playFabId_to_bodyDockPositions_allObjects_indexes, put=setStaticF__k_playFabId_to_bodyDockPositions_allObjects_indexes)) ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t>>*  _k_playFabId_to_bodyDockPositions_allObjects_indexes;

/// @brief Field k_oldPacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_oldPacks, put=setStaticF_k_oldPacks)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  k_oldPacks;

/// @brief Field k_packs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_packs, put=setStaticF_k_packs)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  k_packs;

/// @brief Field k_special, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_special, put=setStaticF_k_special)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  k_special;

/// @brief Field k_unused, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_unused, put=setStaticF_k_unused)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  k_unused;

/// @brief Field k_v1DisplayNames_to_playFabIds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_v1DisplayNames_to_playFabIds, put=setStaticF_k_v1DisplayNames_to_playFabIds)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  k_v1DisplayNames_to_playFabIds;

/// @brief Method TryGetBodyDockAllObjectsIndexes, addr 0x565eb88, size 0x90, virtual false, abstract: false, final false
static inline bool TryGetBodyDockAllObjectsIndexes(::StringW  playFabId, ::by_ref<::ArrayW<int32_t>>  bdAllIndexes) ;

/// @brief Method TryGetPlayFabId, addr 0x565ea14, size 0x174, virtual false, abstract: false, final false
static inline bool TryGetPlayFabId(::StringW  unityItemId, ::by_ref<::StringW>  playFabId, bool  logErrors) ;

/// @brief Method TryGetPlayFabId, addr 0x565e684, size 0x390, virtual false, abstract: false, final false
static inline bool TryGetPlayFabId(::StringW  unityItemId, ::StringW  unityDisplayName, ::StringW  unityOverrideDisplayName, ::by_ref<::StringW>  playFabId) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t>>* getStaticF__k_playFabId_to_bodyDockPositions_allObjects_indexes() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_k_oldPacks() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_k_packs() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_k_special() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_k_unused() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_k_v1DisplayNames_to_playFabIds() ;

static inline void setStaticF__k_playFabId_to_bodyDockPositions_allObjects_indexes(::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t>>*  value) ;

static inline void setStaticF_k_oldPacks(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline void setStaticF_k_packs(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline void setStaticF_k_special(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline void setStaticF_k_unused(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline void setStaticF_k_v1DisplayNames_to_playFabIds(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsLegacyV1Info() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsLegacyV1Info", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsLegacyV1Info(CosmeticsLegacyV1Info && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsLegacyV1Info", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsLegacyV1Info(CosmeticsLegacyV1Info const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{777};

/// @brief Field k_bodyDockPositions_allObjects_length offset 0xffffffff size 0x4
static constexpr int32_t  k_bodyDockPositions_allObjects_length{static_cast<int32_t>(0xe0)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CosmeticsLegacyV1Info) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
