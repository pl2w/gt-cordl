#pragma once
// IWYU pragma private; include "Fusion/ISceneLoadDone.hpp"
#include "Fusion/zzzz__ISceneLoadDone_def.hpp"
#include "Fusion/zzzz__IPublicFacingInterface_def.hpp"
#include "Fusion/zzzz__SceneLoadDoneArgs_def.hpp"
//  Writing Method size for method: ::Fusion::ISceneLoadDone.SceneLoadDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ISceneLoadDone::*)(::by_ref<::Fusion::SceneLoadDoneArgs>)>(&::Fusion::ISceneLoadDone::SceneLoadDone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ISceneLoadDone*>(),
                    {::i2c::class_of<::Fusion::ISceneLoadDone*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Fusion::ISceneLoadDone::SceneLoadDone(/* [IsReadOnly] */ ::by_ref<::Fusion::SceneLoadDoneArgs>  sceneInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ISceneLoadDone*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneInfo);
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Fusion::ISceneLoadDone::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Fusion::ISceneLoadDone::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
