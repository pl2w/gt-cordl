#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckCosmeticUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticUtils_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticUtils_CosmeticRootInfo_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticUtils__LoadRootsFromBundleAsync_d__3_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticUtils_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticUtils.ParseRootsFromMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>* (*)(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*)>(&::Liv::Lck::Cosmetics::LckCosmeticUtils::ParseRootsFromMetadata)> {
  constexpr static std::size_t size = 0x724;
  constexpr static std::size_t addrs = 0x9d69b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils*>(),
                        {"ParseRootsFromMetadata", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticUtils.ParseRootsFromTomlString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>* (*)(::StringW)>(&::Liv::Lck::Cosmetics::LckCosmeticUtils::ParseRootsFromTomlString)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x9d6ab10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils*>(),
                        {"ParseRootsFromTomlString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticUtils.LoadRootsFromBundleAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>* (*)(::UnityEngine::AssetBundle*, ::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>*, ::StringW)>(&::Liv::Lck::Cosmetics::LckCosmeticUtils::LoadRootsFromBundleAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9d6a248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils*>(),
                        {"LoadRootsFromBundleAsync", {}, {::i2c::type_of<::UnityEngine::AssetBundle*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticUtils.LoadRootsFromBundle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* (*)(::UnityEngine::AssetBundle*, ::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>*, ::StringW)>(&::Liv::Lck::Cosmetics::LckCosmeticUtils::LoadRootsFromBundle)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x9d6ae94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils*>(),
                        {"LoadRootsFromBundle", {}, {::i2c::type_of<::UnityEngine::AssetBundle*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticUtils.ResolveType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW)>(&::Liv::Lck::Cosmetics::LckCosmeticUtils::ResolveType)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x9d6b4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils*>(),
                        {"ResolveType", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>* Liv::Lck::Cosmetics::LckCosmeticUtils::ParseRootsFromMetadata(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*  metadata)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils*>(),
                        {"ParseRootsFromMetadata", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>*>(nullptr, ___internal_method, metadata);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>* Liv::Lck::Cosmetics::LckCosmeticUtils::ParseRootsFromTomlString(::StringW  tomlContent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils*>(),
                        {"ParseRootsFromTomlString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>*>(nullptr, ___internal_method, tomlContent);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>* Liv::Lck::Cosmetics::LckCosmeticUtils::LoadRootsFromBundleAsync(::UnityEngine::AssetBundle*  bundle, ::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>*  rootInfos, ::StringW  cosmeticIdForLogging)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils*>(),
                        {"LoadRootsFromBundleAsync", {}, {::i2c::type_of<::UnityEngine::AssetBundle*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>*>(nullptr, ___internal_method, bundle, rootInfos, cosmeticIdForLogging);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* Liv::Lck::Cosmetics::LckCosmeticUtils::LoadRootsFromBundle(::UnityEngine::AssetBundle*  bundle, ::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>*  rootInfos, ::StringW  cosmeticIdForLogging)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils*>(),
                        {"LoadRootsFromBundle", {}, {::i2c::type_of<::UnityEngine::AssetBundle*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>(nullptr, ___internal_method, bundle, rootInfos, cosmeticIdForLogging);
}
inline ::System::Type* Liv::Lck::Cosmetics::LckCosmeticUtils::ResolveType(::StringW  typeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils*>(),
                        {"ResolveType", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, typeName);
}
// Ctor Parameters []
constexpr ::Liv::Lck::Cosmetics::LckCosmeticUtils::LckCosmeticUtils()   {
}
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticUtils___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticUtils___c::*)()>(&::Liv::Lck::Cosmetics::LckCosmeticUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d6b808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticUtils___c._LoadRootsFromBundleAsync_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Cosmetics::LckCosmeticUtils___c::*)(::UnityEngine::AssetBundleRequest*)>(&::Liv::Lck::Cosmetics::LckCosmeticUtils___c::_LoadRootsFromBundleAsync_b__3_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d6b810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>(),
                        {"<LoadRootsFromBundleAsync>b__3_0", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticUtils___c._LoadRootsFromBundleAsync_b__3_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Cosmetics::LckCosmeticUtils___c::*)(::UnityEngine::AssetBundleRequest*)>(&::Liv::Lck::Cosmetics::LckCosmeticUtils___c::_LoadRootsFromBundleAsync_b__3_1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9d6b81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>(),
                        {"<LoadRootsFromBundleAsync>b__3_1", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticUtils___c._LoadRootsFromBundleAsync_b__3_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Liv::Lck::Cosmetics::LckCosmeticUtils___c::*)(::UnityEngine::AssetBundleRequest*)>(&::Liv::Lck::Cosmetics::LckCosmeticUtils___c::_LoadRootsFromBundleAsync_b__3_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d6b894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>(),
                        {"<LoadRootsFromBundleAsync>b__3_2", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Cosmetics::LckCosmeticUtils___c::setStaticF___9(::Liv::Lck::Cosmetics::LckCosmeticUtils___c*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::Cosmetics::LckCosmeticUtils___c*, "<>9", ::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>(std::forward<::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>(value));
}
inline ::Liv::Lck::Cosmetics::LckCosmeticUtils___c* Liv::Lck::Cosmetics::LckCosmeticUtils___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Liv::Lck::Cosmetics::LckCosmeticUtils___c*, "<>9", ::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>();
}
inline void Liv::Lck::Cosmetics::LckCosmeticUtils___c::setStaticF___9__3_0(::System::Func_2<::UnityEngine::AssetBundleRequest*,::System::Threading::Tasks::Task*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::AssetBundleRequest*,::System::Threading::Tasks::Task*>*, "<>9__3_0", ::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>(std::forward<::System::Func_2<::UnityEngine::AssetBundleRequest*,::System::Threading::Tasks::Task*>*>(value));
}
inline ::System::Func_2<::UnityEngine::AssetBundleRequest*,::System::Threading::Tasks::Task*>* Liv::Lck::Cosmetics::LckCosmeticUtils___c::getStaticF___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::AssetBundleRequest*,::System::Threading::Tasks::Task*>*, "<>9__3_0", ::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>();
}
inline void Liv::Lck::Cosmetics::LckCosmeticUtils___c::setStaticF___9__3_1(::System::Func_2<::UnityEngine::AssetBundleRequest*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::AssetBundleRequest*,bool>*, "<>9__3_1", ::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>(std::forward<::System::Func_2<::UnityEngine::AssetBundleRequest*,bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::AssetBundleRequest*,bool>* Liv::Lck::Cosmetics::LckCosmeticUtils___c::getStaticF___9__3_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::AssetBundleRequest*,bool>*, "<>9__3_1", ::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>();
}
inline void Liv::Lck::Cosmetics::LckCosmeticUtils___c::setStaticF___9__3_2(::System::Func_2<::UnityEngine::AssetBundleRequest*,::UnityW<::UnityEngine::Object>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::AssetBundleRequest*,::UnityW<::UnityEngine::Object>>*, "<>9__3_2", ::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>(std::forward<::System::Func_2<::UnityEngine::AssetBundleRequest*,::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::System::Func_2<::UnityEngine::AssetBundleRequest*,::UnityW<::UnityEngine::Object>>* Liv::Lck::Cosmetics::LckCosmeticUtils___c::getStaticF___9__3_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::AssetBundleRequest*,::UnityW<::UnityEngine::Object>>*, "<>9__3_2", ::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>();
}
inline void Liv::Lck::Cosmetics::LckCosmeticUtils___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Cosmetics::LckCosmeticUtils___c::_LoadRootsFromBundleAsync_b__3_0(::UnityEngine::AssetBundleRequest*  req)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>(),
                        {"<LoadRootsFromBundleAsync>b__3_0", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, req);
}
inline bool Liv::Lck::Cosmetics::LckCosmeticUtils___c::_LoadRootsFromBundleAsync_b__3_1(::UnityEngine::AssetBundleRequest*  req)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>(),
                        {"<LoadRootsFromBundleAsync>b__3_1", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, req);
}
inline ::UnityW<::UnityEngine::Object> Liv::Lck::Cosmetics::LckCosmeticUtils___c::_LoadRootsFromBundleAsync_b__3_2(::UnityEngine::AssetBundleRequest*  req)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>(),
                        {"<LoadRootsFromBundleAsync>b__3_2", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, req);
}
inline ::Liv::Lck::Cosmetics::LckCosmeticUtils___c* Liv::Lck::Cosmetics::LckCosmeticUtils___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Cosmetics::LckCosmeticUtils___c*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Cosmetics::LckCosmeticUtils___c::LckCosmeticUtils___c()   {
}
