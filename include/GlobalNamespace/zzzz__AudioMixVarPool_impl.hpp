#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioMixVarPool.hpp"
#include "GlobalNamespace/zzzz__AudioMixVar_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AudioMixVarPool_def.hpp"
#include "GlobalNamespace/zzzz__AudioMixVar_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioMixVarPool.Rent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioMixVarPool::*)(::by_ref<::GlobalNamespace::AudioMixVar*>)>(&::GlobalNamespace::AudioMixVarPool::Rent)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x57a023c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMixVarPool*>(),
                        {"Rent", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::AudioMixVar*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioMixVarPool.Return
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioMixVarPool::*)(::GlobalNamespace::AudioMixVar*)>(&::GlobalNamespace::AudioMixVarPool::Return)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x57a02d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMixVarPool*>(),
                        {"Return", {}, {::i2c::type_of<::GlobalNamespace::AudioMixVar*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioMixVarPool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioMixVarPool::*)()>(&::GlobalNamespace::AudioMixVarPool::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x57a0384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMixVarPool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::AudioMixVar*>& GlobalNamespace::AudioMixVarPool::__cordl_internal_get__vars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vars;
}
constexpr ::ArrayW<::GlobalNamespace::AudioMixVar*> const& GlobalNamespace::AudioMixVarPool::__cordl_internal_get__vars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vars;
}
constexpr void GlobalNamespace::AudioMixVarPool::__cordl_internal_set__vars(::ArrayW<::GlobalNamespace::AudioMixVar*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vars = value;
}
inline bool GlobalNamespace::AudioMixVarPool::Rent(::by_ref<::GlobalNamespace::AudioMixVar*>  mixVar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMixVarPool*>(),
                        {"Rent", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::AudioMixVar*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mixVar);
}
inline void GlobalNamespace::AudioMixVarPool::Return(::GlobalNamespace::AudioMixVar*  mixVar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMixVarPool*>(),
                        {"Return", {}, {::i2c::type_of<::GlobalNamespace::AudioMixVar*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mixVar);
}
inline void GlobalNamespace::AudioMixVarPool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMixVarPool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioMixVarPool* GlobalNamespace::AudioMixVarPool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioMixVarPool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioMixVarPool::AudioMixVarPool()   {
}
