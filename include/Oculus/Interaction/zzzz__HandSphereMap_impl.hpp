#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandSphereMap.hpp"
#include "Oculus/Interaction/zzzz__HandSphere_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__HandSphereMap_def.hpp"
#include "Oculus/Interaction/Input/zzzz__FromHandPrefabDataSource_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/zzzz__HandSphere_def.hpp"
#include "Oculus/Interaction/zzzz__IHandSphereMap_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandSphereMap.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandSphereMap::*)()>(&::Oculus::Interaction::HandSphereMap::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa464fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandSphereMap*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandSphereMap*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandSphereMap.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandSphereMap::*)()>(&::Oculus::Interaction::HandSphereMap::Start)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0xa4650b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandSphereMap*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandSphereMap*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandSphereMap.GetSpheres
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandSphereMap::*)(::Oculus::Interaction::Input::Handedness, ::Oculus::Interaction::Input::HandJointId, ::UnityEngine::Pose, float_t, ::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*)>(&::Oculus::Interaction::HandSphereMap::GetSpheres)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xa46557c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandSphereMap*>(),
                        {"GetSpheres", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandSphereMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandSphereMap::*)()>(&::Oculus::Interaction::HandSphereMap::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa4657a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandSphereMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Input::FromHandPrefabDataSource>& Oculus::Interaction::HandSphereMap::__cordl_internal_get__handPrefabDataSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handPrefabDataSource;
}
constexpr ::UnityW<::Oculus::Interaction::Input::FromHandPrefabDataSource> const& Oculus::Interaction::HandSphereMap::__cordl_internal_get__handPrefabDataSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handPrefabDataSource;
}
constexpr void Oculus::Interaction::HandSphereMap::__cordl_internal_set__handPrefabDataSource(::UnityW<::Oculus::Interaction::Input::FromHandPrefabDataSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handPrefabDataSource = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*>& Oculus::Interaction::HandSphereMap::__cordl_internal_get__sourceSphereMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceSphereMap;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*> const& Oculus::Interaction::HandSphereMap::__cordl_internal_get__sourceSphereMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceSphereMap;
}
constexpr void Oculus::Interaction::HandSphereMap::__cordl_internal_set__sourceSphereMap(::ArrayW<::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceSphereMap = value;
}
inline void Oculus::Interaction::HandSphereMap::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandSphereMap*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandSphereMap::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandSphereMap*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandSphereMap::GetSpheres(::Oculus::Interaction::Input::Handedness  handedness, ::Oculus::Interaction::Input::HandJointId  jointId, ::UnityEngine::Pose  jointPose, float_t  scale, ::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*  spheres)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandSphereMap*>(),
                        {"GetSpheres", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handedness, jointId, jointPose, scale, spheres);
}
inline void Oculus::Interaction::HandSphereMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandSphereMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandSphereMap* Oculus::Interaction::HandSphereMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandSphereMap*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IHandSphereMap"
constexpr  Oculus::Interaction::HandSphereMap::operator ::Oculus::Interaction::IHandSphereMap*() noexcept {
return static_cast<::Oculus::Interaction::IHandSphereMap*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IHandSphereMap"
constexpr ::Oculus::Interaction::IHandSphereMap* Oculus::Interaction::HandSphereMap::i___Oculus__Interaction__IHandSphereMap() noexcept {
return static_cast<::Oculus::Interaction::IHandSphereMap*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandSphereMap::HandSphereMap()   {
}
