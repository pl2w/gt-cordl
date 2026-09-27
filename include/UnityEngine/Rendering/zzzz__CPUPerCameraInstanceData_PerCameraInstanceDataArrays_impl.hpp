#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUPerCameraInstanceData_PerCameraInstanceDataArrays.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUPerCameraInstanceData_PerCameraInstanceDataArrays_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::*)(int32_t)>(&::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb2000dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::*)()>(&::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb1ffe94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::*)(int32_t, int32_t)>(&::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::Remove)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb2003b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays>(),
                        {"Remove", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays.Grow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::*)(int32_t, int32_t)>(&::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::Grow)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb2007e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays>(),
                        {"Grow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays.SetDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::*)(int32_t)>(&::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::SetDefault)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb200a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays>(),
                        {"SetDefault", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::_ctor(int32_t  initCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initCapacity);
}
inline void GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::Remove(int32_t  index, int32_t  lastIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays>(),
                        {"Remove", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, lastIndex);
}
inline void GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::Grow(int32_t  previousCapacity, int32_t  newCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays>(),
                        {"Grow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, previousCapacity, newCapacity);
}
inline void GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::SetDefault(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays>(),
                        {"SetDefault", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "meshLods", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "crossFades", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::CPUPerCameraInstanceData_PerCameraInstanceDataArrays(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>  meshLods, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>  crossFades) noexcept  {
this->meshLods = meshLods;
this->crossFades = crossFades;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays::CPUPerCameraInstanceData_PerCameraInstanceDataArrays()   {
}
