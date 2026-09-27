#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaBallWall.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaBallWall_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaBallWall.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBallWall::*)()>(&::GlobalNamespace::GorillaBallWall::Awake)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5901db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBallWall*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBallWall.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBallWall::*)()>(&::GlobalNamespace::GorillaBallWall::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5901ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBallWall*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBallWall._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBallWall::*)()>(&::GlobalNamespace::GorillaBallWall::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5901ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBallWall*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaBallWall::setStaticF_instance(::UnityW<::GlobalNamespace::GorillaBallWall>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GorillaBallWall>, "instance", ::GlobalNamespace::GorillaBallWall*>(std::forward<::UnityW<::GlobalNamespace::GorillaBallWall>>(value));
}
inline ::UnityW<::GlobalNamespace::GorillaBallWall> GlobalNamespace::GorillaBallWall::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GorillaBallWall>, "instance", ::GlobalNamespace::GorillaBallWall*>();
}
inline void GlobalNamespace::GorillaBallWall::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBallWall*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaBallWall::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBallWall*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaBallWall::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBallWall*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaBallWall* GlobalNamespace::GorillaBallWall::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaBallWall*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaBallWall::GorillaBallWall()   {
}
