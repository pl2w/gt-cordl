#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineConfiner2D_ShapeCache.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner2D_OversizeWindowSettings_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner2D_ShapeCache_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner2D_OversizeWindowSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineConfiner2D_ShapeCache.Invalidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CinemachineConfiner2D_ShapeCache::*)()>(&::GlobalNamespace::CinemachineConfiner2D_ShapeCache::Invalidate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xae89e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineConfiner2D_ShapeCache>(),
                        {"Invalidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineConfiner2D_ShapeCache.ValidateCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CinemachineConfiner2D_ShapeCache::*)(::UnityEngine::Collider2D*, ::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings, float_t, ::by_ref<bool>)>(&::GlobalNamespace::CinemachineConfiner2D_ShapeCache::ValidateCache)> {
  constexpr static std::size_t size = 0xa00;
  constexpr static std::size_t addrs = 0xae8a060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineConfiner2D_ShapeCache>(),
                        {"ValidateCache", {}, {::i2c::type_of<::UnityEngine::Collider2D*>(), ::i2c::type_of<::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineConfiner2D_ShapeCache.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CinemachineConfiner2D_ShapeCache::*)(::by_ref<::UnityEngine::Collider2D*>, ::by_ref<::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings>, float_t)>(&::GlobalNamespace::CinemachineConfiner2D_ShapeCache::IsValid)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xae8b294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineConfiner2D_ShapeCache>(),
                        {"IsValid", {}, {::i2c::type_of<::by_ref<::UnityEngine::Collider2D*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineConfiner2D_ShapeCache.CalculateDeltaTransformationMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CinemachineConfiner2D_ShapeCache::*)()>(&::GlobalNamespace::CinemachineConfiner2D_ShapeCache::CalculateDeltaTransformationMatrix)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xae8b3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineConfiner2D_ShapeCache>(),
                        {"CalculateDeltaTransformationMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineConfiner2D_ShapeCache._ValidateCache_g__HasAnyPoints_10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*)>(&::GlobalNamespace::CinemachineConfiner2D_ShapeCache::_ValidateCache_g__HasAnyPoints_10_0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xae8b500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineConfiner2D_ShapeCache>(),
                        {"<ValidateCache>g__HasAnyPoints|10_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CinemachineConfiner2D_ShapeCache::Invalidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineConfiner2D_ShapeCache>(),
                        {"Invalidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool GlobalNamespace::CinemachineConfiner2D_ShapeCache::ValidateCache(::UnityEngine::Collider2D*  boundingShape2D, ::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings  oversize, float_t  aspectRatio, ::by_ref<bool>  confinerStateChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineConfiner2D_ShapeCache>(),
                        {"ValidateCache", {}, {::i2c::type_of<::UnityEngine::Collider2D*>(), ::i2c::type_of<::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, boundingShape2D, oversize, aspectRatio, confinerStateChanged);
}
inline bool GlobalNamespace::CinemachineConfiner2D_ShapeCache::IsValid(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Collider2D*>  boundingShape2D, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings>  oversize, float_t  aspectRatio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineConfiner2D_ShapeCache>(),
                        {"IsValid", {}, {::i2c::type_of<::by_ref<::UnityEngine::Collider2D*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, boundingShape2D, oversize, aspectRatio);
}
inline void GlobalNamespace::CinemachineConfiner2D_ShapeCache::CalculateDeltaTransformationMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineConfiner2D_ShapeCache>(),
                        {"CalculateDeltaTransformationMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool GlobalNamespace::CinemachineConfiner2D_ShapeCache::_ValidateCache_g__HasAnyPoints_10_0(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*  originalPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineConfiner2D_ShapeCache>(),
                        {"<ValidateCache>g__HasAnyPoints|10_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, originalPath);
}
// Ctor Parameters [CppParam { name: "ConfinerOven", ty: "::Unity::Cinemachine::ConfinerOven*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OriginalPath", ty: "::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DeltaWorldToBaked", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DeltaBakedToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AspectRatio", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_OversizeWindowSettings", ty: "::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaxComputationTimePerFrameInSeconds", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BakedToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BoundingShape2D", ty: "::UnityW<::UnityEngine::Collider2D>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineConfiner2D_ShapeCache::CinemachineConfiner2D_ShapeCache(::Unity::Cinemachine::ConfinerOven*  ConfinerOven, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*  OriginalPath, ::UnityEngine::Matrix4x4  DeltaWorldToBaked, ::UnityEngine::Matrix4x4  DeltaBakedToWorld, float_t  AspectRatio, ::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings  m_OversizeWindowSettings, float_t  MaxComputationTimePerFrameInSeconds, ::UnityEngine::Matrix4x4  m_BakedToWorld, ::UnityW<::UnityEngine::Collider2D>  m_BoundingShape2D) noexcept  {
this->ConfinerOven = ConfinerOven;
this->OriginalPath = OriginalPath;
this->DeltaWorldToBaked = DeltaWorldToBaked;
this->DeltaBakedToWorld = DeltaBakedToWorld;
this->AspectRatio = AspectRatio;
this->m_OversizeWindowSettings = m_OversizeWindowSettings;
this->MaxComputationTimePerFrameInSeconds = MaxComputationTimePerFrameInSeconds;
this->m_BakedToWorld = m_BakedToWorld;
this->m_BoundingShape2D = m_BoundingShape2D;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineConfiner2D_ShapeCache::CinemachineConfiner2D_ShapeCache()   {
}
