#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/IRigSyncSceneToStreamData.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__IRigSyncSceneToStreamData_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__SyncableProperties_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData.get_syncableTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>> (::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::*)()>(&::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::get_syncableTransforms)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData*>(),
                    {::i2c::class_of<::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData.get_syncableProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Animations::Rigging::SyncableProperties> (::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::*)()>(&::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::get_syncableProperties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData*>(),
                    {::i2c::class_of<::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData.get_rigStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::*)()>(&::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::get_rigStates)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData*>(),
                    {::i2c::class_of<::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::get_syncableTransforms()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Animations::Rigging::SyncableProperties> UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::get_syncableProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Animations::Rigging::SyncableProperties>>(this, ___internal_method);
}
inline ::ArrayW<bool> UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData::get_rigStates()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::Rigging::IRigSyncSceneToStreamData*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(this, ___internal_method);
}
