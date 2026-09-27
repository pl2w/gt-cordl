#pragma once
// IWYU pragma private; include "GlobalNamespace/EmitSignalToBiter.hpp"
#include "GlobalNamespace/zzzz__EmitSignalToBiter_EdibleState_impl.hpp"
#include "GlobalNamespace/zzzz__GTSignalEmitter_impl.hpp"
#include "GlobalNamespace/zzzz__EmitSignalToBiter_def.hpp"
#include "GlobalNamespace/zzzz__EdibleHoldable_def.hpp"
#include "GlobalNamespace/zzzz__EmitSignalToBiter_EdibleState_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EmitSignalToBiter.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EmitSignalToBiter::*)()>(&::GlobalNamespace::EmitSignalToBiter::Emit)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5803458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EmitSignalToBiter*>(),
                    {::i2c::class_of<::GlobalNamespace::EmitSignalToBiter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmitSignalToBiter.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EmitSignalToBiter::*)(int32_t)>(&::GlobalNamespace::EmitSignalToBiter::Emit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58035bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EmitSignalToBiter*>(),
                    {::i2c::class_of<::GlobalNamespace::EmitSignalToBiter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmitSignalToBiter.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EmitSignalToBiter::*)(::ArrayW<::System::Object*>)>(&::GlobalNamespace::EmitSignalToBiter::Emit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58035c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EmitSignalToBiter*>(),
                    {::i2c::class_of<::GlobalNamespace::EmitSignalToBiter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmitSignalToBiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EmitSignalToBiter::*)()>(&::GlobalNamespace::EmitSignalToBiter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58035c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EmitSignalToBiter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EdibleHoldable>& GlobalNamespace::EmitSignalToBiter::__cordl_internal_get_targetEdible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetEdible;
}
constexpr ::UnityW<::GlobalNamespace::EdibleHoldable> const& GlobalNamespace::EmitSignalToBiter::__cordl_internal_get_targetEdible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetEdible;
}
constexpr void GlobalNamespace::EmitSignalToBiter::__cordl_internal_set_targetEdible(::UnityW<::GlobalNamespace::EdibleHoldable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetEdible = value;
}
constexpr ::GlobalNamespace::EmitSignalToBiter_EdibleState& GlobalNamespace::EmitSignalToBiter::__cordl_internal_get_onEdibleState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEdibleState;
}
constexpr ::GlobalNamespace::EmitSignalToBiter_EdibleState const& GlobalNamespace::EmitSignalToBiter::__cordl_internal_get_onEdibleState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEdibleState;
}
constexpr void GlobalNamespace::EmitSignalToBiter::__cordl_internal_set_onEdibleState(::GlobalNamespace::EmitSignalToBiter_EdibleState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEdibleState = value;
}
inline void GlobalNamespace::EmitSignalToBiter::Emit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EmitSignalToBiter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EmitSignalToBiter::Emit(int32_t  targetActor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EmitSignalToBiter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetActor);
}
inline void GlobalNamespace::EmitSignalToBiter::Emit(/* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EmitSignalToBiter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::EmitSignalToBiter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EmitSignalToBiter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EmitSignalToBiter* GlobalNamespace::EmitSignalToBiter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EmitSignalToBiter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EmitSignalToBiter::EmitSignalToBiter()   {
}
