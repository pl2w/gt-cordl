#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CosmeticsProximityReactorManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsProximityReactorManager)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GorillaTag::Cosmetics {
class CosmeticsProximityReactor;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class CosmeticsProximityReactorManager;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::CosmeticsProximityReactorManager*, "GorillaTag.Cosmetics", "CosmeticsProximityReactorManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.CosmeticsProximityReactorManager
class CORDL_TYPE CosmeticsProximityReactorManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Cosmetics)) ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  Cosmetics;

/// @brief Field OnCosmeticRegistered, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCosmeticRegistered, put=setStaticF_OnCosmeticRegistered)) ::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  OnCosmeticRegistered;

/// @brief Field SharedKeysCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SharedKeysCache, put=setStaticF_SharedKeysCache)) ::System::Collections::Generic::List_1<::StringW>*  SharedKeysCache;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager>  _instance;

/// @brief Field byType, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_byType, put=__cordl_internal_set_byType)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>*  byType;

/// @brief Field cosmetics, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmetics, put=__cordl_internal_set_cosmetics)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  cosmetics;

/// @brief Field gorillaBodyPart, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gorillaBodyPart, put=__cordl_internal_set_gorillaBodyPart)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  gorillaBodyPart;

/// @brief Field groupCursor, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_groupCursor, put=__cordl_internal_set_groupCursor)) int32_t  groupCursor;

/// @brief Field matchedFrame, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_matchedFrame, put=__cordl_internal_set_matchedFrame)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>,int32_t>*  matchedFrame;

/// @brief Field typeKeysCache, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_typeKeysCache, put=__cordl_internal_set_typeKeysCache)) ::System::Collections::Generic::List_1<::StringW>*  typeKeysCache;

/// @brief Field typeKeysDirty, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_typeKeysDirty, put=__cordl_internal_set_typeKeysDirty)) bool  typeKeysDirty;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method AnyGroupHasTwo, addr 0x5d89af4, size 0x148, virtual false, abstract: false, final false
inline bool AnyGroupHasTwo() ;

/// @brief Method AreCollidersWithinThreshold, addr 0x5d89eb0, size 0x1f4, virtual false, abstract: false, final false
static inline bool AreCollidersWithinThreshold(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  a, ::GorillaTag::Cosmetics::CosmeticsProximityReactor*  b, float_t  threshold, ::by_ref<::UnityEngine::Vector3>  contactPoint) ;

/// @brief Method Awake, addr 0x5d88dd0, size 0x148, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BreakTheBoundForGroup, addr 0x5d8a0a4, size 0x1cc, virtual false, abstract: false, final false
inline void BreakTheBoundForGroup(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  group) ;

/// @brief Method CheckProximity, addr 0x5d8a270, size 0x320, virtual false, abstract: false, final false
inline bool CheckProximity(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  group) ;

static inline ::GorillaTag::Cosmetics::CosmeticsProximityReactorManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d88f24, size 0xdc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d88f18, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ProcessOneGroup, addr 0x5d89e78, size 0x38, virtual false, abstract: false, final false
inline void ProcessOneGroup(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  group) ;

/// @brief Method RebuildTypeKeysCache, addr 0x5d89c3c, size 0x23c, virtual false, abstract: false, final false
inline void RebuildTypeKeysCache() ;

/// @brief Method Register, addr 0x5d89000, size 0x494, virtual false, abstract: false, final false
inline void Register(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  cosmetic) ;

/// @brief Method ShouldSkipSameIdPair, addr 0x5d8a590, size 0x7c, virtual false, abstract: false, final false
static inline bool ShouldSkipSameIdPair(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  a, ::GorillaTag::Cosmetics::CosmeticsProximityReactor*  b) ;

/// @brief Method SliceUpdate, addr 0x5d8969c, size 0x458, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method TryFindAnyCosmeticPartner, addr 0x5d8a60c, size 0x344, virtual false, abstract: false, final false
inline bool TryFindAnyCosmeticPartner(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  a, ::by_ref<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>  partner, ::by_ref<::UnityEngine::Vector3>  contact) ;

/// @brief Method Unregister, addr 0x5d89494, size 0x208, virtual false, abstract: false, final false
inline void Unregister(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  cosmetic) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>* const& __cordl_internal_get_byType() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>*& __cordl_internal_get_byType() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>* const& __cordl_internal_get_cosmetics() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*& __cordl_internal_get_cosmetics() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>* const& __cordl_internal_get_gorillaBodyPart() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*& __cordl_internal_get_gorillaBodyPart() ;

constexpr int32_t const& __cordl_internal_get_groupCursor() const;

constexpr int32_t& __cordl_internal_get_groupCursor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>,int32_t>* const& __cordl_internal_get_matchedFrame() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>,int32_t>*& __cordl_internal_get_matchedFrame() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_typeKeysCache() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_typeKeysCache() ;

constexpr bool const& __cordl_internal_get_typeKeysDirty() const;

constexpr bool& __cordl_internal_get_typeKeysDirty() ;

constexpr void __cordl_internal_set_byType(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>*  value) ;

constexpr void __cordl_internal_set_cosmetics(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  value) ;

constexpr void __cordl_internal_set_gorillaBodyPart(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  value) ;

constexpr void __cordl_internal_set_groupCursor(int32_t  value) ;

constexpr void __cordl_internal_set_matchedFrame(::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>,int32_t>*  value) ;

constexpr void __cordl_internal_set_typeKeysCache(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_typeKeysDirty(bool  value) ;

/// @brief Method .ctor, addr 0x5d8a950, size 0x204, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnCosmeticRegistered, addr 0x5d88be8, size 0xf4, virtual false, abstract: false, final false
static inline void add_OnCosmeticRegistered(::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  value) ;

static inline ::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>* getStaticF_OnCosmeticRegistered() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_SharedKeysCache() ;

static inline ::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager> getStaticF__instance() ;

/// @brief Method get_Cosmetics, addr 0x5d88be0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>* get_Cosmetics() ;

/// @brief Method get_Instance, addr 0x5d88b88, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager> get_Instance() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnCosmeticRegistered, addr 0x5d88cdc, size 0xf4, virtual false, abstract: false, final false
static inline void remove_OnCosmeticRegistered(::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  value) ;

static inline void setStaticF_OnCosmeticRegistered(::System::Action_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  value) ;

static inline void setStaticF_SharedKeysCache(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline void setStaticF__instance(::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactorManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsProximityReactorManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsProximityReactorManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsProximityReactorManager(CosmeticsProximityReactorManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsProximityReactorManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsProximityReactorManager(CosmeticsProximityReactorManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4907};

/// @brief Field cosmetics, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  ___cosmetics;

/// @brief Field gorillaBodyPart, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*  ___gorillaBodyPart;

/// @brief Field byType, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>>*>*  ___byType;

/// @brief Field matchedFrame, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Cosmetics::CosmeticsProximityReactor>,int32_t>*  ___matchedFrame;

/// @brief Field typeKeysCache, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___typeKeysCache;

/// @brief Field typeKeysDirty, offset: 0x48, size: 0x1, def value: None
 bool  ___typeKeysDirty;

/// @brief Field groupCursor, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___groupCursor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactorManager, ___cosmetics) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactorManager, ___gorillaBodyPart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactorManager, ___byType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactorManager, ___matchedFrame) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactorManager, ___typeKeysCache) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactorManager, ___typeKeysDirty) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactorManager, ___groupCursor) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::CosmeticsProximityReactorManager) == 0x50, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
