#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterCatcher.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterHoldable_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterCatcher_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterAction_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterSpawner_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcher.GetLinkedSpawner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::CosmeticCritterSpawner> (::GlobalNamespace::CosmeticCritterCatcher::*)()>(&::GlobalNamespace::CosmeticCritterCatcher::GetLinkedSpawner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e8074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(),
                        {"GetLinkedSpawner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcher.GetLocalCatchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CosmeticCritterAction (::GlobalNamespace::CosmeticCritterCatcher::*)(::GlobalNamespace::CosmeticCritter*)>(&::GlobalNamespace::CosmeticCritterCatcher::GetLocalCatchAction)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcher.ValidateRemoteCatchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticCritterCatcher::*)(::GlobalNamespace::CosmeticCritter*, ::GlobalNamespace::CosmeticCritterAction, double_t)>(&::GlobalNamespace::CosmeticCritterCatcher::ValidateRemoteCatchAction)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57e807c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcher.OnCatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterCatcher::*)(::GlobalNamespace::CosmeticCritter*, ::GlobalNamespace::CosmeticCritterAction, double_t)>(&::GlobalNamespace::CosmeticCritterCatcher::OnCatch)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcher.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterCatcher::*)()>(&::GlobalNamespace::CosmeticCritterCatcher::OnEnable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x57e8094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcher.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterCatcher::*)()>(&::GlobalNamespace::CosmeticCritterCatcher::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57e81a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterCatcher::*)()>(&::GlobalNamespace::CosmeticCritterCatcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e8274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CosmeticCritterSpawner>& GlobalNamespace::CosmeticCritterCatcher::__cordl_internal_get_optionalLinkedSpawner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optionalLinkedSpawner;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticCritterSpawner> const& GlobalNamespace::CosmeticCritterCatcher::__cordl_internal_get_optionalLinkedSpawner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optionalLinkedSpawner;
}
constexpr void GlobalNamespace::CosmeticCritterCatcher::__cordl_internal_set_optionalLinkedSpawner(::UnityW<::GlobalNamespace::CosmeticCritterSpawner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___optionalLinkedSpawner = value;
}
inline ::UnityW<::GlobalNamespace::CosmeticCritterSpawner> GlobalNamespace::CosmeticCritterCatcher::GetLinkedSpawner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(),
                        {"GetLinkedSpawner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::CosmeticCritterSpawner>>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCritterAction GlobalNamespace::CosmeticCritterCatcher::GetLocalCatchAction(::GlobalNamespace::CosmeticCritter*  critter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticCritterAction>(this, ___internal_method, critter);
}
inline bool GlobalNamespace::CosmeticCritterCatcher::ValidateRemoteCatchAction(::GlobalNamespace::CosmeticCritter*  critter, ::GlobalNamespace::CosmeticCritterAction  catchAction, double_t  serverTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, critter, catchAction, serverTime);
}
inline void GlobalNamespace::CosmeticCritterCatcher::OnCatch(::GlobalNamespace::CosmeticCritter*  critter, ::GlobalNamespace::CosmeticCritterAction  catchAction, double_t  serverTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter, catchAction, serverTime);
}
inline void GlobalNamespace::CosmeticCritterCatcher::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterCatcher::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterCatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCritterCatcher* GlobalNamespace::CosmeticCritterCatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticCritterCatcher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticCritterCatcher::CosmeticCritterCatcher()   {
}
