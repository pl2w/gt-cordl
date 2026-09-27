#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckCosmeticsManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Core/Cosmetics/zzzz__LckAvailableCosmeticInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckCosmeticsManager)
namespace GlobalNamespace {
struct LckCosmeticsManager_CosmeticRootInfo;
}
namespace GlobalNamespace {
struct LckCosmeticsManager__HandleCosmeticAvailable_d__11;
}
namespace GlobalNamespace {
struct LckCosmeticsManager__LoadCosmetic_d__13;
}
namespace GlobalNamespace {
struct LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14;
}
namespace GlobalNamespace {
struct __c__DisplayClass11_1_LckCosmeticsManager___HandleCosmeticAvailable_b__2_d;
}
namespace Liv::Lck::Core::Cosmetics {
class ILckCosmeticsCoordinator;
}
namespace Liv::Lck::Core::Cosmetics {
struct LckAvailableCosmeticInfo;
}
namespace Liv::Lck::Core::Cosmetics {
struct LckCosmeticInfo;
}
namespace Liv::Lck::Cosmetics {
class ILckCosmeticDependant;
}
namespace Liv::Lck::Cosmetics {
class ILckCosmeticsManager;
}
namespace Liv::Lck::Cosmetics {
class LckCosmeticsManager___c;
}
namespace Liv::Lck::Cosmetics {
class LckCosmeticsManager___c__DisplayClass11_0;
}
namespace Liv::Lck::Cosmetics {
class LckCosmeticsManager___c__DisplayClass11_1;
}
namespace Liv::Lck::Cosmetics {
class LckCosmeticsManager___c__DisplayClass15_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Liv::Lck::Cosmetics {
class LckCosmeticsManager;
}
namespace Liv::Lck::Cosmetics {
class LckCosmeticsManager___c;
}
namespace Liv::Lck::Cosmetics {
class LckCosmeticsManager___c__DisplayClass11_0;
}
namespace Liv::Lck::Cosmetics {
class LckCosmeticsManager___c__DisplayClass11_1;
}
namespace Liv::Lck::Cosmetics {
class LckCosmeticsManager___c__DisplayClass15_0;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Cosmetics::LckCosmeticsManager*);
MARK_REF_T(::Liv::Lck::Cosmetics::LckCosmeticsManager___c*);
MARK_REF_T(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*);
MARK_REF_T(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1*);
MARK_REF_T(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Cosmetics::LckCosmeticsManager*, "Liv.Lck.Cosmetics", "LckCosmeticsManager");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Cosmetics::LckCosmeticsManager___c*, "Liv.Lck.Cosmetics", "LckCosmeticsManager/<>c");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*, "Liv.Lck.Cosmetics", "LckCosmeticsManager/<>c__DisplayClass11_0");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1*, "Liv.Lck.Cosmetics", "LckCosmeticsManager/<>c__DisplayClass11_1");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0*, "Liv.Lck.Cosmetics", "LckCosmeticsManager/<>c__DisplayClass15_0");
// [Preserve]
// Dependencies System.Object
namespace Liv::Lck::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Cosmetics.LckCosmeticsManager
class CORDL_TYPE LckCosmeticsManager : public ::System::Object {
public:
// Declarations
using CosmeticRootInfo = ::GlobalNamespace::LckCosmeticsManager_CosmeticRootInfo;

using _HandleCosmeticAvailable_d__11 = ::GlobalNamespace::LckCosmeticsManager__HandleCosmeticAvailable_d__11;

using _LoadCosmetic_d__13 = ::GlobalNamespace::LckCosmeticsManager__LoadCosmetic_d__13;

using _LoadRootsFromAssetBundleAsync_d__14 = ::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14;

using __c = ::Liv::Lck::Cosmetics::LckCosmeticsManager___c;

using __c__DisplayClass11_0 = ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0;

using __c__DisplayClass11_1 = ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1;

using __c__DisplayClass15_0 = ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0;

/// @brief Field _availableCosmeticsCache, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__availableCosmeticsCache, put=__cordl_internal_set__availableCosmeticsCache)) ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  _availableCosmeticsCache;

/// @brief Field _cosmeticsCoordinator, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__cosmeticsCoordinator, put=__cordl_internal_set__cosmeticsCoordinator)) ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  _cosmeticsCoordinator;

/// @brief Field _dependantRegistry, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__dependantRegistry, put=__cordl_internal_set__dependantRegistry)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>*>*  _dependantRegistry;

/// @brief Field _loadedAssetBundles, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadedAssetBundles, put=__cordl_internal_set__loadedAssetBundles)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::AssetBundle>>*  _loadedAssetBundles;

/// @brief Field _loadedCosmeticCache, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadedCosmeticCache, put=__cordl_internal_set__loadedCosmeticCache)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*  _loadedCosmeticCache;

/// @brief Field _loadingTasks, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadingTasks, put=__cordl_internal_set__loadingTasks)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*>*  _loadingTasks;

/// @brief Convert operator to "::Liv::Lck::Cosmetics::ILckCosmeticsManager"
constexpr operator  ::Liv::Lck::Cosmetics::ILckCosmeticsManager*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CheckAndApplyCachedCosmetics, addr 0x9d65b24, size 0x464, virtual false, abstract: false, final false
inline void CheckAndApplyCachedCosmetics(::Liv::Lck::Cosmetics::ILckCosmeticDependant*  dependant) ;

/// @brief Method Dispose, addr 0x9d66278, size 0x528, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method DistributeLoadedCosmetic, addr 0x9d66d58, size 0x560, virtual false, abstract: false, final false
inline void DistributeLoadedCosmetic(::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo  cosmeticInfo, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  assets) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Cosmetics.LckCosmeticsManager::<HandleCosmeticAvailable>d__11))]
/// @brief Method HandleCosmeticAvailable, addr 0x9d667a0, size 0xc8, virtual false, abstract: false, final false
inline void HandleCosmeticAvailable(::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo  incomingCosmeticInfo) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Cosmetics.LckCosmeticsManager::<LoadCosmetic>d__13))]
/// @brief Method LoadCosmetic, addr 0x9d66afc, size 0x12c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>* LoadCosmetic(::Liv::Lck::Core::Cosmetics::LckCosmeticInfo  cosmeticInfo) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Cosmetics.LckCosmeticsManager::<LoadRootsFromAssetBundleAsync>d__14))]
/// @brief Method LoadRootsFromAssetBundleAsync, addr 0x9d66c28, size 0x130, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>* LoadRootsFromAssetBundleAsync(::Liv::Lck::Core::Cosmetics::LckCosmeticInfo  cosmeticInfo) ;

