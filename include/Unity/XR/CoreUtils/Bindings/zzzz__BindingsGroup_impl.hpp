#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Bindings/BindingsGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/Bindings/zzzz__BindingsGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/zzzz__IEventBinding_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Bindings::BindingsGroup.AddBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Bindings::BindingsGroup::*)(::Unity::XR::CoreUtils::Bindings::IEventBinding*)>(&::Unity::XR::CoreUtils::Bindings::BindingsGroup::AddBinding)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb3fd7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::BindingsGroup*>(),
                        {"AddBinding", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Bindings::BindingsGroup.ClearBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Bindings::BindingsGroup::*)(::Unity::XR::CoreUtils::Bindings::IEventBinding*)>(&::Unity::XR::CoreUtils::Bindings::BindingsGroup::ClearBinding)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb3fd858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::BindingsGroup*>(),
                        {"ClearBinding", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Bindings::BindingsGroup.Bind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Bindings::BindingsGroup::*)()>(&::Unity::XR::CoreUtils::Bindings::BindingsGroup::Bind)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb3fd930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::BindingsGroup*>(),
                        {"Bind", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Bindings::BindingsGroup.Unbind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Bindings::BindingsGroup::*)()>(&::Unity::XR::CoreUtils::Bindings::BindingsGroup::Unbind)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb3fda38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::BindingsGroup*>(),
                        {"Unbind", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Bindings::BindingsGroup.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Bindings::BindingsGroup::*)()>(&::Unity::XR::CoreUtils::Bindings::BindingsGroup::Clear)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xb3fdb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::BindingsGroup*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Bindings::BindingsGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Bindings::BindingsGroup::*)()>(&::Unity::XR::CoreUtils::Bindings::BindingsGroup::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb3fdc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::BindingsGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::Bindings::IEventBinding*>*& Unity::XR::CoreUtils::Bindings::BindingsGroup::__cordl_internal_get_m_Bindings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Bindings;
}
constexpr ::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::Bindings::IEventBinding*>* const& Unity::XR::CoreUtils::Bindings::BindingsGroup::__cordl_internal_get_m_Bindings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Bindings;
}
constexpr void Unity::XR::CoreUtils::Bindings::BindingsGroup::__cordl_internal_set_m_Bindings(::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::Bindings::IEventBinding*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Bindings = value;
}
inline void Unity::XR::CoreUtils::Bindings::BindingsGroup::AddBinding(::Unity::XR::CoreUtils::Bindings::IEventBinding*  binding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::BindingsGroup*>(),
                        {"AddBinding", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binding);
}
inline void Unity::XR::CoreUtils::Bindings::BindingsGroup::ClearBinding(::Unity::XR::CoreUtils::Bindings::IEventBinding*  binding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::BindingsGroup*>(),
                        {"ClearBinding", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binding);
}
inline void Unity::XR::CoreUtils::Bindings::BindingsGroup::Bind()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::BindingsGroup*>(),
                        {"Bind", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::Bindings::BindingsGroup::Unbind()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::BindingsGroup*>(),
                        {"Unbind", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::Bindings::BindingsGroup::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::BindingsGroup*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::Bindings::BindingsGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::BindingsGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::Bindings::BindingsGroup* Unity::XR::CoreUtils::Bindings::BindingsGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Bindings::BindingsGroup*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup::BindingsGroup()   {
}
