#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineInfo.hpp"
#include "UnityEngine/Splines/zzzz__SplineInfo_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/Splines/zzzz__ISplineContainer_def.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::SplineInfo.get_Object
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Splines::SplineInfo::*)()>(&::UnityEngine::Splines::SplineInfo::get_Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb320ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"get_Object", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInfo.get_Container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::ISplineContainer* (::UnityEngine::Splines::SplineInfo::*)()>(&::UnityEngine::Splines::SplineInfo::get_Container)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb320ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"get_Container", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInfo.set_Container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInfo::*)(::UnityEngine::Splines::ISplineContainer*)>(&::UnityEngine::Splines::SplineInfo::set_Container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb320f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"set_Container", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInfo.get_Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::Splines::SplineInfo::*)()>(&::UnityEngine::Splines::SplineInfo::get_Transform)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb320f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"get_Transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInfo.get_Spline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (::UnityEngine::Splines::SplineInfo::*)()>(&::UnityEngine::Splines::SplineInfo::get_Spline)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xb320fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"get_Spline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInfo.get_Index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::SplineInfo::*)()>(&::UnityEngine::Splines::SplineInfo::get_Index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3211f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"get_Index", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInfo.set_Index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInfo::*)(int32_t)>(&::UnityEngine::Splines::SplineInfo::set_Index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3211fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"set_Index", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInfo.get_LocalToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (::UnityEngine::Splines::SplineInfo::*)()>(&::UnityEngine::Splines::SplineInfo::get_LocalToWorld)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb321204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"get_LocalToWorld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInfo::*)(::UnityEngine::Splines::ISplineContainer*, int32_t)>(&::UnityEngine::Splines::SplineInfo::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb321308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineInfo::*)(::UnityEngine::Splines::SplineInfo)>(&::UnityEngine::Splines::SplineInfo::Equals)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb3213f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Splines::SplineInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineInfo::*)(::System::Object*)>(&::UnityEngine::Splines::SplineInfo::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb321448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                    {::i2c::class_of<::UnityEngine::Splines::SplineInfo>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInfo.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::SplineInfo::*)()>(&::UnityEngine::Splines::SplineInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb3214d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                    {::i2c::class_of<::UnityEngine::Splines::SplineInfo>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInfo.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInfo::*)()>(&::UnityEngine::Splines::SplineInfo::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb321524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineInfo.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineInfo::*)()>(&::UnityEngine::Splines::SplineInfo::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb3215c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Object> UnityEngine::Splines::SplineInfo::get_Object()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"get_Object", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(*this, ___internal_method);
}
inline ::UnityEngine::Splines::ISplineContainer* UnityEngine::Splines::SplineInfo::get_Container()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"get_Container", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::ISplineContainer*>(*this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInfo::set_Container(::UnityEngine::Splines::ISplineContainer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"set_Container", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::Splines::SplineInfo::get_Transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"get_Transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(*this, ___internal_method);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineInfo::get_Spline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"get_Spline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(*this, ___internal_method);
}
inline int32_t UnityEngine::Splines::SplineInfo::get_Index()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"get_Index", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInfo::set_Index(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"set_Index", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float4x4 UnityEngine::Splines::SplineInfo::get_LocalToWorld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"get_LocalToWorld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(*this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInfo::_ctor(::UnityEngine::Splines::ISplineContainer*  container, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::ISplineContainer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, container, index);
}
inline bool UnityEngine::Splines::SplineInfo::Equals(::UnityEngine::Splines::SplineInfo  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Splines::SplineInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Splines::SplineInfo::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::SplineInfo>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Splines::SplineInfo::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::SplineInfo>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInfo::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Splines::SplineInfo::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineInfo>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Splines::SplineInfo>"
constexpr  UnityEngine::Splines::SplineInfo::operator ::System::IEquatable_1<::UnityEngine::Splines::SplineInfo>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Splines::SplineInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Splines::SplineInfo>"
constexpr ::System::IEquatable_1<::UnityEngine::Splines::SplineInfo>* UnityEngine::Splines::SplineInfo::i___System__IEquatable_1___UnityEngine__Splines__SplineInfo_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Splines::SplineInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Splines::SplineInfo::operator ::UnityEngine::ISerializationCallbackReceiver*()  {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Splines::SplineInfo::i___UnityEngine__ISerializationCallbackReceiver()  {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Object", ty: "::UnityW<::UnityEngine::Object>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Container", ty: "::UnityEngine::Splines::ISplineContainer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SplineIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Splines::SplineInfo::SplineInfo(::UnityW<::UnityEngine::Object>  m_Object, ::UnityEngine::Splines::ISplineContainer*  m_Container, int32_t  m_SplineIndex) noexcept  {
this->m_Object = m_Object;
this->m_Container = m_Container;
this->m_SplineIndex = m_SplineIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineInfo::SplineInfo()   {
}
