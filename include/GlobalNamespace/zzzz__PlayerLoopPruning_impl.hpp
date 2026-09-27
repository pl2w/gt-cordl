#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerLoopPruning.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerLoopPruning_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerLoopPruning.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLoopPruning::*)()>(&::GlobalNamespace::PlayerLoopPruning::Start)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x57123c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLoopPruning*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLoopPruning.PhaseSyncDestroyer3000Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PlayerLoopPruning::PhaseSyncDestroyer3000Start)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x57124a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLoopPruning*>(),
                        {"PhaseSyncDestroyer3000Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLoopPruning.PhaseSyncDestroyer3000End
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PlayerLoopPruning::PhaseSyncDestroyer3000End)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5712550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLoopPruning*>(),
                        {"PhaseSyncDestroyer3000End", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLoopPruning._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLoopPruning::*)()>(&::GlobalNamespace::PlayerLoopPruning::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57126e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLoopPruning*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::PlayerLoopPruning::__cordl_internal_get_removeSubsystemList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeSubsystemList;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::PlayerLoopPruning::__cordl_internal_get_removeSubsystemList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeSubsystemList;
}
constexpr void GlobalNamespace::PlayerLoopPruning::__cordl_internal_set_removeSubsystemList(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___removeSubsystemList = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::PlayerLoopPruning::__cordl_internal_get_androidSubsystemExtras()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___androidSubsystemExtras;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::PlayerLoopPruning::__cordl_internal_get_androidSubsystemExtras() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___androidSubsystemExtras;
}
constexpr void GlobalNamespace::PlayerLoopPruning::__cordl_internal_set_androidSubsystemExtras(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___androidSubsystemExtras = value;
}
constexpr bool& GlobalNamespace::PlayerLoopPruning::__cordl_internal_get_isAndroid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAndroid;
}
constexpr bool const& GlobalNamespace::PlayerLoopPruning::__cordl_internal_get_isAndroid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAndroid;
}
constexpr void GlobalNamespace::PlayerLoopPruning::__cordl_internal_set_isAndroid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAndroid = value;
}
inline void GlobalNamespace::PlayerLoopPruning::setStaticF_sw(::System::Diagnostics::Stopwatch*  value)  {
::cordl_internals::setStaticField<::System::Diagnostics::Stopwatch*, "sw", ::GlobalNamespace::PlayerLoopPruning*>(std::forward<::System::Diagnostics::Stopwatch*>(value));
}
inline ::System::Diagnostics::Stopwatch* GlobalNamespace::PlayerLoopPruning::getStaticF_sw()  {
return ::cordl_internals::getStaticField<::System::Diagnostics::Stopwatch*, "sw", ::GlobalNamespace::PlayerLoopPruning*>();
}
inline void GlobalNamespace::PlayerLoopPruning::setStaticF_slop(float_t  value)  {
::cordl_internals::setStaticField<float_t, "slop", ::GlobalNamespace::PlayerLoopPruning*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::PlayerLoopPruning::getStaticF_slop()  {
return ::cordl_internals::getStaticField<float_t, "slop", ::GlobalNamespace::PlayerLoopPruning*>();
}
inline void GlobalNamespace::PlayerLoopPruning::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLoopPruning*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::UnityEngine::LowLevel::PlayerLoopSystem GlobalNamespace::PlayerLoopPruning::RemoveSystem(/* [IsReadOnly] */ ::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  loopSystem)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlayerLoopPruning*>(),
                    {"RemoveSystem", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevel::PlayerLoopSystem>(this, ___internal_method, loopSystem);
}
inline void GlobalNamespace::PlayerLoopPruning::PhaseSyncDestroyer3000Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLoopPruning*>(),
                        {"PhaseSyncDestroyer3000Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerLoopPruning::PhaseSyncDestroyer3000End()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLoopPruning*>(),
                        {"PhaseSyncDestroyer3000End", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerLoopPruning::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLoopPruning*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerLoopPruning* GlobalNamespace::PlayerLoopPruning::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerLoopPruning*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerLoopPruning::PlayerLoopPruning()   {
}
