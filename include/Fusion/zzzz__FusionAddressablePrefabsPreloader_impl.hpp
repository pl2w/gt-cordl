#pragma once
// IWYU pragma private; include "Fusion/FusionAddressablePrefabsPreloader.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Fusion/zzzz__FusionAddressablePrefabsPreloader_def.hpp"
#include "Fusion/zzzz__FusionAddressablePrefabsPreloader__Start_d__1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Fusion::FusionAddressablePrefabsPreloader.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionAddressablePrefabsPreloader::*)()>(&::Fusion::FusionAddressablePrefabsPreloader::Start)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x60e9704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionAddressablePrefabsPreloader*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionAddressablePrefabsPreloader.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionAddressablePrefabsPreloader::*)()>(&::Fusion::FusionAddressablePrefabsPreloader::OnDestroy)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x60e97b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionAddressablePrefabsPreloader*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionAddressablePrefabsPreloader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionAddressablePrefabsPreloader::*)()>(&::Fusion::FusionAddressablePrefabsPreloader::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x60e9938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionAddressablePrefabsPreloader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>*& Fusion::FusionAddressablePrefabsPreloader::__cordl_internal_get__handles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handles;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>* const& Fusion::FusionAddressablePrefabsPreloader::__cordl_internal_get__handles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handles;
}
constexpr void Fusion::FusionAddressablePrefabsPreloader::__cordl_internal_set__handles(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handles = value;
}
inline void Fusion::FusionAddressablePrefabsPreloader::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionAddressablePrefabsPreloader*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionAddressablePrefabsPreloader::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionAddressablePrefabsPreloader*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionAddressablePrefabsPreloader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionAddressablePrefabsPreloader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::FusionAddressablePrefabsPreloader* Fusion::FusionAddressablePrefabsPreloader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionAddressablePrefabsPreloader*>());
}
// Ctor Parameters []
constexpr ::Fusion::FusionAddressablePrefabsPreloader::FusionAddressablePrefabsPreloader()   {
}
