#pragma once
// IWYU pragma private; include "GlobalNamespace/GtLckServiceInitializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GtLckServiceInitializer_def.hpp"
#include "GlobalNamespace/zzzz__GtLckServiceInitializer_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckDiContainer_def.hpp"
#include "Liv/Lck/zzzz__LckQualityConfig_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GtLckServiceInitializer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GtLckServiceInitializer::*)()>(&::GlobalNamespace::GtLckServiceInitializer::Awake)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x56c2000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckServiceInitializer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GtLckServiceInitializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GtLckServiceInitializer::*)()>(&::GlobalNamespace::GtLckServiceInitializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c219c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckServiceInitializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::LckQualityConfig>& GlobalNamespace::GtLckServiceInitializer::__cordl_internal_get__qualityConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualityConfig;
}
constexpr ::UnityW<::Liv::Lck::LckQualityConfig> const& GlobalNamespace::GtLckServiceInitializer::__cordl_internal_get__qualityConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualityConfig;
}
constexpr void GlobalNamespace::GtLckServiceInitializer::__cordl_internal_set__qualityConfig(::UnityW<::Liv::Lck::LckQualityConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____qualityConfig = value;
}
inline void GlobalNamespace::GtLckServiceInitializer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckServiceInitializer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GtLckServiceInitializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckServiceInitializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GtLckServiceInitializer* GlobalNamespace::GtLckServiceInitializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GtLckServiceInitializer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GtLckServiceInitializer::GtLckServiceInitializer()   {
}
//  Writing Method size for method: ::GlobalNamespace::GtLckServiceInitializer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GtLckServiceInitializer___c::*)()>(&::GlobalNamespace::GtLckServiceInitializer___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c220c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckServiceInitializer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GtLckServiceInitializer___c._Awake_b__1_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GtLckServiceInitializer___c::*)(::Liv::Lck::DependencyInjection::LckDiContainer*)>(&::GlobalNamespace::GtLckServiceInitializer___c::_Awake_b__1_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x56c2214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckServiceInitializer___c*>(),
                        {"<Awake>b__1_0", {}, {::i2c::type_of<::Liv::Lck::DependencyInjection::LckDiContainer*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GtLckServiceInitializer___c::setStaticF___9(::GlobalNamespace::GtLckServiceInitializer___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GtLckServiceInitializer___c*, "<>9", ::GlobalNamespace::GtLckServiceInitializer___c*>(std::forward<::GlobalNamespace::GtLckServiceInitializer___c*>(value));
}
inline ::GlobalNamespace::GtLckServiceInitializer___c* GlobalNamespace::GtLckServiceInitializer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GtLckServiceInitializer___c*, "<>9", ::GlobalNamespace::GtLckServiceInitializer___c*>();
}
inline void GlobalNamespace::GtLckServiceInitializer___c::setStaticF___9__1_0(::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*, "<>9__1_0", ::GlobalNamespace::GtLckServiceInitializer___c*>(std::forward<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*>(value));
}
inline ::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>* GlobalNamespace::GtLckServiceInitializer___c::getStaticF___9__1_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*, "<>9__1_0", ::GlobalNamespace::GtLckServiceInitializer___c*>();
}
inline void GlobalNamespace::GtLckServiceInitializer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckServiceInitializer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GtLckServiceInitializer___c::_Awake_b__1_0(::Liv::Lck::DependencyInjection::LckDiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckServiceInitializer___c*>(),
                        {"<Awake>b__1_0", {}, {::i2c::type_of<::Liv::Lck::DependencyInjection::LckDiContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::GlobalNamespace::GtLckServiceInitializer___c* GlobalNamespace::GtLckServiceInitializer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GtLckServiceInitializer___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GtLckServiceInitializer___c::GtLckServiceInitializer___c()   {
}
