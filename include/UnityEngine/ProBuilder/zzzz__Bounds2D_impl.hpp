#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Bounds2D.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Bounds2D_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D.get_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ProBuilder::Bounds2D::*)()>(&::UnityEngine::ProBuilder::Bounds2D::get_size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb084b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"get_size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D.set_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Bounds2D::*)(::UnityEngine::Vector2)>(&::UnityEngine::ProBuilder::Bounds2D::set_size)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb084b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"set_size", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D.get_extents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ProBuilder::Bounds2D::*)()>(&::UnityEngine::ProBuilder::Bounds2D::get_extents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb084b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"get_extents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D.get_corners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::UnityEngine::ProBuilder::Bounds2D::*)()>(&::UnityEngine::ProBuilder::Bounds2D::get_corners)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb084b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"get_corners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Bounds2D::*)()>(&::UnityEngine::ProBuilder::Bounds2D::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb084c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Bounds2D::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::ProBuilder::Bounds2D::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb084c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Bounds2D::*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*)>(&::UnityEngine::ProBuilder::Bounds2D::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb084d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Bounds2D::*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<int32_t>*)>(&::UnityEngine::ProBuilder::Bounds2D::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb0850c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Bounds2D::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::ProBuilder::Edge>)>(&::UnityEngine::ProBuilder::Bounds2D::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb0856b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Edge>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Bounds2D::*)(::ArrayW<::UnityEngine::Vector2>, int32_t)>(&::UnityEngine::ProBuilder::Bounds2D::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb085818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D.ContainsPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Bounds2D::*)(::UnityEngine::Vector2)>(&::UnityEngine::ProBuilder::Bounds2D::ContainsPoint)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb085928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"ContainsPoint", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D.IntersectsLineSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Bounds2D::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::ProBuilder::Bounds2D::IntersectsLineSegment)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb085970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"IntersectsLineSegment", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D.Intersects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Bounds2D::*)(::UnityEngine::ProBuilder::Bounds2D*)>(&::UnityEngine::ProBuilder::Bounds2D::Intersects)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb085b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"Intersects", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Bounds2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D.Intersects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Bounds2D::*)(::UnityEngine::Rect)>(&::UnityEngine::ProBuilder::Bounds2D::Intersects)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb085ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"Intersects", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D.SetWithPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Bounds2D::*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*)>(&::UnityEngine::ProBuilder::Bounds2D::SetWithPoints)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0xb084dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"SetWithPoints", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D.SetWithPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Bounds2D::*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<int32_t>*)>(&::UnityEngine::ProBuilder::Bounds2D::SetWithPoints)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0xb085158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"SetWithPoints", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D.Center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*)>(&::UnityEngine::ProBuilder::Bounds2D::Center)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xb085be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"Center", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D.Center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<int32_t>*)>(&::UnityEngine::ProBuilder::Bounds2D::Center)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0xb085e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"Center", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D.Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<int32_t>*)>(&::UnityEngine::ProBuilder::Bounds2D::Size)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0xb0862c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"Size", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D.Center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::UnityEngine::ProBuilder::Bounds2D::Center)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0xb086710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"Center", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Bounds2D.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::Bounds2D::*)()>(&::UnityEngine::ProBuilder::Bounds2D::ToString)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb086be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                    {::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& UnityEngine::ProBuilder::Bounds2D::__cordl_internal_get_center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::ProBuilder::Bounds2D::__cordl_internal_get_center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr void UnityEngine::ProBuilder::Bounds2D::__cordl_internal_set_center(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___center = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::ProBuilder::Bounds2D::__cordl_internal_get_m_Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Size;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::ProBuilder::Bounds2D::__cordl_internal_get_m_Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Size;
}
constexpr void UnityEngine::ProBuilder::Bounds2D::__cordl_internal_set_m_Size(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Size = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::ProBuilder::Bounds2D::__cordl_internal_get_m_Extents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Extents;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::ProBuilder::Bounds2D::__cordl_internal_get_m_Extents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Extents;
}
constexpr void UnityEngine::ProBuilder::Bounds2D::__cordl_internal_set_m_Extents(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Extents = value;
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::Bounds2D::get_size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"get_size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Bounds2D::set_size(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"set_size", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::Bounds2D::get_extents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"get_extents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::ProBuilder::Bounds2D::get_corners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"get_corners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Bounds2D::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Bounds2D::_ctor(::UnityEngine::Vector2  center, ::UnityEngine::Vector2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, center, size);
}
inline void UnityEngine::ProBuilder::Bounds2D::_ctor(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
inline void UnityEngine::ProBuilder::Bounds2D::_ctor(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*  points, ::System::Collections::Generic::IList_1<int32_t>*  indexes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points, indexes);
}
inline void UnityEngine::ProBuilder::Bounds2D::_ctor(::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::ProBuilder::Edge>  edges)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Edge>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points, edges);
}
inline void UnityEngine::ProBuilder::Bounds2D::_ctor(::ArrayW<::UnityEngine::Vector2>  points, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points, length);
}
inline bool UnityEngine::ProBuilder::Bounds2D::ContainsPoint(::UnityEngine::Vector2  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"ContainsPoint", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point);
}
inline bool UnityEngine::ProBuilder::Bounds2D::IntersectsLineSegment(::UnityEngine::Vector2  lineStart, ::UnityEngine::Vector2  lineEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"IntersectsLineSegment", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lineStart, lineEnd);
}
inline bool UnityEngine::ProBuilder::Bounds2D::Intersects(::UnityEngine::ProBuilder::Bounds2D*  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"Intersects", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Bounds2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bounds);
}
inline bool UnityEngine::ProBuilder::Bounds2D::Intersects(::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"Intersects", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rect);
}
inline void UnityEngine::ProBuilder::Bounds2D::SetWithPoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"SetWithPoints", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
inline void UnityEngine::ProBuilder::Bounds2D::SetWithPoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*  points, ::System::Collections::Generic::IList_1<int32_t>*  indexes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"SetWithPoints", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points, indexes);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::Bounds2D::Center(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"Center", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, points);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::Bounds2D::Center(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*  points, ::System::Collections::Generic::IList_1<int32_t>*  indexes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"Center", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, points, indexes);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::Bounds2D::Size(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*  points, ::System::Collections::Generic::IList_1<int32_t>*  indexes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"Size", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, points, indexes);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::Bounds2D::Center(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*  points, ::System::Collections::Generic::IEnumerable_1<int32_t>*  indexes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(),
                        {"Center", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, points, indexes);
}
inline ::StringW UnityEngine::ProBuilder::Bounds2D::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::ProBuilder::Bounds2D*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Bounds2D* UnityEngine::ProBuilder::Bounds2D::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Bounds2D*>());
}
inline ::UnityEngine::ProBuilder::Bounds2D* UnityEngine::ProBuilder::Bounds2D::New_ctor(::UnityEngine::Vector2  center, ::UnityEngine::Vector2  size)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Bounds2D*>(center, size));
}
inline ::UnityEngine::ProBuilder::Bounds2D* UnityEngine::ProBuilder::Bounds2D::New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*  points)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Bounds2D*>(points));
}
inline ::UnityEngine::ProBuilder::Bounds2D* UnityEngine::ProBuilder::Bounds2D::New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*  points, ::System::Collections::Generic::IList_1<int32_t>*  indexes)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Bounds2D*>(points, indexes));
}
inline ::UnityEngine::ProBuilder::Bounds2D* UnityEngine::ProBuilder::Bounds2D::New_ctor(::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::ProBuilder::Edge>  edges)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Bounds2D*>(points, edges));
}
inline ::UnityEngine::ProBuilder::Bounds2D* UnityEngine::ProBuilder::Bounds2D::New_ctor(::ArrayW<::UnityEngine::Vector2>  points, int32_t  length)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Bounds2D*>(points, length));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Bounds2D::Bounds2D()   {
}
