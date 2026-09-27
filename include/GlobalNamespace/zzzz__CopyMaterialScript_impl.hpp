#pragma once
// IWYU pragma private; include "GlobalNamespace/CopyMaterialScript.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CopyMaterialScript_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CopyMaterialScript.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CopyMaterialScript::*)()>(&::GlobalNamespace::CopyMaterialScript::Start)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ac3634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CopyMaterialScript*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CopyMaterialScript.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CopyMaterialScript::*)()>(&::GlobalNamespace::CopyMaterialScript::Update)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ac36bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CopyMaterialScript*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CopyMaterialScript._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CopyMaterialScript::*)()>(&::GlobalNamespace::CopyMaterialScript::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac3784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CopyMaterialScript*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::CopyMaterialScript::__cordl_internal_get_sourceToCopyMaterialFrom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceToCopyMaterialFrom;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::CopyMaterialScript::__cordl_internal_get_sourceToCopyMaterialFrom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceToCopyMaterialFrom;
}
constexpr void GlobalNamespace::CopyMaterialScript::__cordl_internal_set_sourceToCopyMaterialFrom(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceToCopyMaterialFrom = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::CopyMaterialScript::__cordl_internal_get_mySkinnedMeshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mySkinnedMeshRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::CopyMaterialScript::__cordl_internal_get_mySkinnedMeshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mySkinnedMeshRenderer;
}
constexpr void GlobalNamespace::CopyMaterialScript::__cordl_internal_set_mySkinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mySkinnedMeshRenderer = value;
}
inline void GlobalNamespace::CopyMaterialScript::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CopyMaterialScript*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CopyMaterialScript::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CopyMaterialScript*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CopyMaterialScript::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CopyMaterialScript*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CopyMaterialScript* GlobalNamespace::CopyMaterialScript::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CopyMaterialScript*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CopyMaterialScript::CopyMaterialScript()   {
}
