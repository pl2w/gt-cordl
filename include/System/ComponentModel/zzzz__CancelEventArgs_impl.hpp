#pragma once
// IWYU pragma private; include "System/ComponentModel/CancelEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__CancelEventArgs_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::CancelEventArgs.get_Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::CancelEventArgs::*)()>(&::System::ComponentModel::CancelEventArgs::get_Cancel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6bee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::CancelEventArgs*>(),
                        {"get_Cancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CancelEventArgs.set_Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::CancelEventArgs::*)(bool)>(&::System::ComponentModel::CancelEventArgs::set_Cancel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6beec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::CancelEventArgs*>(),
                        {"set_Cancel", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CancelEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::CancelEventArgs::*)()>(&::System::ComponentModel::CancelEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad6bef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::CancelEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CancelEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::CancelEventArgs::*)(bool)>(&::System::ComponentModel::CancelEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xad6bf4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::CancelEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::CancelEventArgs::__cordl_internal_get__Cancel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cancel_k__BackingField;
}
constexpr bool const& System::ComponentModel::CancelEventArgs::__cordl_internal_get__Cancel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cancel_k__BackingField;
}
constexpr void System::ComponentModel::CancelEventArgs::__cordl_internal_set__Cancel_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Cancel_k__BackingField = value;
}
inline bool System::ComponentModel::CancelEventArgs::get_Cancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::CancelEventArgs*>(),
                        {"get_Cancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::ComponentModel::CancelEventArgs::set_Cancel(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::CancelEventArgs*>(),
                        {"set_Cancel", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::ComponentModel::CancelEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::CancelEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::CancelEventArgs::_ctor(bool  cancel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::CancelEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancel);
}
inline ::System::ComponentModel::CancelEventArgs* System::ComponentModel::CancelEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::CancelEventArgs*>());
}
inline ::System::ComponentModel::CancelEventArgs* System::ComponentModel::CancelEventArgs::New_ctor(bool  cancel)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::CancelEventArgs*>(cancel));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::CancelEventArgs::CancelEventArgs()   {
}
