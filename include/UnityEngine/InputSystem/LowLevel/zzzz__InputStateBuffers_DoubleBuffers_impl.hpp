#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateBuffers_DoubleBuffers.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBuffers_DoubleBuffers_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputStateBuffers_DoubleBuffers.get_valid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputStateBuffers_DoubleBuffers::*)()>(&::GlobalNamespace::InputStateBuffers_DoubleBuffers::get_valid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaffb3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateBuffers_DoubleBuffers>(),
                        {"get_valid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateBuffers_DoubleBuffers.SetFrontBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputStateBuffers_DoubleBuffers::*)(int32_t, void*)>(&::GlobalNamespace::InputStateBuffers_DoubleBuffers::SetFrontBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaffadec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateBuffers_DoubleBuffers>(),
                        {"SetFrontBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateBuffers_DoubleBuffers.SetBackBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputStateBuffers_DoubleBuffers::*)(int32_t, void*)>(&::GlobalNamespace::InputStateBuffers_DoubleBuffers::SetBackBuffer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaffae08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateBuffers_DoubleBuffers>(),
                        {"SetBackBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateBuffers_DoubleBuffers.GetFrontBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::GlobalNamespace::InputStateBuffers_DoubleBuffers::*)(int32_t)>(&::GlobalNamespace::InputStateBuffers_DoubleBuffers::GetFrontBuffer)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaffab54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateBuffers_DoubleBuffers>(),
                        {"GetFrontBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateBuffers_DoubleBuffers.GetBackBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::GlobalNamespace::InputStateBuffers_DoubleBuffers::*)(int32_t)>(&::GlobalNamespace::InputStateBuffers_DoubleBuffers::GetBackBuffer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaffabe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateBuffers_DoubleBuffers>(),
                        {"GetBackBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputStateBuffers_DoubleBuffers.SwapBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputStateBuffers_DoubleBuffers::*)(int32_t)>(&::GlobalNamespace::InputStateBuffers_DoubleBuffers::SwapBuffers)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaffb408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateBuffers_DoubleBuffers>(),
                        {"SwapBuffers", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::InputStateBuffers_DoubleBuffers::get_valid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateBuffers_DoubleBuffers>(),
                        {"get_valid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::InputStateBuffers_DoubleBuffers::SetFrontBuffer(int32_t  deviceIndex, void*  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateBuffers_DoubleBuffers>(),
                        {"SetFrontBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, deviceIndex, ptr);
}
inline void GlobalNamespace::InputStateBuffers_DoubleBuffers::SetBackBuffer(int32_t  deviceIndex, void*  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateBuffers_DoubleBuffers>(),
                        {"SetBackBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, deviceIndex, ptr);
}
inline void* GlobalNamespace::InputStateBuffers_DoubleBuffers::GetFrontBuffer(int32_t  deviceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateBuffers_DoubleBuffers>(),
                        {"GetFrontBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method, deviceIndex);
}
inline void* GlobalNamespace::InputStateBuffers_DoubleBuffers::GetBackBuffer(int32_t  deviceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateBuffers_DoubleBuffers>(),
                        {"GetBackBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method, deviceIndex);
}
inline void GlobalNamespace::InputStateBuffers_DoubleBuffers::SwapBuffers(int32_t  deviceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputStateBuffers_DoubleBuffers>(),
                        {"SwapBuffers", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, deviceIndex);
}
// Ctor Parameters [CppParam { name: "deviceToBufferMapping", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputStateBuffers_DoubleBuffers::InputStateBuffers_DoubleBuffers(void*  deviceToBufferMapping, int32_t  deviceCount) noexcept  {
this->deviceToBufferMapping = deviceToBufferMapping;
this->deviceCount = deviceCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputStateBuffers_DoubleBuffers::InputStateBuffers_DoubleBuffers()   {
}
