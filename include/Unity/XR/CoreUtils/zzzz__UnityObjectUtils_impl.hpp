#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/UnityObjectUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__UnityObjectUtils_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::UnityObjectUtils.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, bool)>(&::Unity::XR::CoreUtils::UnityObjectUtils::Destroy)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb3faba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::UnityObjectUtils*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::UnityObjectUtils::Destroy(::UnityEngine::Object*  obj, bool  withUndo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::UnityObjectUtils*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, withUndo);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline T Unity::XR::CoreUtils::UnityObjectUtils::ConvertUnityObjectToType(::UnityEngine::Object*  objectIn)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::UnityObjectUtils*>(),
                    {"ConvertUnityObjectToType", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Object*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, objectIn);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline void Unity::XR::CoreUtils::UnityObjectUtils::RemoveDestroyedObjects(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::UnityObjectUtils*>(),
                    {"RemoveDestroyedObjects", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
template<typename TKey,typename TValue>
requires(::cordl_internals::type_constraint<TKey, ::UnityEngine::Object*>)
inline void Unity::XR::CoreUtils::UnityObjectUtils::RemoveDestroyedKeys(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dictionary)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::UnityObjectUtils*>(),
                    {"RemoveDestroyedKeys", {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dictionary);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::UnityObjectUtils::UnityObjectUtils()   {
}
