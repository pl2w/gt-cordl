#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshObstacle.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshObstacle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshObstacleShape_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMeshObstacle.set_carving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshObstacle::*)(bool)>(&::UnityEngine::AI::NavMeshObstacle::set_carving)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb51f8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_carving", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshObstacle.set_carveOnlyStationary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshObstacle::*)(bool)>(&::UnityEngine::AI::NavMeshObstacle::set_carveOnlyStationary)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb51f978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_carveOnlyStationary", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshObstacle.set_carvingMoveThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshObstacle::*)(float_t)>(&::UnityEngine::AI::NavMeshObstacle::set_carvingMoveThreshold)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb51fa3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_carvingMoveThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshObstacle.set_carvingTimeToStationary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshObstacle::*)(float_t)>(&::UnityEngine::AI::NavMeshObstacle::set_carvingTimeToStationary)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb51fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_carvingTimeToStationary", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshObstacle.set_shape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshObstacle::*)(::UnityEngine::AI::NavMeshObstacleShape)>(&::UnityEngine::AI::NavMeshObstacle::set_shape)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb51fbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_shape", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshObstacleShape>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshObstacle.set_center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshObstacle::*)(::UnityEngine::Vector3)>(&::UnityEngine::AI::NavMeshObstacle::set_center)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb51fca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_center", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshObstacle.set_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshObstacle::*)(::UnityEngine::Vector3)>(&::UnityEngine::AI::NavMeshObstacle::set_size)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb51fd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_size", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshObstacle.set_carving_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::AI::NavMeshObstacle::set_carving_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51f934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_carving_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshObstacle.set_carveOnlyStationary_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::AI::NavMeshObstacle::set_carveOnlyStationary_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51f9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_carveOnlyStationary_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshObstacle.set_carvingMoveThreshold_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::AI::NavMeshObstacle::set_carvingMoveThreshold_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb51fac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_carvingMoveThreshold_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshObstacle.set_carvingTimeToStationary_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::AI::NavMeshObstacle::set_carvingTimeToStationary_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb51fb98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_carvingTimeToStationary_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshObstacle.set_shape_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AI::NavMeshObstacleShape)>(&::UnityEngine::AI::NavMeshObstacle::set_shape_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51fc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_shape_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AI::NavMeshObstacleShape>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshObstacle.set_center_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::AI::NavMeshObstacle::set_center_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51fd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_center_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshObstacle.set_size_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::AI::NavMeshObstacle::set_size_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51fe0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_size_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AI::NavMeshObstacle::set_carving(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_carving", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshObstacle::set_carveOnlyStationary(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_carveOnlyStationary", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshObstacle::set_carvingMoveThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_carvingMoveThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshObstacle::set_carvingTimeToStationary(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_carvingTimeToStationary", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshObstacle::set_shape(::UnityEngine::AI::NavMeshObstacleShape  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_shape", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshObstacleShape>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshObstacle::set_center(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_center", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshObstacle::set_size(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_size", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshObstacle::set_carving_Injected(::System::IntPtr  _unity_self, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_carving_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::AI::NavMeshObstacle::set_carveOnlyStationary_Injected(::System::IntPtr  _unity_self, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_carveOnlyStationary_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::AI::NavMeshObstacle::set_carvingMoveThreshold_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_carvingMoveThreshold_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::AI::NavMeshObstacle::set_carvingTimeToStationary_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_carvingTimeToStationary_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::AI::NavMeshObstacle::set_shape_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AI::NavMeshObstacleShape  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_shape_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AI::NavMeshObstacleShape>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::AI::NavMeshObstacle::set_center_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_center_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::AI::NavMeshObstacle::set_size_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshObstacle*>(),
                        {"set_size_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshObstacle::NavMeshObstacle()   {
}
