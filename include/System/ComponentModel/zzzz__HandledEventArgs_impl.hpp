#pragma once
// IWYU pragma private; include "System/ComponentModel/HandledEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__HandledEventArgs_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::HandledEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::HandledEventArgs::*)()>(&::System::ComponentModel::HandledEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad58610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::HandledEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::HandledEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::HandledEventArgs::*)(bool)>(&::System::ComponentModel::HandledEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xad58618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::HandledEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::HandledEventArgs.get_Handled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::HandledEventArgs::*)()>(&::System::ComponentModel::HandledEventArgs::get_Handled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad58688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::HandledEventArgs*>(),
                        {"get_Handled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::HandledEventArgs.set_Handled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::HandledEventArgs::*)(bool)>(&::System::ComponentModel::HandledEventArgs::set_Handled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad58690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::HandledEventArgs*>(),
                        {"set_Handled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::HandledEventArgs::__cordl_internal_get__Handled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Handled_k__BackingField;
}
constexpr bool const& System::ComponentModel::HandledEventArgs::__cordl_internal_get__Handled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Handled_k__BackingField;
}
constexpr void System::ComponentModel::HandledEventArgs::__cordl_internal_set__Handled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Handled_k__BackingField = value;
}
inline void System::ComponentModel::HandledEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::HandledEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::HandledEventArgs::_ctor(bool  defaultHandledValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::HandledEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultHandledValue);
}
inline bool System::ComponentModel::HandledEventArgs::get_Handled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::HandledEventArgs*>(),
                        {"get_Handled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::ComponentModel::HandledEventArgs::set_Handled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::HandledEventArgs*>(),
                        {"set_Handled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::ComponentModel::HandledEventArgs* System::ComponentModel::HandledEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::HandledEventArgs*>());
}
inline ::System::ComponentModel::HandledEventArgs* System::ComponentModel::HandledEventArgs::New_ctor(bool  defaultHandledValue)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::HandledEventArgs*>(defaultHandledValue));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::HandledEventArgs::HandledEventArgs()   {
}
