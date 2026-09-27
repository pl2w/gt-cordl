#pragma once
// IWYU pragma private; include "GlobalNamespace/GameMirrorWhenEquipped.hpp"
#include "GlobalNamespace/zzzz__EHandedness_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__GameMirrorWhenEquipped_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameMirrorWhenEquipped.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameMirrorWhenEquipped::*)()>(&::GlobalNamespace::GameMirrorWhenEquipped::Awake)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5837c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameMirrorWhenEquipped*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameMirrorWhenEquipped.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameMirrorWhenEquipped::*)()>(&::GlobalNamespace::GameMirrorWhenEquipped::OnEnable)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5837da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameMirrorWhenEquipped*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameMirrorWhenEquipped.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameMirrorWhenEquipped::*)()>(&::GlobalNamespace::GameMirrorWhenEquipped::OnDisable)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5837fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameMirrorWhenEquipped*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameMirrorWhenEquipped._HandleGameEntityOnEquipChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameMirrorWhenEquipped::*)()>(&::GlobalNamespace::GameMirrorWhenEquipped::_HandleGameEntityOnEquipChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5838210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameMirrorWhenEquipped*>(),
                        {"_HandleGameEntityOnEquipChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameMirrorWhenEquipped._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameMirrorWhenEquipped::*)()>(&::GlobalNamespace::GameMirrorWhenEquipped::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5838304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameMirrorWhenEquipped*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GameMirrorWhenEquipped::__cordl_internal_get_m_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GameMirrorWhenEquipped::__cordl_internal_get_m_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gameEntity;
}
constexpr void GlobalNamespace::GameMirrorWhenEquipped::__cordl_internal_set_m_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_gameEntity = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::GameMirrorWhenEquipped::__cordl_internal_get_m_xformsToMirror()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_xformsToMirror;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::GameMirrorWhenEquipped::__cordl_internal_get_m_xformsToMirror() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_xformsToMirror;
}
constexpr void GlobalNamespace::GameMirrorWhenEquipped::__cordl_internal_set_m_xformsToMirror(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_xformsToMirror = value;
}
constexpr bool& GlobalNamespace::GameMirrorWhenEquipped::__cordl_internal_get_m_shouldOnlyMirrorWhenSnapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_shouldOnlyMirrorWhenSnapped;
}
constexpr bool const& GlobalNamespace::GameMirrorWhenEquipped::__cordl_internal_get_m_shouldOnlyMirrorWhenSnapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_shouldOnlyMirrorWhenSnapped;
}
constexpr void GlobalNamespace::GameMirrorWhenEquipped::__cordl_internal_set_m_shouldOnlyMirrorWhenSnapped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_shouldOnlyMirrorWhenSnapped = value;
}
constexpr ::GlobalNamespace::EHandedness& GlobalNamespace::GameMirrorWhenEquipped::__cordl_internal_get_m_handednessToMirror()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_handednessToMirror;
}
constexpr ::GlobalNamespace::EHandedness const& GlobalNamespace::GameMirrorWhenEquipped::__cordl_internal_get_m_handednessToMirror() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_handednessToMirror;
}
constexpr void GlobalNamespace::GameMirrorWhenEquipped::__cordl_internal_set_m_handednessToMirror(::GlobalNamespace::EHandedness  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_handednessToMirror = value;
}
inline void GlobalNamespace::GameMirrorWhenEquipped::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameMirrorWhenEquipped*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameMirrorWhenEquipped::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameMirrorWhenEquipped*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameMirrorWhenEquipped::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameMirrorWhenEquipped*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameMirrorWhenEquipped::_HandleGameEntityOnEquipChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameMirrorWhenEquipped*>(),
                        {"_HandleGameEntityOnEquipChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameMirrorWhenEquipped::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameMirrorWhenEquipped*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameMirrorWhenEquipped* GlobalNamespace::GameMirrorWhenEquipped::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameMirrorWhenEquipped*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameMirrorWhenEquipped::GameMirrorWhenEquipped()   {
}
