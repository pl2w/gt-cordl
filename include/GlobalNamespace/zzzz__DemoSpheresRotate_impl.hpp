#pragma once
// IWYU pragma private; include "GlobalNamespace/DemoSpheresRotate.hpp"
#include "PerformanceSystems/zzzz__TimeSliceControllerAsset_impl.hpp"
#include "PerformanceSystems/zzzz__TimeSliceLodBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DemoSpheresRotate_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DemoSpheresRotate.OnLod0Enter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DemoSpheresRotate::*)()>(&::GlobalNamespace::DemoSpheresRotate::OnLod0Enter)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ae0180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoSpheresRotate*>(),
                        {"OnLod0Enter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DemoSpheresRotate.OnLod1Enter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DemoSpheresRotate::*)()>(&::GlobalNamespace::DemoSpheresRotate::OnLod1Enter)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ae02d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoSpheresRotate*>(),
                        {"OnLod1Enter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DemoSpheresRotate.OnLod2Enter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DemoSpheresRotate::*)()>(&::GlobalNamespace::DemoSpheresRotate::OnLod2Enter)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ae0320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoSpheresRotate*>(),
                        {"OnLod2Enter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DemoSpheresRotate.OnLodExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DemoSpheresRotate::*)()>(&::GlobalNamespace::DemoSpheresRotate::OnLodExit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ae036c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoSpheresRotate*>(),
                        {"OnLodExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DemoSpheresRotate.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DemoSpheresRotate::*)(float_t)>(&::GlobalNamespace::DemoSpheresRotate::SliceUpdate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ae0390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DemoSpheresRotate*>(),
                    {::i2c::class_of<::GlobalNamespace::DemoSpheresRotate*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DemoSpheresRotate.SwapToTimeSlicer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DemoSpheresRotate::*)(int32_t)>(&::GlobalNamespace::DemoSpheresRotate::SwapToTimeSlicer)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5ae01cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoSpheresRotate*>(),
                        {"SwapToTimeSlicer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DemoSpheresRotate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DemoSpheresRotate::*)()>(&::GlobalNamespace::DemoSpheresRotate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ae0424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoSpheresRotate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::PerformanceSystems::TimeSliceControllerAsset>>& GlobalNamespace::DemoSpheresRotate::__cordl_internal_get__timeSliceControllerAssets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSliceControllerAssets;
}
constexpr ::ArrayW<::UnityW<::PerformanceSystems::TimeSliceControllerAsset>> const& GlobalNamespace::DemoSpheresRotate::__cordl_internal_get__timeSliceControllerAssets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSliceControllerAssets;
}
constexpr void GlobalNamespace::DemoSpheresRotate::__cordl_internal_set__timeSliceControllerAssets(::ArrayW<::UnityW<::PerformanceSystems::TimeSliceControllerAsset>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeSliceControllerAssets = value;
}
constexpr float_t& GlobalNamespace::DemoSpheresRotate::__cordl_internal_get__rotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationSpeed;
}
constexpr float_t const& GlobalNamespace::DemoSpheresRotate::__cordl_internal_get__rotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationSpeed;
}
constexpr void GlobalNamespace::DemoSpheresRotate::__cordl_internal_set__rotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationSpeed = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::DemoSpheresRotate::__cordl_internal_get__red()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____red;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::DemoSpheresRotate::__cordl_internal_get__red() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____red;
}
constexpr void GlobalNamespace::DemoSpheresRotate::__cordl_internal_set__red(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____red = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::DemoSpheresRotate::__cordl_internal_get__green()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____green;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::DemoSpheresRotate::__cordl_internal_get__green() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____green;
}
constexpr void GlobalNamespace::DemoSpheresRotate::__cordl_internal_set__green(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____green = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::DemoSpheresRotate::__cordl_internal_get__black()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____black;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::DemoSpheresRotate::__cordl_internal_get__black() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____black;
}
constexpr void GlobalNamespace::DemoSpheresRotate::__cordl_internal_set__black(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____black = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::DemoSpheresRotate::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::DemoSpheresRotate::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void GlobalNamespace::DemoSpheresRotate::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
inline void GlobalNamespace::DemoSpheresRotate::OnLod0Enter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoSpheresRotate*>(),
                        {"OnLod0Enter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DemoSpheresRotate::OnLod1Enter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoSpheresRotate*>(),
                        {"OnLod1Enter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DemoSpheresRotate::OnLod2Enter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoSpheresRotate*>(),
                        {"OnLod2Enter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DemoSpheresRotate::OnLodExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoSpheresRotate*>(),
                        {"OnLodExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DemoSpheresRotate::SliceUpdate(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::DemoSpheresRotate*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::DemoSpheresRotate::SwapToTimeSlicer(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoSpheresRotate*>(),
                        {"SwapToTimeSlicer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::DemoSpheresRotate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DemoSpheresRotate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DemoSpheresRotate* GlobalNamespace::DemoSpheresRotate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DemoSpheresRotate*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DemoSpheresRotate::DemoSpheresRotate()   {
}
