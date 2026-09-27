#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectBaker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkObjectBaker_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__NetworkObjectBaker_Result_def.hpp"
#include "Fusion/zzzz__NetworkObjectBaker_TransformPath_def.hpp"
#include "Fusion/zzzz__NetworkObjectBaker_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__SimulationBehaviour_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectBaker.SetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectBaker::*)(::UnityEngine::MonoBehaviour*)>(&::Fusion::NetworkObjectBaker::SetDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60e3850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectBaker*>(),
                    {::i2c::class_of<::Fusion::NetworkObjectBaker*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker.TryGetExecutionOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectBaker::*)(::UnityEngine::MonoBehaviour*, ::by_ref<int32_t>)>(&::Fusion::NetworkObjectBaker::TryGetExecutionOrder)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60e3854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectBaker*>(),
                    {::i2c::class_of<::Fusion::NetworkObjectBaker*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker.GetSortKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Fusion::NetworkObjectBaker::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkObjectBaker::GetSortKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e3860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectBaker*>(),
                    {::i2c::class_of<::Fusion::NetworkObjectBaker*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker.PostprocessBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectBaker::*)(::Fusion::SimulationBehaviour*)>(&::Fusion::NetworkObjectBaker::PostprocessBehaviour)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e3868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectBaker*>(),
                    {::i2c::class_of<::Fusion::NetworkObjectBaker*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker.Trace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Fusion::NetworkObjectBaker::Trace)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x60e3870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker*>(),
                        {"Trace", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker.Warn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::Object*)>(&::Fusion::NetworkObjectBaker::Warn)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x60e38fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker.Bake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkObjectBaker_Result (::Fusion::NetworkObjectBaker::*)(::UnityEngine::GameObject*)>(&::Fusion::NetworkObjectBaker::Bake)> {
  constexpr static std::size_t size = 0x1164;
  constexpr static std::size_t addrs = 0x60e3990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker*>(),
                        {"Bake", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectBaker::*)()>(&::Fusion::NetworkObjectBaker::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x60e50c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*& Fusion::NetworkObjectBaker::__cordl_internal_get__allNetworkObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allNetworkObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>* const& Fusion::NetworkObjectBaker::__cordl_internal_get__allNetworkObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allNetworkObjects;
}
constexpr void Fusion::NetworkObjectBaker::__cordl_internal_set__allNetworkObjects(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allNetworkObjects = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*& Fusion::NetworkObjectBaker::__cordl_internal_get__networkObjectsPaths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkObjectsPaths;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>* const& Fusion::NetworkObjectBaker::__cordl_internal_get__networkObjectsPaths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkObjectsPaths;
}
constexpr void Fusion::NetworkObjectBaker::__cordl_internal_set__networkObjectsPaths(::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____networkObjectsPaths = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>*& Fusion::NetworkObjectBaker::__cordl_internal_get__allSimulationBehaviours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allSimulationBehaviours;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>* const& Fusion::NetworkObjectBaker::__cordl_internal_get__allSimulationBehaviours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allSimulationBehaviours;
}
constexpr void Fusion::NetworkObjectBaker::__cordl_internal_set__allSimulationBehaviours(::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allSimulationBehaviours = value;
}
constexpr ::Fusion::NetworkObjectBaker_TransformPathCache*& Fusion::NetworkObjectBaker::__cordl_internal_get__pathCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pathCache;
}
constexpr ::Fusion::NetworkObjectBaker_TransformPathCache* const& Fusion::NetworkObjectBaker::__cordl_internal_get__pathCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pathCache;
}
constexpr void Fusion::NetworkObjectBaker::__cordl_internal_set__pathCache(::Fusion::NetworkObjectBaker_TransformPathCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pathCache = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkBehaviour>>*& Fusion::NetworkObjectBaker::__cordl_internal_get__arrayBufferNB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arrayBufferNB;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkBehaviour>>* const& Fusion::NetworkObjectBaker::__cordl_internal_get__arrayBufferNB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arrayBufferNB;
}
constexpr void Fusion::NetworkObjectBaker::__cordl_internal_set__arrayBufferNB(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkBehaviour>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____arrayBufferNB = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*& Fusion::NetworkObjectBaker::__cordl_internal_get__arrayBufferNO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arrayBufferNO;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>* const& Fusion::NetworkObjectBaker::__cordl_internal_get__arrayBufferNO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arrayBufferNO;
}
constexpr void Fusion::NetworkObjectBaker::__cordl_internal_set__arrayBufferNO(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____arrayBufferNO = value;
}
inline void Fusion::NetworkObjectBaker::SetDirty(::UnityEngine::MonoBehaviour*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectBaker*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline bool Fusion::NetworkObjectBaker::TryGetExecutionOrder(::UnityEngine::MonoBehaviour*  obj, ::by_ref<int32_t>  order)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectBaker*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj, order);
}
inline uint32_t Fusion::NetworkObjectBaker::GetSortKey(::Fusion::NetworkObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectBaker*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, obj);
}
inline bool Fusion::NetworkObjectBaker::PostprocessBehaviour(::Fusion::SimulationBehaviour*  behaviour)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectBaker*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, behaviour);
}
inline void Fusion::NetworkObjectBaker::Trace(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker*>(),
                        {"Trace", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void Fusion::NetworkObjectBaker::Warn(::StringW  msg, ::UnityEngine::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, context);
}
inline ::GlobalNamespace::NetworkObjectBaker_Result Fusion::NetworkObjectBaker::Bake(::UnityEngine::GameObject*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker*>(),
                        {"Bake", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkObjectBaker_Result>(this, ___internal_method, root);
}
template<typename T>
inline bool Fusion::NetworkObjectBaker::Set(::UnityEngine::MonoBehaviour*  host, ::by_ref<T>  field, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectBaker*>(),
                    {"Set", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, host, field, value);
}
template<typename T>
inline bool Fusion::NetworkObjectBaker::Set(::UnityEngine::MonoBehaviour*  host, ::by_ref<::ArrayW<T>>  field, ::System::Collections::Generic::List_1<T>*  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectBaker*>(),
                    {"Set", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, host, field, value);
}
inline void Fusion::NetworkObjectBaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectBaker* Fusion::NetworkObjectBaker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectBaker*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectBaker::NetworkObjectBaker()   {
}
//  Writing Method size for method: ::Fusion::NetworkObjectBaker___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectBaker___c::*)()>(&::Fusion::NetworkObjectBaker___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e5a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker___c._Bake_b__13_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectBaker___c::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkObjectBaker___c::_Bake_b__13_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60e5a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker___c*>(),
                        {"<Bake>b__13_0", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker___c._Bake_b__13_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectBaker___c::*)(::Fusion::SimulationBehaviour*)>(&::Fusion::NetworkObjectBaker___c::_Bake_b__13_1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60e5a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker___c*>(),
                        {"<Bake>b__13_1", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkObjectBaker___c::setStaticF___9(::Fusion::NetworkObjectBaker___c*  value)  {
::cordl_internals::setStaticField<::Fusion::NetworkObjectBaker___c*, "<>9", ::Fusion::NetworkObjectBaker___c*>(std::forward<::Fusion::NetworkObjectBaker___c*>(value));
}
inline ::Fusion::NetworkObjectBaker___c* Fusion::NetworkObjectBaker___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Fusion::NetworkObjectBaker___c*, "<>9", ::Fusion::NetworkObjectBaker___c*>();
}
inline void Fusion::NetworkObjectBaker___c::setStaticF___9__13_0(::System::Predicate_1<::UnityW<::Fusion::NetworkObject>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::Fusion::NetworkObject>>*, "<>9__13_0", ::Fusion::NetworkObjectBaker___c*>(std::forward<::System::Predicate_1<::UnityW<::Fusion::NetworkObject>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::Fusion::NetworkObject>>* Fusion::NetworkObjectBaker___c::getStaticF___9__13_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::Fusion::NetworkObject>>*, "<>9__13_0", ::Fusion::NetworkObjectBaker___c*>();
}
inline void Fusion::NetworkObjectBaker___c::setStaticF___9__13_1(::System::Predicate_1<::UnityW<::Fusion::SimulationBehaviour>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::Fusion::SimulationBehaviour>>*, "<>9__13_1", ::Fusion::NetworkObjectBaker___c*>(std::forward<::System::Predicate_1<::UnityW<::Fusion::SimulationBehaviour>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::Fusion::SimulationBehaviour>>* Fusion::NetworkObjectBaker___c::getStaticF___9__13_1()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::Fusion::SimulationBehaviour>>*, "<>9__13_1", ::Fusion::NetworkObjectBaker___c*>();
}
inline void Fusion::NetworkObjectBaker___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::NetworkObjectBaker___c::_Bake_b__13_0(::Fusion::NetworkObject*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker___c*>(),
                        {"<Bake>b__13_0", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool Fusion::NetworkObjectBaker___c::_Bake_b__13_1(::Fusion::SimulationBehaviour*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker___c*>(),
                        {"<Bake>b__13_1", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Fusion::NetworkObjectBaker___c* Fusion::NetworkObjectBaker___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectBaker___c*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectBaker___c::NetworkObjectBaker___c()   {
}
//  Writing Method size for method: ::Fusion::NetworkObjectBaker_TransformPathCache.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkObjectBaker_TransformPath (::Fusion::NetworkObjectBaker_TransformPathCache::*)(::UnityEngine::Transform*)>(&::Fusion::NetworkObjectBaker_TransformPathCache::Create)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x60e4b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker_TransformPathCache.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectBaker_TransformPathCache::*)()>(&::Fusion::NetworkObjectBaker_TransformPathCache::Clear)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x60e548c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker_TransformPathCache.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectBaker_TransformPathCache::*)(::GlobalNamespace::NetworkObjectBaker_TransformPath, ::GlobalNamespace::NetworkObjectBaker_TransformPath)>(&::Fusion::NetworkObjectBaker_TransformPathCache::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60e5520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::NetworkObjectBaker_TransformPath>(), ::i2c::type_of<::GlobalNamespace::NetworkObjectBaker_TransformPath>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker_TransformPathCache.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkObjectBaker_TransformPathCache::*)(::GlobalNamespace::NetworkObjectBaker_TransformPath)>(&::Fusion::NetworkObjectBaker_TransformPathCache::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e56b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::GlobalNamespace::NetworkObjectBaker_TransformPath>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker_TransformPathCache.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkObjectBaker_TransformPathCache::*)(::GlobalNamespace::NetworkObjectBaker_TransformPath, ::GlobalNamespace::NetworkObjectBaker_TransformPath)>(&::Fusion::NetworkObjectBaker_TransformPathCache::Compare)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x60e5058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::NetworkObjectBaker_TransformPath>(), ::i2c::type_of<::GlobalNamespace::NetworkObjectBaker_TransformPath>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker_TransformPathCache.CompareToDepthUnchecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkObjectBaker_TransformPathCache::*)(::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>, ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>, int32_t)>(&::Fusion::NetworkObjectBaker_TransformPathCache::CompareToDepthUnchecked)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x60e5550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"CompareToDepthUnchecked", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker_TransformPathCache.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkObjectBaker_TransformPathCache::*)(::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>, int32_t)>(&::Fusion::NetworkObjectBaker_TransformPathCache::GetHashCode)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x60e56bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker_TransformPathCache.IsAncestorOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectBaker_TransformPathCache::*)(::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>, ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>)>(&::Fusion::NetworkObjectBaker_TransformPathCache::IsAncestorOf)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60e5098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"IsAncestorOf", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker_TransformPathCache.IsEqualOrAncestorOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectBaker_TransformPathCache::*)(::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>, ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>)>(&::Fusion::NetworkObjectBaker_TransformPathCache::IsEqualOrAncestorOf)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60e5028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"IsEqualOrAncestorOf", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker_TransformPathCache.Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkObjectBaker_TransformPathCache::*)(::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>)>(&::Fusion::NetworkObjectBaker_TransformPathCache::Dump)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60e57c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"Dump", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker_TransformPathCache.Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectBaker_TransformPathCache::*)(::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>, ::System::Text::StringBuilder*)>(&::Fusion::NetworkObjectBaker_TransformPathCache::Dump)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x60e584c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"Dump", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectBaker_TransformPathCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectBaker_TransformPathCache::*)()>(&::Fusion::NetworkObjectBaker_TransformPathCache::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x60e52a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::GlobalNamespace::NetworkObjectBaker_TransformPath>*& Fusion::NetworkObjectBaker_TransformPathCache::__cordl_internal_get__cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::GlobalNamespace::NetworkObjectBaker_TransformPath>* const& Fusion::NetworkObjectBaker_TransformPathCache::__cordl_internal_get__cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cache;
}
constexpr void Fusion::NetworkObjectBaker_TransformPathCache::__cordl_internal_set__cache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::GlobalNamespace::NetworkObjectBaker_TransformPath>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cache = value;
}
constexpr ::System::Collections::Generic::List_1<uint16_t>*& Fusion::NetworkObjectBaker_TransformPathCache::__cordl_internal_get__siblingIndexStack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____siblingIndexStack;
}
constexpr ::System::Collections::Generic::List_1<uint16_t>* const& Fusion::NetworkObjectBaker_TransformPathCache::__cordl_internal_get__siblingIndexStack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____siblingIndexStack;
}
constexpr void Fusion::NetworkObjectBaker_TransformPathCache::__cordl_internal_set__siblingIndexStack(::System::Collections::Generic::List_1<uint16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____siblingIndexStack = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*& Fusion::NetworkObjectBaker_TransformPathCache::__cordl_internal_get__nexts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nexts;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>* const& Fusion::NetworkObjectBaker_TransformPathCache::__cordl_internal_get__nexts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nexts;
}
constexpr void Fusion::NetworkObjectBaker_TransformPathCache::__cordl_internal_set__nexts(::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nexts = value;
}
inline ::GlobalNamespace::NetworkObjectBaker_TransformPath Fusion::NetworkObjectBaker_TransformPathCache::Create(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkObjectBaker_TransformPath>(this, ___internal_method, transform);
}
inline void Fusion::NetworkObjectBaker_TransformPathCache::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::NetworkObjectBaker_TransformPathCache::Equals(::GlobalNamespace::NetworkObjectBaker_TransformPath  x, ::GlobalNamespace::NetworkObjectBaker_TransformPath  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::NetworkObjectBaker_TransformPath>(), ::i2c::type_of<::GlobalNamespace::NetworkObjectBaker_TransformPath>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t Fusion::NetworkObjectBaker_TransformPathCache::GetHashCode(::GlobalNamespace::NetworkObjectBaker_TransformPath  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::GlobalNamespace::NetworkObjectBaker_TransformPath>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline int32_t Fusion::NetworkObjectBaker_TransformPathCache::Compare(::GlobalNamespace::NetworkObjectBaker_TransformPath  x, ::GlobalNamespace::NetworkObjectBaker_TransformPath  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::NetworkObjectBaker_TransformPath>(), ::i2c::type_of<::GlobalNamespace::NetworkObjectBaker_TransformPath>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline int32_t Fusion::NetworkObjectBaker_TransformPathCache::CompareToDepthUnchecked(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  x, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  y, int32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"CompareToDepthUnchecked", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y, depth);
}
inline int32_t Fusion::NetworkObjectBaker_TransformPathCache::GetHashCode(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  path, int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, path, hash);
}
inline bool Fusion::NetworkObjectBaker_TransformPathCache::IsAncestorOf(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  x, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"IsAncestorOf", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline bool Fusion::NetworkObjectBaker_TransformPathCache::IsEqualOrAncestorOf(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  x, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"IsEqualOrAncestorOf", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline ::StringW Fusion::NetworkObjectBaker_TransformPathCache::Dump(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"Dump", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline void Fusion::NetworkObjectBaker_TransformPathCache::Dump(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  x, ::System::Text::StringBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {"Dump", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, builder);
}
inline void Fusion::NetworkObjectBaker_TransformPathCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectBaker_TransformPathCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectBaker_TransformPathCache* Fusion::NetworkObjectBaker_TransformPathCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectBaker_TransformPathCache*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>"
constexpr  Fusion::NetworkObjectBaker_TransformPathCache::operator ::System::Collections::Generic::IComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>"
constexpr ::System::Collections::Generic::IComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>* Fusion::NetworkObjectBaker_TransformPathCache::i___System__Collections__Generic__IComparer_1___GlobalNamespace__NetworkObjectBaker_TransformPath_() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>"
constexpr  Fusion::NetworkObjectBaker_TransformPathCache::operator ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>* Fusion::NetworkObjectBaker_TransformPathCache::i___System__Collections__Generic__IEqualityComparer_1___GlobalNamespace__NetworkObjectBaker_TransformPath_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectBaker_TransformPathCache::NetworkObjectBaker_TransformPathCache()   {
}
