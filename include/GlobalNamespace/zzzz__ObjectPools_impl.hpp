#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectPools.hpp"
#include "GlobalNamespace/zzzz__ObjectPools_DelayedSpawnData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ObjectPools_def.hpp"
#include "GlobalNamespace/zzzz__DelayedDestroyPooledObj_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GlobalNamespace/zzzz__IDelayedExecListener_def.hpp"
#include "GlobalNamespace/zzzz__ObjectPools_DelayedSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__ObjectPools_def.hpp"
#include "GlobalNamespace/zzzz__SinglePool_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.get_initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ObjectPools::*)()>(&::GlobalNamespace::ObjectPools::get_initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0bad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"get_initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.set_initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectPools::*)(bool)>(&::GlobalNamespace::ObjectPools::set_initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0bae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"set_initialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectPools::*)()>(&::GlobalNamespace::ObjectPools::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b0bae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectPools::*)()>(&::GlobalNamespace::ObjectPools::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b0bb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.InitializePools
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectPools::*)()>(&::GlobalNamespace::ObjectPools::InitializePools)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x5b0bb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"InitializePools", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.DoesPoolExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ObjectPools::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::ObjectPools::DoesPoolExist)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b0bfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"DoesPoolExist", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.DoesPoolExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ObjectPools::*)(int32_t)>(&::GlobalNamespace::ObjectPools::DoesPoolExist)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b0bfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"DoesPoolExist", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.GetPoolByHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SinglePool* (::GlobalNamespace::ObjectPools::*)(int32_t)>(&::GlobalNamespace::ObjectPools::GetPoolByHash)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b0c028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"GetPoolByHash", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.GetPoolByObjectType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SinglePool* (::GlobalNamespace::ObjectPools::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::ObjectPools::GetPoolByObjectType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b0c080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"GetPoolByObjectType", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::ObjectPools::*)(::UnityEngine::GameObject*, bool)>(&::GlobalNamespace::ObjectPools::Instantiate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b0c0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::ObjectPools::*)(int32_t, bool)>(&::GlobalNamespace::ObjectPools::Instantiate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b0c0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Instantiate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::ObjectPools::*)(int32_t, ::UnityEngine::Vector3, bool)>(&::GlobalNamespace::ObjectPools::Instantiate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b0c0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Instantiate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::ObjectPools::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool)>(&::GlobalNamespace::ObjectPools::Instantiate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b0c158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Instantiate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::ObjectPools::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, bool)>(&::GlobalNamespace::ObjectPools::Instantiate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b0c1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::ObjectPools::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool)>(&::GlobalNamespace::ObjectPools::Instantiate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b0c240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::ObjectPools::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, bool)>(&::GlobalNamespace::ObjectPools::Instantiate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b0c2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectPools::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::ObjectPools::Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b07af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ObjectPools::*)()>(&::GlobalNamespace::ObjectPools::BuildValidationCheck)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x5b0c3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.InstantiateDelayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::ObjectPools::InstantiateDelayed)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b0c800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"InstantiateDelayed", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.InstantiateDelayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::ObjectPools::InstantiateDelayed)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5b0c888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"InstantiateDelayed", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.UpdateDelayedInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Transform*)>(&::GlobalNamespace::ObjectPools::UpdateDelayedInstantiate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b0cb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"UpdateDelayedInstantiate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.UpdateDelayedInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::ObjectPools::UpdateDelayedInstantiate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b0cbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"UpdateDelayedInstantiate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.CancelDelayedInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::ObjectPools::CancelDelayedInstantiate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b0cca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"CancelDelayedInstantiate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools.UpdateDelayedInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::GlobalNamespace::ObjectPools::UpdateDelayedInstantiate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b0cd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"UpdateDelayedInstantiate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectPools::*)()>(&::GlobalNamespace::ObjectPools::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0ce20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ObjectPools::__cordl_internal_get__initialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized_k__BackingField;
}
constexpr bool const& GlobalNamespace::ObjectPools::__cordl_internal_get__initialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized_k__BackingField;
}
constexpr void GlobalNamespace::ObjectPools::__cordl_internal_set__initialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SinglePool*>*& GlobalNamespace::ObjectPools::__cordl_internal_get_pools()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pools;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SinglePool*>* const& GlobalNamespace::ObjectPools::__cordl_internal_get_pools() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pools;
}
constexpr void GlobalNamespace::ObjectPools::__cordl_internal_set_pools(::System::Collections::Generic::List_1<::GlobalNamespace::SinglePool*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pools = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::SinglePool*>*& GlobalNamespace::ObjectPools::__cordl_internal_get_lookUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookUp;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::SinglePool*>* const& GlobalNamespace::ObjectPools::__cordl_internal_get_lookUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookUp;
}
constexpr void GlobalNamespace::ObjectPools::__cordl_internal_set_lookUp(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::SinglePool*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookUp = value;
}
inline void GlobalNamespace::ObjectPools::setStaticF_instance(::UnityW<::GlobalNamespace::ObjectPools>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::ObjectPools>, "instance", ::GlobalNamespace::ObjectPools*>(std::forward<::UnityW<::GlobalNamespace::ObjectPools>>(value));
}
inline ::UnityW<::GlobalNamespace::ObjectPools> GlobalNamespace::ObjectPools::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::ObjectPools>, "instance", ::GlobalNamespace::ObjectPools*>();
}
inline void GlobalNamespace::ObjectPools::setStaticF__delayedHighWater(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_delayedHighWater", ::GlobalNamespace::ObjectPools*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ObjectPools::getStaticF__delayedHighWater()  {
return ::cordl_internals::getStaticField<int32_t, "_delayedHighWater", ::GlobalNamespace::ObjectPools*>();
}
inline void GlobalNamespace::ObjectPools::setStaticF__delayedFreeHead(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_delayedFreeHead", ::GlobalNamespace::ObjectPools*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ObjectPools::getStaticF__delayedFreeHead()  {
return ::cordl_internals::getStaticField<int32_t, "_delayedFreeHead", ::GlobalNamespace::ObjectPools*>();
}
inline void GlobalNamespace::ObjectPools::setStaticF__delayedData(::ArrayW<::GlobalNamespace::ObjectPools_DelayedSpawnData>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::ObjectPools_DelayedSpawnData>, "_delayedData", ::GlobalNamespace::ObjectPools*>(std::forward<::ArrayW<::GlobalNamespace::ObjectPools_DelayedSpawnData>>(value));
}
inline ::ArrayW<::GlobalNamespace::ObjectPools_DelayedSpawnData> GlobalNamespace::ObjectPools::getStaticF__delayedData()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::ObjectPools_DelayedSpawnData>, "_delayedData", ::GlobalNamespace::ObjectPools*>();
}
inline void GlobalNamespace::ObjectPools::setStaticF__delayedFreeNext(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "_delayedFreeNext", ::GlobalNamespace::ObjectPools*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> GlobalNamespace::ObjectPools::getStaticF__delayedFreeNext()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "_delayedFreeNext", ::GlobalNamespace::ObjectPools*>();
}
inline void GlobalNamespace::ObjectPools::setStaticF__delayedListener(::GlobalNamespace::ObjectPools_DelayedSpawnListener*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ObjectPools_DelayedSpawnListener*, "_delayedListener", ::GlobalNamespace::ObjectPools*>(std::forward<::GlobalNamespace::ObjectPools_DelayedSpawnListener*>(value));
}
inline ::GlobalNamespace::ObjectPools_DelayedSpawnListener* GlobalNamespace::ObjectPools::getStaticF__delayedListener()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ObjectPools_DelayedSpawnListener*, "_delayedListener", ::GlobalNamespace::ObjectPools*>();
}
inline bool GlobalNamespace::ObjectPools::get_initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"get_initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ObjectPools::set_initialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"set_initialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ObjectPools::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ObjectPools::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ObjectPools::InitializePools()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"InitializePools", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ObjectPools::DoesPoolExist(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"DoesPoolExist", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::ObjectPools::DoesPoolExist(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"DoesPoolExist", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hash);
}
inline ::GlobalNamespace::SinglePool* GlobalNamespace::ObjectPools::GetPoolByHash(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"GetPoolByHash", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SinglePool*>(this, ___internal_method, hash);
}
inline ::GlobalNamespace::SinglePool* GlobalNamespace::ObjectPools::GetPoolByObjectType(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"GetPoolByObjectType", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SinglePool*>(this, ___internal_method, obj);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::ObjectPools::Instantiate(::UnityEngine::GameObject*  obj, bool  setActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, obj, setActive);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::ObjectPools::Instantiate(int32_t  hash, bool  setActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Instantiate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, hash, setActive);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::ObjectPools::Instantiate(int32_t  hash, ::UnityEngine::Vector3  position, bool  setActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Instantiate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, hash, position, setActive);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::ObjectPools::Instantiate(int32_t  hash, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  setActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Instantiate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, hash, position, rotation, setActive);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::ObjectPools::Instantiate(::UnityEngine::GameObject*  obj, ::UnityEngine::Vector3  position, bool  setActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, obj, position, setActive);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::ObjectPools::Instantiate(::UnityEngine::GameObject*  obj, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  setActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, obj, position, rotation, setActive);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::ObjectPools::Instantiate(::UnityEngine::GameObject*  obj, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  scale, bool  setActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, obj, position, rotation, scale, setActive);
}
inline void GlobalNamespace::ObjectPools::Destroy(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::ObjectPools::BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ObjectPools::InstantiateDelayed(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  pos, float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"InstantiateDelayed", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, prefab, pos, delay);
}
inline int32_t GlobalNamespace::ObjectPools::InstantiateDelayed(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  xform, ::UnityEngine::Vector3  localPos, float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"InstantiateDelayed", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, prefab, xform, localPos, delay);
}
inline void GlobalNamespace::ObjectPools::UpdateDelayedInstantiate(int32_t  idx, ::UnityEngine::Transform*  xform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"UpdateDelayedInstantiate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, idx, xform);
}
inline void GlobalNamespace::ObjectPools::UpdateDelayedInstantiate(int32_t  idx, ::UnityEngine::Vector3  localPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"UpdateDelayedInstantiate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, idx, localPos);
}
inline void GlobalNamespace::ObjectPools::CancelDelayedInstantiate(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"CancelDelayedInstantiate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, idx);
}
inline void GlobalNamespace::ObjectPools::UpdateDelayedInstantiate(int32_t  idx, ::UnityEngine::Transform*  xform, ::UnityEngine::Vector3  localPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {"UpdateDelayedInstantiate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, idx, xform, localPos);
}
inline void GlobalNamespace::ObjectPools::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ObjectPools* GlobalNamespace::ObjectPools::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObjectPools*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::ObjectPools::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::ObjectPools::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectPools::ObjectPools()   {
}
//  Writing Method size for method: ::GlobalNamespace::ObjectPools___c__DisplayClass22_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectPools___c__DisplayClass22_0::*)()>(&::GlobalNamespace::ObjectPools___c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0c7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools___c__DisplayClass22_0._BuildValidationCheck_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ObjectPools___c__DisplayClass22_0::*)(::GlobalNamespace::DelayedDestroyPooledObj*)>(&::GlobalNamespace::ObjectPools___c__DisplayClass22_0::_BuildValidationCheck_b__0)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5b0d138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools___c__DisplayClass22_0*>(),
                        {"<BuildValidationCheck>b__0", {}, {::i2c::type_of<::GlobalNamespace::DelayedDestroyPooledObj*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SinglePool*& GlobalNamespace::ObjectPools___c__DisplayClass22_0::__cordl_internal_get_pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
constexpr ::GlobalNamespace::SinglePool* const& GlobalNamespace::ObjectPools___c__DisplayClass22_0::__cordl_internal_get_pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
constexpr void GlobalNamespace::ObjectPools___c__DisplayClass22_0::__cordl_internal_set_pool(::GlobalNamespace::SinglePool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pool = value;
}
inline void GlobalNamespace::ObjectPools___c__DisplayClass22_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ObjectPools___c__DisplayClass22_0::_BuildValidationCheck_b__0(::GlobalNamespace::DelayedDestroyPooledObj*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools___c__DisplayClass22_0*>(),
                        {"<BuildValidationCheck>b__0", {}, {::i2c::type_of<::GlobalNamespace::DelayedDestroyPooledObj*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, c);
}
inline ::GlobalNamespace::ObjectPools___c__DisplayClass22_0* GlobalNamespace::ObjectPools___c__DisplayClass22_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObjectPools___c__DisplayClass22_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectPools___c__DisplayClass22_0::ObjectPools___c__DisplayClass22_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ObjectPools_DelayedSpawnListener.OnDelayedAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectPools_DelayedSpawnListener::*)(int32_t)>(&::GlobalNamespace::ObjectPools_DelayedSpawnListener::OnDelayedAction)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5b0cf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools_DelayedSpawnListener*>(),
                        {"OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectPools_DelayedSpawnListener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectPools_DelayedSpawnListener::*)()>(&::GlobalNamespace::ObjectPools_DelayedSpawnListener::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0cf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools_DelayedSpawnListener*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ObjectPools_DelayedSpawnListener::OnDelayedAction(int32_t  contextId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools_DelayedSpawnListener*>(),
                        {"OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contextId);
}
inline void GlobalNamespace::ObjectPools_DelayedSpawnListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPools_DelayedSpawnListener*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ObjectPools_DelayedSpawnListener* GlobalNamespace::ObjectPools_DelayedSpawnListener::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObjectPools_DelayedSpawnListener*>());
}
/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr  GlobalNamespace::ObjectPools_DelayedSpawnListener::operator ::GlobalNamespace::IDelayedExecListener*() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* GlobalNamespace::ObjectPools_DelayedSpawnListener::i___GlobalNamespace__IDelayedExecListener() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectPools_DelayedSpawnListener::ObjectPools_DelayedSpawnListener()   {
}
