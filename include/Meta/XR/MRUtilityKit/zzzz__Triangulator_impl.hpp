#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/Triangulator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__Triangulator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Triangulator.TriangulatePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*, ::by_ref<::ArrayW<::UnityEngine::Vector2>>, ::by_ref<::ArrayW<int32_t>>)>(&::Meta::XR::MRUtilityKit::Triangulator::TriangulatePoints)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x9f4c1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Triangulator*>(),
                        {"TriangulatePoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector2>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::Triangulator::TriangulatePoints(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  vertices, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*  holes, ::by_ref<::ArrayW<::UnityEngine::Vector2>>  outVertices, ::by_ref<::ArrayW<int32_t>>  outIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Triangulator*>(),
                        {"TriangulatePoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector2>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertices, holes, outVertices, outIndices);
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::Triangulator::Triangulator()   {
}
