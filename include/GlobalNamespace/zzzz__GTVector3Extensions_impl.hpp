#pragma once
// IWYU pragma private; include "GlobalNamespace/GTVector3Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GTVector3Extensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTVector3Extensions.X_Z
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GTVector3Extensions::X_Z)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5673a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTVector3Extensions*>(),
                        {"X_Z", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTVector3Extensions.Sum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*)>(&::GlobalNamespace::GTVector3Extensions::Sum)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5673a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTVector3Extensions*>(),
                        {"Sum", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTVector3Extensions.Average
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*)>(&::GlobalNamespace::GTVector3Extensions::Average)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5673b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTVector3Extensions*>(),
                        {"Average", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTVector3Extensions.Sum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*)>(&::GlobalNamespace::GTVector3Extensions::Sum)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5673d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTVector3Extensions*>(),
                        {"Sum", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTVector3Extensions.Average
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*)>(&::GlobalNamespace::GTVector3Extensions::Average)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x567404c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTVector3Extensions*>(),
                        {"Average", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 GlobalNamespace::GTVector3Extensions::X_Z(::UnityEngine::Vector3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTVector3Extensions*>(),
                        {"X_Z", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vector);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GTVector3Extensions::Sum(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*  vecs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTVector3Extensions*>(),
                        {"Sum", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vecs);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GTVector3Extensions::Average(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*  vecs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTVector3Extensions*>(),
                        {"Average", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vecs);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GTVector3Extensions::Sum(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*  vecs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTVector3Extensions*>(),
                        {"Sum", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vecs);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GTVector3Extensions::Average(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*  vecs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTVector3Extensions*>(),
                        {"Average", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vecs);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTVector3Extensions::GTVector3Extensions()   {
}
