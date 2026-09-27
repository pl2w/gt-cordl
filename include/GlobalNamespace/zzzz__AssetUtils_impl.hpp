#pragma once
// IWYU pragma private; include "GlobalNamespace/AssetUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AssetUtils_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AssetUtils.ExecAndUnloadUnused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::AssetUtils::ExecAndUnloadUnused)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ae0eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AssetUtils*>(),
                        {"ExecAndUnloadUnused", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AssetUtils.ForceSave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::GlobalNamespace::AssetUtils::ForceSave)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ae0ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AssetUtils*>(),
                        {"ForceSave", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AssetUtils.ComputeAssetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::UnityEngine::Object*, bool)>(&::GlobalNamespace::AssetUtils::ComputeAssetId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae0ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AssetUtils*>(),
                        {"ComputeAssetId", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AssetUtils.GetGameObjectPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::AssetUtils::GetGameObjectPath)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5ae0ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AssetUtils*>(),
                        {"GetGameObjectPath", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AssetUtils::ExecAndUnloadUnused(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AssetUtils*>(),
                        {"ExecAndUnloadUnused", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline void GlobalNamespace::AssetUtils::LoadAssetOfType(::by_ref<T>  result, ::by_ref<::StringW>  resultPath)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AssetUtils*>(),
                    {"LoadAssetOfType", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result, resultPath);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline void GlobalNamespace::AssetUtils::FindAllAssetsOfType(::by_ref<::ArrayW<T>>  results, ::by_ref<::ArrayW<::StringW>>  assetPaths)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AssetUtils*>(),
                    {"FindAllAssetsOfType", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, results, assetPaths);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline ::ArrayW<T> GlobalNamespace::AssetUtils::FindAllAssetsOfType()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AssetUtils*>(),
                    {"FindAllAssetsOfType", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline void GlobalNamespace::AssetUtils::ForceSave(::System::Collections::Generic::IList_1<T>*  assets, ::System::Action_1<T>*  onPreSave, bool  unloadUnusedAfter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AssetUtils*>(),
                    {"ForceSave", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, assets, onPreSave, unloadUnusedAfter);
}
inline void GlobalNamespace::AssetUtils::ForceSave(::UnityEngine::Object*  asset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AssetUtils*>(),
                        {"ForceSave", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asset);
}
inline int64_t GlobalNamespace::AssetUtils::ComputeAssetId(::UnityEngine::Object*  asset, bool  _cordl_unsigned)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AssetUtils*>(),
                        {"ComputeAssetId", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, asset, _cordl_unsigned);
}
inline ::StringW GlobalNamespace::AssetUtils::GetGameObjectPath(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AssetUtils*>(),
                        {"GetGameObjectPath", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AssetUtils::AssetUtils()   {
}
