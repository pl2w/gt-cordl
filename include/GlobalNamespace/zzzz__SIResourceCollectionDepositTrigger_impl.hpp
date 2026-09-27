#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceCollectionDepositTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIResourceCollectionDepositTrigger_def.hpp"
#include "GlobalNamespace/zzzz__ISIResourceDeposit_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollectionDepositTrigger.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollectionDepositTrigger::*)()>(&::GlobalNamespace::SIResourceCollectionDepositTrigger::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5aec188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollectionDepositTrigger*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollectionDepositTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollectionDepositTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SIResourceCollectionDepositTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5aec1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollectionDepositTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceCollectionDepositTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceCollectionDepositTrigger::*)()>(&::GlobalNamespace::SIResourceCollectionDepositTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aec318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollectionDepositTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIResourceCollectionDepositTrigger::__cordl_internal_get_parentCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentCollection;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIResourceCollectionDepositTrigger::__cordl_internal_get_parentCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentCollection;
}
constexpr void GlobalNamespace::SIResourceCollectionDepositTrigger::__cordl_internal_set_parentCollection(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentCollection = value;
}
constexpr ::GlobalNamespace::ISIResourceDeposit*& GlobalNamespace::SIResourceCollectionDepositTrigger::__cordl_internal_get_resourceDeposit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceDeposit;
}
constexpr ::GlobalNamespace::ISIResourceDeposit* const& GlobalNamespace::SIResourceCollectionDepositTrigger::__cordl_internal_get_resourceDeposit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceDeposit;
}
constexpr void GlobalNamespace::SIResourceCollectionDepositTrigger::__cordl_internal_set_resourceDeposit(::GlobalNamespace::ISIResourceDeposit*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourceDeposit = value;
}
inline void GlobalNamespace::SIResourceCollectionDepositTrigger::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollectionDepositTrigger*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIResourceCollectionDepositTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollectionDepositTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SIResourceCollectionDepositTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceCollectionDepositTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIResourceCollectionDepositTrigger* GlobalNamespace::SIResourceCollectionDepositTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIResourceCollectionDepositTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIResourceCollectionDepositTrigger::SIResourceCollectionDepositTrigger()   {
}
