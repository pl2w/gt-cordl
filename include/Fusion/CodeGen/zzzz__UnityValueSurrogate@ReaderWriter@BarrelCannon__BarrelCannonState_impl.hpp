#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState.hpp"
#include "Fusion/CodeGen/zzzz__ReaderWriter@BarrelCannon__BarrelCannonState_impl.hpp"
#include "Fusion/Internal/zzzz__UnityValueSurrogate_2_impl.hpp"
#include "GlobalNamespace/zzzz__BarrelCannon_BarrelCannonState_impl.hpp"
#include "Fusion/CodeGen/zzzz__UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState_def.hpp"
#include "GlobalNamespace/zzzz__BarrelCannon_BarrelCannonState_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState.get_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BarrelCannon_BarrelCannonState (::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState::*)()>(&::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState::get_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2ea1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState.set_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState::*)(::GlobalNamespace::BarrelCannon_BarrelCannonState)>(&::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState::set_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2ea24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState::*)()>(&::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e2ea2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonState& Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonState const& Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState::__cordl_internal_set_Data(::GlobalNamespace::BarrelCannon_BarrelCannonState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
inline ::GlobalNamespace::BarrelCannon_BarrelCannonState Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BarrelCannon_BarrelCannonState>(this, ___internal_method);
}
inline void Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState::set_DataProperty(::GlobalNamespace::BarrelCannon_BarrelCannonState  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [WeaverGenerated]
inline ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState* Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState*>());
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState::UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState()   {
}