/// @brief [Preserve]
static inline ::Liv::Lck::Cosmetics::LckCosmeticsManager* New_ctor(::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  cosmeticsCoordinator) ;

/// @brief Method ParseCosmeticRoots, addr 0x9d672c0, size 0x7a4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticsManager_CosmeticRootInfo>* ParseCosmeticRoots(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*  metadata) ;

/// @brief Method RegisterDependant, addr 0x9d65740, size 0x3e4, virtual true, abstract: false, final true
inline void RegisterDependant(::Liv::Lck::Cosmetics::ILckCosmeticDependant*  dependant) ;

/// @brief Method ResolveType, addr 0x9d67a64, size 0x230, virtual false, abstract: false, final false
inline ::System::Type* ResolveType(::StringW  typeName) ;

/// @brief Method UnregisterDependant, addr 0x9d65f88, size 0x2f0, virtual true, abstract: false, final true
inline void UnregisterDependant(::Liv::Lck::Cosmetics::ILckCosmeticDependant*  dependant) ;

/// @brief Method UpdateAvailableCosmeticsCache, addr 0x9d66868, size 0x294, virtual false, abstract: false, final false
inline void UpdateAvailableCosmeticsCache(::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo  cosmeticInfo) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>* const& __cordl_internal_get__availableCosmeticsCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*& __cordl_internal_get__availableCosmeticsCache() ;

constexpr ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator* const& __cordl_internal_get__cosmeticsCoordinator() const;

constexpr ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*& __cordl_internal_get__cosmeticsCoordinator() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>*>* const& __cordl_internal_get__dependantRegistry() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>*>*& __cordl_internal_get__dependantRegistry() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::AssetBundle>>* const& __cordl_internal_get__loadedAssetBundles() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::AssetBundle>>*& __cordl_internal_get__loadedAssetBundles() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>* const& __cordl_internal_get__loadedCosmeticCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*& __cordl_internal_get__loadedCosmeticCache() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*>* const& __cordl_internal_get__loadingTasks() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*>*& __cordl_internal_get__loadingTasks() ;

constexpr void __cordl_internal_set__availableCosmeticsCache(::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value) ;

constexpr void __cordl_internal_set__cosmeticsCoordinator(::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  value) ;

constexpr void __cordl_internal_set__dependantRegistry(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>*>*  value) ;

constexpr void __cordl_internal_set__loadedAssetBundles(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::AssetBundle>>*  value) ;

constexpr void __cordl_internal_set__loadedCosmeticCache(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*  value) ;

