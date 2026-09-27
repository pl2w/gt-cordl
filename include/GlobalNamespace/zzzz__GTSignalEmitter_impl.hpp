#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSignalEmitter.hpp"
#include "GlobalNamespace/zzzz__GTSignalID_impl.hpp"
#include "GlobalNamespace/zzzz__GTSignal_EmitMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GTSignalEmitter_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTSignalEmitter.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalEmitter::*)()>(&::GlobalNamespace::GTSignalEmitter::Emit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x594a464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTSignalEmitter*>(),
                    {::i2c::class_of<::GlobalNamespace::GTSignalEmitter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalEmitter.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalEmitter::*)(int32_t)>(&::GlobalNamespace::GTSignalEmitter::Emit)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x594a534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTSignalEmitter*>(),
                    {::i2c::class_of<::GlobalNamespace::GTSignalEmitter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalEmitter.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalEmitter::*)(::ArrayW<::System::Object*>)>(&::GlobalNamespace::GTSignalEmitter::Emit)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x594a610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTSignalEmitter*>(),
                    {::i2c::class_of<::GlobalNamespace::GTSignalEmitter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSignalEmitter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSignalEmitter::*)()>(&::GlobalNamespace::GTSignalEmitter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x594a67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalEmitter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTSignalID& GlobalNamespace::GTSignalEmitter::__cordl_internal_get_signal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signal;
}
constexpr ::GlobalNamespace::GTSignalID const& GlobalNamespace::GTSignalEmitter::__cordl_internal_get_signal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signal;
}
constexpr void GlobalNamespace::GTSignalEmitter::__cordl_internal_set_signal(::GlobalNamespace::GTSignalID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___signal = value;
}
constexpr ::GlobalNamespace::GTSignal_EmitMode& GlobalNamespace::GTSignalEmitter::__cordl_internal_get_emitMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitMode;
}
constexpr ::GlobalNamespace::GTSignal_EmitMode const& GlobalNamespace::GTSignalEmitter::__cordl_internal_get_emitMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitMode;
}
constexpr void GlobalNamespace::GTSignalEmitter::__cordl_internal_set_emitMode(::GlobalNamespace::GTSignal_EmitMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emitMode = value;
}
inline void GlobalNamespace::GTSignalEmitter::Emit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTSignalEmitter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTSignalEmitter::Emit(int32_t  targetActor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTSignalEmitter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetActor);
}
inline void GlobalNamespace::GTSignalEmitter::Emit(/* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTSignalEmitter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::GTSignalEmitter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSignalEmitter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GTSignalEmitter* GlobalNamespace::GTSignalEmitter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTSignalEmitter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTSignalEmitter::GTSignalEmitter()   {
}
