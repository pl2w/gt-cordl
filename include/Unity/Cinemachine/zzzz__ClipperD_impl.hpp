#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ClipperD.hpp"
#include "Unity/Cinemachine/zzzz__ClipperBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__ClipperD_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__ClipType_def.hpp"
#include "Unity/Cinemachine/zzzz__FillRule_def.hpp"
#include "Unity/Cinemachine/zzzz__PathType_def.hpp"
#include "Unity/Cinemachine/zzzz__PointD_def.hpp"
#include "Unity/Cinemachine/zzzz__PolyTreeD_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::ClipperD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperD::*)(int32_t)>(&::Unity::Cinemachine::ClipperD::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xaefa4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperD.AddPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperD::*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*, ::Unity::Cinemachine::PathType, bool)>(&::Unity::Cinemachine::ClipperD::AddPath)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xaefa628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"AddPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperD.AddPaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperD::*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, ::Unity::Cinemachine::PathType, bool)>(&::Unity::Cinemachine::ClipperD::AddPaths)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xaefa6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"AddPaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperD.AddSubject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperD::*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*)>(&::Unity::Cinemachine::ClipperD::AddSubject)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaefa760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"AddSubject", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperD.AddOpenSubject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperD::*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*)>(&::Unity::Cinemachine::ClipperD::AddOpenSubject)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaefa76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"AddOpenSubject", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperD.AddClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperD::*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*)>(&::Unity::Cinemachine::ClipperD::AddClip)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaefa778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"AddClip", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperD.AddSubject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperD::*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*)>(&::Unity::Cinemachine::ClipperD::AddSubject)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaefa784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"AddSubject", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperD.AddOpenSubject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperD::*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*)>(&::Unity::Cinemachine::ClipperD::AddOpenSubject)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaefa790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"AddOpenSubject", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperD.AddClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperD::*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*)>(&::Unity::Cinemachine::ClipperD::AddClip)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaefa79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"AddClip", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperD.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperD::*)(::Unity::Cinemachine::ClipType, ::Unity::Cinemachine::FillRule, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*)>(&::Unity::Cinemachine::ClipperD::Execute)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0xaefa7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"Execute", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperD.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperD::*)(::Unity::Cinemachine::ClipType, ::Unity::Cinemachine::FillRule, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*)>(&::Unity::Cinemachine::ClipperD::Execute)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaefac98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"Execute", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperD.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperD::*)(::Unity::Cinemachine::ClipType, ::Unity::Cinemachine::FillRule, ::Unity::Cinemachine::PolyTreeD*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*)>(&::Unity::Cinemachine::ClipperD::Execute)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0xaefad30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"Execute", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::Unity::Cinemachine::PolyTreeD*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperD.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperD::*)(::Unity::Cinemachine::ClipType, ::Unity::Cinemachine::FillRule, ::Unity::Cinemachine::PolyTreeD*)>(&::Unity::Cinemachine::ClipperD::Execute)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaefb09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"Execute", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::Unity::Cinemachine::PolyTreeD*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& Unity::Cinemachine::ClipperD::__cordl_internal_get__scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scale;
}
constexpr double_t const& Unity::Cinemachine::ClipperD::__cordl_internal_get__scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scale;
}
constexpr void Unity::Cinemachine::ClipperD::__cordl_internal_set__scale(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scale = value;
}
constexpr double_t& Unity::Cinemachine::ClipperD::__cordl_internal_get__invScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invScale;
}
constexpr double_t const& Unity::Cinemachine::ClipperD::__cordl_internal_get__invScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invScale;
}
constexpr void Unity::Cinemachine::ClipperD::__cordl_internal_set__invScale(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____invScale = value;
}
inline void Unity::Cinemachine::ClipperD::_ctor(int32_t  roundingDecimalPrecision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roundingDecimalPrecision);
}
inline void Unity::Cinemachine::ClipperD::AddPath(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, ::Unity::Cinemachine::PathType  polytype, bool  isOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"AddPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, polytype, isOpen);
}
inline void Unity::Cinemachine::ClipperD::AddPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths, ::Unity::Cinemachine::PathType  polytype, bool  isOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"AddPaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paths, polytype, isOpen);
}
inline void Unity::Cinemachine::ClipperD::AddSubject(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"AddSubject", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Unity::Cinemachine::ClipperD::AddOpenSubject(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"AddOpenSubject", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Unity::Cinemachine::ClipperD::AddClip(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"AddClip", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Unity::Cinemachine::ClipperD::AddSubject(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"AddSubject", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paths);
}
inline void Unity::Cinemachine::ClipperD::AddOpenSubject(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"AddOpenSubject", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paths);
}
inline void Unity::Cinemachine::ClipperD::AddClip(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"AddClip", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paths);
}
inline bool Unity::Cinemachine::ClipperD::Execute(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  solutionClosed, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  solutionOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"Execute", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipType, fillRule, solutionClosed, solutionOpen);
}
inline bool Unity::Cinemachine::ClipperD::Execute(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  solutionClosed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"Execute", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipType, fillRule, solutionClosed);
}
inline bool Unity::Cinemachine::ClipperD::Execute(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::Unity::Cinemachine::PolyTreeD*  polytree, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  openPaths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"Execute", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::Unity::Cinemachine::PolyTreeD*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipType, fillRule, polytree, openPaths);
}
inline bool Unity::Cinemachine::ClipperD::Execute(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::Unity::Cinemachine::PolyTreeD*  polytree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperD*>(),
                        {"Execute", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::Unity::Cinemachine::PolyTreeD*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipType, fillRule, polytree);
}
inline ::Unity::Cinemachine::ClipperD* Unity::Cinemachine::ClipperD::New_ctor(int32_t  roundingDecimalPrecision)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::ClipperD*>(roundingDecimalPrecision));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::ClipperD::ClipperD()   {
}