constexpr void __cordl_internal_set__loadingTasks(::System::Collections::Generic::Dictionary_2<::StringW,::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*>*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9d65420, size 0x320, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  cosmeticsCoordinator) ;

/// @brief Convert to "::Liv::Lck::Cosmetics::ILckCosmeticsManager"
constexpr ::Liv::Lck::Cosmetics::ILckCosmeticsManager* i___Liv__Lck__Cosmetics__ILckCosmeticsManager() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCosmeticsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticsManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCosmeticsManager(LckCosmeticsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticsManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCosmeticsManager(LckCosmeticsManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24989};

/// @brief Field _cosmeticsCoordinator, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  ____cosmeticsCoordinator;

/// @brief Field _dependantRegistry, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>*>*  ____dependantRegistry;

/// @brief Field _availableCosmeticsCache, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  ____availableCosmeticsCache;

/// @brief Field _loadedCosmeticCache, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*  ____loadedCosmeticCache;

/// @brief Field _loadingTasks, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*>*  ____loadingTasks;

/// @brief Field _loadedAssetBundles, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::AssetBundle>>*  ____loadedAssetBundles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticsManager, ____cosmeticsCoordinator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticsManager, ____dependantRegistry) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticsManager, ____availableCosmeticsCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticsManager, ____loadedCosmeticCache) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticsManager, ____loadingTasks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticsManager, ____loadedAssetBundles) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Cosmetics::LckCosmeticsManager) == 0x40, "Size mismatch!");

} // namespace end def Liv::Lck::Cosmetics
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Cosmetics.LckCosmeticsManager/<>c__DisplayClass15_0
class CORDL_TYPE LckCosmeticsManager___c__DisplayClass15_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Func_2<::Liv::Lck::Cosmetics::ILckCosmeticDependant*,bool>*  __9__0;

/// @brief Field entitledPlayerIds, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_entitledPlayerIds, put=__cordl_internal_set_entitledPlayerIds)) ::System::Collections::Generic::HashSet_1<::StringW>*  entitledPlayerIds;

static inline ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0* New_ctor() ;

/// @brief Method <DistributeLoadedCosmetic>b__0, addr 0x9d681cc, size 0xcc, virtual false, abstract: false, final false
inline bool _DistributeLoadedCosmetic_b__0(::Liv::Lck::Cosmetics::ILckCosmeticDependant*  d) ;

constexpr ::System::Func_2<::Liv::Lck::Cosmetics::ILckCosmeticDependant*,bool>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Func_2<::Liv::Lck::Cosmetics::ILckCosmeticDependant*,bool>*& __cordl_internal_get___9__0() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get_entitledPlayerIds() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_entitledPlayerIds() ;

constexpr void __cordl_internal_set___9__0(::System::Func_2<::Liv::Lck::Cosmetics::ILckCosmeticDependant*,bool>*  value) ;

constexpr void __cordl_internal_set_entitledPlayerIds(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x9d672b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCosmeticsManager___c__DisplayClass15_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticsManager___c__DisplayClass15_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCosmeticsManager___c__DisplayClass15_0(LckCosmeticsManager___c__DisplayClass15_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticsManager___c__DisplayClass15_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCosmeticsManager___c__DisplayClass15_0(LckCosmeticsManager___c__DisplayClass15_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24985};

/// @brief Field entitledPlayerIds, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ___entitledPlayerIds;

/// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<::Liv::Lck::Cosmetics::ILckCosmeticDependant*,bool>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0, ___entitledPlayerIds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0, _____9__0) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Cosmetics
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Cosmetics.LckCosmeticsManager/<>c__DisplayClass11_1
class CORDL_TYPE LckCosmeticsManager___c__DisplayClass11_1 : public ::System::Object {
public:
// Declarations
using __HandleCosmeticAvailable_b__2_d = ::GlobalNamespace::__c__DisplayClass11_1_LckCosmeticsManager___HandleCosmeticAvailable_b__2_d;

/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*  CS$__8__locals1;

/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*  tcs;

static inline ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1* New_ctor() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Cosmetics.LckCosmeticsManager::<>c__DisplayClass11_1::<<HandleCosmeticAvailable>b__2>d))]
/// @brief Method <HandleCosmeticAvailable>b__2, addr 0x9d67de8, size 0xa8, virtual false, abstract: false, final false
inline void _HandleCosmeticAvailable_b__2() ;

constexpr ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*  value) ;

