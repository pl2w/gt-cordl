#pragma once
// IWYU pragma private; include "GlobalNamespace/ColliderOffsetOverride.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ColliderOffsetOverride_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColliderOffsetOverride.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderOffsetOverride::*)()>(&::GlobalNamespace::ColliderOffsetOverride::Awake)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x55ee2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderOffsetOverride*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderOffsetOverride.FindColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderOffsetOverride::*)()>(&::GlobalNamespace::ColliderOffsetOverride::FindColliders)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x55ee46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderOffsetOverride*>(),
                        {"FindColliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderOffsetOverride.FindCollidersRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderOffsetOverride::*)()>(&::GlobalNamespace::ColliderOffsetOverride::FindCollidersRecursively)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x55ee6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderOffsetOverride*>(),
                        {"FindCollidersRecursively", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderOffsetOverride.AutoDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderOffsetOverride::*)()>(&::GlobalNamespace::ColliderOffsetOverride::AutoDisabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x55ee8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderOffsetOverride*>(),
                        {"AutoDisabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderOffsetOverride.AutoEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderOffsetOverride::*)()>(&::GlobalNamespace::ColliderOffsetOverride::AutoEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ee8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderOffsetOverride*>(),
                        {"AutoEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderOffsetOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderOffsetOverride::*)()>(&::GlobalNamespace::ColliderOffsetOverride::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55ee8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderOffsetOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::ColliderOffsetOverride::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::ColliderOffsetOverride::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GlobalNamespace::ColliderOffsetOverride::__cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr bool& GlobalNamespace::ColliderOffsetOverride::__cordl_internal_get_autoSearch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoSearch;
}
constexpr bool const& GlobalNamespace::ColliderOffsetOverride::__cordl_internal_get_autoSearch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoSearch;
}
constexpr void GlobalNamespace::ColliderOffsetOverride::__cordl_internal_set_autoSearch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoSearch = value;
}
constexpr float_t& GlobalNamespace::ColliderOffsetOverride::__cordl_internal_get_targetScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetScale;
}
constexpr float_t const& GlobalNamespace::ColliderOffsetOverride::__cordl_internal_get_targetScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetScale;
}
constexpr void GlobalNamespace::ColliderOffsetOverride::__cordl_internal_set_targetScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetScale = value;
}
inline void GlobalNamespace::ColliderOffsetOverride::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderOffsetOverride*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderOffsetOverride::FindColliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderOffsetOverride*>(),
                        {"FindColliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderOffsetOverride::FindCollidersRecursively()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderOffsetOverride*>(),
                        {"FindCollidersRecursively", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderOffsetOverride::AutoDisabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderOffsetOverride*>(),
                        {"AutoDisabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderOffsetOverride::AutoEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderOffsetOverride*>(),
                        {"AutoEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderOffsetOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderOffsetOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColliderOffsetOverride* GlobalNamespace::ColliderOffsetOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColliderOffsetOverride*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColliderOffsetOverride::ColliderOffsetOverride()   {
}
