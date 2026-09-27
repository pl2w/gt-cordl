#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshBuildSource.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildSourceShape_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildSource_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildSourceShape_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSource.get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::AI::NavMeshBuildSource::*)()>(&::UnityEngine::AI::NavMeshBuildSource::get_transform)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb521d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"get_transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSource.set_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildSource::*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::AI::NavMeshBuildSource::set_transform)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb521d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"set_transform", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSource.get_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::AI::NavMeshBuildSource::*)()>(&::UnityEngine::AI::NavMeshBuildSource::get_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb521da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"get_size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSource.set_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildSource::*)(::UnityEngine::Vector3)>(&::UnityEngine::AI::NavMeshBuildSource::set_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb521db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"set_size", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSource.get_shape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::NavMeshBuildSourceShape (::UnityEngine::AI::NavMeshBuildSource::*)()>(&::UnityEngine::AI::NavMeshBuildSource::get_shape)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb521dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"get_shape", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSource.set_shape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildSource::*)(::UnityEngine::AI::NavMeshBuildSourceShape)>(&::UnityEngine::AI::NavMeshBuildSource::set_shape)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb521dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"set_shape", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshBuildSourceShape>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSource.set_area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildSource::*)(int32_t)>(&::UnityEngine::AI::NavMeshBuildSource::set_area)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb521dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"set_area", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSource.get_sourceObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::AI::NavMeshBuildSource::*)()>(&::UnityEngine::AI::NavMeshBuildSource::get_sourceObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb521dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"get_sourceObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSource.set_sourceObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildSource::*)(::UnityEngine::Object*)>(&::UnityEngine::AI::NavMeshBuildSource::set_sourceObject)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb521e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"set_sourceObject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSource.get_component
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::AI::NavMeshBuildSource::*)()>(&::UnityEngine::AI::NavMeshBuildSource::get_component)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb521edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"get_component", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSource.InternalGetComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (*)(int32_t)>(&::UnityEngine::AI::NavMeshBuildSource::InternalGetComponent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb521ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"InternalGetComponent", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSource.InternalGetObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(int32_t)>(&::UnityEngine::AI::NavMeshBuildSource::InternalGetObject)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb521de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"InternalGetObject", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSource.InternalGetComponent_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AI::NavMeshBuildSource::InternalGetComponent_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb521f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"InternalGetComponent_Injected", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSource.InternalGetObject_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::AI::NavMeshBuildSource::InternalGetObject_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb521f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"InternalGetObject_Injected", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Matrix4x4 UnityEngine::AI::NavMeshBuildSource::get_transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"get_transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(*this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshBuildSource::set_transform(::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"set_transform", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::AI::NavMeshBuildSource::get_size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"get_size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshBuildSource::set_size(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"set_size", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::AI::NavMeshBuildSourceShape UnityEngine::AI::NavMeshBuildSource::get_shape()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"get_shape", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::NavMeshBuildSourceShape>(*this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshBuildSource::set_shape(::UnityEngine::AI::NavMeshBuildSourceShape  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"set_shape", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshBuildSourceShape>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshBuildSource::set_area(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"set_area", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::AI::NavMeshBuildSource::get_sourceObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"get_sourceObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(*this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshBuildSource::set_sourceObject(::UnityEngine::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"set_sourceObject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::AI::NavMeshBuildSource::get_component()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"get_component", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::AI::NavMeshBuildSource::InternalGetComponent(int32_t  instanceID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"InternalGetComponent", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(nullptr, ___internal_method, instanceID);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::AI::NavMeshBuildSource::InternalGetObject(int32_t  instanceID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"InternalGetObject", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, instanceID);
}
inline ::System::IntPtr UnityEngine::AI::NavMeshBuildSource::InternalGetComponent_Injected(int32_t  instanceID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"InternalGetComponent_Injected", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instanceID);
}
inline ::System::IntPtr UnityEngine::AI::NavMeshBuildSource::InternalGetObject_Injected(int32_t  instanceID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSource>(),
                        {"InternalGetObject_Injected", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instanceID);
}
// Ctor Parameters [CppParam { name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Size", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Shape", ty: "::UnityEngine::AI::NavMeshBuildSourceShape", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Area", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ComponentID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_GenerateLinks", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::AI::NavMeshBuildSource::NavMeshBuildSource(::UnityEngine::Matrix4x4  m_Transform, ::UnityEngine::Vector3  m_Size, ::UnityEngine::AI::NavMeshBuildSourceShape  m_Shape, int32_t  m_Area, int32_t  m_InstanceID, int32_t  m_ComponentID, int32_t  m_GenerateLinks) noexcept  {
this->m_Transform = m_Transform;
this->m_Size = m_Size;
this->m_Shape = m_Shape;
this->m_Area = m_Area;
this->m_InstanceID = m_InstanceID;
this->m_ComponentID = m_ComponentID;
this->m_GenerateLinks = m_GenerateLinks;
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshBuildSource::NavMeshBuildSource()   {
}
