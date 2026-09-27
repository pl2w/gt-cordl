#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_Example.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MB_Example_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBaker_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_Example.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_Example::*)()>(&::GlobalNamespace::MB_Example::Start)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9dfd5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_Example*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_Example.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_Example::*)()>(&::GlobalNamespace::MB_Example::LateUpdate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9dfd614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_Example*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_Example.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_Example::*)()>(&::GlobalNamespace::MB_Example::OnGUI)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9dfd698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_Example*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_Example._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_Example::*)()>(&::GlobalNamespace::MB_Example::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dfd748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_Example*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker>& GlobalNamespace::MB_Example::__cordl_internal_get_meshbaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshbaker;
}
constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker> const& GlobalNamespace::MB_Example::__cordl_internal_get_meshbaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshbaker;
}
constexpr void GlobalNamespace::MB_Example::__cordl_internal_set_meshbaker(::UnityW<::GlobalNamespace::MB3_MeshBaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshbaker = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::MB_Example::__cordl_internal_get_objsToCombine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objsToCombine;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::MB_Example::__cordl_internal_get_objsToCombine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objsToCombine;
}
constexpr void GlobalNamespace::MB_Example::__cordl_internal_set_objsToCombine(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objsToCombine = value;
}
inline void GlobalNamespace::MB_Example::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_Example*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB_Example::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_Example*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB_Example::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_Example*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB_Example::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_Example*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_Example* GlobalNamespace::MB_Example::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_Example*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_Example::MB_Example()   {
}
