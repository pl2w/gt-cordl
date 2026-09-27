#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/TestTone.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Voice/Unity/UtilityScripts/zzzz__TestTone_def.hpp"
#include "Photon/Voice/Unity/UtilityScripts/zzzz__TestTone_def.hpp"
#include "Photon/Voice/zzzz__IAudioDesc_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::TestTone.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::TestTone::*)()>(&::Photon::Voice::Unity::UtilityScripts::TestTone::Start)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa78d3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::TestTone*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::TestTone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::TestTone::*)()>(&::Photon::Voice::Unity::UtilityScripts::TestTone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa78d520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::TestTone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::Unity::UtilityScripts::TestTone::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::TestTone*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::TestTone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::TestTone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::UtilityScripts::TestTone* Photon::Voice::Unity::UtilityScripts::TestTone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::UtilityScripts::TestTone*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::UtilityScripts::TestTone::TestTone()   {
}
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::TestTone___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::TestTone___c::*)()>(&::Photon::Voice::Unity::UtilityScripts::TestTone___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa78d590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::TestTone___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::TestTone___c._Start_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::IAudioDesc* (::Photon::Voice::Unity::UtilityScripts::TestTone___c::*)()>(&::Photon::Voice::Unity::UtilityScripts::TestTone___c::_Start_b__0_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa78d598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::TestTone___c*>(),
                        {"<Start>b__0_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::Unity::UtilityScripts::TestTone___c::setStaticF___9(::Photon::Voice::Unity::UtilityScripts::TestTone___c*  value)  {
::cordl_internals::setStaticField<::Photon::Voice::Unity::UtilityScripts::TestTone___c*, "<>9", ::Photon::Voice::Unity::UtilityScripts::TestTone___c*>(std::forward<::Photon::Voice::Unity::UtilityScripts::TestTone___c*>(value));
}
inline ::Photon::Voice::Unity::UtilityScripts::TestTone___c* Photon::Voice::Unity::UtilityScripts::TestTone___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Photon::Voice::Unity::UtilityScripts::TestTone___c*, "<>9", ::Photon::Voice::Unity::UtilityScripts::TestTone___c*>();
}
inline void Photon::Voice::Unity::UtilityScripts::TestTone___c::setStaticF___9__0_0(::System::Func_1<::Photon::Voice::IAudioDesc*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::Photon::Voice::IAudioDesc*>*, "<>9__0_0", ::Photon::Voice::Unity::UtilityScripts::TestTone___c*>(std::forward<::System::Func_1<::Photon::Voice::IAudioDesc*>*>(value));
}
inline ::System::Func_1<::Photon::Voice::IAudioDesc*>* Photon::Voice::Unity::UtilityScripts::TestTone___c::getStaticF___9__0_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::Photon::Voice::IAudioDesc*>*, "<>9__0_0", ::Photon::Voice::Unity::UtilityScripts::TestTone___c*>();
}
inline void Photon::Voice::Unity::UtilityScripts::TestTone___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::TestTone___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::IAudioDesc* Photon::Voice::Unity::UtilityScripts::TestTone___c::_Start_b__0_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::TestTone___c*>(),
                        {"<Start>b__0_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IAudioDesc*>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::UtilityScripts::TestTone___c* Photon::Voice::Unity::UtilityScripts::TestTone___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::UtilityScripts::TestTone___c*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::UtilityScripts::TestTone___c::TestTone___c()   {
}
