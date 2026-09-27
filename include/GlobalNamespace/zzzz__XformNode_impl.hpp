#pragma once
// IWYU pragma private; include "GlobalNamespace/XformNode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__XformNode_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XformNode.get_worldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::GlobalNamespace::XformNode::*)()>(&::GlobalNamespace::XformNode::get_worldPosition)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a23808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XformNode*>(),
                        {"get_worldPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XformNode.get_radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::XformNode::*)()>(&::GlobalNamespace::XformNode::get_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a238d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XformNode*>(),
                        {"get_radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XformNode.set_radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XformNode::*)(float_t)>(&::GlobalNamespace::XformNode::set_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a238e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XformNode*>(),
                        {"set_radius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XformNode.LocalTRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::XformNode::*)()>(&::GlobalNamespace::XformNode::LocalTRS)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5a238e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XformNode*>(),
                        {"LocalTRS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XformNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XformNode::*)()>(&::GlobalNamespace::XformNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a239e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XformNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector4& GlobalNamespace::XformNode::__cordl_internal_get_localPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPosition;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::XformNode::__cordl_internal_get_localPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPosition;
}
constexpr void GlobalNamespace::XformNode::__cordl_internal_set_localPosition(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::XformNode::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::XformNode::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr void GlobalNamespace::XformNode::__cordl_internal_set_parent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
inline ::UnityEngine::Vector4 GlobalNamespace::XformNode::get_worldPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XformNode*>(),
                        {"get_worldPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline float_t GlobalNamespace::XformNode::get_radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XformNode*>(),
                        {"get_radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::XformNode::set_radius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XformNode*>(),
                        {"set_radius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::XformNode::LocalTRS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XformNode*>(),
                        {"LocalTRS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline void GlobalNamespace::XformNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XformNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::XformNode* GlobalNamespace::XformNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::XformNode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XformNode::XformNode()   {
}
