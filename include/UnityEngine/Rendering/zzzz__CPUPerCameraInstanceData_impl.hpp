#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUPerCameraInstanceData.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUPerCameraInstanceData_PerCameraInstanceDataArrays_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUPerCameraInstanceData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUPerCameraInstanceData_PerCameraInstanceDataArrays_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CPUPerCameraInstanceData.get_instancesLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUPerCameraInstanceData::*)()>(&::UnityEngine::Rendering::CPUPerCameraInstanceData::get_instancesLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb1ffb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"get_instancesLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUPerCameraInstanceData.set_instancesLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUPerCameraInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUPerCameraInstanceData::set_instancesLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb1ffb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"set_instancesLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUPerCameraInstanceData.get_instancesCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUPerCameraInstanceData::*)()>(&::UnityEngine::Rendering::CPUPerCameraInstanceData::get_instancesCapacity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb1ffb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"get_instancesCapacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUPerCameraInstanceData.set_instancesCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUPerCameraInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUPerCameraInstanceData::set_instancesCapacity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb1ffba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"set_instancesCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUPerCameraInstanceData.get_cameraCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CPUPerCameraInstanceData::*)()>(&::UnityEngine::Rendering::CPUPerCameraInstanceData::get_cameraCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb1ffbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"get_cameraCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUPerCameraInstanceData.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUPerCameraInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUPerCameraInstanceData::Initialize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb1ffbfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"Initialize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUPerCameraInstanceData.DeallocateCameras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUPerCameraInstanceData::*)(::Unity::Collections::NativeArray_1<int32_t>)>(&::UnityEngine::Rendering::CPUPerCameraInstanceData::DeallocateCameras)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xb1ffcbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"DeallocateCameras", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUPerCameraInstanceData.AllocateCameras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUPerCameraInstanceData::*)(::Unity::Collections::NativeArray_1<int32_t>)>(&::UnityEngine::Rendering::CPUPerCameraInstanceData::AllocateCameras)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb1ffee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"AllocateCameras", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUPerCameraInstanceData.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUPerCameraInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUPerCameraInstanceData::Remove)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xb2001dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"Remove", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUPerCameraInstanceData.IncreaseInstanceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUPerCameraInstanceData::*)()>(&::UnityEngine::Rendering::CPUPerCameraInstanceData::IncreaseInstanceCount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb200420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"IncreaseInstanceCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUPerCameraInstanceData.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUPerCameraInstanceData::*)()>(&::UnityEngine::Rendering::CPUPerCameraInstanceData::Dispose)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xb200434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUPerCameraInstanceData.Grow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUPerCameraInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUPerCameraInstanceData::Grow)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xb200618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"Grow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CPUPerCameraInstanceData.SetDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CPUPerCameraInstanceData::*)(int32_t)>(&::UnityEngine::Rendering::CPUPerCameraInstanceData::SetDefault)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb20084c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"SetDefault", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::CPUPerCameraInstanceData::get_instancesLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"get_instancesLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUPerCameraInstanceData::set_instancesLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"set_instancesLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::CPUPerCameraInstanceData::get_instancesCapacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"get_instancesCapacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUPerCameraInstanceData::set_instancesCapacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"set_instancesCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::CPUPerCameraInstanceData::get_cameraCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"get_cameraCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUPerCameraInstanceData::Initialize(int32_t  initCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"Initialize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initCapacity);
}
inline void UnityEngine::Rendering::CPUPerCameraInstanceData::DeallocateCameras(::Unity::Collections::NativeArray_1<int32_t>  cameraIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"DeallocateCameras", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cameraIDs);
}
inline void UnityEngine::Rendering::CPUPerCameraInstanceData::AllocateCameras(::Unity::Collections::NativeArray_1<int32_t>  cameraIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"AllocateCameras", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cameraIDs);
}
inline void UnityEngine::Rendering::CPUPerCameraInstanceData::Remove(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"Remove", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline void UnityEngine::Rendering::CPUPerCameraInstanceData::IncreaseInstanceCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"IncreaseInstanceCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUPerCameraInstanceData::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::CPUPerCameraInstanceData::Grow(int32_t  newCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"Grow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newCapacity);
}
inline void UnityEngine::Rendering::CPUPerCameraInstanceData::SetDefault(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CPUPerCameraInstanceData>(),
                        {"SetDefault", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Rendering::CPUPerCameraInstanceData::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::CPUPerCameraInstanceData::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "perCameraData", ty: "::Unity::Collections::NativeParallelHashMap_2<int32_t,::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StructData", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::CPUPerCameraInstanceData::CPUPerCameraInstanceData(::Unity::Collections::NativeParallelHashMap_2<int32_t,::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays>  perCameraData, ::Unity::Collections::NativeArray_1<int32_t>  m_StructData) noexcept  {
this->perCameraData = perCameraData;
this->m_StructData = m_StructData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CPUPerCameraInstanceData::CPUPerCameraInstanceData()   {
}
