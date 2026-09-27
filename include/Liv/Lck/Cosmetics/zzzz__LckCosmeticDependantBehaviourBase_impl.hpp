#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckCosmeticDependantBehaviourBase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticDependantBehaviourBase_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__ILckCosmeticDependantPlayerIdSupplier_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__ILckCosmeticDependant_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__ILckCosmeticsManager_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase.get_PlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::*)()>(&::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::get_PlayerId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase.set_PlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::*)(::StringW)>(&::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::set_PlayerId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase.GetCosmeticType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::*)()>(&::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::GetCosmeticType)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9d64f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(),
                        {"GetCosmeticType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase.OnCosmeticLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::OnCosmeticLoaded)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::*)()>(&::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::Awake)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9d65048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase.OnCosmeticReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::*)()>(&::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::OnCosmeticReset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::*)()>(&::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::OnDestroy)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9d6521c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::*)()>(&::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d652cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase._Awake_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::*)()>(&::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::_Awake_b__9_0)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9d652d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(),
                        {"<Awake>b__9_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Cosmetics::ILckCosmeticsManager*& Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::__cordl_internal_get__cosmeticsManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmeticsManager;
}
constexpr ::Liv::Lck::Cosmetics::ILckCosmeticsManager* const& Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::__cordl_internal_get__cosmeticsManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmeticsManager;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::__cordl_internal_set__cosmeticsManager(::Liv::Lck::Cosmetics::ILckCosmeticsManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cosmeticsManager = value;
}
constexpr ::UnityW<::Liv::Lck::Cosmetics::LckCosmeticType>& Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::__cordl_internal_get__cosmeticType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmeticType;
}
constexpr ::UnityW<::Liv::Lck::Cosmetics::LckCosmeticType> const& Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::__cordl_internal_get__cosmeticType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmeticType;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::__cordl_internal_set__cosmeticType(::UnityW<::Liv::Lck::Cosmetics::LckCosmeticType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cosmeticType = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::__cordl_internal_get__playerIdSupplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerIdSupplier;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::__cordl_internal_get__playerIdSupplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerIdSupplier;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::__cordl_internal_set__playerIdSupplier(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerIdSupplier = value;
}
constexpr ::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*& Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::__cordl_internal_get__lckCosmeticDependantPlayerIdSupplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckCosmeticDependantPlayerIdSupplier;
}
constexpr ::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier* const& Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::__cordl_internal_get__lckCosmeticDependantPlayerIdSupplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckCosmeticDependantPlayerIdSupplier;
}
constexpr void Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::__cordl_internal_set__lckCosmeticDependantPlayerIdSupplier(::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckCosmeticDependantPlayerIdSupplier = value;
}
inline ::StringW Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::get_PlayerId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::set_PlayerId(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::GetCosmeticType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(),
                        {"GetCosmeticType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::OnCosmeticLoaded(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  assets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assets);
}
inline void Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::OnCosmeticReset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::_Awake_b__9_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>(),
                        {"<Awake>b__9_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase* Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*>());
}
/// @brief Convert operator to "::Liv::Lck::Cosmetics::ILckCosmeticDependant"
constexpr  Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::operator ::Liv::Lck::Cosmetics::ILckCosmeticDependant*() noexcept {
return static_cast<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Cosmetics::ILckCosmeticDependant"
constexpr ::Liv::Lck::Cosmetics::ILckCosmeticDependant* Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::i___Liv__Lck__Cosmetics__ILckCosmeticDependant() noexcept {
return static_cast<::Liv::Lck::Cosmetics::ILckCosmeticDependant*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase::LckCosmeticDependantBehaviourBase()   {
}
