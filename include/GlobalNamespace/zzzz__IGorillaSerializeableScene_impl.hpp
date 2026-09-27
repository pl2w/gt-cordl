#pragma once
// IWYU pragma private; include "GlobalNamespace/IGorillaSerializeableScene.hpp"
#include "GlobalNamespace/zzzz__IGorillaSerializeableScene_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSerializerScene_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSerializeable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IGorillaSerializeableScene.OnSceneLinking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGorillaSerializeableScene::*)(::GlobalNamespace::GorillaSerializerScene*)>(&::GlobalNamespace::IGorillaSerializeableScene::OnSceneLinking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGorillaSerializeableScene*>(),
                    {::i2c::class_of<::GlobalNamespace::IGorillaSerializeableScene*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGorillaSerializeableScene.OnNetworkObjectDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGorillaSerializeableScene::*)()>(&::GlobalNamespace::IGorillaSerializeableScene::OnNetworkObjectDisable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGorillaSerializeableScene*>(),
                    {::i2c::class_of<::GlobalNamespace::IGorillaSerializeableScene*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGorillaSerializeableScene.OnNetworkObjectEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGorillaSerializeableScene::*)()>(&::GlobalNamespace::IGorillaSerializeableScene::OnNetworkObjectEnable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGorillaSerializeableScene*>(),
                    {::i2c::class_of<::GlobalNamespace::IGorillaSerializeableScene*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IGorillaSerializeableScene::OnSceneLinking(::GlobalNamespace::GorillaSerializerScene*  serializer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGorillaSerializeableScene*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializer);
}
inline void GlobalNamespace::IGorillaSerializeableScene::OnNetworkObjectDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGorillaSerializeableScene*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IGorillaSerializeableScene::OnNetworkObjectEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGorillaSerializeableScene*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSerializeable"
constexpr  GlobalNamespace::IGorillaSerializeableScene::operator ::GlobalNamespace::IGorillaSerializeable*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSerializeable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSerializeable"
constexpr ::GlobalNamespace::IGorillaSerializeable* GlobalNamespace::IGorillaSerializeableScene::i___GlobalNamespace__IGorillaSerializeable() noexcept {
return static_cast<::GlobalNamespace::IGorillaSerializeable*>(static_cast<void*>(this));
}
