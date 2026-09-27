#pragma once
// IWYU pragma private; include "GlobalNamespace/PostVRRigPhysicsSynch.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PostVRRigPhysicsSynch_def.hpp"
#include "GlobalNamespace/zzzz__AutoSyncTransforms_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PostVRRigPhysicsSynch.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PostVRRigPhysicsSynch::*)()>(&::GlobalNamespace::PostVRRigPhysicsSynch::LateUpdate)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5ab224c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostVRRigPhysicsSynch*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostVRRigPhysicsSynch.AddSyncTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AutoSyncTransforms*)>(&::GlobalNamespace::PostVRRigPhysicsSynch::AddSyncTarget)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ab23b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostVRRigPhysicsSynch*>(),
                        {"AddSyncTarget", {}, {::i2c::type_of<::GlobalNamespace::AutoSyncTransforms*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostVRRigPhysicsSynch.RemoveSyncTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AutoSyncTransforms*)>(&::GlobalNamespace::PostVRRigPhysicsSynch::RemoveSyncTarget)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ab2488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostVRRigPhysicsSynch*>(),
                        {"RemoveSyncTarget", {}, {::i2c::type_of<::GlobalNamespace::AutoSyncTransforms*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PostVRRigPhysicsSynch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PostVRRigPhysicsSynch::*)()>(&::GlobalNamespace::PostVRRigPhysicsSynch::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab2508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostVRRigPhysicsSynch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PostVRRigPhysicsSynch::setStaticF_k_syncList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AutoSyncTransforms>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AutoSyncTransforms>>*, "k_syncList", ::GlobalNamespace::PostVRRigPhysicsSynch*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AutoSyncTransforms>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AutoSyncTransforms>>* GlobalNamespace::PostVRRigPhysicsSynch::getStaticF_k_syncList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AutoSyncTransforms>>*, "k_syncList", ::GlobalNamespace::PostVRRigPhysicsSynch*>();
}
inline void GlobalNamespace::PostVRRigPhysicsSynch::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostVRRigPhysicsSynch*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PostVRRigPhysicsSynch::AddSyncTarget(::GlobalNamespace::AutoSyncTransforms*  body)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostVRRigPhysicsSynch*>(),
                        {"AddSyncTarget", {}, {::i2c::type_of<::GlobalNamespace::AutoSyncTransforms*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, body);
}
inline void GlobalNamespace::PostVRRigPhysicsSynch::RemoveSyncTarget(::GlobalNamespace::AutoSyncTransforms*  body)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostVRRigPhysicsSynch*>(),
                        {"RemoveSyncTarget", {}, {::i2c::type_of<::GlobalNamespace::AutoSyncTransforms*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, body);
}
inline void GlobalNamespace::PostVRRigPhysicsSynch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostVRRigPhysicsSynch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PostVRRigPhysicsSynch* GlobalNamespace::PostVRRigPhysicsSynch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PostVRRigPhysicsSynch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PostVRRigPhysicsSynch::PostVRRigPhysicsSynch()   {
}
