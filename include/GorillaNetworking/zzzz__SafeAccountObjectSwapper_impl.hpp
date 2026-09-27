#pragma once
// IWYU pragma private; include "GorillaNetworking/SafeAccountObjectSwapper.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/zzzz__SafeAccountObjectSwapper_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::SafeAccountObjectSwapper.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SafeAccountObjectSwapper::*)()>(&::GorillaNetworking::SafeAccountObjectSwapper::Start)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5c7036c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SafeAccountObjectSwapper*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SafeAccountObjectSwapper.SafeAccountUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SafeAccountObjectSwapper::*)(bool)>(&::GorillaNetworking::SafeAccountObjectSwapper::SafeAccountUpdated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c706bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SafeAccountObjectSwapper*>(),
                        {"SafeAccountUpdated", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SafeAccountObjectSwapper.SwitchToSafeMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SafeAccountObjectSwapper::*)()>(&::GorillaNetworking::SafeAccountObjectSwapper::SwitchToSafeMode)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5c70494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SafeAccountObjectSwapper*>(),
                        {"SwitchToSafeMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::SafeAccountObjectSwapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SafeAccountObjectSwapper::*)()>(&::GorillaNetworking::SafeAccountObjectSwapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c706c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SafeAccountObjectSwapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GorillaNetworking::SafeAccountObjectSwapper::__cordl_internal_get_UnSafeGameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnSafeGameObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GorillaNetworking::SafeAccountObjectSwapper::__cordl_internal_get_UnSafeGameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnSafeGameObjects;
}
constexpr void GorillaNetworking::SafeAccountObjectSwapper::__cordl_internal_set_UnSafeGameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnSafeGameObjects = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GorillaNetworking::SafeAccountObjectSwapper::__cordl_internal_get_UnSafeTexts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnSafeTexts;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GorillaNetworking::SafeAccountObjectSwapper::__cordl_internal_get_UnSafeTexts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnSafeTexts;
}
constexpr void GorillaNetworking::SafeAccountObjectSwapper::__cordl_internal_set_UnSafeTexts(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnSafeTexts = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GorillaNetworking::SafeAccountObjectSwapper::__cordl_internal_get_SafeTexts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SafeTexts;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GorillaNetworking::SafeAccountObjectSwapper::__cordl_internal_get_SafeTexts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SafeTexts;
}
constexpr void GorillaNetworking::SafeAccountObjectSwapper::__cordl_internal_set_SafeTexts(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SafeTexts = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GorillaNetworking::SafeAccountObjectSwapper::__cordl_internal_get_SafeModeObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SafeModeObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GorillaNetworking::SafeAccountObjectSwapper::__cordl_internal_get_SafeModeObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SafeModeObjects;
}
constexpr void GorillaNetworking::SafeAccountObjectSwapper::__cordl_internal_set_SafeModeObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SafeModeObjects = value;
}
inline void GorillaNetworking::SafeAccountObjectSwapper::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SafeAccountObjectSwapper*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::SafeAccountObjectSwapper::SafeAccountUpdated(bool  isSafety)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SafeAccountObjectSwapper*>(),
                        {"SafeAccountUpdated", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isSafety);
}
inline void GorillaNetworking::SafeAccountObjectSwapper::SwitchToSafeMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SafeAccountObjectSwapper*>(),
                        {"SwitchToSafeMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::SafeAccountObjectSwapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SafeAccountObjectSwapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::SafeAccountObjectSwapper* GorillaNetworking::SafeAccountObjectSwapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::SafeAccountObjectSwapper*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::SafeAccountObjectSwapper::SafeAccountObjectSwapper()   {
}
