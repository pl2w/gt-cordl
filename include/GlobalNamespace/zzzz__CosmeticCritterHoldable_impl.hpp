#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterHoldable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterHoldable_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterHoldable.get_OwnerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CosmeticCritterHoldable::*)()>(&::GlobalNamespace::CosmeticCritterHoldable::get_OwnerID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e8284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                        {"get_OwnerID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterHoldable.set_OwnerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterHoldable::*)(int32_t)>(&::GlobalNamespace::CosmeticCritterHoldable::set_OwnerID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e828c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                        {"set_OwnerID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterHoldable.get_IsLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticCritterHoldable::*)()>(&::GlobalNamespace::CosmeticCritterHoldable::get_IsLocal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57e8294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                        {"get_IsLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterHoldable.OwningPlayerMatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticCritterHoldable::*)(::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::CosmeticCritterHoldable::OwningPlayerMatches)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x57e82ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                        {"OwningPlayerMatches", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterHoldable.CreateCallLimiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CallLimiter* (::GlobalNamespace::CosmeticCritterHoldable::*)()>(&::GlobalNamespace::CosmeticCritterHoldable::CreateCallLimiter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x57e82dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterHoldable.ResetCallLimiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterHoldable::*)()>(&::GlobalNamespace::CosmeticCritterHoldable::ResetCallLimiter)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57e833c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                        {"ResetCallLimiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterHoldable.TrySetID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterHoldable::*)()>(&::GlobalNamespace::CosmeticCritterHoldable::TrySetID)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x57e8358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                        {"TrySetID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterHoldable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterHoldable::*)()>(&::GlobalNamespace::CosmeticCritterHoldable::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x57e84a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterHoldable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterHoldable::*)()>(&::GlobalNamespace::CosmeticCritterHoldable::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e80f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterHoldable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterHoldable::*)()>(&::GlobalNamespace::CosmeticCritterHoldable::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e81f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterHoldable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterHoldable::*)()>(&::GlobalNamespace::CosmeticCritterHoldable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e827c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GlobalNamespace::CosmeticCritterHoldable::__cordl_internal_get_transferrableObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GlobalNamespace::CosmeticCritterHoldable::__cordl_internal_get_transferrableObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr void GlobalNamespace::CosmeticCritterHoldable::__cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrableObject = value;
}
constexpr int32_t& GlobalNamespace::CosmeticCritterHoldable::__cordl_internal_get__OwnerID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OwnerID_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::CosmeticCritterHoldable::__cordl_internal_get__OwnerID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OwnerID_k__BackingField;
}
constexpr void GlobalNamespace::CosmeticCritterHoldable::__cordl_internal_set__OwnerID_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OwnerID_k__BackingField = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::CosmeticCritterHoldable::__cordl_internal_get_callLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::CosmeticCritterHoldable::__cordl_internal_get_callLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr void GlobalNamespace::CosmeticCritterHoldable::__cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callLimiter = value;
}
inline int32_t GlobalNamespace::CosmeticCritterHoldable::get_OwnerID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                        {"get_OwnerID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterHoldable::set_OwnerID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                        {"set_OwnerID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::CosmeticCritterHoldable::get_IsLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                        {"get_IsLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CosmeticCritterHoldable::OwningPlayerMatches(::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                        {"OwningPlayerMatches", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, info);
}
inline ::GlobalNamespace::CallLimiter* GlobalNamespace::CosmeticCritterHoldable::CreateCallLimiter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CallLimiter*>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterHoldable::ResetCallLimiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                        {"ResetCallLimiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterHoldable::TrySetID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                        {"TrySetID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterHoldable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterHoldable::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterHoldable::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterHoldable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterHoldable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCritterHoldable* GlobalNamespace::CosmeticCritterHoldable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticCritterHoldable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticCritterHoldable::CosmeticCritterHoldable()   {
}
