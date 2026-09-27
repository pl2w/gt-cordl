#pragma once
// IWYU pragma private; include "Pathfinding/AstarColor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Pathfinding/zzzz__AstarColor_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::Pathfinding::AstarColor.ColorHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Pathfinding::AstarColor::ColorHash)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5e47744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarColor*>(),
                        {"ColorHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarColor.GetAreaColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(uint32_t)>(&::Pathfinding::AstarColor::GetAreaColor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e47af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarColor*>(),
                        {"GetAreaColor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarColor.GetTagColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(uint32_t)>(&::Pathfinding::AstarColor::GetTagColor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e47c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarColor*>(),
                        {"GetTagColor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarColor.PushToStatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarColor::*)(::GlobalNamespace::AstarPath*)>(&::Pathfinding::AstarColor::PushToStatic)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5e47cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarColor*>(),
                        {"PushToStatic", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarColor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarColor::*)()>(&::Pathfinding::AstarColor::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e47dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarColor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& Pathfinding::AstarColor::__cordl_internal_get__SolidColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SolidColor;
}
constexpr ::UnityEngine::Color const& Pathfinding::AstarColor::__cordl_internal_get__SolidColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SolidColor;
}
constexpr void Pathfinding::AstarColor::__cordl_internal_set__SolidColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SolidColor = value;
}
constexpr ::UnityEngine::Color& Pathfinding::AstarColor::__cordl_internal_get__UnwalkableNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnwalkableNode;
}
constexpr ::UnityEngine::Color const& Pathfinding::AstarColor::__cordl_internal_get__UnwalkableNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnwalkableNode;
}
constexpr void Pathfinding::AstarColor::__cordl_internal_set__UnwalkableNode(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UnwalkableNode = value;
}
constexpr ::UnityEngine::Color& Pathfinding::AstarColor::__cordl_internal_get__BoundsHandles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BoundsHandles;
}
constexpr ::UnityEngine::Color const& Pathfinding::AstarColor::__cordl_internal_get__BoundsHandles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BoundsHandles;
}
constexpr void Pathfinding::AstarColor::__cordl_internal_set__BoundsHandles(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BoundsHandles = value;
}
constexpr ::UnityEngine::Color& Pathfinding::AstarColor::__cordl_internal_get__ConnectionLowLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConnectionLowLerp;
}
constexpr ::UnityEngine::Color const& Pathfinding::AstarColor::__cordl_internal_get__ConnectionLowLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConnectionLowLerp;
}
constexpr void Pathfinding::AstarColor::__cordl_internal_set__ConnectionLowLerp(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ConnectionLowLerp = value;
}
constexpr ::UnityEngine::Color& Pathfinding::AstarColor::__cordl_internal_get__ConnectionHighLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConnectionHighLerp;
}
constexpr ::UnityEngine::Color const& Pathfinding::AstarColor::__cordl_internal_get__ConnectionHighLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConnectionHighLerp;
}
constexpr void Pathfinding::AstarColor::__cordl_internal_set__ConnectionHighLerp(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ConnectionHighLerp = value;
}
constexpr ::UnityEngine::Color& Pathfinding::AstarColor::__cordl_internal_get__MeshEdgeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MeshEdgeColor;
}
constexpr ::UnityEngine::Color const& Pathfinding::AstarColor::__cordl_internal_get__MeshEdgeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MeshEdgeColor;
}
constexpr void Pathfinding::AstarColor::__cordl_internal_set__MeshEdgeColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MeshEdgeColor = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& Pathfinding::AstarColor::__cordl_internal_get__AreaColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AreaColors;
}
constexpr ::ArrayW<::UnityEngine::Color> const& Pathfinding::AstarColor::__cordl_internal_get__AreaColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AreaColors;
}
constexpr void Pathfinding::AstarColor::__cordl_internal_set__AreaColors(::ArrayW<::UnityEngine::Color>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AreaColors = value;
}
inline void Pathfinding::AstarColor::setStaticF_SolidColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "SolidColor", ::Pathfinding::AstarColor*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Pathfinding::AstarColor::getStaticF_SolidColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "SolidColor", ::Pathfinding::AstarColor*>();
}
inline void Pathfinding::AstarColor::setStaticF_UnwalkableNode(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "UnwalkableNode", ::Pathfinding::AstarColor*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Pathfinding::AstarColor::getStaticF_UnwalkableNode()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "UnwalkableNode", ::Pathfinding::AstarColor*>();
}
inline void Pathfinding::AstarColor::setStaticF_BoundsHandles(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "BoundsHandles", ::Pathfinding::AstarColor*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Pathfinding::AstarColor::getStaticF_BoundsHandles()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "BoundsHandles", ::Pathfinding::AstarColor*>();
}
inline void Pathfinding::AstarColor::setStaticF_ConnectionLowLerp(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "ConnectionLowLerp", ::Pathfinding::AstarColor*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Pathfinding::AstarColor::getStaticF_ConnectionLowLerp()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "ConnectionLowLerp", ::Pathfinding::AstarColor*>();
}
inline void Pathfinding::AstarColor::setStaticF_ConnectionHighLerp(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "ConnectionHighLerp", ::Pathfinding::AstarColor*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Pathfinding::AstarColor::getStaticF_ConnectionHighLerp()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "ConnectionHighLerp", ::Pathfinding::AstarColor*>();
}
inline void Pathfinding::AstarColor::setStaticF_MeshEdgeColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "MeshEdgeColor", ::Pathfinding::AstarColor*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Pathfinding::AstarColor::getStaticF_MeshEdgeColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "MeshEdgeColor", ::Pathfinding::AstarColor*>();
}
inline void Pathfinding::AstarColor::setStaticF_AreaColors(::ArrayW<::UnityEngine::Color>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Color>, "AreaColors", ::Pathfinding::AstarColor*>(std::forward<::ArrayW<::UnityEngine::Color>>(value));
}
inline ::ArrayW<::UnityEngine::Color> Pathfinding::AstarColor::getStaticF_AreaColors()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Color>, "AreaColors", ::Pathfinding::AstarColor*>();
}
inline int32_t Pathfinding::AstarColor::ColorHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarColor*>(),
                        {"ColorHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::Color Pathfinding::AstarColor::GetAreaColor(uint32_t  area)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarColor*>(),
                        {"GetAreaColor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, area);
}
inline ::UnityEngine::Color Pathfinding::AstarColor::GetTagColor(uint32_t  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarColor*>(),
                        {"GetTagColor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, tag);
}
inline void Pathfinding::AstarColor::PushToStatic(::GlobalNamespace::AstarPath*  astar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarColor*>(),
                        {"PushToStatic", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, astar);
}
inline void Pathfinding::AstarColor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarColor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::AstarColor* Pathfinding::AstarColor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AstarColor*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AstarColor::AstarColor()   {
}
