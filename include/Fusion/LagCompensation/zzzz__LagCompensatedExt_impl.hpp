#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/LagCompensatedExt.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensatedExt_def.hpp"
#include "Fusion/zzzz__LagCompensatedHit_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensatedExt.SortReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, ::UnityEngine::Vector3)>(&::Fusion::LagCompensation::LagCompensatedExt::SortReference)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6018d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensatedExt*>(),
                        {"SortReference", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensatedExt.SortDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*)>(&::Fusion::LagCompensation::LagCompensatedExt::SortDistance)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6018eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensatedExt*>(),
                        {"SortDistance", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::LagCompensation::LagCompensatedExt::SortReference(::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, ::UnityEngine::Vector3  reference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensatedExt*>(),
                        {"SortReference", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hits, reference);
}
inline void Fusion::LagCompensation::LagCompensatedExt::SortDistance(::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensatedExt*>(),
                        {"SortDistance", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hits);
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::LagCompensatedExt::LagCompensatedExt()   {
}
