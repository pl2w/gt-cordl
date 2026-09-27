#pragma once
// IWYU pragma private; include "GlobalNamespace/IndirectMeshInstance.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__IndirectMeshInstance_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshInstance.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IndirectMeshInstance::*)()>(&::GlobalNamespace::IndirectMeshInstance::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5694870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshInstance*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshInstance.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IndirectMeshInstance::*)()>(&::GlobalNamespace::IndirectMeshInstance::OnEnable)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5694900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshInstance*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshInstance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IndirectMeshInstance::*)()>(&::GlobalNamespace::IndirectMeshInstance::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56956d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshInstance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::IndirectMeshInstance::__cordl_internal_get_dynamic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamic;
}
constexpr bool const& GlobalNamespace::IndirectMeshInstance::__cordl_internal_get_dynamic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamic;
}
constexpr void GlobalNamespace::IndirectMeshInstance::__cordl_internal_set_dynamic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dynamic = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::IndirectMeshInstance::__cordl_internal_get_meshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::IndirectMeshInstance::__cordl_internal_get_meshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr void GlobalNamespace::IndirectMeshInstance::__cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshRenderer = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::IndirectMeshInstance::__cordl_internal_get_meshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::IndirectMeshInstance::__cordl_internal_get_meshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr void GlobalNamespace::IndirectMeshInstance::__cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshFilter = value;
}
constexpr bool& GlobalNamespace::IndirectMeshInstance::__cordl_internal_get__registered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____registered;
}
constexpr bool const& GlobalNamespace::IndirectMeshInstance::__cordl_internal_get__registered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____registered;
}
constexpr void GlobalNamespace::IndirectMeshInstance::__cordl_internal_set__registered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____registered = value;
}
inline void GlobalNamespace::IndirectMeshInstance::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshInstance*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IndirectMeshInstance::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshInstance*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IndirectMeshInstance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshInstance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::IndirectMeshInstance* GlobalNamespace::IndirectMeshInstance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::IndirectMeshInstance*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IndirectMeshInstance::IndirectMeshInstance()   {
}
