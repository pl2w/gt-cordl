#pragma once
// IWYU pragma private; include "BuildSafe/SessionState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BuildSafe/zzzz__SessionState_def.hpp"
//  Writing Method size for method: ::BuildSafe::SessionState.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BuildSafe::SessionState::*)(::StringW)>(&::BuildSafe::SessionState::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4f850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SessionState*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SessionState.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BuildSafe::SessionState::*)(::StringW, ::StringW)>(&::BuildSafe::SessionState::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4f858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SessionState*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SessionState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BuildSafe::SessionState::*)()>(&::BuildSafe::SessionState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4f85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SessionState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void BuildSafe::SessionState::setStaticF_Shared(::BuildSafe::SessionState*  value)  {
::cordl_internals::setStaticField<::BuildSafe::SessionState*, "Shared", ::BuildSafe::SessionState*>(std::forward<::BuildSafe::SessionState*>(value));
}
inline ::BuildSafe::SessionState* BuildSafe::SessionState::getStaticF_Shared()  {
return ::cordl_internals::getStaticField<::BuildSafe::SessionState*, "Shared", ::BuildSafe::SessionState*>();
}
inline ::StringW BuildSafe::SessionState::get_Item(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SessionState*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key);
}
inline void BuildSafe::SessionState::set_Item(::StringW  key, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SessionState*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void BuildSafe::SessionState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SessionState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BuildSafe::SessionState* BuildSafe::SessionState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BuildSafe::SessionState*>());
}
// Ctor Parameters []
constexpr ::BuildSafe::SessionState::SessionState()   {
}
