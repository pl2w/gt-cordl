#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaParent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaParent_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaParent.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaParent::*)()>(&::GlobalNamespace::GorillaParent::Awake)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x591ff7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaParent*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaParent.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaParent::*)()>(&::GlobalNamespace::GorillaParent::OnDestroy)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x59200b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaParent*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaParent.ReplicatedClientReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GorillaParent::ReplicatedClientReady)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5920178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaParent*>(),
                        {"ReplicatedClientReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaParent.OnReplicatedClientReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::GorillaParent::OnReplicatedClientReady)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x59201e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaParent*>(),
                        {"OnReplicatedClientReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaParent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaParent::*)()>(&::GlobalNamespace::GorillaParent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59202c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaParent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaParent::__cordl_internal_get_i()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr int32_t const& GlobalNamespace::GorillaParent::__cordl_internal_get_i() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr void GlobalNamespace::GorillaParent::__cordl_internal_set_i(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___i = value;
}
inline void GlobalNamespace::GorillaParent::setStaticF_instance(::UnityW<::GlobalNamespace::GorillaParent>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GorillaParent>, "instance", ::GlobalNamespace::GorillaParent*>(std::forward<::UnityW<::GlobalNamespace::GorillaParent>>(value));
}
inline ::UnityW<::GlobalNamespace::GorillaParent> GlobalNamespace::GorillaParent::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GorillaParent>, "instance", ::GlobalNamespace::GorillaParent*>();
}
inline void GlobalNamespace::GorillaParent::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::GorillaParent*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GorillaParent::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::GorillaParent*>();
}
inline void GlobalNamespace::GorillaParent::setStaticF_replicatedClientReady(bool  value)  {
::cordl_internals::setStaticField<bool, "replicatedClientReady", ::GlobalNamespace::GorillaParent*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GorillaParent::getStaticF_replicatedClientReady()  {
return ::cordl_internals::getStaticField<bool, "replicatedClientReady", ::GlobalNamespace::GorillaParent*>();
}
inline void GlobalNamespace::GorillaParent::setStaticF_onReplicatedClientReady(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "onReplicatedClientReady", ::GlobalNamespace::GorillaParent*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::GorillaParent::getStaticF_onReplicatedClientReady()  {
return ::cordl_internals::getStaticField<::System::Action*, "onReplicatedClientReady", ::GlobalNamespace::GorillaParent*>();
}
inline void GlobalNamespace::GorillaParent::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaParent*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaParent::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaParent*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaParent::ReplicatedClientReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaParent*>(),
                        {"ReplicatedClientReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GorillaParent::OnReplicatedClientReady(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaParent*>(),
                        {"OnReplicatedClientReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
inline void GlobalNamespace::GorillaParent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaParent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaParent* GlobalNamespace::GorillaParent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaParent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaParent::GorillaParent()   {
}
