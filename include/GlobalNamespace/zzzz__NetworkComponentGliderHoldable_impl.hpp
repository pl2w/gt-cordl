#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkComponentGliderHoldable.hpp"
#include "GlobalNamespace/zzzz__NetworkComponentCallbacks_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponentGliderHoldable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkComponentGliderHoldable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkComponentGliderHoldable::*)()>(&::GlobalNamespace::NetworkComponentGliderHoldable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e8980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkComponentGliderHoldable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkComponentGliderHoldable.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkComponentGliderHoldable::*)(bool)>(&::GlobalNamespace::NetworkComponentGliderHoldable::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56e8988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkComponentGliderHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkComponentGliderHoldable*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkComponentGliderHoldable.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkComponentGliderHoldable::*)()>(&::GlobalNamespace::NetworkComponentGliderHoldable::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56e898c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkComponentGliderHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkComponentGliderHoldable*>(), 24}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkComponentGliderHoldable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkComponentGliderHoldable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkComponentGliderHoldable::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkComponentGliderHoldable*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::NetworkComponentGliderHoldable::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkComponentGliderHoldable*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkComponentGliderHoldable* GlobalNamespace::NetworkComponentGliderHoldable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkComponentGliderHoldable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkComponentGliderHoldable::NetworkComponentGliderHoldable()   {
}
