#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshPath.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshPath_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshPathStatus_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshPath_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMeshPath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshPath::*)()>(&::UnityEngine::AI::NavMeshPath::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb521784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshPath.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshPath::*)()>(&::UnityEngine::AI::NavMeshPath::Finalize)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb5217f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                    {::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshPath.InitializeNavMeshPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::AI::NavMeshPath::InitializeNavMeshPath)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb5217c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"InitializeNavMeshPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshPath.DestroyNavMeshPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AI::NavMeshPath::DestroyNavMeshPath)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5218a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"DestroyNavMeshPath", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshPath.GetCornersNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AI::NavMeshPath::*)(::by_ref<::ArrayW<::UnityEngine::Vector3>>)>(&::UnityEngine::AI::NavMeshPath::GetCornersNonAlloc)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb5218e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"GetCornersNonAlloc", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshPath.CalculateCornersInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::UnityEngine::AI::NavMeshPath::*)()>(&::UnityEngine::AI::NavMeshPath::CalculateCornersInternal)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb521a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"CalculateCornersInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshPath.ClearCornersInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshPath::*)()>(&::UnityEngine::AI::NavMeshPath::ClearCornersInternal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb521bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"ClearCornersInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshPath.ClearCorners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshPath::*)()>(&::UnityEngine::AI::NavMeshPath::ClearCorners)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb5207e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"ClearCorners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshPath.CalculateCorners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshPath::*)()>(&::UnityEngine::AI::NavMeshPath::CalculateCorners)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb521c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"CalculateCorners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshPath.get_corners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::UnityEngine::AI::NavMeshPath::*)()>(&::UnityEngine::AI::NavMeshPath::get_corners)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb521cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"get_corners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshPath.get_status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::NavMeshPathStatus (::UnityEngine::AI::NavMeshPath::*)()>(&::UnityEngine::AI::NavMeshPath::get_status)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb521ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"get_status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshPath.GetCornersNonAlloc_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::AI::NavMeshPath::GetCornersNonAlloc_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb521a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"GetCornersNonAlloc_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshPath.CalculateCornersInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::AI::NavMeshPath::CalculateCornersInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb521bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"CalculateCornersInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshPath.ClearCornersInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AI::NavMeshPath::ClearCornersInternal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb521c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"ClearCornersInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshPath.get_status_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::NavMeshPathStatus (*)(::System::IntPtr)>(&::UnityEngine::AI::NavMeshPath::get_status_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb521d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"get_status_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::AI::NavMeshPath::__cordl_internal_get_m_Ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::AI::NavMeshPath::__cordl_internal_get_m_Ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr void UnityEngine::AI::NavMeshPath::__cordl_internal_set_m_Ptr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Ptr = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& UnityEngine::AI::NavMeshPath::__cordl_internal_get_m_Corners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Corners;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& UnityEngine::AI::NavMeshPath::__cordl_internal_get_m_Corners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Corners;
}
constexpr void UnityEngine::AI::NavMeshPath::__cordl_internal_set_m_Corners(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Corners = value;
}
inline void UnityEngine::AI::NavMeshPath::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshPath::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::AI::NavMeshPath::InitializeNavMeshPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"InitializeNavMeshPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::AI::NavMeshPath::DestroyNavMeshPath(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"DestroyNavMeshPath", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline int32_t UnityEngine::AI::NavMeshPath::GetCornersNonAlloc(::by_ref<::ArrayW<::UnityEngine::Vector3>>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"GetCornersNonAlloc", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, results);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::AI::NavMeshPath::CalculateCornersInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"CalculateCornersInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshPath::ClearCornersInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"ClearCornersInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshPath::ClearCorners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"ClearCorners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshPath::CalculateCorners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"CalculateCorners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::AI::NavMeshPath::get_corners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"get_corners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline ::UnityEngine::AI::NavMeshPathStatus UnityEngine::AI::NavMeshPath::get_status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"get_status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::NavMeshPathStatus>(this, ___internal_method);
}
inline int32_t UnityEngine::AI::NavMeshPath::GetCornersNonAlloc_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"GetCornersNonAlloc_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, results);
}
inline void UnityEngine::AI::NavMeshPath::CalculateCornersInternal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"CalculateCornersInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::AI::NavMeshPath::ClearCornersInternal_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"ClearCornersInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::AI::NavMeshPathStatus UnityEngine::AI::NavMeshPath::get_status_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath*>(),
                        {"get_status_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::NavMeshPathStatus>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::AI::NavMeshPath* UnityEngine::AI::NavMeshPath::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AI::NavMeshPath*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshPath::NavMeshPath()   {
}
//  Writing Method size for method: ::UnityEngine::AI::NavMeshPath_BindingsMarshaller.ConvertToNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::AI::NavMeshPath*)>(&::UnityEngine::AI::NavMeshPath_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb521d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshPath*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::AI::NavMeshPath_BindingsMarshaller::ConvertToNative(::UnityEngine::AI::NavMeshPath*  navMeshPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshPath_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, navMeshPath);
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshPath_BindingsMarshaller::NavMeshPath_BindingsMarshaller()   {
}
