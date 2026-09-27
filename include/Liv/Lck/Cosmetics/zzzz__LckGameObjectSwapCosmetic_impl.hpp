#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckGameObjectSwapCosmetic.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticDependantBehaviourBase_impl.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckGameObjectSwapCosmetic_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic.get_PlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::*)()>(&::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::get_PlayerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d6a408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic.set_PlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::*)(::StringW)>(&::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::set_PlayerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d6a410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::*)()>(&::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d6a418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic.OnCosmeticReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::*)()>(&::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::OnCosmeticReset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d6a41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic.OnCosmeticLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::OnCosmeticLoaded)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x9d6a4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic.SetLayerRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::*)(::UnityEngine::GameObject*, int32_t)>(&::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::SetLayerRecursively)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9d6a9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(),
                        {"SetLayerRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::*)()>(&::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9d6aa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::*)()>(&::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d6ab08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::__cordl_internal_get__targetGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::__cordl_internal_get__targetGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetGameObject;
}
constexpr void Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::__cordl_internal_set__targetGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetGameObject = value;
}
constexpr ::StringW& Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::__cordl_internal_get__playerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerId;
}
constexpr ::StringW const& Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::__cordl_internal_get__playerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerId;
}
constexpr void Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::__cordl_internal_set__playerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerId = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::__cordl_internal_get__instantiatedCosmetic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instantiatedCosmetic;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::__cordl_internal_get__instantiatedCosmetic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instantiatedCosmetic;
}
constexpr void Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::__cordl_internal_set__instantiatedCosmetic(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instantiatedCosmetic = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*& Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::__cordl_internal_get_OnCosmeticSpawned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCosmeticSpawned;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::GameObject>>* const& Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::__cordl_internal_get_OnCosmeticSpawned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCosmeticSpawned;
}
constexpr void Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::__cordl_internal_set_OnCosmeticSpawned(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCosmeticSpawned = value;
}
inline ::StringW Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::get_PlayerId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::set_PlayerId(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::OnCosmeticReset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::OnCosmeticLoaded(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  assets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assets);
}
inline void Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::SetLayerRecursively(::UnityEngine::GameObject*  obj, int32_t  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(),
                        {"SetLayerRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, layer);
}
inline void Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic* Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic::LckGameObjectSwapCosmetic()   {
}
