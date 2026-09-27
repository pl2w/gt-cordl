#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Clipper64.hpp"
#include "Unity/Cinemachine/zzzz__ClipperBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__Clipper64_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__ClipType_def.hpp"
#include "Unity/Cinemachine/zzzz__FillRule_def.hpp"
#include "Unity/Cinemachine/zzzz__PathType_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
#include "Unity/Cinemachine/zzzz__PolyTree64_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::Clipper64._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Clipper64::*)()>(&::Unity::Cinemachine::Clipper64::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaefa068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper64.AddPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Clipper64::*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*, ::Unity::Cinemachine::PathType, bool)>(&::Unity::Cinemachine::Clipper64::AddPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaefa070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"AddPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper64.AddPaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Clipper64::*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, ::Unity::Cinemachine::PathType, bool)>(&::Unity::Cinemachine::Clipper64::AddPaths)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaefa078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"AddPaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper64.AddSubject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Clipper64::*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*)>(&::Unity::Cinemachine::Clipper64::AddSubject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaefa080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"AddSubject", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper64.AddOpenSubject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Clipper64::*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*)>(&::Unity::Cinemachine::Clipper64::AddOpenSubject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaefa090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"AddOpenSubject", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper64.AddClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Clipper64::*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*)>(&::Unity::Cinemachine::Clipper64::AddClip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaefa0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"AddClip", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper64.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::Clipper64::*)(::Unity::Cinemachine::ClipType, ::Unity::Cinemachine::FillRule, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*)>(&::Unity::Cinemachine::Clipper64::Execute)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xaefa0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"Execute", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper64.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::Clipper64::*)(::Unity::Cinemachine::ClipType, ::Unity::Cinemachine::FillRule, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*)>(&::Unity::Cinemachine::Clipper64::Execute)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaefa20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"Execute", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper64.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::Clipper64::*)(::Unity::Cinemachine::ClipType, ::Unity::Cinemachine::FillRule, ::Unity::Cinemachine::PolyTree64*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*)>(&::Unity::Cinemachine::Clipper64::Execute)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xaefa2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"Execute", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::Unity::Cinemachine::PolyTree64*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper64.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::Clipper64::*)(::Unity::Cinemachine::ClipType, ::Unity::Cinemachine::FillRule, ::Unity::Cinemachine::PolyTree64*)>(&::Unity::Cinemachine::Clipper64::Execute)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaefa45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"Execute", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::Unity::Cinemachine::PolyTree64*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::Clipper64::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::Clipper64::AddPath(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, ::Unity::Cinemachine::PathType  polytype, bool  isOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"AddPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, polytype, isOpen);
}
inline void Unity::Cinemachine::Clipper64::AddPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, ::Unity::Cinemachine::PathType  polytype, bool  isOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"AddPaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paths, polytype, isOpen);
}
inline void Unity::Cinemachine::Clipper64::AddSubject(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"AddSubject", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paths);
}
inline void Unity::Cinemachine::Clipper64::AddOpenSubject(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"AddOpenSubject", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paths);
}
inline void Unity::Cinemachine::Clipper64::AddClip(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"AddClip", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paths);
}
inline bool Unity::Cinemachine::Clipper64::Execute(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  solutionClosed, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  solutionOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"Execute", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipType, fillRule, solutionClosed, solutionOpen);
}
inline bool Unity::Cinemachine::Clipper64::Execute(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  solutionClosed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"Execute", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipType, fillRule, solutionClosed);
}
inline bool Unity::Cinemachine::Clipper64::Execute(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::Unity::Cinemachine::PolyTree64*  polytree, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  openPaths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"Execute", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::Unity::Cinemachine::PolyTree64*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipType, fillRule, polytree, openPaths);
}
inline bool Unity::Cinemachine::Clipper64::Execute(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::Unity::Cinemachine::PolyTree64*  polytree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper64*>(),
                        {"Execute", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::Unity::Cinemachine::PolyTree64*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipType, fillRule, polytree);
}
inline ::Unity::Cinemachine::Clipper64* Unity::Cinemachine::Clipper64::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::Clipper64*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::Clipper64::Clipper64()   {
}
