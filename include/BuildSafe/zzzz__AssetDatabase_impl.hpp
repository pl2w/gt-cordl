#pragma once
// IWYU pragma private; include "BuildSafe/AssetDatabase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "BuildSafe/zzzz__AssetDatabase_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BuildSafe::AssetDatabase.SaveToDisk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Object*>)>(&::BuildSafe::AssetDatabase::SaveToDisk)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4ec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::AssetDatabase*>(),
                        {"SaveToDisk", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::AssetDatabase.SaveAssetsToDisk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Object*>, bool)>(&::BuildSafe::AssetDatabase::SaveAssetsToDisk)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4ec44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::AssetDatabase*>(),
                        {"SaveAssetsToDisk", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Object*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline T BuildSafe::AssetDatabase::LoadAssetAtPath(::StringW  assetPath)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::BuildSafe::AssetDatabase*>(),
                    {"LoadAssetAtPath", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, assetPath);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline ::ArrayW<T> BuildSafe::AssetDatabase::LoadAssetsOfType()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::BuildSafe::AssetDatabase*>(),
                    {"LoadAssetsOfType", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline ::ArrayW<::StringW> BuildSafe::AssetDatabase::FindAssetsOfType()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::BuildSafe::AssetDatabase*>(),
                    {"FindAssetsOfType", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline void BuildSafe::AssetDatabase::SaveToDisk(/* [ParamArray] */ ::ArrayW<::UnityEngine::Object*>  assetsToSave)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::AssetDatabase*>(),
                        {"SaveToDisk", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, assetsToSave);
}
inline void BuildSafe::AssetDatabase::SaveAssetsToDisk(::ArrayW<::UnityEngine::Object*>  assetsToSave, bool  saveProject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::AssetDatabase*>(),
                        {"SaveAssetsToDisk", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Object*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, assetsToSave, saveProject);
}
// Ctor Parameters []
constexpr ::BuildSafe::AssetDatabase::AssetDatabase()   {
}
