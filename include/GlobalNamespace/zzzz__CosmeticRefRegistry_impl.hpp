#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticRefRegistry.hpp"
#include "GlobalNamespace/zzzz__CosmeticRefTarget_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticRefRegistry_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticRefID_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticRefRegistry.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticRefRegistry::*)()>(&::GlobalNamespace::CosmeticRefRegistry::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5648840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticRefRegistry*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticRefRegistry.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticRefRegistry::*)(::GlobalNamespace::CosmeticRefID, ::UnityEngine::GameObject*)>(&::GlobalNamespace::CosmeticRefRegistry::Register)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x56488c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticRefRegistry*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::CosmeticRefID>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticRefRegistry.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::CosmeticRefRegistry::*)(::GlobalNamespace::CosmeticRefID)>(&::GlobalNamespace::CosmeticRefRegistry::Get)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56488f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticRefRegistry*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::CosmeticRefID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticRefRegistry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticRefRegistry::*)()>(&::GlobalNamespace::CosmeticRefRegistry::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5648924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticRefRegistry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::CosmeticRefRegistry::__cordl_internal_get_partsTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partsTable;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::CosmeticRefRegistry::__cordl_internal_get_partsTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partsTable;
}
constexpr void GlobalNamespace::CosmeticRefRegistry::__cordl_internal_set_partsTable(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___partsTable = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticRefTarget>>& GlobalNamespace::CosmeticRefRegistry::__cordl_internal_get_builtInRefTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builtInRefTargets;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticRefTarget>> const& GlobalNamespace::CosmeticRefRegistry::__cordl_internal_get_builtInRefTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builtInRefTargets;
}
constexpr void GlobalNamespace::CosmeticRefRegistry::__cordl_internal_set_builtInRefTargets(::ArrayW<::UnityW<::GlobalNamespace::CosmeticRefTarget>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builtInRefTargets = value;
}
inline void GlobalNamespace::CosmeticRefRegistry::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticRefRegistry*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticRefRegistry::Register(::GlobalNamespace::CosmeticRefID  partID, ::UnityEngine::GameObject*  part)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticRefRegistry*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::CosmeticRefID>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, partID, part);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::CosmeticRefRegistry::Get(::GlobalNamespace::CosmeticRefID  partID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticRefRegistry*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::CosmeticRefID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, partID);
}
inline void GlobalNamespace::CosmeticRefRegistry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticRefRegistry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticRefRegistry* GlobalNamespace::CosmeticRefRegistry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticRefRegistry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticRefRegistry::CosmeticRefRegistry()   {
}
