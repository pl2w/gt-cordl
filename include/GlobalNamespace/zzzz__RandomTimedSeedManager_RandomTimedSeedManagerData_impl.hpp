#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomTimedSeedManager_RandomTimedSeedManagerData.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@1_impl.hpp"
#include "GlobalNamespace/zzzz__RandomTimedSeedManager_RandomTimedSeedManagerData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData.get_seed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::*)()>(&::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::get_seed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5693784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData>(),
                        {"get_seed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData.set_seed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::*)(int32_t)>(&::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::set_seed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5693c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData>(),
                        {"set_seed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData.get_currentSyncTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::*)()>(&::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::get_currentSyncTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x56937c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData>(),
                        {"get_currentSyncTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData.set_currentSyncTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::*)(float_t)>(&::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::set_currentSyncTime)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5693ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData>(),
                        {"set_currentSyncTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::*)(int32_t, float_t)>(&::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5693690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::CodeGen::FixedStorage@1& GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::__cordl_internal_get__seed()  {
return this->____seed;
}
constexpr ::Fusion::CodeGen::FixedStorage@1 const& GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::__cordl_internal_get__seed() const {
return this->____seed;
}
constexpr void GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::__cordl_internal_set__seed(::Fusion::CodeGen::FixedStorage@1  value)  {
this->____seed = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@1& GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::__cordl_internal_get__currentSyncTime()  {
return this->____currentSyncTime;
}
constexpr ::Fusion::CodeGen::FixedStorage@1 const& GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::__cordl_internal_get__currentSyncTime() const {
return this->____currentSyncTime;
}
constexpr void GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::__cordl_internal_set__currentSyncTime(::Fusion::CodeGen::FixedStorage@1  value)  {
this->____currentSyncTime = value;
}
inline int32_t GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::get_seed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData>(),
                        {"get_seed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::set_seed(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData>(),
                        {"set_seed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::get_currentSyncTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData>(),
                        {"get_currentSyncTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::set_currentSyncTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData>(),
                        {"set_currentSyncTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::_ctor(int32_t  seed, float_t  currentSyncTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, seed, currentSyncTime);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_seed", ty: "::Fusion::CodeGen::FixedStorage@1", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_currentSyncTime", ty: "::Fusion::CodeGen::FixedStorage@1", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::RandomTimedSeedManager_RandomTimedSeedManagerData(::Fusion::CodeGen::FixedStorage@1  _seed, ::Fusion::CodeGen::FixedStorage@1  _currentSyncTime) noexcept  {
this->_seed = _seed;
this->_currentSyncTime = _currentSyncTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData::RandomTimedSeedManager_RandomTimedSeedManagerData()   {
}
