#pragma once
// IWYU pragma private; include "BoingKit/BoingManager.hpp"
#include "BoingKit/zzzz__BoingEffector_Params_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BoingKit/zzzz__BoingManager_def.hpp"
#include "BoingKit/zzzz__BoingBehavior_def.hpp"
#include "BoingKit/zzzz__BoingBones_def.hpp"
#include "BoingKit/zzzz__BoingEffector_Params_def.hpp"
#include "BoingKit/zzzz__BoingEffector_def.hpp"
#include "BoingKit/zzzz__BoingManager_TranslationLockSpace_def.hpp"
#include "BoingKit/zzzz__BoingManager_UpdateMode_def.hpp"
#include "BoingKit/zzzz__BoingManager_def.hpp"
#include "BoingKit/zzzz__BoingReactorFieldCPUSampler_def.hpp"
#include "BoingKit/zzzz__BoingReactorFieldGPUSampler_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_def.hpp"
#include "BoingKit/zzzz__BoingReactor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__SphereCollider_def.hpp"
//  Writing Method size for method: ::BoingKit::BoingManager.get_Behaviors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingBehavior>>* (*)()>(&::BoingKit::BoingManager::get_Behaviors)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e16c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_Behaviors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.get_Reactors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingReactor>>* (*)()>(&::BoingKit::BoingManager::get_Reactors)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e16cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_Reactors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.get_Effectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingEffector>>* (*)()>(&::BoingKit::BoingManager::get_Effectors)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e16d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_Effectors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.get_ReactorFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingReactorField>>* (*)()>(&::BoingKit::BoingManager::get_ReactorFields)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e16db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_ReactorFields", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.get_ReactorFieldCPUSamlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>* (*)()>(&::BoingKit::BoingManager::get_ReactorFieldCPUSamlers)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e16e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_ReactorFieldCPUSamlers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.get_ReactorFieldGPUSampler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingReactorFieldGPUSampler>>* (*)()>(&::BoingKit::BoingManager::get_ReactorFieldGPUSampler)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e16ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_ReactorFieldGPUSampler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.get_DeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::BoingKit::BoingManager::get_DeltaTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e16f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_DeltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.get_FixedDeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::BoingKit::BoingManager::get_FixedDeltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e16f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_FixedDeltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.get_NumBehaviors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::BoingKit::BoingManager::get_NumBehaviors)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e16f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_NumBehaviors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.get_NumEffectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::BoingKit::BoingManager::get_NumEffectors)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e16ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_NumEffectors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.get_NumReactors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::BoingKit::BoingManager::get_NumReactors)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e1706c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_NumReactors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.get_NumFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::BoingKit::BoingManager::get_NumFields)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e170e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_NumFields", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.get_NumCPUFieldSamplers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::BoingKit::BoingManager::get_NumCPUFieldSamplers)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e1715c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_NumCPUFieldSamplers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.get_NumGPUFieldSamplers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::BoingKit::BoingManager::get_NumGPUFieldSamplers)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e171d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_NumGPUFieldSamplers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.ValidateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BoingKit::BoingManager::ValidateManager)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5e1724c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"ValidateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.get_SharedSphereCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::SphereCollider> (*)()>(&::BoingKit::BoingManager::get_SharedSphereCollider)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e1740c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_SharedSphereCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BoingKit::BoingBehavior*)>(&::BoingKit::BoingManager::Register)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e11974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Register", {}, {::i2c::type_of<::BoingKit::BoingBehavior*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BoingKit::BoingBehavior*)>(&::BoingKit::BoingManager::Unregister)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e11ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::BoingKit::BoingBehavior*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BoingKit::BoingEffector*)>(&::BoingKit::BoingManager::Register)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e15f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Register", {}, {::i2c::type_of<::BoingKit::BoingEffector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BoingKit::BoingEffector*)>(&::BoingKit::BoingManager::Unregister)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e16044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::BoingKit::BoingEffector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BoingKit::BoingReactor*)>(&::BoingKit::BoingManager::Register)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e17aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Register", {}, {::i2c::type_of<::BoingKit::BoingReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BoingKit::BoingReactor*)>(&::BoingKit::BoingManager::Unregister)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e17b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::BoingKit::BoingReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BoingKit::BoingReactorField*)>(&::BoingKit::BoingManager::Register)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e17c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Register", {}, {::i2c::type_of<::BoingKit::BoingReactorField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BoingKit::BoingReactorField*)>(&::BoingKit::BoingManager::Unregister)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e17d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::BoingKit::BoingReactorField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BoingKit::BoingReactorFieldCPUSampler*)>(&::BoingKit::BoingManager::Register)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e17e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Register", {}, {::i2c::type_of<::BoingKit::BoingReactorFieldCPUSampler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BoingKit::BoingReactorFieldCPUSampler*)>(&::BoingKit::BoingManager::Unregister)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e17f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::BoingKit::BoingReactorFieldCPUSampler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BoingKit::BoingReactorFieldGPUSampler*)>(&::BoingKit::BoingManager::Register)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e18010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Register", {}, {::i2c::type_of<::BoingKit::BoingReactorFieldGPUSampler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BoingKit::BoingReactorFieldGPUSampler*)>(&::BoingKit::BoingManager::Unregister)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e180f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::BoingKit::BoingReactorFieldGPUSampler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BoingKit::BoingBones*)>(&::BoingKit::BoingManager::Register)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e134c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Register", {}, {::i2c::type_of<::BoingKit::BoingBones*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BoingKit::BoingBones*)>(&::BoingKit::BoingManager::Unregister)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e13604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::BoingKit::BoingBones*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.PreRegisterBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BoingKit::BoingManager::PreRegisterBehavior)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e174ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PreRegisterBehavior", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.PostUnregisterBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BoingKit::BoingManager::PostUnregisterBehavior)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e17538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PostUnregisterBehavior", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.PreRegisterEffectorReactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BoingKit::BoingManager::PreRegisterEffectorReactor)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5e175cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PreRegisterEffectorReactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.PostUnregisterEffectorReactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BoingKit::BoingManager::PostUnregisterEffectorReactor)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5e178ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PostUnregisterEffectorReactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.PreRegisterBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BoingKit::BoingManager::PreRegisterBones)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e181e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PreRegisterBones", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.PostUnregisterBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BoingKit::BoingManager::PostUnregisterBones)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e1822c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PostUnregisterBones", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BoingManager_UpdateMode)>(&::BoingKit::BoingManager::Execute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e18230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Execute", {}, {::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.ExecuteBehaviors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BoingManager_UpdateMode)>(&::BoingKit::BoingManager::ExecuteBehaviors)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5e18944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"ExecuteBehaviors", {}, {::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.PullBehaviorResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BoingManager_UpdateMode)>(&::BoingKit::BoingManager::PullBehaviorResults)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5e18e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PullBehaviorResults", {}, {::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.RestoreBehaviors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BoingKit::BoingManager::RestoreBehaviors)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5e19008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"RestoreBehaviors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.RefreshEffectorParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BoingKit::BoingManager::RefreshEffectorParams)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x5e182d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"RefreshEffectorParams", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.ExecuteReactors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BoingManager_UpdateMode)>(&::BoingKit::BoingManager::ExecuteReactors)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5e18b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"ExecuteReactors", {}, {::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.PullReactorResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BoingManager_UpdateMode)>(&::BoingKit::BoingManager::PullReactorResults)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5e19174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PullReactorResults", {}, {::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.RestoreReactors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BoingKit::BoingManager::RestoreReactors)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5e19430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"RestoreReactors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.DispatchReactorFieldCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BoingKit::BoingManager::DispatchReactorFieldCompute)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5e196d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"DispatchReactorFieldCompute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.ExecuteBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BoingManager_UpdateMode)>(&::BoingKit::BoingManager::ExecuteBones)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5e18700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"ExecuteBones", {}, {::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.PullBonesResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BoingManager_UpdateMode)>(&::BoingKit::BoingManager::PullBonesResults)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e19ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PullBonesResults", {}, {::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager.RestoreBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BoingKit::BoingManager::RestoreBones)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5e19ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"RestoreBones", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void BoingKit::BoingManager::setStaticF_OnBehaviorRegister(::BoingKit::BoingManager_BehaviorRegisterDelegate*  value)  {
::cordl_internals::setStaticField<::BoingKit::BoingManager_BehaviorRegisterDelegate*, "OnBehaviorRegister", ::BoingKit::BoingManager*>(std::forward<::BoingKit::BoingManager_BehaviorRegisterDelegate*>(value));
}
inline ::BoingKit::BoingManager_BehaviorRegisterDelegate* BoingKit::BoingManager::getStaticF_OnBehaviorRegister()  {
return ::cordl_internals::getStaticField<::BoingKit::BoingManager_BehaviorRegisterDelegate*, "OnBehaviorRegister", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_OnBehaviorUnregister(::BoingKit::BoingManager_BehaviorUnregisterDelegate*  value)  {
::cordl_internals::setStaticField<::BoingKit::BoingManager_BehaviorUnregisterDelegate*, "OnBehaviorUnregister", ::BoingKit::BoingManager*>(std::forward<::BoingKit::BoingManager_BehaviorUnregisterDelegate*>(value));
}
inline ::BoingKit::BoingManager_BehaviorUnregisterDelegate* BoingKit::BoingManager::getStaticF_OnBehaviorUnregister()  {
return ::cordl_internals::getStaticField<::BoingKit::BoingManager_BehaviorUnregisterDelegate*, "OnBehaviorUnregister", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_OnEffectorRegister(::BoingKit::BoingManager_EffectorRegisterDelegate*  value)  {
::cordl_internals::setStaticField<::BoingKit::BoingManager_EffectorRegisterDelegate*, "OnEffectorRegister", ::BoingKit::BoingManager*>(std::forward<::BoingKit::BoingManager_EffectorRegisterDelegate*>(value));
}
inline ::BoingKit::BoingManager_EffectorRegisterDelegate* BoingKit::BoingManager::getStaticF_OnEffectorRegister()  {
return ::cordl_internals::getStaticField<::BoingKit::BoingManager_EffectorRegisterDelegate*, "OnEffectorRegister", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_OnEffectorUnregister(::BoingKit::BoingManager_EffectorUnregisterDelegate*  value)  {
::cordl_internals::setStaticField<::BoingKit::BoingManager_EffectorUnregisterDelegate*, "OnEffectorUnregister", ::BoingKit::BoingManager*>(std::forward<::BoingKit::BoingManager_EffectorUnregisterDelegate*>(value));
}
inline ::BoingKit::BoingManager_EffectorUnregisterDelegate* BoingKit::BoingManager::getStaticF_OnEffectorUnregister()  {
return ::cordl_internals::getStaticField<::BoingKit::BoingManager_EffectorUnregisterDelegate*, "OnEffectorUnregister", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_OnReactorRegister(::BoingKit::BoingManager_ReactorRegisterDelegate*  value)  {
::cordl_internals::setStaticField<::BoingKit::BoingManager_ReactorRegisterDelegate*, "OnReactorRegister", ::BoingKit::BoingManager*>(std::forward<::BoingKit::BoingManager_ReactorRegisterDelegate*>(value));
}
inline ::BoingKit::BoingManager_ReactorRegisterDelegate* BoingKit::BoingManager::getStaticF_OnReactorRegister()  {
return ::cordl_internals::getStaticField<::BoingKit::BoingManager_ReactorRegisterDelegate*, "OnReactorRegister", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_OnReactorUnregister(::BoingKit::BoingManager_ReactorUnregisterDelegate*  value)  {
::cordl_internals::setStaticField<::BoingKit::BoingManager_ReactorUnregisterDelegate*, "OnReactorUnregister", ::BoingKit::BoingManager*>(std::forward<::BoingKit::BoingManager_ReactorUnregisterDelegate*>(value));
}
inline ::BoingKit::BoingManager_ReactorUnregisterDelegate* BoingKit::BoingManager::getStaticF_OnReactorUnregister()  {
return ::cordl_internals::getStaticField<::BoingKit::BoingManager_ReactorUnregisterDelegate*, "OnReactorUnregister", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_OnReactorFieldRegister(::BoingKit::BoingManager_ReactorFieldRegisterDelegate*  value)  {
::cordl_internals::setStaticField<::BoingKit::BoingManager_ReactorFieldRegisterDelegate*, "OnReactorFieldRegister", ::BoingKit::BoingManager*>(std::forward<::BoingKit::BoingManager_ReactorFieldRegisterDelegate*>(value));
}
inline ::BoingKit::BoingManager_ReactorFieldRegisterDelegate* BoingKit::BoingManager::getStaticF_OnReactorFieldRegister()  {
return ::cordl_internals::getStaticField<::BoingKit::BoingManager_ReactorFieldRegisterDelegate*, "OnReactorFieldRegister", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_OnReactorFieldUnregister(::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*  value)  {
::cordl_internals::setStaticField<::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*, "OnReactorFieldUnregister", ::BoingKit::BoingManager*>(std::forward<::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*>(value));
}
inline ::BoingKit::BoingManager_ReactorFieldUnregisterDelegate* BoingKit::BoingManager::getStaticF_OnReactorFieldUnregister()  {
return ::cordl_internals::getStaticField<::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*, "OnReactorFieldUnregister", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_OnReactorFieldCPUSamplerRegister(::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*  value)  {
::cordl_internals::setStaticField<::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*, "OnReactorFieldCPUSamplerRegister", ::BoingKit::BoingManager*>(std::forward<::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*>(value));
}
inline ::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate* BoingKit::BoingManager::getStaticF_OnReactorFieldCPUSamplerRegister()  {
return ::cordl_internals::getStaticField<::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*, "OnReactorFieldCPUSamplerRegister", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_OnReactorFieldCPUSamplerUnregister(::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*  value)  {
::cordl_internals::setStaticField<::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*, "OnReactorFieldCPUSamplerUnregister", ::BoingKit::BoingManager*>(std::forward<::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*>(value));
}
inline ::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate* BoingKit::BoingManager::getStaticF_OnReactorFieldCPUSamplerUnregister()  {
return ::cordl_internals::getStaticField<::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*, "OnReactorFieldCPUSamplerUnregister", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_OnReactorFieldGPUSamplerRegister(::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*  value)  {
::cordl_internals::setStaticField<::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*, "OnReactorFieldGPUSamplerRegister", ::BoingKit::BoingManager*>(std::forward<::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*>(value));
}
inline ::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate* BoingKit::BoingManager::getStaticF_OnReactorFieldGPUSamplerRegister()  {
return ::cordl_internals::getStaticField<::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*, "OnReactorFieldGPUSamplerRegister", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_OnFieldGPUSamplerUnregister(::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*  value)  {
::cordl_internals::setStaticField<::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*, "OnFieldGPUSamplerUnregister", ::BoingKit::BoingManager*>(std::forward<::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*>(value));
}
inline ::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate* BoingKit::BoingManager::getStaticF_OnFieldGPUSamplerUnregister()  {
return ::cordl_internals::getStaticField<::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*, "OnFieldGPUSamplerUnregister", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_OnBonesRegister(::BoingKit::BoingManager_BonesRegisterDelegate*  value)  {
::cordl_internals::setStaticField<::BoingKit::BoingManager_BonesRegisterDelegate*, "OnBonesRegister", ::BoingKit::BoingManager*>(std::forward<::BoingKit::BoingManager_BonesRegisterDelegate*>(value));
}
inline ::BoingKit::BoingManager_BonesRegisterDelegate* BoingKit::BoingManager::getStaticF_OnBonesRegister()  {
return ::cordl_internals::getStaticField<::BoingKit::BoingManager_BonesRegisterDelegate*, "OnBonesRegister", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_OnBonesUnregister(::BoingKit::BoingManager_BonesUnregisterDelegate*  value)  {
::cordl_internals::setStaticField<::BoingKit::BoingManager_BonesUnregisterDelegate*, "OnBonesUnregister", ::BoingKit::BoingManager*>(std::forward<::BoingKit::BoingManager_BonesUnregisterDelegate*>(value));
}
inline ::BoingKit::BoingManager_BonesUnregisterDelegate* BoingKit::BoingManager::getStaticF_OnBonesUnregister()  {
return ::cordl_internals::getStaticField<::BoingKit::BoingManager_BonesUnregisterDelegate*, "OnBonesUnregister", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_s_deltaTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_deltaTime", ::BoingKit::BoingManager*>(std::forward<float_t>(value));
}
inline float_t BoingKit::BoingManager::getStaticF_s_deltaTime()  {
return ::cordl_internals::getStaticField<float_t, "s_deltaTime", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_s_behaviorMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*, "s_behaviorMap", ::BoingKit::BoingManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>* BoingKit::BoingManager::getStaticF_s_behaviorMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*, "s_behaviorMap", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_s_effectorMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingEffector>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingEffector>>*, "s_effectorMap", ::BoingKit::BoingManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingEffector>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingEffector>>* BoingKit::BoingManager::getStaticF_s_effectorMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingEffector>>*, "s_effectorMap", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_s_reactorMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*, "s_reactorMap", ::BoingKit::BoingManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>* BoingKit::BoingManager::getStaticF_s_reactorMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*, "s_reactorMap", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_s_fieldMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>*, "s_fieldMap", ::BoingKit::BoingManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>* BoingKit::BoingManager::getStaticF_s_fieldMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorField>>*, "s_fieldMap", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_s_cpuSamplerMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>*, "s_cpuSamplerMap", ::BoingKit::BoingManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>* BoingKit::BoingManager::getStaticF_s_cpuSamplerMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>*, "s_cpuSamplerMap", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_s_gpuSamplerMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldGPUSampler>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldGPUSampler>>*, "s_gpuSamplerMap", ::BoingKit::BoingManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldGPUSampler>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldGPUSampler>>* BoingKit::BoingManager::getStaticF_s_gpuSamplerMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactorFieldGPUSampler>>*, "s_gpuSamplerMap", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_s_bonesMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*, "s_bonesMap", ::BoingKit::BoingManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>* BoingKit::BoingManager::getStaticF_s_bonesMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBones>>*, "s_bonesMap", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_kEffectorParamsIncrement(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "kEffectorParamsIncrement", ::BoingKit::BoingManager*>(std::forward<int32_t>(value));
}
inline int32_t BoingKit::BoingManager::getStaticF_kEffectorParamsIncrement()  {
return ::cordl_internals::getStaticField<int32_t, "kEffectorParamsIncrement", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_s_effectorParamsList(::System::Collections::Generic::List_1<::GlobalNamespace::BoingEffector_Params>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::BoingEffector_Params>*, "s_effectorParamsList", ::BoingKit::BoingManager*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::BoingEffector_Params>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BoingEffector_Params>* BoingKit::BoingManager::getStaticF_s_effectorParamsList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::BoingEffector_Params>*, "s_effectorParamsList", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_s_aEffectorParams(::ArrayW<::GlobalNamespace::BoingEffector_Params>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::BoingEffector_Params>, "s_aEffectorParams", ::BoingKit::BoingManager*>(std::forward<::ArrayW<::GlobalNamespace::BoingEffector_Params>>(value));
}
inline ::ArrayW<::GlobalNamespace::BoingEffector_Params> BoingKit::BoingManager::getStaticF_s_aEffectorParams()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::BoingEffector_Params>, "s_aEffectorParams", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_s_effectorParamsBuffer(::UnityEngine::ComputeBuffer*  value)  {
::cordl_internals::setStaticField<::UnityEngine::ComputeBuffer*, "s_effectorParamsBuffer", ::BoingKit::BoingManager*>(std::forward<::UnityEngine::ComputeBuffer*>(value));
}
inline ::UnityEngine::ComputeBuffer* BoingKit::BoingManager::getStaticF_s_effectorParamsBuffer()  {
return ::cordl_internals::getStaticField<::UnityEngine::ComputeBuffer*, "s_effectorParamsBuffer", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_s_effectorParamsIndexMap(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, "s_effectorParamsIndexMap", ::BoingKit::BoingManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* BoingKit::BoingManager::getStaticF_s_effectorParamsIndexMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, "s_effectorParamsIndexMap", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_UseAsynchronousJobs(bool  value)  {
::cordl_internals::setStaticField<bool, "UseAsynchronousJobs", ::BoingKit::BoingManager*>(std::forward<bool>(value));
}
inline bool BoingKit::BoingManager::getStaticF_UseAsynchronousJobs()  {
return ::cordl_internals::getStaticField<bool, "UseAsynchronousJobs", ::BoingKit::BoingManager*>();
}
inline void BoingKit::BoingManager::setStaticF_s_managerGo(::UnityW<::UnityEngine::GameObject>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::GameObject>, "s_managerGo", ::BoingKit::BoingManager*>(std::forward<::UnityW<::UnityEngine::GameObject>>(value));
}
inline ::UnityW<::UnityEngine::GameObject> BoingKit::BoingManager::getStaticF_s_managerGo()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GameObject>, "s_managerGo", ::BoingKit::BoingManager*>();
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingBehavior>>* BoingKit::BoingManager::get_Behaviors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_Behaviors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingBehavior>>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingReactor>>* BoingKit::BoingManager::get_Reactors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_Reactors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingReactor>>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingEffector>>* BoingKit::BoingManager::get_Effectors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_Effectors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingEffector>>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingReactorField>>* BoingKit::BoingManager::get_ReactorFields()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_ReactorFields", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingReactorField>>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>* BoingKit::BoingManager::get_ReactorFieldCPUSamlers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_ReactorFieldCPUSamlers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingReactorFieldCPUSampler>>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingReactorFieldGPUSampler>>* BoingKit::BoingManager::get_ReactorFieldGPUSampler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_ReactorFieldGPUSampler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::BoingKit::BoingReactorFieldGPUSampler>>*>(nullptr, ___internal_method);
}
inline float_t BoingKit::BoingManager::get_DeltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_DeltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t BoingKit::BoingManager::get_FixedDeltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_FixedDeltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline int32_t BoingKit::BoingManager::get_NumBehaviors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_NumBehaviors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t BoingKit::BoingManager::get_NumEffectors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_NumEffectors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t BoingKit::BoingManager::get_NumReactors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_NumReactors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t BoingKit::BoingManager::get_NumFields()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_NumFields", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t BoingKit::BoingManager::get_NumCPUFieldSamplers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_NumCPUFieldSamplers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t BoingKit::BoingManager::get_NumGPUFieldSamplers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_NumGPUFieldSamplers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void BoingKit::BoingManager::ValidateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"ValidateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::SphereCollider> BoingKit::BoingManager::get_SharedSphereCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"get_SharedSphereCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::SphereCollider>>(nullptr, ___internal_method);
}
inline void BoingKit::BoingManager::Register(::BoingKit::BoingBehavior*  behavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Register", {}, {::i2c::type_of<::BoingKit::BoingBehavior*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behavior);
}
inline void BoingKit::BoingManager::Unregister(::BoingKit::BoingBehavior*  behavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::BoingKit::BoingBehavior*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behavior);
}
inline void BoingKit::BoingManager::Register(::BoingKit::BoingEffector*  effector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Register", {}, {::i2c::type_of<::BoingKit::BoingEffector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, effector);
}
inline void BoingKit::BoingManager::Unregister(::BoingKit::BoingEffector*  effector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::BoingKit::BoingEffector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, effector);
}
inline void BoingKit::BoingManager::Register(::BoingKit::BoingReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Register", {}, {::i2c::type_of<::BoingKit::BoingReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reactor);
}
inline void BoingKit::BoingManager::Unregister(::BoingKit::BoingReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::BoingKit::BoingReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reactor);
}
inline void BoingKit::BoingManager::Register(::BoingKit::BoingReactorField*  field)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Register", {}, {::i2c::type_of<::BoingKit::BoingReactorField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, field);
}
inline void BoingKit::BoingManager::Unregister(::BoingKit::BoingReactorField*  field)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::BoingKit::BoingReactorField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, field);
}
inline void BoingKit::BoingManager::Register(::BoingKit::BoingReactorFieldCPUSampler*  sampler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Register", {}, {::i2c::type_of<::BoingKit::BoingReactorFieldCPUSampler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sampler);
}
inline void BoingKit::BoingManager::Unregister(::BoingKit::BoingReactorFieldCPUSampler*  sampler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::BoingKit::BoingReactorFieldCPUSampler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sampler);
}
inline void BoingKit::BoingManager::Register(::BoingKit::BoingReactorFieldGPUSampler*  sampler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Register", {}, {::i2c::type_of<::BoingKit::BoingReactorFieldGPUSampler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sampler);
}
inline void BoingKit::BoingManager::Unregister(::BoingKit::BoingReactorFieldGPUSampler*  sampler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::BoingKit::BoingReactorFieldGPUSampler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sampler);
}
inline void BoingKit::BoingManager::Register(::BoingKit::BoingBones*  bones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Register", {}, {::i2c::type_of<::BoingKit::BoingBones*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bones);
}
inline void BoingKit::BoingManager::Unregister(::BoingKit::BoingBones*  bones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::BoingKit::BoingBones*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bones);
}
inline void BoingKit::BoingManager::PreRegisterBehavior()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PreRegisterBehavior", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void BoingKit::BoingManager::PostUnregisterBehavior()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PostUnregisterBehavior", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void BoingKit::BoingManager::PreRegisterEffectorReactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PreRegisterEffectorReactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void BoingKit::BoingManager::PostUnregisterEffectorReactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PostUnregisterEffectorReactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void BoingKit::BoingManager::PreRegisterBones()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PreRegisterBones", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void BoingKit::BoingManager::PostUnregisterBones()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PostUnregisterBones", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void BoingKit::BoingManager::Execute(::GlobalNamespace::BoingManager_UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"Execute", {}, {::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, updateMode);
}
inline void BoingKit::BoingManager::ExecuteBehaviors(::GlobalNamespace::BoingManager_UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"ExecuteBehaviors", {}, {::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, updateMode);
}
inline void BoingKit::BoingManager::PullBehaviorResults(::GlobalNamespace::BoingManager_UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PullBehaviorResults", {}, {::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, updateMode);
}
inline void BoingKit::BoingManager::RestoreBehaviors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"RestoreBehaviors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void BoingKit::BoingManager::RefreshEffectorParams()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"RefreshEffectorParams", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void BoingKit::BoingManager::ExecuteReactors(::GlobalNamespace::BoingManager_UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"ExecuteReactors", {}, {::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, updateMode);
}
inline void BoingKit::BoingManager::PullReactorResults(::GlobalNamespace::BoingManager_UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PullReactorResults", {}, {::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, updateMode);
}
inline void BoingKit::BoingManager::RestoreReactors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"RestoreReactors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void BoingKit::BoingManager::DispatchReactorFieldCompute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"DispatchReactorFieldCompute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void BoingKit::BoingManager::ExecuteBones(::GlobalNamespace::BoingManager_UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"ExecuteBones", {}, {::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, updateMode);
}
inline void BoingKit::BoingManager::PullBonesResults(::GlobalNamespace::BoingManager_UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"PullBonesResults", {}, {::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, updateMode);
}
inline void BoingKit::BoingManager::RestoreBones()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager*>(),
                        {"RestoreBones", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BoingKit::BoingManager::BoingManager()   {
}
//  Writing Method size for method: ::BoingKit::BoingManager_BonesUnregisterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_BonesUnregisterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::BoingKit::BoingManager_BonesUnregisterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e1b218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_BonesUnregisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_BonesUnregisterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_BonesUnregisterDelegate::*)(::BoingKit::BoingBones*)>(&::BoingKit::BoingManager_BonesUnregisterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e1b320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_BonesUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_BonesUnregisterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_BonesUnregisterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::BoingKit::BoingManager_BonesUnregisterDelegate::*)(::BoingKit::BoingBones*, ::System::AsyncCallback*, ::System::Object*)>(&::BoingKit::BoingManager_BonesUnregisterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e1b334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_BonesUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_BonesUnregisterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_BonesUnregisterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_BonesUnregisterDelegate::*)(::System::IAsyncResult*)>(&::BoingKit::BoingManager_BonesUnregisterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1b354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_BonesUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_BonesUnregisterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void BoingKit::BoingManager_BonesUnregisterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_BonesUnregisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void BoingKit::BoingManager_BonesUnregisterDelegate::Invoke(::BoingKit::BoingBones*  bones)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_BonesUnregisterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bones);
}
inline ::System::IAsyncResult* BoingKit::BoingManager_BonesUnregisterDelegate::BeginInvoke(::BoingKit::BoingBones*  bones, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_BonesUnregisterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, bones, callback, object);
}
inline void BoingKit::BoingManager_BonesUnregisterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_BonesUnregisterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::BoingKit::BoingManager_BonesUnregisterDelegate* BoingKit::BoingManager_BonesUnregisterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingManager_BonesUnregisterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::BoingKit::BoingManager_BonesUnregisterDelegate::BoingManager_BonesUnregisterDelegate()   {
}
//  Writing Method size for method: ::BoingKit::BoingManager_BonesRegisterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_BonesRegisterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::BoingKit::BoingManager_BonesRegisterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e1b0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_BonesRegisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_BonesRegisterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_BonesRegisterDelegate::*)(::BoingKit::BoingBones*)>(&::BoingKit::BoingManager_BonesRegisterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e1b1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_BonesRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_BonesRegisterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_BonesRegisterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::BoingKit::BoingManager_BonesRegisterDelegate::*)(::BoingKit::BoingBones*, ::System::AsyncCallback*, ::System::Object*)>(&::BoingKit::BoingManager_BonesRegisterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e1b1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_BonesRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_BonesRegisterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_BonesRegisterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_BonesRegisterDelegate::*)(::System::IAsyncResult*)>(&::BoingKit::BoingManager_BonesRegisterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1b20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_BonesRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_BonesRegisterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void BoingKit::BoingManager_BonesRegisterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_BonesRegisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void BoingKit::BoingManager_BonesRegisterDelegate::Invoke(::BoingKit::BoingBones*  bones)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_BonesRegisterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bones);
}
inline ::System::IAsyncResult* BoingKit::BoingManager_BonesRegisterDelegate::BeginInvoke(::BoingKit::BoingBones*  bones, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_BonesRegisterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, bones, callback, object);
}
inline void BoingKit::BoingManager_BonesRegisterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_BonesRegisterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::BoingKit::BoingManager_BonesRegisterDelegate* BoingKit::BoingManager_BonesRegisterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingManager_BonesRegisterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::BoingKit::BoingManager_BonesRegisterDelegate::BoingManager_BonesRegisterDelegate()   {
}
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e1af88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate::*)(::BoingKit::BoingReactorFieldGPUSampler*)>(&::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e1b090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate::*)(::BoingKit::BoingReactorFieldGPUSampler*, ::System::AsyncCallback*, ::System::Object*)>(&::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e1b0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate::*)(::System::IAsyncResult*)>(&::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1b0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate::Invoke(::BoingKit::BoingReactorFieldGPUSampler*  sampler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampler);
}
inline ::System::IAsyncResult* BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate::BeginInvoke(::BoingKit::BoingReactorFieldGPUSampler*  sampler, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sampler, callback, object);
}
inline void BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate* BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate()   {
}
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e1ae40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate::*)(::BoingKit::BoingReactorFieldGPUSampler*)>(&::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e1af48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate::*)(::BoingKit::BoingReactorFieldGPUSampler*, ::System::AsyncCallback*, ::System::Object*)>(&::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e1af5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate::*)(::System::IAsyncResult*)>(&::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1af7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate::Invoke(::BoingKit::BoingReactorFieldGPUSampler*  sampler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampler);
}
inline ::System::IAsyncResult* BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate::BeginInvoke(::BoingKit::BoingReactorFieldGPUSampler*  sampler, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sampler, callback, object);
}
inline void BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate* BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate::BoingManager_ReactorFieldGPUSamplerRegisterDelegate()   {
}
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e1acf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate::*)(::BoingKit::BoingReactorFieldCPUSampler*)>(&::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e1ae00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate::*)(::BoingKit::BoingReactorFieldCPUSampler*, ::System::AsyncCallback*, ::System::Object*)>(&::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e1ae14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate::*)(::System::IAsyncResult*)>(&::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1ae34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate::Invoke(::BoingKit::BoingReactorFieldCPUSampler*  sampler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampler);
}
inline ::System::IAsyncResult* BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate::BeginInvoke(::BoingKit::BoingReactorFieldCPUSampler*  sampler, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sampler, callback, object);
}
inline void BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate* BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate()   {
}
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e1abb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate::*)(::BoingKit::BoingReactorFieldCPUSampler*)>(&::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e1acb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate::*)(::BoingKit::BoingReactorFieldCPUSampler*, ::System::AsyncCallback*, ::System::Object*)>(&::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e1accc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate::*)(::System::IAsyncResult*)>(&::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1acec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate::Invoke(::BoingKit::BoingReactorFieldCPUSampler*  sampler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampler);
}
inline ::System::IAsyncResult* BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate::BeginInvoke(::BoingKit::BoingReactorFieldCPUSampler*  sampler, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sampler, callback, object);
}
inline void BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate* BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate::BoingManager_ReactorFieldCPUSamplerRegisterDelegate()   {
}
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldUnregisterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldUnregisterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::BoingKit::BoingManager_ReactorFieldUnregisterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e1aa68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldUnregisterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldUnregisterDelegate::*)(::BoingKit::BoingReactorField*)>(&::BoingKit::BoingManager_ReactorFieldUnregisterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e1ab70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldUnregisterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::BoingKit::BoingManager_ReactorFieldUnregisterDelegate::*)(::BoingKit::BoingReactorField*, ::System::AsyncCallback*, ::System::Object*)>(&::BoingKit::BoingManager_ReactorFieldUnregisterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e1ab84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldUnregisterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldUnregisterDelegate::*)(::System::IAsyncResult*)>(&::BoingKit::BoingManager_ReactorFieldUnregisterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1aba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void BoingKit::BoingManager_ReactorFieldUnregisterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void BoingKit::BoingManager_ReactorFieldUnregisterDelegate::Invoke(::BoingKit::BoingReactorField*  field)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field);
}
inline ::System::IAsyncResult* BoingKit::BoingManager_ReactorFieldUnregisterDelegate::BeginInvoke(::BoingKit::BoingReactorField*  field, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, field, callback, object);
}
inline void BoingKit::BoingManager_ReactorFieldUnregisterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::BoingKit::BoingManager_ReactorFieldUnregisterDelegate* BoingKit::BoingManager_ReactorFieldUnregisterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::BoingKit::BoingManager_ReactorFieldUnregisterDelegate::BoingManager_ReactorFieldUnregisterDelegate()   {
}
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldRegisterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldRegisterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::BoingKit::BoingManager_ReactorFieldRegisterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e1a920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldRegisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldRegisterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldRegisterDelegate::*)(::BoingKit::BoingReactorField*)>(&::BoingKit::BoingManager_ReactorFieldRegisterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e1aa28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldRegisterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldRegisterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::BoingKit::BoingManager_ReactorFieldRegisterDelegate::*)(::BoingKit::BoingReactorField*, ::System::AsyncCallback*, ::System::Object*)>(&::BoingKit::BoingManager_ReactorFieldRegisterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e1aa3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldRegisterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorFieldRegisterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorFieldRegisterDelegate::*)(::System::IAsyncResult*)>(&::BoingKit::BoingManager_ReactorFieldRegisterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1aa5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldRegisterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void BoingKit::BoingManager_ReactorFieldRegisterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_ReactorFieldRegisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void BoingKit::BoingManager_ReactorFieldRegisterDelegate::Invoke(::BoingKit::BoingReactorField*  field)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldRegisterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field);
}
inline ::System::IAsyncResult* BoingKit::BoingManager_ReactorFieldRegisterDelegate::BeginInvoke(::BoingKit::BoingReactorField*  field, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldRegisterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, field, callback, object);
}
inline void BoingKit::BoingManager_ReactorFieldRegisterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorFieldRegisterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::BoingKit::BoingManager_ReactorFieldRegisterDelegate* BoingKit::BoingManager_ReactorFieldRegisterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingManager_ReactorFieldRegisterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::BoingKit::BoingManager_ReactorFieldRegisterDelegate::BoingManager_ReactorFieldRegisterDelegate()   {
}
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorUnregisterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorUnregisterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::BoingKit::BoingManager_ReactorUnregisterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e1a7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_ReactorUnregisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorUnregisterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorUnregisterDelegate::*)(::BoingKit::BoingReactor*)>(&::BoingKit::BoingManager_ReactorUnregisterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e1a8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorUnregisterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorUnregisterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::BoingKit::BoingManager_ReactorUnregisterDelegate::*)(::BoingKit::BoingReactor*, ::System::AsyncCallback*, ::System::Object*)>(&::BoingKit::BoingManager_ReactorUnregisterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e1a8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorUnregisterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorUnregisterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorUnregisterDelegate::*)(::System::IAsyncResult*)>(&::BoingKit::BoingManager_ReactorUnregisterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1a914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorUnregisterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void BoingKit::BoingManager_ReactorUnregisterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_ReactorUnregisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void BoingKit::BoingManager_ReactorUnregisterDelegate::Invoke(::BoingKit::BoingReactor*  reactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorUnregisterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactor);
}
inline ::System::IAsyncResult* BoingKit::BoingManager_ReactorUnregisterDelegate::BeginInvoke(::BoingKit::BoingReactor*  reactor, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorUnregisterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, reactor, callback, object);
}
inline void BoingKit::BoingManager_ReactorUnregisterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorUnregisterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::BoingKit::BoingManager_ReactorUnregisterDelegate* BoingKit::BoingManager_ReactorUnregisterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingManager_ReactorUnregisterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::BoingKit::BoingManager_ReactorUnregisterDelegate::BoingManager_ReactorUnregisterDelegate()   {
}
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorRegisterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorRegisterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::BoingKit::BoingManager_ReactorRegisterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e1a690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_ReactorRegisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorRegisterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorRegisterDelegate::*)(::BoingKit::BoingReactor*)>(&::BoingKit::BoingManager_ReactorRegisterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e1a798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorRegisterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorRegisterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::BoingKit::BoingManager_ReactorRegisterDelegate::*)(::BoingKit::BoingReactor*, ::System::AsyncCallback*, ::System::Object*)>(&::BoingKit::BoingManager_ReactorRegisterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e1a7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorRegisterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_ReactorRegisterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_ReactorRegisterDelegate::*)(::System::IAsyncResult*)>(&::BoingKit::BoingManager_ReactorRegisterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1a7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_ReactorRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_ReactorRegisterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void BoingKit::BoingManager_ReactorRegisterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_ReactorRegisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void BoingKit::BoingManager_ReactorRegisterDelegate::Invoke(::BoingKit::BoingReactor*  reactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorRegisterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactor);
}
inline ::System::IAsyncResult* BoingKit::BoingManager_ReactorRegisterDelegate::BeginInvoke(::BoingKit::BoingReactor*  reactor, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorRegisterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, reactor, callback, object);
}
inline void BoingKit::BoingManager_ReactorRegisterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_ReactorRegisterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::BoingKit::BoingManager_ReactorRegisterDelegate* BoingKit::BoingManager_ReactorRegisterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingManager_ReactorRegisterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::BoingKit::BoingManager_ReactorRegisterDelegate::BoingManager_ReactorRegisterDelegate()   {
}
//  Writing Method size for method: ::BoingKit::BoingManager_EffectorUnregisterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_EffectorUnregisterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::BoingKit::BoingManager_EffectorUnregisterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e1a548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_EffectorUnregisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_EffectorUnregisterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_EffectorUnregisterDelegate::*)(::BoingKit::BoingEffector*)>(&::BoingKit::BoingManager_EffectorUnregisterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e1a650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_EffectorUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_EffectorUnregisterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_EffectorUnregisterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::BoingKit::BoingManager_EffectorUnregisterDelegate::*)(::BoingKit::BoingEffector*, ::System::AsyncCallback*, ::System::Object*)>(&::BoingKit::BoingManager_EffectorUnregisterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e1a664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_EffectorUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_EffectorUnregisterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_EffectorUnregisterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_EffectorUnregisterDelegate::*)(::System::IAsyncResult*)>(&::BoingKit::BoingManager_EffectorUnregisterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1a684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_EffectorUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_EffectorUnregisterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void BoingKit::BoingManager_EffectorUnregisterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_EffectorUnregisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void BoingKit::BoingManager_EffectorUnregisterDelegate::Invoke(::BoingKit::BoingEffector*  effector)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_EffectorUnregisterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effector);
}
inline ::System::IAsyncResult* BoingKit::BoingManager_EffectorUnregisterDelegate::BeginInvoke(::BoingKit::BoingEffector*  effector, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_EffectorUnregisterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, effector, callback, object);
}
inline void BoingKit::BoingManager_EffectorUnregisterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_EffectorUnregisterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::BoingKit::BoingManager_EffectorUnregisterDelegate* BoingKit::BoingManager_EffectorUnregisterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingManager_EffectorUnregisterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::BoingKit::BoingManager_EffectorUnregisterDelegate::BoingManager_EffectorUnregisterDelegate()   {
}
//  Writing Method size for method: ::BoingKit::BoingManager_EffectorRegisterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_EffectorRegisterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::BoingKit::BoingManager_EffectorRegisterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e1a400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_EffectorRegisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_EffectorRegisterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_EffectorRegisterDelegate::*)(::BoingKit::BoingEffector*)>(&::BoingKit::BoingManager_EffectorRegisterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e1a508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_EffectorRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_EffectorRegisterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_EffectorRegisterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::BoingKit::BoingManager_EffectorRegisterDelegate::*)(::BoingKit::BoingEffector*, ::System::AsyncCallback*, ::System::Object*)>(&::BoingKit::BoingManager_EffectorRegisterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e1a51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_EffectorRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_EffectorRegisterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_EffectorRegisterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_EffectorRegisterDelegate::*)(::System::IAsyncResult*)>(&::BoingKit::BoingManager_EffectorRegisterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1a53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_EffectorRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_EffectorRegisterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void BoingKit::BoingManager_EffectorRegisterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_EffectorRegisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void BoingKit::BoingManager_EffectorRegisterDelegate::Invoke(::BoingKit::BoingEffector*  effector)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_EffectorRegisterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effector);
}
inline ::System::IAsyncResult* BoingKit::BoingManager_EffectorRegisterDelegate::BeginInvoke(::BoingKit::BoingEffector*  effector, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_EffectorRegisterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, effector, callback, object);
}
inline void BoingKit::BoingManager_EffectorRegisterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_EffectorRegisterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::BoingKit::BoingManager_EffectorRegisterDelegate* BoingKit::BoingManager_EffectorRegisterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingManager_EffectorRegisterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::BoingKit::BoingManager_EffectorRegisterDelegate::BoingManager_EffectorRegisterDelegate()   {
}
//  Writing Method size for method: ::BoingKit::BoingManager_BehaviorUnregisterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_BehaviorUnregisterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::BoingKit::BoingManager_BehaviorUnregisterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e1a2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_BehaviorUnregisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_BehaviorUnregisterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_BehaviorUnregisterDelegate::*)(::BoingKit::BoingBehavior*)>(&::BoingKit::BoingManager_BehaviorUnregisterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e1a3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_BehaviorUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_BehaviorUnregisterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_BehaviorUnregisterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::BoingKit::BoingManager_BehaviorUnregisterDelegate::*)(::BoingKit::BoingBehavior*, ::System::AsyncCallback*, ::System::Object*)>(&::BoingKit::BoingManager_BehaviorUnregisterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e1a3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_BehaviorUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_BehaviorUnregisterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_BehaviorUnregisterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_BehaviorUnregisterDelegate::*)(::System::IAsyncResult*)>(&::BoingKit::BoingManager_BehaviorUnregisterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1a3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_BehaviorUnregisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_BehaviorUnregisterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void BoingKit::BoingManager_BehaviorUnregisterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_BehaviorUnregisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void BoingKit::BoingManager_BehaviorUnregisterDelegate::Invoke(::BoingKit::BoingBehavior*  behavior)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_BehaviorUnregisterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behavior);
}
inline ::System::IAsyncResult* BoingKit::BoingManager_BehaviorUnregisterDelegate::BeginInvoke(::BoingKit::BoingBehavior*  behavior, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_BehaviorUnregisterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, behavior, callback, object);
}
inline void BoingKit::BoingManager_BehaviorUnregisterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_BehaviorUnregisterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::BoingKit::BoingManager_BehaviorUnregisterDelegate* BoingKit::BoingManager_BehaviorUnregisterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingManager_BehaviorUnregisterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::BoingKit::BoingManager_BehaviorUnregisterDelegate::BoingManager_BehaviorUnregisterDelegate()   {
}
//  Writing Method size for method: ::BoingKit::BoingManager_BehaviorRegisterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_BehaviorRegisterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::BoingKit::BoingManager_BehaviorRegisterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e1a170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_BehaviorRegisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_BehaviorRegisterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_BehaviorRegisterDelegate::*)(::BoingKit::BoingBehavior*)>(&::BoingKit::BoingManager_BehaviorRegisterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e1a278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_BehaviorRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_BehaviorRegisterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_BehaviorRegisterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::BoingKit::BoingManager_BehaviorRegisterDelegate::*)(::BoingKit::BoingBehavior*, ::System::AsyncCallback*, ::System::Object*)>(&::BoingKit::BoingManager_BehaviorRegisterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e1a28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_BehaviorRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_BehaviorRegisterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManager_BehaviorRegisterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManager_BehaviorRegisterDelegate::*)(::System::IAsyncResult*)>(&::BoingKit::BoingManager_BehaviorRegisterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1a2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingManager_BehaviorRegisterDelegate*>(),
                    {::i2c::class_of<::BoingKit::BoingManager_BehaviorRegisterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void BoingKit::BoingManager_BehaviorRegisterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManager_BehaviorRegisterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void BoingKit::BoingManager_BehaviorRegisterDelegate::Invoke(::BoingKit::BoingBehavior*  behavior)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_BehaviorRegisterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behavior);
}
inline ::System::IAsyncResult* BoingKit::BoingManager_BehaviorRegisterDelegate::BeginInvoke(::BoingKit::BoingBehavior*  behavior, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_BehaviorRegisterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, behavior, callback, object);
}
inline void BoingKit::BoingManager_BehaviorRegisterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingManager_BehaviorRegisterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::BoingKit::BoingManager_BehaviorRegisterDelegate* BoingKit::BoingManager_BehaviorRegisterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingManager_BehaviorRegisterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::BoingKit::BoingManager_BehaviorRegisterDelegate::BoingManager_BehaviorRegisterDelegate()   {
}
