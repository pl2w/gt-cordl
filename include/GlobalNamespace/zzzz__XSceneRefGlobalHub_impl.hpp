#pragma once
// IWYU pragma private; include "GlobalNamespace/XSceneRefGlobalHub.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__XSceneRefGlobalHub_def.hpp"
#include "GlobalNamespace/zzzz__SceneIndex_def.hpp"
#include "GlobalNamespace/zzzz__XSceneRefTarget_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XSceneRefGlobalHub.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::GlobalNamespace::XSceneRefTarget*)>(&::GlobalNamespace::XSceneRefGlobalHub::Register)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x56ba7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefGlobalHub*>(),
                        {"Register", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::XSceneRefTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XSceneRefGlobalHub.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::GlobalNamespace::XSceneRefTarget*)>(&::GlobalNamespace::XSceneRefGlobalHub::Unregister)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x56ba898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefGlobalHub*>(),
                        {"Unregister", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::XSceneRefTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XSceneRefGlobalHub.TryResolve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SceneIndex, int32_t, ::by_ref<::GlobalNamespace::XSceneRefTarget*>)>(&::GlobalNamespace::XSceneRefGlobalHub::TryResolve)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x56ba628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefGlobalHub*>(),
                        {"TryResolve", {}, {::i2c::type_of<::GlobalNamespace::SceneIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::XSceneRefTarget*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XSceneRefGlobalHub::setStaticF_registry(::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::XSceneRefTarget>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::XSceneRefTarget>>*>*, "registry", ::GlobalNamespace::XSceneRefGlobalHub*>(std::forward<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::XSceneRefTarget>>*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::XSceneRefTarget>>*>* GlobalNamespace::XSceneRefGlobalHub::getStaticF_registry()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::XSceneRefTarget>>*>*, "registry", ::GlobalNamespace::XSceneRefGlobalHub*>();
}
inline void GlobalNamespace::XSceneRefGlobalHub::Register(int32_t  _cordl_ID, ::GlobalNamespace::XSceneRefTarget*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefGlobalHub*>(),
                        {"Register", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::XSceneRefTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_ID, obj);
}
inline void GlobalNamespace::XSceneRefGlobalHub::Unregister(int32_t  _cordl_ID, ::GlobalNamespace::XSceneRefTarget*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefGlobalHub*>(),
                        {"Unregister", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::XSceneRefTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_ID, obj);
}
inline bool GlobalNamespace::XSceneRefGlobalHub::TryResolve(::GlobalNamespace::SceneIndex  sceneIndex, int32_t  _cordl_ID, ::by_ref<::GlobalNamespace::XSceneRefTarget*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefGlobalHub*>(),
                        {"TryResolve", {}, {::i2c::type_of<::GlobalNamespace::SceneIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::XSceneRefTarget*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sceneIndex, _cordl_ID, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XSceneRefGlobalHub::XSceneRefGlobalHub()   {
}
