#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckCosmeticsManager.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckAvailableCosmeticInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticsManager_def.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__ILckCosmeticsCoordinator_def.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckAvailableCosmeticInfo_def.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckCosmeticInfo_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__ILckCosmeticDependant_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__ILckCosmeticsManager_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticsManager_<>c__DisplayClass11_1___HandleCosmeticAvailable_b__2_d_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticsManager_CosmeticRootInfo_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticsManager__HandleCosmeticAvailable_d__11_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticsManager__LoadCosmetic_d__13_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticsManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticsManager::*)(::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*)>(&::Liv::Lck::Cosmetics::LckCosmeticsManager::_ctor)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x9d65420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager.RegisterDependant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticsManager::*)(::Liv::Lck::Cosmetics::ILckCosmeticDependant*)>(&::Liv::Lck::Cosmetics::LckCosmeticsManager::RegisterDependant)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x9d65740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"RegisterDependant", {}, {::i2c::type_of<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager.UnregisterDependant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticsManager::*)(::Liv::Lck::Cosmetics::ILckCosmeticDependant*)>(&::Liv::Lck::Cosmetics::LckCosmeticsManager::UnregisterDependant)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x9d65f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"UnregisterDependant", {}, {::i2c::type_of<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticsManager::*)()>(&::Liv::Lck::Cosmetics::LckCosmeticsManager::Dispose)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x9d66278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager.HandleCosmeticAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticsManager::*)(::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo)>(&::Liv::Lck::Cosmetics::LckCosmeticsManager::HandleCosmeticAvailable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9d667a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"HandleCosmeticAvailable", {}, {::i2c::type_of<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager.UpdateAvailableCosmeticsCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticsManager::*)(::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo)>(&::Liv::Lck::Cosmetics::LckCosmeticsManager::UpdateAvailableCosmeticsCache)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x9d66868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"UpdateAvailableCosmeticsCache", {}, {::i2c::type_of<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager.LoadCosmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>* (::Liv::Lck::Cosmetics::LckCosmeticsManager::*)(::Liv::Lck::Core::Cosmetics::LckCosmeticInfo)>(&::Liv::Lck::Cosmetics::LckCosmeticsManager::LoadCosmetic)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9d66afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"LoadCosmetic", {}, {::i2c::type_of<::Liv::Lck::Core::Cosmetics::LckCosmeticInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager.LoadRootsFromAssetBundleAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>* (::Liv::Lck::Cosmetics::LckCosmeticsManager::*)(::Liv::Lck::Core::Cosmetics::LckCosmeticInfo)>(&::Liv::Lck::Cosmetics::LckCosmeticsManager::LoadRootsFromAssetBundleAsync)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9d66c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"LoadRootsFromAssetBundleAsync", {}, {::i2c::type_of<::Liv::Lck::Core::Cosmetics::LckCosmeticInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager.DistributeLoadedCosmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticsManager::*)(::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::Liv::Lck::Cosmetics::LckCosmeticsManager::DistributeLoadedCosmetic)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x9d66d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"DistributeLoadedCosmetic", {}, {::i2c::type_of<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager.CheckAndApplyCachedCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticsManager::*)(::Liv::Lck::Cosmetics::ILckCosmeticDependant*)>(&::Liv::Lck::Cosmetics::LckCosmeticsManager::CheckAndApplyCachedCosmetics)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x9d65b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"CheckAndApplyCachedCosmetics", {}, {::i2c::type_of<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager.ParseCosmeticRoots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticsManager_CosmeticRootInfo>* (::Liv::Lck::Cosmetics::LckCosmeticsManager::*)(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*)>(&::Liv::Lck::Cosmetics::LckCosmeticsManager::ParseCosmeticRoots)> {
  constexpr static std::size_t size = 0x7a4;
  constexpr static std::size_t addrs = 0x9d672c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"ParseCosmeticRoots", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager.ResolveType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Liv::Lck::Cosmetics::LckCosmeticsManager::*)(::StringW)>(&::Liv::Lck::Cosmetics::LckCosmeticsManager::ResolveType)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x9d67a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"ResolveType", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*& Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_get__cosmeticsCoordinator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmeticsCoordinator;
}
constexpr ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator* const& Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_get__cosmeticsCoordinator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmeticsCoordinator;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_set__cosmeticsCoordinator(::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cosmeticsCoordinator = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>*>*& Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_get__dependantRegistry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dependantRegistry;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>*>* const& Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_get__dependantRegistry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dependantRegistry;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_set__dependantRegistry(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dependantRegistry = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*& Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_get__availableCosmeticsCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____availableCosmeticsCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>* const& Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_get__availableCosmeticsCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____availableCosmeticsCache;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_set__availableCosmeticsCache(::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____availableCosmeticsCache = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*& Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_get__loadedCosmeticCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadedCosmeticCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>* const& Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_get__loadedCosmeticCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadedCosmeticCache;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_set__loadedCosmeticCache(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadedCosmeticCache = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*>*& Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_get__loadingTasks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadingTasks;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*>* const& Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_get__loadingTasks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadingTasks;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_set__loadingTasks(::System::Collections::Generic::Dictionary_2<::StringW,::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadingTasks = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::AssetBundle>>*& Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_get__loadedAssetBundles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadedAssetBundles;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::AssetBundle>>* const& Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_get__loadedAssetBundles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadedAssetBundles;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticsManager::__cordl_internal_set__loadedAssetBundles(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::AssetBundle>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadedAssetBundles = value;
}
inline void Liv::Lck::Cosmetics::LckCosmeticsManager::_ctor(::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  cosmeticsCoordinator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cosmeticsCoordinator);
}
inline void Liv::Lck::Cosmetics::LckCosmeticsManager::RegisterDependant(::Liv::Lck::Cosmetics::ILckCosmeticDependant*  dependant)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"RegisterDependant", {}, {::i2c::type_of<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dependant);
}
inline void Liv::Lck::Cosmetics::LckCosmeticsManager::UnregisterDependant(::Liv::Lck::Cosmetics::ILckCosmeticDependant*  dependant)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"UnregisterDependant", {}, {::i2c::type_of<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dependant);
}
inline void Liv::Lck::Cosmetics::LckCosmeticsManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Cosmetics::LckCosmeticsManager::HandleCosmeticAvailable(::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo  incomingCosmeticInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"HandleCosmeticAvailable", {}, {::i2c::type_of<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, incomingCosmeticInfo);
}
inline void Liv::Lck::Cosmetics::LckCosmeticsManager::UpdateAvailableCosmeticsCache(::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo  cosmeticInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"UpdateAvailableCosmeticsCache", {}, {::i2c::type_of<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cosmeticInfo);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>* Liv::Lck::Cosmetics::LckCosmeticsManager::LoadCosmetic(::Liv::Lck::Core::Cosmetics::LckCosmeticInfo  cosmeticInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"LoadCosmetic", {}, {::i2c::type_of<::Liv::Lck::Core::Cosmetics::LckCosmeticInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*>(this, ___internal_method, cosmeticInfo);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>* Liv::Lck::Cosmetics::LckCosmeticsManager::LoadRootsFromAssetBundleAsync(::Liv::Lck::Core::Cosmetics::LckCosmeticInfo  cosmeticInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"LoadRootsFromAssetBundleAsync", {}, {::i2c::type_of<::Liv::Lck::Core::Cosmetics::LckCosmeticInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*>(this, ___internal_method, cosmeticInfo);
}
inline void Liv::Lck::Cosmetics::LckCosmeticsManager::DistributeLoadedCosmetic(::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo  cosmeticInfo, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  assets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"DistributeLoadedCosmetic", {}, {::i2c::type_of<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cosmeticInfo, assets);
}
inline void Liv::Lck::Cosmetics::LckCosmeticsManager::CheckAndApplyCachedCosmetics(::Liv::Lck::Cosmetics::ILckCosmeticDependant*  dependant)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"CheckAndApplyCachedCosmetics", {}, {::i2c::type_of<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dependant);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticsManager_CosmeticRootInfo>* Liv::Lck::Cosmetics::LckCosmeticsManager::ParseCosmeticRoots(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*  metadata)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"ParseCosmeticRoots", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticsManager_CosmeticRootInfo>*>(this, ___internal_method, metadata);
}
inline ::System::Type* Liv::Lck::Cosmetics::LckCosmeticsManager::ResolveType(::StringW  typeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(),
                        {"ResolveType", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, typeName);
}
/// @brief [Preserve]
inline ::Liv::Lck::Cosmetics::LckCosmeticsManager* Liv::Lck::Cosmetics::LckCosmeticsManager::New_ctor(::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  cosmeticsCoordinator)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Cosmetics::LckCosmeticsManager*>(cosmeticsCoordinator));
}
/// @brief Convert operator to "::Liv::Lck::Cosmetics::ILckCosmeticsManager"
constexpr  Liv::Lck::Cosmetics::LckCosmeticsManager::operator ::Liv::Lck::Cosmetics::ILckCosmeticsManager*() noexcept {
return static_cast<::Liv::Lck::Cosmetics::ILckCosmeticsManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Cosmetics::ILckCosmeticsManager"
constexpr ::Liv::Lck::Cosmetics::ILckCosmeticsManager* Liv::Lck::Cosmetics::LckCosmeticsManager::i___Liv__Lck__Cosmetics__ILckCosmeticsManager() noexcept {
return static_cast<::Liv::Lck::Cosmetics::ILckCosmeticsManager*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::Cosmetics::LckCosmeticsManager::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::Cosmetics::LckCosmeticsManager::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Cosmetics::LckCosmeticsManager::LckCosmeticsManager()   {
}
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0::*)()>(&::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d672b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0._DistributeLoadedCosmetic_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0::*)(::Liv::Lck::Cosmetics::ILckCosmeticDependant*)>(&::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0::_DistributeLoadedCosmetic_b__0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9d681cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0*>(),
                        {"<DistributeLoadedCosmetic>b__0", {}, {::i2c::type_of<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0::__cordl_internal_get_entitledPlayerIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entitledPlayerIds;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0::__cordl_internal_get_entitledPlayerIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entitledPlayerIds;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0::__cordl_internal_set_entitledPlayerIds(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entitledPlayerIds = value;
}
constexpr ::System::Func_2<::Liv::Lck::Cosmetics::ILckCosmeticDependant*,bool>*& Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Func_2<::Liv::Lck::Cosmetics::ILckCosmeticDependant*,bool>* const& Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0::__cordl_internal_set___9__0(::System::Func_2<::Liv::Lck::Cosmetics::ILckCosmeticDependant*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
inline void Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0::_DistributeLoadedCosmetic_b__0(::Liv::Lck::Cosmetics::ILckCosmeticDependant*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0*>(),
                        {"<DistributeLoadedCosmetic>b__0", {}, {::i2c::type_of<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, d);
}
inline ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0* Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass15_0::LckCosmeticsManager___c__DisplayClass15_0()   {
}
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1::*)()>(&::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d67de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1._HandleCosmeticAvailable_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1::*)()>(&::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1::_HandleCosmeticAvailable_b__2)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9d67de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1*>(),
                        {"<HandleCosmeticAvailable>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*& Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>* const& Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*& Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0* const& Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1::__cordl_internal_set_CS$__8__locals1(::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1::_HandleCosmeticAvailable_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1*>(),
                        {"<HandleCosmeticAvailable>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1* Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1::LckCosmeticsManager___c__DisplayClass11_1()   {
}
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::*)()>(&::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d67d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0._HandleCosmeticAvailable_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::*)()>(&::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::_HandleCosmeticAvailable_b__0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9d67d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*>(),
                        {"<HandleCosmeticAvailable>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0._HandleCosmeticAvailable_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::*)()>(&::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::_HandleCosmeticAvailable_b__1)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9d67da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*>(),
                        {"<HandleCosmeticAvailable>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Cosmetics::LckCosmeticsManager*& Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::Lck::Cosmetics::LckCosmeticsManager* const& Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::__cordl_internal_set___4__this(::Liv::Lck::Cosmetics::LckCosmeticsManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo& Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::__cordl_internal_get_incomingCosmeticInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingCosmeticInfo;
}
constexpr ::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo const& Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::__cordl_internal_get_incomingCosmeticInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingCosmeticInfo;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::__cordl_internal_set_incomingCosmeticInfo(::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incomingCosmeticInfo = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::__cordl_internal_get_cachedAssets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedAssets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::__cordl_internal_get_cachedAssets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedAssets;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::__cordl_internal_set_cachedAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedAssets = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::__cordl_internal_get_loadedAssets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadedAssets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::__cordl_internal_get_loadedAssets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadedAssets;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::__cordl_internal_set_loadedAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadedAssets = value;
}
inline void Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::_HandleCosmeticAvailable_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*>(),
                        {"<HandleCosmeticAvailable>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::_HandleCosmeticAvailable_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*>(),
                        {"<HandleCosmeticAvailable>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0* Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0::LckCosmeticsManager___c__DisplayClass11_0()   {
}
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticsManager___c::*)()>(&::Liv::Lck::Cosmetics::LckCosmeticsManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d67cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticsManager___c._Dispose_b__10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Cosmetics::LckCosmeticsManager___c::*)(::UnityEngine::AssetBundle*)>(&::Liv::Lck::Cosmetics::LckCosmeticsManager___c::_Dispose_b__10_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9d67d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c*>(),
                        {"<Dispose>b__10_0", {}, {::i2c::type_of<::UnityEngine::AssetBundle*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Cosmetics::LckCosmeticsManager___c::setStaticF___9(::Liv::Lck::Cosmetics::LckCosmeticsManager___c*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::Cosmetics::LckCosmeticsManager___c*, "<>9", ::Liv::Lck::Cosmetics::LckCosmeticsManager___c*>(std::forward<::Liv::Lck::Cosmetics::LckCosmeticsManager___c*>(value));
}
inline ::Liv::Lck::Cosmetics::LckCosmeticsManager___c* Liv::Lck::Cosmetics::LckCosmeticsManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Liv::Lck::Cosmetics::LckCosmeticsManager___c*, "<>9", ::Liv::Lck::Cosmetics::LckCosmeticsManager___c*>();
}
inline void Liv::Lck::Cosmetics::LckCosmeticsManager___c::setStaticF___9__10_0(::System::Func_2<::UnityW<::UnityEngine::AssetBundle>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::AssetBundle>,bool>*, "<>9__10_0", ::Liv::Lck::Cosmetics::LckCosmeticsManager___c*>(std::forward<::System::Func_2<::UnityW<::UnityEngine::AssetBundle>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::AssetBundle>,bool>* Liv::Lck::Cosmetics::LckCosmeticsManager___c::getStaticF___9__10_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::AssetBundle>,bool>*, "<>9__10_0", ::Liv::Lck::Cosmetics::LckCosmeticsManager___c*>();
}
inline void Liv::Lck::Cosmetics::LckCosmeticsManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::Cosmetics::LckCosmeticsManager___c::_Dispose_b__10_0(::UnityEngine::AssetBundle*  bundle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticsManager___c*>(),
                        {"<Dispose>b__10_0", {}, {::i2c::type_of<::UnityEngine::AssetBundle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bundle);
}
inline ::Liv::Lck::Cosmetics::LckCosmeticsManager___c* Liv::Lck::Cosmetics::LckCosmeticsManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Cosmetics::LckCosmeticsManager___c*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Cosmetics::LckCosmeticsManager___c::LckCosmeticsManager___c()   {
}
