#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SingletonMonoBehaviour.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SingletonMonoBehaviour_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SingletonMonoBehaviour_def.hpp"
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour::SingletonMonoBehaviour()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f54508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings::__cordl_internal_get_dontDestroyOnLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontDestroyOnLoad;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings::__cordl_internal_get_dontDestroyOnLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontDestroyOnLoad;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings::__cordl_internal_set_dontDestroyOnLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dontDestroyOnLoad = value;
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings* Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings::SingletonMonoBehaviour_InstantiationSettings()   {
}
