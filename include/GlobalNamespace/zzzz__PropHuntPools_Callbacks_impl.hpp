#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntPools_Callbacks.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PropHuntPools_Callbacks_def.hpp"
#include "GlobalNamespace/zzzz__ZoneData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools_Callbacks.ListenForZoneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntPools_Callbacks::*)()>(&::GlobalNamespace::PropHuntPools_Callbacks::ListenForZoneChanged)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x563a890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools_Callbacks*>(),
                        {"ListenForZoneChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools_Callbacks._OnZoneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntPools_Callbacks::*)(::ArrayW<::GlobalNamespace::ZoneData*>)>(&::GlobalNamespace::PropHuntPools_Callbacks::_OnZoneChanged)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x563e8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools_Callbacks*>(),
                        {"_OnZoneChanged", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools_Callbacks._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntPools_Callbacks::*)()>(&::GlobalNamespace::PropHuntPools_Callbacks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x563e8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools_Callbacks*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PropHuntPools_Callbacks::setStaticF_instance(::GlobalNamespace::PropHuntPools_Callbacks*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PropHuntPools_Callbacks*, "instance", ::GlobalNamespace::PropHuntPools_Callbacks*>(std::forward<::GlobalNamespace::PropHuntPools_Callbacks*>(value));
}
inline ::GlobalNamespace::PropHuntPools_Callbacks* GlobalNamespace::PropHuntPools_Callbacks::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PropHuntPools_Callbacks*, "instance", ::GlobalNamespace::PropHuntPools_Callbacks*>();
}
inline void GlobalNamespace::PropHuntPools_Callbacks::setStaticF__isListeningForZoneChanged(bool  value)  {
::cordl_internals::setStaticField<bool, "_isListeningForZoneChanged", ::GlobalNamespace::PropHuntPools_Callbacks*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::PropHuntPools_Callbacks::getStaticF__isListeningForZoneChanged()  {
return ::cordl_internals::getStaticField<bool, "_isListeningForZoneChanged", ::GlobalNamespace::PropHuntPools_Callbacks*>();
}
inline void GlobalNamespace::PropHuntPools_Callbacks::ListenForZoneChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools_Callbacks*>(),
                        {"ListenForZoneChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntPools_Callbacks::_OnZoneChanged(::ArrayW<::GlobalNamespace::ZoneData*>  zoneDatas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools_Callbacks*>(),
                        {"_OnZoneChanged", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zoneDatas);
}
inline void GlobalNamespace::PropHuntPools_Callbacks::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools_Callbacks*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropHuntPools_Callbacks* GlobalNamespace::PropHuntPools_Callbacks::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropHuntPools_Callbacks*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropHuntPools_Callbacks::PropHuntPools_Callbacks()   {
}
