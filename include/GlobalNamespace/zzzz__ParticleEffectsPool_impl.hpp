#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleEffectsPool.hpp"
#include "GlobalNamespace/zzzz__ParticleEffect_impl.hpp"
#include "GlobalNamespace/zzzz__RingBuffer_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleEffectsPool_def.hpp"
#include "GlobalNamespace/zzzz__ParticleEffect_def.hpp"
#include "GlobalNamespace/zzzz__ParticleEffectsPool_def.hpp"
#include "GlobalNamespace/zzzz__RingBuffer_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffectsPool::*)()>(&::GlobalNamespace::ParticleEffectsPool::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x565789c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool.OnPoolAwake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffectsPool::*)()>(&::GlobalNamespace::ParticleEffectsPool::OnPoolAwake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5657a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                    {::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffectsPool::*)()>(&::GlobalNamespace::ParticleEffectsPool::Setup)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x56578bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool.MoveToSceneWorldRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffectsPool::*)()>(&::GlobalNamespace::ParticleEffectsPool::MoveToSceneWorldRoot)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5657a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"MoveToSceneWorldRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool.InitPoolForPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RingBuffer_1<::UnityW<::GlobalNamespace::ParticleEffect>>* (::GlobalNamespace::ParticleEffectsPool::*)(int32_t, ::GlobalNamespace::ParticleEffect*)>(&::GlobalNamespace::ParticleEffectsPool::InitPoolForPrefab)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5657b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"InitPoolForPrefab", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ParticleEffect*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool.PlayEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffectsPool::*)(::GlobalNamespace::ParticleEffect*, ::UnityEngine::Vector3)>(&::GlobalNamespace::ParticleEffectsPool::PlayEffect)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5657d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"PlayEffect", {}, {::i2c::type_of<::GlobalNamespace::ParticleEffect*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool.PlayEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffectsPool::*)(::GlobalNamespace::ParticleEffect*, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::ParticleEffectsPool::PlayEffect)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5657e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"PlayEffect", {}, {::i2c::type_of<::GlobalNamespace::ParticleEffect*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool.PlayEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffectsPool::*)(int64_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::ParticleEffectsPool::PlayEffect)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5657dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"PlayEffect", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool.PlayEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffectsPool::*)(int64_t, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::ParticleEffectsPool::PlayEffect)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5657e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"PlayEffect", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool.PlayEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffectsPool::*)(int32_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::ParticleEffectsPool::PlayEffect)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5657f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"PlayEffect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool.PlayEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffectsPool::*)(int32_t, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::ParticleEffectsPool::PlayEffect)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5658000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"PlayEffect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool.PlayDelayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ParticleEffectsPool::*)(int32_t, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::ParticleEffectsPool::PlayDelayed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x56580d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"PlayDelayed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool.Return
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffectsPool::*)(::GlobalNamespace::ParticleEffect*)>(&::GlobalNamespace::ParticleEffectsPool::Return)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5657810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"Return", {}, {::i2c::type_of<::GlobalNamespace::ParticleEffect*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool.GetPoolIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ParticleEffectsPool::*)(int64_t)>(&::GlobalNamespace::ParticleEffectsPool::GetPoolIndex)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5657ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"GetPoolIndex", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffectsPool::*)()>(&::GlobalNamespace::ParticleEffectsPool::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x56581a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ParticleEffect>>& GlobalNamespace::ParticleEffectsPool::__cordl_internal_get_effects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effects;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ParticleEffect>> const& GlobalNamespace::ParticleEffectsPool::__cordl_internal_get_effects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effects;
}
constexpr void GlobalNamespace::ParticleEffectsPool::__cordl_internal_set_effects(::ArrayW<::UnityW<::GlobalNamespace::ParticleEffect>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effects = value;
}
constexpr int32_t& GlobalNamespace::ParticleEffectsPool::__cordl_internal_get_poolSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolSize;
}
constexpr int32_t const& GlobalNamespace::ParticleEffectsPool::__cordl_internal_get_poolSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolSize;
}
constexpr void GlobalNamespace::ParticleEffectsPool::__cordl_internal_set_poolSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poolSize = value;
}
constexpr ::ArrayW<::GlobalNamespace::RingBuffer_1<::UnityW<::GlobalNamespace::ParticleEffect>>*>& GlobalNamespace::ParticleEffectsPool::__cordl_internal_get__pools()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pools;
}
constexpr ::ArrayW<::GlobalNamespace::RingBuffer_1<::UnityW<::GlobalNamespace::ParticleEffect>>*> const& GlobalNamespace::ParticleEffectsPool::__cordl_internal_get__pools() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pools;
}
constexpr void GlobalNamespace::ParticleEffectsPool::__cordl_internal_set__pools(::ArrayW<::GlobalNamespace::RingBuffer_1<::UnityW<::GlobalNamespace::ParticleEffect>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pools = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*& GlobalNamespace::ParticleEffectsPool::__cordl_internal_get__effectToPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectToPool;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,int32_t>* const& GlobalNamespace::ParticleEffectsPool::__cordl_internal_get__effectToPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectToPool;
}
constexpr void GlobalNamespace::ParticleEffectsPool::__cordl_internal_set__effectToPool(::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____effectToPool = value;
}
inline void GlobalNamespace::ParticleEffectsPool::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleEffectsPool::OnPoolAwake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleEffectsPool::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleEffectsPool::MoveToSceneWorldRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"MoveToSceneWorldRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RingBuffer_1<::UnityW<::GlobalNamespace::ParticleEffect>>* GlobalNamespace::ParticleEffectsPool::InitPoolForPrefab(int32_t  index, ::GlobalNamespace::ParticleEffect*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"InitPoolForPrefab", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ParticleEffect*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RingBuffer_1<::UnityW<::GlobalNamespace::ParticleEffect>>*>(this, ___internal_method, index, prefab);
}
inline void GlobalNamespace::ParticleEffectsPool::PlayEffect(::GlobalNamespace::ParticleEffect*  effect, ::UnityEngine::Vector3  worldPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"PlayEffect", {}, {::i2c::type_of<::GlobalNamespace::ParticleEffect*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effect, worldPos);
}
inline void GlobalNamespace::ParticleEffectsPool::PlayEffect(::GlobalNamespace::ParticleEffect*  effect, ::UnityEngine::Vector3  worldPos, float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"PlayEffect", {}, {::i2c::type_of<::GlobalNamespace::ParticleEffect*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effect, worldPos, delay);
}
inline void GlobalNamespace::ParticleEffectsPool::PlayEffect(int64_t  effectID, ::UnityEngine::Vector3  worldPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"PlayEffect", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effectID, worldPos);
}
inline void GlobalNamespace::ParticleEffectsPool::PlayEffect(int64_t  effectID, ::UnityEngine::Vector3  worldPos, float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"PlayEffect", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effectID, worldPos, delay);
}
inline void GlobalNamespace::ParticleEffectsPool::PlayEffect(int32_t  index, ::UnityEngine::Vector3  worldPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"PlayEffect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, worldPos);
}
inline void GlobalNamespace::ParticleEffectsPool::PlayEffect(int32_t  index, ::UnityEngine::Vector3  worldPos, float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"PlayEffect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, worldPos, delay);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ParticleEffectsPool::PlayDelayed(int32_t  index, ::UnityEngine::Vector3  worldPos, float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"PlayDelayed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, index, worldPos, delay);
}
inline void GlobalNamespace::ParticleEffectsPool::Return(::GlobalNamespace::ParticleEffect*  effect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"Return", {}, {::i2c::type_of<::GlobalNamespace::ParticleEffect*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effect);
}
inline int32_t GlobalNamespace::ParticleEffectsPool::GetPoolIndex(int64_t  effectID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {"GetPoolIndex", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, effectID);
}
inline void GlobalNamespace::ParticleEffectsPool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleEffectsPool* GlobalNamespace::ParticleEffectsPool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParticleEffectsPool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleEffectsPool::ParticleEffectsPool()   {
}
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::*)(int32_t)>(&::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5658180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::*)()>(&::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56582a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::*)()>(&::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::MoveNext)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x56582a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::*)()>(&::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5658368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::*)()>(&::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5658370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::*)()>(&::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56583a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr float_t& GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_get_delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr float_t const& GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_get_delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr void GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_set_delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay = value;
}
constexpr ::UnityW<::GlobalNamespace::ParticleEffectsPool>& GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ParticleEffectsPool> const& GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ParticleEffectsPool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_get_worldPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_get_worldPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldPos;
}
constexpr void GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::__cordl_internal_set_worldPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldPos = value;
}
inline void GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15* GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15::ParticleEffectsPool__PlayDelayed_d__15()   {
}
