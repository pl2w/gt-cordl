#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_DeferredKey.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_DeferredKey_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceSetComponentStatusCompleteData_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_DeferredKey.FromEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRAnchor_DeferredKey (*)(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData)>(&::GlobalNamespace::OVRAnchor_DeferredKey::FromEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa56b5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(),
                        {"FromEvent", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_DeferredKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor_DeferredKey::*)(::GlobalNamespace::OVRAnchor_DeferredKey)>(&::GlobalNamespace::OVRAnchor_DeferredKey::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa56d118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_DeferredKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_DeferredKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor_DeferredKey::*)(::System::Object*)>(&::GlobalNamespace::OVRAnchor_DeferredKey::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa56d13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(),
                    {::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_DeferredKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRAnchor_DeferredKey::*)()>(&::GlobalNamespace::OVRAnchor_DeferredKey::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa56d1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(),
                    {::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRAnchor_DeferredKey GlobalNamespace::OVRAnchor_DeferredKey::FromEvent(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(),
                        {"FromEvent", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRAnchor_DeferredKey>(nullptr, ___internal_method, eventData);
}
inline bool GlobalNamespace::OVRAnchor_DeferredKey::Equals(::GlobalNamespace::OVRAnchor_DeferredKey  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_DeferredKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRAnchor_DeferredKey::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRAnchor_DeferredKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>"
constexpr  GlobalNamespace::OVRAnchor_DeferredKey::operator ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>* GlobalNamespace::OVRAnchor_DeferredKey::i___System__IEquatable_1___GlobalNamespace__OVRAnchor_DeferredKey_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ComponentType", ty: "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRAnchor_DeferredKey::OVRAnchor_DeferredKey(uint64_t  Space, ::GlobalNamespace::OVRPlugin_SpaceComponentType  ComponentType) noexcept  {
this->Space = Space;
this->ComponentType = ComponentType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_DeferredKey::OVRAnchor_DeferredKey()   {
}
