#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/EditorInstanceDataArrays.hpp"
#include "UnityEngine/Rendering/zzzz__EditorInstanceDataArrays_def.hpp"
#include "UnityEngine/Rendering/zzzz__EditorInstanceDataArrays_ReadOnly_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::EditorInstanceDataArrays.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::EditorInstanceDataArrays::*)(int32_t)>(&::UnityEngine::Rendering::EditorInstanceDataArrays::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb1fec94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(),
                        {"Initialize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::EditorInstanceDataArrays.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::EditorInstanceDataArrays::*)()>(&::UnityEngine::Rendering::EditorInstanceDataArrays::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb1fedd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::EditorInstanceDataArrays.Grow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::EditorInstanceDataArrays::*)(int32_t)>(&::UnityEngine::Rendering::EditorInstanceDataArrays::Grow)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb1ff01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(),
                        {"Grow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::EditorInstanceDataArrays.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::EditorInstanceDataArrays::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::EditorInstanceDataArrays::Remove)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb1ff5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(),
                        {"Remove", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::EditorInstanceDataArrays.SetDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::EditorInstanceDataArrays::*)(int32_t)>(&::UnityEngine::Rendering::EditorInstanceDataArrays::SetDefault)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb1ff6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(),
                        {"SetDefault", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::EditorInstanceDataArrays::Initialize(int32_t  initCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(),
                        {"Initialize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initCapacity);
}
inline void UnityEngine::Rendering::EditorInstanceDataArrays::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::EditorInstanceDataArrays::Grow(int32_t  newCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(),
                        {"Grow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newCapacity);
}
inline void UnityEngine::Rendering::EditorInstanceDataArrays::Remove(int32_t  index, int32_t  lastIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(),
                        {"Remove", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, lastIndex);
}
inline void UnityEngine::Rendering::EditorInstanceDataArrays::SetDefault(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(),
                        {"SetDefault", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::EditorInstanceDataArrays::EditorInstanceDataArrays()   {
}
