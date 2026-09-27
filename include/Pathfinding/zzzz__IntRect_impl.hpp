#pragma once
// IWYU pragma private; include "Pathfinding/IntRect.hpp"
#include "Pathfinding/zzzz__IntRect_def.hpp"
#include "Pathfinding/Util/zzzz__GraphTransform_def.hpp"
#include "Pathfinding/zzzz__Int2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::Pathfinding::IntRect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::IntRect::*)(int32_t, int32_t, int32_t, int32_t)>(&::Pathfinding::IntRect::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e48e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::IntRect::*)(int32_t, int32_t)>(&::Pathfinding::IntRect::Contains)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e48e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"Contains", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.get_Min
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int2 (::Pathfinding::IntRect::*)()>(&::Pathfinding::IntRect::get_Min)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e48ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"get_Min", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.get_Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int2 (::Pathfinding::IntRect::*)()>(&::Pathfinding::IntRect::get_Max)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e48ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"get_Max", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.get_Width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::IntRect::*)()>(&::Pathfinding::IntRect::get_Width)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e48f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"get_Width", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.get_Height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::IntRect::*)()>(&::Pathfinding::IntRect::get_Height)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e48f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"get_Height", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.get_Area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::IntRect::*)()>(&::Pathfinding::IntRect::get_Area)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e48f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"get_Area", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::IntRect::*)()>(&::Pathfinding::IntRect::IsValid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e48f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::IntRect, ::Pathfinding::IntRect)>(&::Pathfinding::IntRect::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e48f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"op_Equality", {}, {::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::IntRect, ::Pathfinding::IntRect)>(&::Pathfinding::IntRect::op_Inequality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e48fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::IntRect::*)(::System::Object*)>(&::Pathfinding::IntRect::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e48fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IntRect>(),
                    {::i2c::class_of<::Pathfinding::IntRect>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::IntRect::*)()>(&::Pathfinding::IntRect::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e49080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IntRect>(),
                    {::i2c::class_of<::Pathfinding::IntRect>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.Intersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::IntRect (*)(::Pathfinding::IntRect, ::Pathfinding::IntRect)>(&::Pathfinding::IntRect::Intersection)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e490a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"Intersection", {}, {::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.Intersects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::IntRect, ::Pathfinding::IntRect)>(&::Pathfinding::IntRect::Intersects)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e49180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"Intersects", {}, {::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.Union
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::IntRect (*)(::Pathfinding::IntRect, ::Pathfinding::IntRect)>(&::Pathfinding::IntRect::Union)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e491c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"Union", {}, {::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.ExpandToContain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::IntRect (::Pathfinding::IntRect::*)(int32_t, int32_t)>(&::Pathfinding::IntRect::ExpandToContain)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e4929c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"ExpandToContain", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.Expand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::IntRect (::Pathfinding::IntRect::*)(int32_t)>(&::Pathfinding::IntRect::Expand)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e49368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"Expand", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::IntRect::*)()>(&::Pathfinding::IntRect::ToString)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5e4938c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IntRect>(),
                    {::i2c::class_of<::Pathfinding::IntRect>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::IntRect.DebugDraw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::IntRect::*)(::Pathfinding::Util::GraphTransform*, ::UnityEngine::Color)>(&::Pathfinding::IntRect::DebugDraw)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5e49590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"DebugDraw", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::IntRect::_ctor(int32_t  xmin, int32_t  ymin, int32_t  xmax, int32_t  ymax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xmin, ymin, xmax, ymax);
}
inline bool Pathfinding::IntRect::Contains(int32_t  x, int32_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"Contains", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, x, y);
}
inline ::Pathfinding::Int2 Pathfinding::IntRect::get_Min()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"get_Min", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int2>(*this, ___internal_method);
}
inline ::Pathfinding::Int2 Pathfinding::IntRect::get_Max()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"get_Max", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int2>(*this, ___internal_method);
}
inline int32_t Pathfinding::IntRect::get_Width()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"get_Width", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Pathfinding::IntRect::get_Height()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"get_Height", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Pathfinding::IntRect::get_Area()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"get_Area", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Pathfinding::IntRect::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Pathfinding::IntRect::op_Equality(::Pathfinding::IntRect  a, ::Pathfinding::IntRect  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"op_Equality", {}, {::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Pathfinding::IntRect::op_Inequality(::Pathfinding::IntRect  a, ::Pathfinding::IntRect  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Pathfinding::IntRect::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IntRect>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Pathfinding::IntRect::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IntRect>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Pathfinding::IntRect Pathfinding::IntRect::Intersection(::Pathfinding::IntRect  a, ::Pathfinding::IntRect  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"Intersection", {}, {::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::IntRect>(nullptr, ___internal_method, a, b);
}
inline bool Pathfinding::IntRect::Intersects(::Pathfinding::IntRect  a, ::Pathfinding::IntRect  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"Intersects", {}, {::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::Pathfinding::IntRect Pathfinding::IntRect::Union(::Pathfinding::IntRect  a, ::Pathfinding::IntRect  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"Union", {}, {::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::IntRect>(nullptr, ___internal_method, a, b);
}
inline ::Pathfinding::IntRect Pathfinding::IntRect::ExpandToContain(int32_t  x, int32_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"ExpandToContain", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::IntRect>(*this, ___internal_method, x, y);
}
inline ::Pathfinding::IntRect Pathfinding::IntRect::Expand(int32_t  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"Expand", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::IntRect>(*this, ___internal_method, range);
}
inline ::StringW Pathfinding::IntRect::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IntRect>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Pathfinding::IntRect::DebugDraw(::Pathfinding::Util::GraphTransform*  transform, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::IntRect>(),
                        {"DebugDraw", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, transform, color);
}
// Ctor Parameters [CppParam { name: "xmin", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ymin", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "xmax", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ymax", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::IntRect::IntRect(int32_t  xmin, int32_t  ymin, int32_t  xmax, int32_t  ymax) noexcept  {
this->xmin = xmin;
this->ymin = ymin;
this->xmax = xmax;
this->ymax = ymax;
}
// Ctor Parameters []
constexpr ::Pathfinding::IntRect::IntRect()   {
}