/// @brief Method .ctor, addr 0x9d67de0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCosmeticsManager___c__DisplayClass11_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticsManager___c__DisplayClass11_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCosmeticsManager___c__DisplayClass11_1(LckCosmeticsManager___c__DisplayClass11_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticsManager___c__DisplayClass11_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCosmeticsManager___c__DisplayClass11_1(LckCosmeticsManager___c__DisplayClass11_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24984};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*  ___tcs;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1, ___tcs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Cosmetics
// [CompilerGenerated]
// Dependencies Liv.Lck.Core.Cosmetics.LckAvailableCosmeticInfo, System.Object
namespace Liv::Lck::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Cosmetics.LckCosmeticsManager/<>c__DisplayClass11_0
class CORDL_TYPE LckCosmeticsManager___c__DisplayClass11_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::Lck::Cosmetics::LckCosmeticsManager*  __4__this;

/// @brief Field cachedAssets, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedAssets, put=__cordl_internal_set_cachedAssets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  cachedAssets;

/// @brief Field incomingCosmeticInfo, offset 0x18, size 0x20 
 __declspec(property(get=__cordl_internal_get_incomingCosmeticInfo, put=__cordl_internal_set_incomingCosmeticInfo)) ::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo  incomingCosmeticInfo;

/// @brief Field loadedAssets, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadedAssets, put=__cordl_internal_set_loadedAssets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  loadedAssets;

static inline ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0* New_ctor() ;

/// @brief Method <HandleCosmeticAvailable>b__0, addr 0x9d67d68, size 0x3c, virtual false, abstract: false, final false
inline void _HandleCosmeticAvailable_b__0() ;

/// @brief Method <HandleCosmeticAvailable>b__1, addr 0x9d67da4, size 0x3c, virtual false, abstract: false, final false
inline void _HandleCosmeticAvailable_b__1() ;

constexpr ::Liv::Lck::Cosmetics::LckCosmeticsManager* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::Lck::Cosmetics::LckCosmeticsManager*& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_cachedAssets() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_cachedAssets() ;

constexpr ::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo const& __cordl_internal_get_incomingCosmeticInfo() const;

constexpr ::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo& __cordl_internal_get_incomingCosmeticInfo() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_loadedAssets() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_loadedAssets() ;

constexpr void __cordl_internal_set___4__this(::Liv::Lck::Cosmetics::LckCosmeticsManager*  value) ;

constexpr void __cordl_internal_set_cachedAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_incomingCosmeticInfo(::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo  value) ;

constexpr void __cordl_internal_set_loadedAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

/// @brief Method .ctor, addr 0x9d67d60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCosmeticsManager___c__DisplayClass11_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticsManager___c__DisplayClass11_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCosmeticsManager___c__DisplayClass11_0(LckCosmeticsManager___c__DisplayClass11_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticsManager___c__DisplayClass11_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCosmeticsManager___c__DisplayClass11_0(LckCosmeticsManager___c__DisplayClass11_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24982};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::Cosmetics::LckCosmeticsManager*  _____4__this;

/// @brief Field incomingCosmeticInfo, offset: 0x18, size: 0x20, def value: None
 ::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo  ___incomingCosmeticInfo;

/// @brief Field cachedAssets, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ___cachedAssets;

/// @brief Field loadedAssets, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ___loadedAssets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0, ___incomingCosmeticInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0, ___cachedAssets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0, ___loadedAssets) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0) == 0x48, "Size mismatch!");

} // namespace end def Liv::Lck::Cosmetics
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Cosmetics.LckCosmeticsManager/<>c
class CORDL_TYPE LckCosmeticsManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Liv::Lck::Cosmetics::LckCosmeticsManager___c*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::System::Func_2<::UnityW<::UnityEngine::AssetBundle>,bool>*  __9__10_0;

static inline ::Liv::Lck::Cosmetics::LckCosmeticsManager___c* New_ctor() ;

/// @brief Method <Dispose>b__10_0, addr 0x9d67d04, size 0x5c, virtual false, abstract: false, final false
inline bool _Dispose_b__10_0(::UnityEngine::AssetBundle*  bundle) ;

/// @brief Method .ctor, addr 0x9d67cfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::Cosmetics::LckCosmeticsManager___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::AssetBundle>,bool>* getStaticF___9__10_0() ;

static inline void setStaticF___9(::Liv::Lck::Cosmetics::LckCosmeticsManager___c*  value) ;

static inline void setStaticF___9__10_0(::System::Func_2<::UnityW<::UnityEngine::AssetBundle>,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCosmeticsManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticsManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCosmeticsManager___c(LckCosmeticsManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticsManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCosmeticsManager___c(LckCosmeticsManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24981};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Cosmetics::LckCosmeticsManager___c) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Cosmetics
