#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeTexturesAtRuntime.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BakeTexturesAtRuntime_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombiner_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakeTexturesAtRuntime.GetShaderNameForPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BakeTexturesAtRuntime::*)()>(&::GlobalNamespace::BakeTexturesAtRuntime::GetShaderNameForPipeline)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9dfb9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeTexturesAtRuntime*>(),
                        {"GetShaderNameForPipeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakeTexturesAtRuntime.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakeTexturesAtRuntime::*)()>(&::GlobalNamespace::BakeTexturesAtRuntime::OnGUI)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x9dfba6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeTexturesAtRuntime*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakeTexturesAtRuntime.OnBuiltAtlasesSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakeTexturesAtRuntime::*)()>(&::GlobalNamespace::BakeTexturesAtRuntime::OnBuiltAtlasesSuccess)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x9dfc07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeTexturesAtRuntime*>(),
                        {"OnBuiltAtlasesSuccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakeTexturesAtRuntime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakeTexturesAtRuntime::*)()>(&::GlobalNamespace::BakeTexturesAtRuntime::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9dfc274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeTexturesAtRuntime*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BakeTexturesAtRuntime::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BakeTexturesAtRuntime::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::BakeTexturesAtRuntime::__cordl_internal_set_target(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr float_t& GlobalNamespace::BakeTexturesAtRuntime::__cordl_internal_get_elapsedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elapsedTime;
}
constexpr float_t const& GlobalNamespace::BakeTexturesAtRuntime::__cordl_internal_get_elapsedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elapsedTime;
}
constexpr void GlobalNamespace::BakeTexturesAtRuntime::__cordl_internal_set_elapsedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elapsedTime = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*& GlobalNamespace::BakeTexturesAtRuntime::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* const& GlobalNamespace::BakeTexturesAtRuntime::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void GlobalNamespace::BakeTexturesAtRuntime::__cordl_internal_set_result(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
inline ::StringW GlobalNamespace::BakeTexturesAtRuntime::GetShaderNameForPipeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeTexturesAtRuntime*>(),
                        {"GetShaderNameForPipeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BakeTexturesAtRuntime::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeTexturesAtRuntime*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BakeTexturesAtRuntime::OnBuiltAtlasesSuccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeTexturesAtRuntime*>(),
                        {"OnBuiltAtlasesSuccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BakeTexturesAtRuntime::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeTexturesAtRuntime*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BakeTexturesAtRuntime* GlobalNamespace::BakeTexturesAtRuntime::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BakeTexturesAtRuntime*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakeTexturesAtRuntime::BakeTexturesAtRuntime()   {
}
