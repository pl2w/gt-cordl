#pragma once
// IWYU pragma private; include "MTAssets/EasyMeshCombiner/MTAssetsMathematics.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "MTAssets/EasyMeshCombiner/zzzz__MTAssetsMathematics_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::MTAssetsMathematics.GetHalfPositionBetweenTwoPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::MTAssets::EasyMeshCombiner::MTAssetsMathematics::GetHalfPositionBetweenTwoPoints)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5cb9bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::MTAssetsMathematics*>(),
                        {"GetHalfPositionBetweenTwoPoints", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::MTAssetsMathematics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MTAssets::EasyMeshCombiner::MTAssetsMathematics::*)()>(&::MTAssets::EasyMeshCombiner::MTAssetsMathematics::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb9c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::MTAssetsMathematics*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline ::System::Collections::Generic::List_1<T>* MTAssets::EasyMeshCombiner::MTAssetsMathematics::RandomizeThisList(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MTAssets::EasyMeshCombiner::MTAssetsMathematics*>(),
                    {"RandomizeThisList", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, list);
}
inline ::UnityEngine::Vector3 MTAssets::EasyMeshCombiner::MTAssetsMathematics::GetHalfPositionBetweenTwoPoints(::UnityEngine::Vector3  pointA, ::UnityEngine::Vector3  pointB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::MTAssetsMathematics*>(),
                        {"GetHalfPositionBetweenTwoPoints", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, pointA, pointB);
}
inline void MTAssets::EasyMeshCombiner::MTAssetsMathematics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::MTAssetsMathematics*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MTAssets::EasyMeshCombiner::MTAssetsMathematics* MTAssets::EasyMeshCombiner::MTAssetsMathematics::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MTAssets::EasyMeshCombiner::MTAssetsMathematics*>());
}
// Ctor Parameters []
constexpr ::MTAssets::EasyMeshCombiner::MTAssetsMathematics::MTAssetsMathematics()   {
}
