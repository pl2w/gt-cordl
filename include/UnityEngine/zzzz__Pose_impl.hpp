#pragma once
// IWYU pragma private; include "UnityEngine/Pose.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Pose._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Pose::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::Pose::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb5f01a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Pose.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Pose::*)()>(&::UnityEngine::Pose::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb5f01b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Pose>(),
                    {::i2c::class_of<::UnityEngine::Pose>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Pose.GetTransformedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::UnityEngine::Pose::*)(::UnityEngine::Pose)>(&::UnityEngine::Pose::GetTransformedBy)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb5f0234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"GetTransformedBy", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Pose.GetTransformedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::UnityEngine::Pose::*)(::UnityEngine::Transform*)>(&::UnityEngine::Pose::GetTransformedBy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb5f0320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"GetTransformedBy", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Pose.get_forward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Pose::*)()>(&::UnityEngine::Pose::get_forward)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb5f0524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"get_forward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Pose.get_right
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Pose::*)()>(&::UnityEngine::Pose::get_right)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb5f0594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"get_right", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Pose.get_up
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Pose::*)()>(&::UnityEngine::Pose::get_up)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb5f0604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"get_up", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Pose.get_identity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)()>(&::UnityEngine::Pose::get_identity)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb5f0674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"get_identity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Pose.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Pose::*)(::System::Object*)>(&::UnityEngine::Pose::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb5f06dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Pose>(),
                    {::i2c::class_of<::UnityEngine::Pose>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Pose.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Pose::*)(::UnityEngine::Pose)>(&::UnityEngine::Pose::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb5f079c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Pose.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Pose::*)()>(&::UnityEngine::Pose::GetHashCode)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb5f084c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Pose>(),
                    {::i2c::class_of<::UnityEngine::Pose>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Pose.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Pose, ::UnityEngine::Pose)>(&::UnityEngine::Pose::op_Equality)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb5f08f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Pose.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Pose, ::UnityEngine::Pose)>(&::UnityEngine::Pose::op_Inequality)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb5f09b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Pose::setStaticF_k_Identity(::UnityEngine::Pose  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pose, "k_Identity", ::UnityEngine::Pose>(std::forward<::UnityEngine::Pose>(value));
}
inline ::UnityEngine::Pose UnityEngine::Pose::getStaticF_k_Identity()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pose, "k_Identity", ::UnityEngine::Pose>();
}
inline void UnityEngine::Pose::_ctor(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation);
}
inline ::StringW UnityEngine::Pose::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Pose>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::Pose UnityEngine::Pose::GetTransformedBy(::UnityEngine::Pose  lhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"GetTransformedBy", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(*this, ___internal_method, lhs);
}
inline ::UnityEngine::Pose UnityEngine::Pose::GetTransformedBy(::UnityEngine::Transform*  lhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"GetTransformedBy", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(*this, ___internal_method, lhs);
}
inline ::UnityEngine::Vector3 UnityEngine::Pose::get_forward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"get_forward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Pose::get_right()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"get_right", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Pose::get_up()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"get_up", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Pose UnityEngine::Pose::get_identity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"get_identity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method);
}
inline bool UnityEngine::Pose::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Pose>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::Pose::Equals(::UnityEngine::Pose  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::Pose::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Pose>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Pose::op_Equality(::UnityEngine::Pose  a, ::UnityEngine::Pose  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Pose::op_Inequality(::UnityEngine::Pose  a, ::UnityEngine::Pose  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Pose>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Pose>"
constexpr  UnityEngine::Pose::operator ::System::IEquatable_1<::UnityEngine::Pose>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Pose>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Pose>"
constexpr ::System::IEquatable_1<::UnityEngine::Pose>* UnityEngine::Pose::i___System__IEquatable_1___UnityEngine__Pose_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Pose>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Pose::Pose(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) noexcept  {
this->position = position;
this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::UnityEngine::Pose::Pose()   {
}
