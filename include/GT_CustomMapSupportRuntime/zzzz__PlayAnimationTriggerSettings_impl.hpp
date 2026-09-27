#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/PlayAnimationTriggerSettings.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSettings_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__PlayAnimationTriggerSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings.PropagateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings::*)()>(&::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings::PropagateProperties)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cb81c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings*>(),
                    {::i2c::class_of<::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings::*)()>(&::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9cb81d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings::__cordl_internal_get_syncedToAllPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedToAllPlayers;
}
constexpr bool const& GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings::__cordl_internal_get_syncedToAllPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedToAllPlayers;
}
constexpr void GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings::__cordl_internal_set_syncedToAllPlayers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncedToAllPlayers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings::__cordl_internal_get_animatedObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatedObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings::__cordl_internal_get_animatedObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatedObjects;
}
constexpr void GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings::__cordl_internal_set_animatedObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animatedObjects = value;
}
constexpr ::StringW& GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings::__cordl_internal_get_animationName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationName;
}
constexpr ::StringW const& GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings::__cordl_internal_get_animationName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationName;
}
constexpr void GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings::__cordl_internal_set_animationName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationName = value;
}
inline void GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings::PropagateProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings* GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings::PlayAnimationTriggerSettings()   {
}
