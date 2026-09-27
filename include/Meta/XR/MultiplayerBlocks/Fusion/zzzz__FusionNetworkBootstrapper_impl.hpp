#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/FusionNetworkBootstrapper.hpp"
#include "Fusion/zzzz__NetworkBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__NetworkBootstrapperParams_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__FusionNetworkBootstrapper_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionMessenger_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionNetworkData_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__PlatformInfo_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::Awake)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9f59da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper.Spawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::Spawned)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f59ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper.OnColocationReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::OnColocationReady)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9f59f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(),
                        {"OnColocationReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f59fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper._Awake_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::_Awake_b__4_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9f59fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(),
                        {"<Awake>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper._Spawned_b__5_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::*)(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::_Spawned_b__5_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9f5a064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(),
                        {"<Spawned>b__5_0", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::*)(bool)>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f5a0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f5a0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::__cordl_internal_get_anchorPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::__cordl_internal_get_anchorPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorPrefab;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::__cordl_internal_set_anchorPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchorPrefab = value;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData>& Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::__cordl_internal_get_networkData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkData;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData> const& Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::__cordl_internal_get_networkData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkData;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::__cordl_internal_set_networkData(::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkData = value;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger>& Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::__cordl_internal_get_networkMessenger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkMessenger;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger> const& Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::__cordl_internal_get_networkMessenger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkMessenger;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::__cordl_internal_set_networkMessenger(::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkMessenger = value;
}
constexpr ::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams& Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::__cordl_internal_get__params()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____params;
}
constexpr ::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams const& Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::__cordl_internal_get__params() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____params;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::__cordl_internal_set__params(::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____params = value;
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::Spawned()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::OnColocationReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(),
                        {"OnColocationReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::_Awake_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(),
                        {"<Awake>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::_Spawned_b__5_0(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(),
                        {"<Spawned>b__5_0", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper* Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper::FusionNetworkBootstrapper()   {
}
