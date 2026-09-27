#pragma once
// IWYU pragma private; include "GlobalNamespace/SnapBounds.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "GlobalNamespace/zzzz__SnapBounds_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SnapBounds._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnapBounds::*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int)>(&::GlobalNamespace::SnapBounds::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57bed48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapBounds>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapBounds._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnapBounds::*)(int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::SnapBounds::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57bed50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapBounds>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapBounds.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnapBounds::*)()>(&::GlobalNamespace::SnapBounds::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57bed68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapBounds>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapBounds.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnapBounds::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::SnapBounds::Write)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x57bed74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapBounds>(),
                        {"Write", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapBounds.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnapBounds::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::SnapBounds::Read)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x57bedf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapBounds>(),
                        {"Read", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SnapBounds::_ctor(::UnityEngine::Vector2Int  min, ::UnityEngine::Vector2Int  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapBounds>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, min, max);
}
inline void GlobalNamespace::SnapBounds::_ctor(int32_t  minX, int32_t  minY, int32_t  maxX, int32_t  maxY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapBounds>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, minX, minY, maxX, maxY);
}
inline void GlobalNamespace::SnapBounds::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapBounds>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SnapBounds::Write(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapBounds>(),
                        {"Write", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::SnapBounds::Read(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapBounds>(),
                        {"Read", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
// Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "max", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SnapBounds::SnapBounds(::UnityEngine::Vector2Int  min, ::UnityEngine::Vector2Int  max) noexcept  {
this->min = min;
this->max = max;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SnapBounds::SnapBounds()   {
}
